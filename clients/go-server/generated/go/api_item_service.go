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
	"context"
	"net/http"
	"errors"
)

// ItemAPIService is a service that implements the logic for the ItemAPIServicer
// This service should implement the business logic for every endpoint for the ItemAPI API.
// Include any external packages or services that will be required by this service.
type ItemAPIService struct {
}

// NewItemAPIService creates a default api service
func NewItemAPIService() ItemAPIServicer {
	return &ItemAPIService{}
}

// ItemList - 
func (s *ItemAPIService) ItemList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update ItemList with the required logic for this service method.
	// Add api_item_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ItemList method not implemented")
}

// ItemRead - 
func (s *ItemAPIService) ItemRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update ItemRead with the required logic for this service method.
	// Add api_item_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ItemRead method not implemented")
}
