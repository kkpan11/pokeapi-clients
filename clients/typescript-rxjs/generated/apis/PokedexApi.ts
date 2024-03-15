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

export interface PokedexListRequest {
    limit?: number;
    offset?: number;
}

export interface PokedexReadRequest {
    id: number;
}

/**
 * no description
 */
export class PokedexApi extends BaseAPI {

    /**
     */
    pokedexList({ limit, offset }: PokedexListRequest): Observable<string>
    pokedexList({ limit, offset }: PokedexListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokedexList({ limit, offset }: PokedexListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/pokedex/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    pokedexRead({ id }: PokedexReadRequest): Observable<string>
    pokedexRead({ id }: PokedexReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    pokedexRead({ id }: PokedexReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'pokedexRead');

        return this.request<string>({
            url: '/api/v2/pokedex/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
