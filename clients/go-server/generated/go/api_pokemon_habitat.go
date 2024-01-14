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

// PokemonHabitatAPIController binds http requests to an api service and writes the service results to the http response
type PokemonHabitatAPIController struct {
	service PokemonHabitatAPIServicer
	errorHandler ErrorHandler
}

// PokemonHabitatAPIOption for how the controller is set up.
type PokemonHabitatAPIOption func(*PokemonHabitatAPIController)

// WithPokemonHabitatAPIErrorHandler inject ErrorHandler into controller
func WithPokemonHabitatAPIErrorHandler(h ErrorHandler) PokemonHabitatAPIOption {
	return func(c *PokemonHabitatAPIController) {
		c.errorHandler = h
	}
}

// NewPokemonHabitatAPIController creates a default api controller
func NewPokemonHabitatAPIController(s PokemonHabitatAPIServicer, opts ...PokemonHabitatAPIOption) Router {
	controller := &PokemonHabitatAPIController{
		service:      s,
		errorHandler: DefaultErrorHandler,
	}

	for _, opt := range opts {
		opt(controller)
	}

	return controller
}

// Routes returns all the api routes for the PokemonHabitatAPIController
func (c *PokemonHabitatAPIController) Routes() Routes {
	return Routes{
		"PokemonHabitatList": Route{
			strings.ToUpper("Get"),
			"/api/v2/pokemon-habitat/",
			c.PokemonHabitatList,
		},
		"PokemonHabitatRead": Route{
			strings.ToUpper("Get"),
			"/api/v2/pokemon-habitat/{id}/",
			c.PokemonHabitatRead,
		},
	}
}

// PokemonHabitatList - 
func (c *PokemonHabitatAPIController) PokemonHabitatList(w http.ResponseWriter, r *http.Request) {
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
	result, err := c.service.PokemonHabitatList(r.Context(), limitParam, offsetParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}

// PokemonHabitatRead - 
func (c *PokemonHabitatAPIController) PokemonHabitatRead(w http.ResponseWriter, r *http.Request) {
	params := mux.Vars(r)
	idParam, err := parseNumericParameter[int32](
		params["id"],
		WithRequire[int32](parseInt32),
	)
	if err != nil {
		c.errorHandler(w, r, &ParsingError{Err: err}, nil)
		return
	}
	result, err := c.service.PokemonHabitatRead(r.Context(), idParam)
	// If an error occurred, encode the error with the status code
	if err != nil {
		c.errorHandler(w, r, err, &result)
		return
	}
	// If no error, encode the body and the result code
	EncodeJSONResponse(result.Body, &result.Code, w)
}
