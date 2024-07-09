/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
package org.openapitools.client.api

import org.openapitools.client.core.JsonSupport._
import sttp.client3._
import sttp.model.Method

object PokemonApi {
  def apply(baseUrl: String = "https://pokeapi.co") = new PokemonApi(baseUrl)
}

class PokemonApi(baseUrl: String) {

  /**
   * Expected answers:
   *   code 0 : String (Default response)
   * 
   * @param limit 
   * @param offset 
   */
  def pokemonList(limit: Option[Int] = None, offset: Option[Int] = None
): Request[Either[ResponseException[String, Exception], String], Any] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/api/v2/pokemon/?limit=${ limit }&offset=${ offset }")
      .contentType("application/json")
      .response(asJson[String])

  /**
   * Expected answers:
   *   code 0 : String (Default response)
   * 
   * @param id 
   */
  def pokemonRead(id: Int
): Request[Either[ResponseException[String, Exception], String], Any] =
    basicRequest
      .method(Method.GET, uri"$baseUrl/api/v2/pokemon/${id}/")
      .contentType("application/json")
      .response(asJson[String])

}
