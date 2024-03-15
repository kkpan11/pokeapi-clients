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

export interface MoveTargetListRequest {
    limit?: number;
    offset?: number;
}

export interface MoveTargetReadRequest {
    id: number;
}

/**
 * no description
 */
export class MoveTargetApi extends BaseAPI {

    /**
     */
    moveTargetList({ limit, offset }: MoveTargetListRequest): Observable<string>
    moveTargetList({ limit, offset }: MoveTargetListRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    moveTargetList({ limit, offset }: MoveTargetListRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {

        const query: HttpQuery = {};

        if (limit != null) { query['limit'] = limit; }
        if (offset != null) { query['offset'] = offset; }

        return this.request<string>({
            url: '/api/v2/move-target/',
            method: 'GET',
            query,
        }, opts?.responseOpts);
    };

    /**
     */
    moveTargetRead({ id }: MoveTargetReadRequest): Observable<string>
    moveTargetRead({ id }: MoveTargetReadRequest, opts?: OperationOpts): Observable<AjaxResponse<string>>
    moveTargetRead({ id }: MoveTargetReadRequest, opts?: OperationOpts): Observable<string | AjaxResponse<string>> {
        throwIfNullOrUndefined(id, 'id', 'moveTargetRead');

        return this.request<string>({
            url: '/api/v2/move-target/{id}/'.replace('{id}', encodeURI(id)),
            method: 'GET',
        }, opts?.responseOpts);
    };

}
