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
	"context"
	"net/http"
	"errors"
)

// ItemAttributeAPIService is a service that implements the logic for the ItemAttributeAPIServicer
// This service should implement the business logic for every endpoint for the ItemAttributeAPI API.
// Include any external packages or services that will be required by this service.
type ItemAttributeAPIService struct {
}

// NewItemAttributeAPIService creates a default api service
func NewItemAttributeAPIService() ItemAttributeAPIServicer {
	return &ItemAttributeAPIService{}
}

// ItemAttributeList - 
func (s *ItemAttributeAPIService) ItemAttributeList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update ItemAttributeList with the required logic for this service method.
	// Add api_item_attribute_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ItemAttributeList method not implemented")
}

// ItemAttributeRead - 
func (s *ItemAttributeAPIService) ItemAttributeRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update ItemAttributeRead with the required logic for this service method.
	// Add api_item_attribute_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ItemAttributeRead method not implemented")
}
