/*
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.api;

import io.micronaut.http.annotation.*;
import io.micronaut.core.annotation.*;
import io.micronaut.http.client.annotation.Client;
import io.micronaut.core.convert.format.Format;
import reactor.core.publisher.Mono;
import javax.annotation.Generated;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.validation.Valid;
import javax.validation.constraints.*;

@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-01-14T06:30:47.439744665Z[Etc/UTC]")
@Client("${openapi-micronaut-client-base-path}")
public interface PokemonHabitatApi {
    /**
     * pokemonHabitatList
     *
     * @param limit  (optional)
     * @param offset  (optional)
     * @return String
     */
    @Get(uri="/api/v2/pokemon-habitat/")
    @Consumes({"text/plain"})
    Mono<String> pokemonHabitatList(
        @QueryValue(value="limit") @Nullable Integer limit, 
        @QueryValue(value="offset") @Nullable Integer offset
    );

    /**
     * pokemonHabitatRead
     *
     * @param id  (required)
     * @return String
     */
    @Get(uri="/api/v2/pokemon-habitat/{id}/")
    @Consumes({"text/plain"})
    Mono<String> pokemonHabitatRead(
        @PathVariable(name="id") @NotNull Integer id
    );

}
