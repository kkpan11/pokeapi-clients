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

// TypeAPIController binds http requests to an api service and writes the service results to the http response
type TypeAPIController struct {
	service TypeAPIServicer
	errorHandler ErrorHandler
}

// TypeAPIOption for how the controller is set up.
type TypeAPIOption func(*TypeAPIController)

// WithTypeAPIErrorHandler inject ErrorHandler into controller
func WithTypeAPIErrorHandler(h ErrorHandler) TypeAPIOption {
	return func(c *TypeAPIController) {
		c.errorHandler = h
	}
}

// NewTypeAPIController creates a default api controller
func NewTypeAPIController(s TypeAPIServicer, opts ...TypeAPIOption) Router {
	controller := &TypeAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the TypeAPIController
func (c *TypeAPIController) Routes() Routes {
	return Routes{
		"TypeList": Route{
			strings.ToUpper("Get"),
			"/api/v2/type/",
			c.TypeList,
		},
		"TypeRead": Route{
			strings.ToUpper("Get"),
			"/api/v2/type/{id}/",
			c.TypeRead,
		},
	}
}

// TypeList - 
func (c *TypeAPIController) TypeList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.TypeList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// TypeRead - 
func (c *TypeAPIController) TypeRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseNumericParameter[int32](
		params["id"],
		WithRequire[int32](parseInt32),
	)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.TypeRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}
