package api

import play.api.libs.json._

@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-07-09T12:20:07.604437677Z[Etc/UTC]", comments = "Generator version: 7.6.0")
trait EvolutionChainApi {
  /**
    */
  def evolutionChainList(limit: Option[Int], offset: Option[Int]): String

  /**
    */
  def evolutionChainRead(id: Int): String
}
