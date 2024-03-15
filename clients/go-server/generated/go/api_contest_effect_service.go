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

// ContestEffectAPIService is a service that implements the logic for the ContestEffectAPIServicer
// This service should implement the business logic for every endpoint for the ContestEffectAPI API.
// Include any external packages or services that will be required by this service.
type ContestEffectAPIService struct {
}

// NewContestEffectAPIService creates a default api service
func NewContestEffectAPIService() ContestEffectAPIServicer {
	return &ContestEffectAPIService{}
}

// ContestEffectList - 
func (s *ContestEffectAPIService) ContestEffectList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update ContestEffectList with the required logic for this service method.
	// Add api_contest_effect_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ContestEffectList method not implemented")
}

// ContestEffectRead - 
func (s *ContestEffectAPIService) ContestEffectRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update ContestEffectRead with the required logic for this service method.
	// Add api_contest_effect_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("ContestEffectRead method not implemented")
}
