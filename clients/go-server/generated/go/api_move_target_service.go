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

// MoveTargetAPIService is a service that implements the logic for the MoveTargetAPIServicer
// This service should implement the business logic for every endpoint for the MoveTargetAPI API.
// Include any external packages or services that will be required by this service.
type MoveTargetAPIService struct {
}

// NewMoveTargetAPIService creates a default api service
func NewMoveTargetAPIService() MoveTargetAPIServicer {
	return &MoveTargetAPIService{}
}

// MoveTargetList - 
func (s *MoveTargetAPIService) MoveTargetList(ctx context.Context, limit int32, offset int32) (ImplResponse, error) {
	// TODO - update MoveTargetList with the required logic for this service method.
	// Add api_move_target_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("MoveTargetList method not implemented")
}

// MoveTargetRead - 
func (s *MoveTargetAPIService) MoveTargetRead(ctx context.Context, id int32) (ImplResponse, error) {
	// TODO - update MoveTargetRead with the required logic for this service method.
	// Add api_move_target_service.go to the .openapi-generator-ignore to avoid overwriting this service implementation when updating open api generation.

	// TODO: Uncomment the next line to return response Response(0, string{}) or use other options such as http.Ok ...
	// return Response(0, string{}), nil

	return Response(http.StatusNotImplemented, nil), errors.New("MoveTargetRead method not implemented")
}
