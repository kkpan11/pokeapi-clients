package api

import play.api.libs.json._

@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-03-15T11:09:53.787967121Z[Etc/UTC]", comments = "Generator version: 7.4.0")
trait MoveApi {
  /**
    */
  def moveList(limit: Option[Int], offset: Option[Int]): String

  /**
    */
  def moveRead(id: Int): String
}
