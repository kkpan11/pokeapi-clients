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
	"github.com/gin-gonic/gin"
)

type ContestTypeAPI struct {
}

// Get /api/v2/contest-type/
func (api *ContestTypeAPI) ContestTypeList(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

// Get /api/v2/contest-type/:id/
func (api *ContestTypeAPI) ContestTypeRead(c *gin.Context) {
	// Your handler implementation
	c.JSON(200, gin.H{"status": "OK"})
}

