/*


Testing ItemAttributeAPIService

*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech);

package openapi

import (
	"context"
	"github.com/stretchr/testify/assert"
	"github.com/stretchr/testify/require"
	"testing"
	openapiclient "github.com/oapicf/pokeapi-clients"
)

func Test_openapi_ItemAttributeAPIService(t *testing.T) {

	configuration := openapiclient.NewConfiguration()
	apiClient := openapiclient.NewAPIClient(configuration)

	t.Run("Test ItemAttributeAPIService ItemAttributeList", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		resp, httpRes, err := apiClient.ItemAttributeAPI.ItemAttributeList(context.Background()).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

	t.Run("Test ItemAttributeAPIService ItemAttributeRead", func(t *testing.T) {

		t.Skip("skip test")  // remove to run test

		var id int32

		resp, httpRes, err := apiClient.ItemAttributeAPI.ItemAttributeRead(context.Background(), id).Execute()

		require.Nil(t, err)
		require.NotNil(t, resp)
		assert.Equal(t, 200, httpRes.StatusCode)

	})

}
