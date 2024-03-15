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
 * ItemAttributeApi.h
 *
 * 
 */

#ifndef ItemAttributeApi_H_
#define ItemAttributeApi_H_


#include "ApiBase.h"

#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <nlohmann/json.hpp>
#include <optional>
#include <utility>

#include <string>

namespace org::openapitools::server::api
{

class  ItemAttributeApi : public ApiBase {
public:
    explicit ItemAttributeApi(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~ItemAttributeApi() override = default;
    void init() override;

    static const std::string base;

private:
    void setupRoutes();

    void item_attribute_list_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void item_attribute_read_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void item_attribute_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    /// <summary>
    /// Helper function to handle unexpected Exceptions during Parameter parsing and validation.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleParsingException(const std::exception& ex) const noexcept;

    /// <summary>
    /// Helper function to handle unexpected Exceptions during processing of the request in handler functions.
    /// May be overridden to return custom error formats. This is called inside a catch block.
    /// Important: When overriding, do not call `throw ex;`, but instead use `throw;`.
    /// </summary>
    virtual std::pair<Pistache::Http::Code, std::string> handleOperationException(const std::exception& ex) const noexcept;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="limit"> (optional, default to 0)</param>
    /// <param name="offset"> (optional, default to 0)</param>
    virtual void item_attribute_list(const std::optional<int32_t> &limit, const std::optional<int32_t> &offset, Pistache::Http::ResponseWriter &response) = 0;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    virtual void item_attribute_read(const int32_t &id, Pistache::Http::ResponseWriter &response) = 0;

};

} // namespace org::openapitools::server::api

#endif /* ItemAttributeApi_H_ */

