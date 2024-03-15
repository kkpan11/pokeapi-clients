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

export interface GrowthRateListRequest {
    limit?: number;
    offset?: number;
}

export interface GrowthRateReadRequest {
    id: number;
}

/**
 * no description
 */
export class GrowthRateApi extends BaseAPI {

    /**
     */
    growthRateList({ limit, offset }: GrowthRateListRequest): Observable<string>
    growthRateList({ limit, offset }: GrowthRateListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    growthRateList({ limit, offset }: GrowthRateListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/growth-rate/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    growthRateRead({ id }: GrowthRateReadRequest): Observable<string>
    growthRateRead({ id }: GrowthRateReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    growthRateRead({ id }: GrowthRateReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'growthRateRead');

        return this.request<string>({
            url: '/api/v2/growth-rate/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
