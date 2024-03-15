/*
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

@Generated(value="org.openapitools.codegen.languages.JavaMicronautClientCodegen", date="2024-03-15T11:05:28.339975145Z[Etc/UTC]", comments = "Generator version: 7.4.0")
@Client("${openapi-micronaut-client-base-path}")
public interface BerryFlavorApi {
    /**
     * berryFlavorList
     *
     * @param limit  (optional)
     * @param offset  (optional)
     * @return String
     */
    @Get(uri="/api/v2/berry-flavor/")
    @Consumes({"text/plain"})
    Mono<String> berryFlavorList(
        @QueryValue(value="limit") @Nullable Integer limit, 
        @QueryValue(value="offset") @Nullable Integer offset
    );

    /**
     * berryFlavorRead
     *
     * @param id  (required)
     * @return String
     */
    @Get(uri="/api/v2/berry-flavor/{id}/")
    @Consumes({"text/plain"})
    Mono<String> berryFlavorRead(
        @PathVariable(name="id") @NotNull Integer id
    );

}
