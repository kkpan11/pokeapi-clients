package api

import org.openapitools.OpenApiExceptions
import javax.inject.{Inject, Singleton}
import play.api.libs.json._
import play.api.mvc._

@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2024-07-09T12:20:07.604437677Z[Etc/UTC]", comments = "Generator version: 7.6.0")
@Singleton
class StatApiController @Inject()(cc: ControllerComponents, api: StatApi) extends AbstractController(cc) {
  /**
    * GET /api/v2/stat/?limit=[value]&offset=[value]
    */
  def statList(): Action[AnyContent] = Action { request =>
    def executeApi(): String = {
      val limit = request.getQueryString("limit")
        .map(value => value.toInt)
        
      val offset = request.getQueryString("offset")
        .map(value => value.toInt)
        
      api.statList(limit, offset)
    }

    val result = executeApi()
    val json = Json.toJson(result)
    Ok(json)
  }

  /**
    * GET /api/v2/stat/:id/
    */
  def statRead(id: Int): Action[AnyContent] = Action { request =>
    def executeApi(): String = {
      api.statRead(id)
    }

    val result = executeApi()
    val json = Json.toJson(result)
    Ok(json)
  }

  private def splitCollectionParam(paramValues: String, collectionFormat: String): List[String] = {
    val splitBy =
      collectionFormat match {
        case "csv" => ",+"
        case "tsv" => "\t+"
        case "ssv" => " +"
        case "pipes" => "|+"
      }

    paramValues.split(splitBy).toList
  }
}
