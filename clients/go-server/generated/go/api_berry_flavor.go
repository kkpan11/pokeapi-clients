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

// BerryFlavorAPIController binds http requests to an api service and writes the service results to the http response
type BerryFlavorAPIController struct {
	service BerryFlavorAPIServicer
	errorHandler ErrorHandler
}

// BerryFlavorAPIOption for how the controller is set up.
type BerryFlavorAPIOption func(*BerryFlavorAPIController)

// WithBerryFlavorAPIErrorHandler inject ErrorHandler into controller
func WithBerryFlavorAPIErrorHandler(h ErrorHandler) BerryFlavorAPIOption {
	return func(c *BerryFlavorAPIController) {
		c.errorHandler = h
	}
}

// NewBerryFlavorAPIController creates a default api controller
func NewBerryFlavorAPIController(s BerryFlavorAPIServicer, opts ...BerryFlavorAPIOption) Router {
	controller := &BerryFlavorAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the BerryFlavorAPIController
func (c *BerryFlavorAPIController) Routes() Routes {
	return Routes{
		"BerryFlavorList": Route{
			strings.ToUpper("Get"),
			"/api/v2/berry-flavor/",
			c.BerryFlavorList,
		},
		"BerryFlavorRead": Route{
			strings.ToUpper("Get"),
			"/api/v2/berry-flavor/{id}/",
			c.BerryFlavorRead,
		},
	}
}

// BerryFlavorList - 
func (c *BerryFlavorAPIController) BerryFlavorList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.BerryFlavorList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// BerryFlavorRead - 
func (c *BerryFlavorAPIController) BerryFlavorRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseNumericParameter[int32](
		params["id"],
		WithRequire[int32](parseInt32),
	)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.BerryFlavorRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}
