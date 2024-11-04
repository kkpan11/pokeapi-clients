/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.9.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * GrowthRateApi.h
 *
 * 
 */

#ifndef GrowthRateApi_H_
#define GrowthRateApi_H_


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
class  GrowthRateApiException: public std::exception
{
public:
    GrowthRateApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace GrowthRateApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Growth_rateResource: public restbed::Resource
{
public:
    ApiV2Growth_rateResource(const std::string& context = "");
    virtual ~ApiV2Growth_rateResource() = default;

    ApiV2Growth_rateResource(
        const ApiV2Growth_rateResource& other) = default; // copy constructor
    ApiV2Growth_rateResource(ApiV2Growth_rateResource&& other) noexcept = default; // move constructor

    ApiV2Growth_rateResource& operator=(const ApiV2Growth_rateResource& other) = default; // copy assignment
    ApiV2Growth_rateResource& operator=(ApiV2Growth_rateResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw GrowthRateApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleGrowthRateApiException(const GrowthRateApiException& e);
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
class  ApiV2Growth_rateIdResource: public restbed::Resource
{
public:
    ApiV2Growth_rateIdResource(const std::string& context = "");
    virtual ~ApiV2Growth_rateIdResource() = default;

    ApiV2Growth_rateIdResource(
        const ApiV2Growth_rateIdResource& other) = default; // copy constructor
    ApiV2Growth_rateIdResource(ApiV2Growth_rateIdResource&& other) noexcept = default; // move constructor

    ApiV2Growth_rateIdResource& operator=(const ApiV2Growth_rateIdResource& other) = default; // copy assignment
    ApiV2Growth_rateIdResource& operator=(ApiV2Growth_rateIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw GrowthRateApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleGrowthRateApiException(const GrowthRateApiException& e);
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

} /* namespace GrowthRateApiResources */

using GrowthRateApiApiV2Growth_rateResource [[deprecated]] = GrowthRateApiResources::ApiV2Growth_rateResource;
using GrowthRateApiApiV2Growth_rateIdResource [[deprecated]] = GrowthRateApiResources::ApiV2Growth_rateIdResource;

//
// The restbed service to actually implement the REST server
//
class  GrowthRateApi
{
public:
    explicit GrowthRateApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~GrowthRateApi();

    std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateResource> getApiV2Growth_rateResource();
    std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateIdResource> getApiV2Growth_rateIdResource();

    void setResource(std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateResource> resource);
    void setResource(std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setGrowthRateApiApiV2Growth_rateResource(std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateResource> spGrowthRateApiApiV2Growth_rateResource);
    [[deprecated("use setResource()")]]
    virtual void setGrowthRateApiApiV2Growth_rateIdResource(std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateIdResource> spGrowthRateApiApiV2Growth_rateIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateResource> m_spApiV2Growth_rateResource;
    std::shared_ptr<GrowthRateApiResources::ApiV2Growth_rateIdResource> m_spApiV2Growth_rateIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* GrowthRateApi_H_ */

