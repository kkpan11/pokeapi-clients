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

export interface VersionListRequest {
    limit?: number;
    offset?: number;
}

export interface VersionReadRequest {
    id: number;
}

/**
 * no description
 */
export class VersionApi extends BaseAPI {

    /**
     */
    versionList({ limit, offset }: VersionListRequest): Observable<string>
    versionList({ limit, offset }: VersionListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    versionList({ limit, offset }: VersionListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/version/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    versionRead({ id }: VersionReadRequest): Observable<string>
    versionRead({ id }: VersionReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    versionRead({ id }: VersionReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'versionRead');

        return this.request<string>({
            url: '/api/v2/version/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
