/*
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.api;

import org.openapitools.client.ApiException;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 * API tests for ContestTypeApi
 */
@Ignore
public class ContestTypeApiTest {

    private final ContestTypeApi api = new ContestTypeApi();

    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void contestTypeListTest() throws ApiException {
        Integer limit = null;
        Integer offset = null;
                String response = api.contestTypeList(limit, offset);
        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws ApiException
     *          if the Api call fails
     */
    @Test
    public void contestTypeReadTest() throws ApiException {
        Integer id = null;
                String response = api.contestTypeRead(id);
        // TODO: test validations
    }
    
}