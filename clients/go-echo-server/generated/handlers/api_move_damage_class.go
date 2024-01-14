package handlers
import (
	"github.com/GIT_USER_ID/GIT_REPO_ID/models"
	"github.com/labstack/echo/v4"
	"net/http"
)

// MoveDamageClassList - 
func (c *Container) MoveDamageClassList(ctx echo.Context) error {
	return ctx.JSON(http.StatusOK, models.HelloWorld {
		Message: "Hello World",
	})
}


// MoveDamageClassRead - 
func (c *Container) MoveDamageClassRead(ctx echo.Context) error {
	return ctx.JSON(http.StatusOK, models.HelloWorld {
		Message: "Hello World",
	})
}

