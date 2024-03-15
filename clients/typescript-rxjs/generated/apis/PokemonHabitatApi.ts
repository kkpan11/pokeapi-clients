// tslint:disable
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

import type { Observable } from 'rxjs';
import type { AjaxResponse } from 'rxjs/ajax';
import { BaseAPI, throwIfNullOrUndefined, encodeURI } from '../runtime';
import type { OperationOpts, HttpQuery } from '../runtime';

export interface PokemonHabitatListRequest {
    limit?: number;
    offset?: number;
}

export interface PokemonHabitatReadRequest {
    id: number;
}

/**
 * no description
 */
export class PokemonHabitatApi extends BaseAPI {

    /**
     */
    pokemonHabitatList({ limit, offset }: PokemonHabitatListRequest): Observable<string>
    pokemonHabitatList({ limit, offset }: PokemonHabitatListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokemonHabitatList({ limit, offset }: PokemonHabitatListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/pokemon-habitat/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    pokemonHabitatRead({ id }: PokemonHabitatReadRequest): Observable<string>
    pokemonHabitatRead({ id }: PokemonHabitatReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokemonHabitatRead({ id }: PokemonHabitatReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'pokemonHabitatRead');

        return this.request<string>({
            url: '/api/v2/pokemon-habitat/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
