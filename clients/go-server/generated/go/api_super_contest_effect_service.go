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
	"context"
	"net/http"
	"errors"
)

// SuperContestEffectAPIService is a service that implements the logic for the SuperContestEffectAPIServicer
// This service should implement the business logic for every endpoint for the SuperContestEffectAPI API.
// Include any external packages or services that will be required by this service.
type SuperContestEffectAPIService struct {
}

// NewSuperContestEffectAPIService creates a default api service
func NewSuperContestEffectAPIService() *SuperContestEffectAPIService {
	return &SuperContestEffectAPIService{}
}

// SuperContestEffectList - 
func (s *SuperContestEffectAPIService) SuperContestEffectList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update SuperContestEffectList with the required logic for this service method.
	// Add api_super_contest_effect_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("SuperContestEffectList method not implemented")
}

// SuperContestEffectRead - 
func (s *SuperContestEffectAPIService) SuperContestEffectRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update SuperContestEffectRead with the required logic for this service method.
	// Add api_super_contest_effect_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("SuperContestEffectRead method not implemented")
}
