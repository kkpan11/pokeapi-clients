/*
 * 
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 20220523
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// GenderAPIController binds http requests to an api service and writes the service results to the http response
type GenderAPIController struct {
	service GenderAPIServicer
	errorHandler ErrorHandler
}

// GenderAPIOption for how the controller is set up.
type GenderAPIOption func(*GenderAPIController)

// WithGenderAPIErrorHandler inject ErrorHandler into controller
func WithGenderAPIErrorHandler(h ErrorHandler) GenderAPIOption {
	return func(c *GenderAPIController) {
		c.errorHandler = h
	}
}

// NewGenderAPIController creates a default api controller
func NewGenderAPIController(s GenderAPIServicer, opts ...GenderAPIOption) Router {
	controller := &GenderAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the GenderAPIController
func (c *GenderAPIController) Routes() Routes {
	return Routes{
		"GenderList": Route{
			strings.ToUpper("Get"),
			"/api/v2/gender/",
			c.GenderList,
		},
		"GenderRead": Route{
			strings.ToUpper("Get"),
			"/api/v2/gender/{id}/",
			c.GenderRead,
		},
	}
}

// GenderList - 
func (c *GenderAPIController) GenderList(w http.ResponseWriter, r *http.Request) {
	query := r.URL.Query()
	var limitParam int32
	if query.Has("limit") {
		param, err := parseNumericParameter[int32](
			query.Get("limit"),
			WithParse[int32](parseInt32),
		)
		if err != nil {
			c.errorHandler(w, r, &ParsingError{Err: err}, nil)
			return
		}

		limitParam = param
	} else {
	}
	var offsetParam int32
	if query.Has("offset") {
		param, err := parseNumericParameter[int32](
			query.Get("offset"),
			WithParse[int32](parseInt32),
		)
		if err != nil {
			c.errorHandler(w, r, &ParsingError{Err: err}, nil)
			return
		}

		offsetParam = param
	} else {
	}
	result, err := c.service.GenderList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// GenderRead - 
func (c *GenderAPIController) GenderRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseNumericParameter[int32](
		params["id"],
		WithRequire[int32](parseInt32),
	)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.GenderRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}
