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

export interface ItemPocketListRequest {
    limit?: number;
    offset?: number;
}

export interface ItemPocketReadRequest {
    id: number;
}

/**
 * no description
 */
export class ItemPocketApi extends BaseAPI {

    /**
     */
    itemPocketList({ limit, offset }: ItemPocketListRequest): Observable<string>
    itemPocketList({ limit, offset }: ItemPocketListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    itemPocketList({ limit, offset }: ItemPocketListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/item-pocket/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    itemPocketRead({ id }: ItemPocketReadRequest): Observable<string>
    itemPocketRead({ id }: ItemPocketReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    itemPocketRead({ id }: ItemPocketReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'itemPocketRead');

        return this.request<string>({
            url: '/api/v2/item-pocket/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
