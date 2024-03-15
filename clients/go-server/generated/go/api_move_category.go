/*
 * 
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 20220523
 * Contact: blah+oapicf@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

import (
	"encoding/json"
	"net/http"
	"strings"

	"github.com/gorilla/mux"
)

// MoveCategoryAPIController binds http requests to an api service and writes the service results to the http response
type MoveCategoryAPIController struct {
	service MoveCategoryAPIServicer
	errorHandler ErrorHandler
}

// MoveCategoryAPIOption for how the controller is set up.
type MoveCategoryAPIOption func(*MoveCategoryAPIController)

// WithMoveCategoryAPIErrorHandler inject ErrorHandler into controller
func WithMoveCategoryAPIErrorHandler(h ErrorHandler) MoveCategoryAPIOption {
	return func(c *MoveCategoryAPIController) {
		c.errorHandler = h
	}
}

// NewMoveCategoryAPIController creates a default api controller
func NewMoveCategoryAPIController(s MoveCategoryAPIServicer, opts ...MoveCategoryAPIOption) Router {
	controller := &MoveCategoryAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the MoveCategoryAPIController
func (c *MoveCategoryAPIController) Routes() Routes {
	return Routes{
		"MoveCategoryList": Route{
			strings.ToUpper("Get"),
			"/api/v2/move-category/",
			c.MoveCategoryList,
		},
		"MoveCategoryRead": Route{
			strings.ToUpper("Get"),
			"/api/v2/move-category/{id}/",
			c.MoveCategoryRead,
		},
	}
}

// MoveCategoryList - 
func (c *MoveCategoryAPIController) MoveCategoryList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.MoveCategoryList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// MoveCategoryRead - 
func (c *MoveCategoryAPIController) MoveCategoryRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseNumericParameter[int32](
		params["id"],
		WithRequire[int32](parseInt32),
	)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.MoveCategoryRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}
