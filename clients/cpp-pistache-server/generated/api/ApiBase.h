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
/*
 * ApiBase.h
 *
 * Generalization of the Api classes
 */

#ifndef ApiBase_H_
#define ApiBase_H_

#include <pistache/router.h>
#include <memory>

namespace org::openapitools::server::api
{

class ApiBase {
public:
    explicit ApiBase(const std::shared_ptr<Pistache::Rest::Router>& rtr) : router(rtr) {};
    virtual ~ApiBase() = default;
    virtual void init() = 0;

protected:
    const std::shared_ptr<Pistache::Rest::Router> router;
};

} // namespace org::openapitools::server::api

#endif /* ApiBase_H_ */
