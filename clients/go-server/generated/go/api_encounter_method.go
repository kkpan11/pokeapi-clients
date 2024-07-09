// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

/*
 * 
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 20220523
 * Contact: blah+oapicf@cliffano.com
 */

package openapi

import (
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// EncounterMethodAPIController binds http requests to an api service and writes the service results to the http response
type EncounterMethodAPIController struct {
	service EncounterMethodAPIServicer
	errorHandler ErrorHandler
}

// EncounterMethodAPIOption for how the controller is set up.
type EncounterMethodAPIOption func(*EncounterMethodAPIController)

// WithEncounterMethodAPIErrorHandler inject ErrorHandler into controller
func WithEncounterMethodAPIErrorHandler(h ErrorHandler) EncounterMethodAPIOption {
	return func(c *EncounterMethodAPIController) {
		c.errorHandler = h
	}
}

// NewEncounterMethodAPIController creates a default api controller
func NewEncounterMethodAPIController(s EncounterMethodAPIServicer, opts ...EncounterMethodAPIOption) *EncounterMethodAPIController {
	controller := &EncounterMethodAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the EncounterMethodAPIController
func (c *EncounterMethodAPIController) Routes() Routes {
	return Routes{
		"EncounterMethodList": Route{
			strings.ToUpper("Get"),
			"/api/v2/encounter-method/",
			c.EncounterMethodList,
		},
		"EncounterMethodRead": Route{
			strings.ToUpper("Get"),
			"/api/v2/encounter-method/{id}/",
			c.EncounterMethodRead,
		},
	}
}

// EncounterMethodList - 
func (c *EncounterMethodAPIController) EncounterMethodList(w http.ResponseWriter, r *http.Request) {
	query, err := parseQuery(r.URL.RawQuery)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	var limitParam int32
	if query.Has("limit") {
		param, err := parseNumericParameter[int32](
			query.Get("limit"),
			WithParse[int32](parseInt32),
		)
		if err != nil {
			c.errorHandler(w, r, &ParsingError{Param: "limit", Err: err}, nil)
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
			c.errorHandler(w, r, &ParsingError{Param: "offset", Err: err}, nil)
			return
		}

		offsetParam = param
	} else {
	}
	result, err := c.service.EncounterMethodList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	_ = EncodeJSONResponse(result.Body, &result.Code, w)
}

// EncounterMethodRead - 
func (c *EncounterMethodAPIController) EncounterMethodRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseNumericParameter[int32](
		params["id"],
		WithRequire[int32](parseInt32),
	)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Param: "id", Err: err}, nil)
		return
	}
	result, err := c.service.EncounterMethodRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	_ = EncodeJSONResponse(result.Body, &result.Code, w)
}
