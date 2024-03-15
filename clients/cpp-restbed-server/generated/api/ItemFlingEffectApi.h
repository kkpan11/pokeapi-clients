/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ItemFlingEffectApi.h
 *
 * 
 */

#ifndef ItemFlingEffectApi_H_
#define ItemFlingEffectApi_H_


#include <memory>
#include <utility>
#include <exception>
#include <functional>

#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/settings.hpp>

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

///
/// Exception to flag problems in the handlers
///
class  ItemFlingEffectApiException: public std::exception
{
public:
    ItemFlingEffectApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace ItemFlingEffectApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Item_fling_effectResource: public restbed::Resource
{
public:
    ApiV2Item_fling_effectResource(const std::string& context = "");
    virtual ~ApiV2Item_fling_effectResource() = default;

    ApiV2Item_fling_effectResource(
        const ApiV2Item_fling_effectResource& other) = default; // copy constructor
    ApiV2Item_fling_effectResource(ApiV2Item_fling_effectResource&& other) noexcept = default; // move constructor

    ApiV2Item_fling_effectResource& operator=(const ApiV2Item_fling_effectResource& other) = default; // copy assignment
    ApiV2Item_fling_effectResource& operator=(ApiV2Item_fling_effectResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw ItemFlingEffectApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::string> handler_GET(
        int32_t & limit, int32_t & offset);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handleItemFlingEffectApiException(const ItemFlingEffectApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Item_fling_effectIdResource: public restbed::Resource
{
public:
    ApiV2Item_fling_effectIdResource(const std::string& context = "");
    virtual ~ApiV2Item_fling_effectIdResource() = default;

    ApiV2Item_fling_effectIdResource(
        const ApiV2Item_fling_effectIdResource& other) = default; // copy constructor
    ApiV2Item_fling_effectIdResource(ApiV2Item_fling_effectIdResource&& other) noexcept = default; // move constructor

    ApiV2Item_fling_effectIdResource& operator=(const ApiV2Item_fling_effectIdResource& other) = default; // copy assignment
    ApiV2Item_fling_effectIdResource& operator=(ApiV2Item_fling_effectIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw ItemFlingEffectApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::string> handler_GET(
        int32_t & id);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handleItemFlingEffectApiException(const ItemFlingEffectApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};

} /* namespace ItemFlingEffectApiResources */

using ItemFlingEffectApiApiV2Item_fling_effectResource [[deprecated]] = ItemFlingEffectApiResources::ApiV2Item_fling_effectResource;
using ItemFlingEffectApiApiV2Item_fling_effectIdResource [[deprecated]] = ItemFlingEffectApiResources::ApiV2Item_fling_effectIdResource;

//
// The restbed service to actually implement the REST server
//
class  ItemFlingEffectApi
{
public:
    explicit ItemFlingEffectApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~ItemFlingEffectApi();

    std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectResource> getApiV2Item_fling_effectResource();
    std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectIdResource> getApiV2Item_fling_effectIdResource();

    void setResource(std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectResource> resource);
    void setResource(std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setItemFlingEffectApiApiV2Item_fling_effectResource(std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectResource> spItemFlingEffectApiApiV2Item_fling_effectResource);
    [[deprecated("use setResource()")]]
    virtual void setItemFlingEffectApiApiV2Item_fling_effectIdResource(std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectIdResource> spItemFlingEffectApiApiV2Item_fling_effectIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectResource> m_spApiV2Item_fling_effectResource;
    std::shared_ptr<ItemFlingEffectApiResources::ApiV2Item_fling_effectIdResource> m_spApiV2Item_fling_effectIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* ItemFlingEffectApi_H_ */

