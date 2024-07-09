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

// EggGroupAPIController binds http requests to an api service and writes the service results to the http response
type EggGroupAPIController struct {
	service EggGroupAPIServicer
	errorHandler ErrorHandler
}

// EggGroupAPIOption for how the controller is set up.
type EggGroupAPIOption func(*EggGroupAPIController)

// WithEggGroupAPIErrorHandler inject ErrorHandler into controller
func WithEggGroupAPIErrorHandler(h ErrorHandler) EggGroupAPIOption {
	return func(c *EggGroupAPIController) {
		c.errorHandler = h
	}
}

// NewEggGroupAPIController creates a default api controller
func NewEggGroupAPIController(s EggGroupAPIServicer, opts ...EggGroupAPIOption) *EggGroupAPIController {
	controller := &EggGroupAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the EggGroupAPIController
func (c *EggGroupAPIController) Routes() Routes {
	return Routes{
		"EggGroupList": Route{
			strings.ToUpper("Get"),
			"/api/v2/egg-group/",
			c.EggGroupList,
		},
		"EggGroupRead": Route{
			strings.ToUpper("Get"),
			"/api/v2/egg-group/{id}/",
			c.EggGroupRead,
		},
	}
}

// EggGroupList - 
func (c *EggGroupAPIController) EggGroupList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.EggGroupList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	_ = EncodeJSONResponse(result.Body, &result.Code, w)
}

// EggGroupRead - 
func (c *EggGroupAPIController) EggGroupRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseNumericParameter[int32](
		params["id"],
		WithRequire[int32](parseInt32),
	)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Param: "id", Err: err}, nil)
		return
	}
	result, err := c.service.EggGroupRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	_ = EncodeJSONResponse(result.Body, &result.Code, w)
}
