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

export interface PokemonSpeciesListRequest {
    limit?: number;
    offset?: number;
}

export interface PokemonSpeciesReadRequest {
    id: number;
}

/**
 * no description
 */
export class PokemonSpeciesApi extends BaseAPI {

    /**
     */
    pokemonSpeciesList({ limit, offset }: PokemonSpeciesListRequest): Observable<string>
    pokemonSpeciesList({ limit, offset }: PokemonSpeciesListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokemonSpeciesList({ limit, offset }: PokemonSpeciesListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/pokemon-species/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    pokemonSpeciesRead({ id }: PokemonSpeciesReadRequest): Observable<string>
    pokemonSpeciesRead({ id }: PokemonSpeciesReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokemonSpeciesRead({ id }: PokemonSpeciesReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'pokemonSpeciesRead');

        return this.request<string>({
            url: '/api/v2/pokemon-species/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
