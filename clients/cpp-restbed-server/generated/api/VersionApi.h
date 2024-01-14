/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.2.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * VersionApi.h
 *
 * 
 */

#ifndef VersionApi_H_
#define VersionApi_H_


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
class  VersionApiException: public std::exception
{
public:
    VersionApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace VersionApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2VersionResource: public restbed::Resource
{
public:
    ApiV2VersionResource(const std::string& context = "");
    virtual ~ApiV2VersionResource() = default;

    ApiV2VersionResource(
        const ApiV2VersionResource& other) = default; // copy constructor
    ApiV2VersionResource(ApiV2VersionResource&& other) noexcept = default; // move constructor

    ApiV2VersionResource& operator=(const ApiV2VersionResource& other) = default; // copy assignment
    ApiV2VersionResource& operator=(ApiV2VersionResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw VersionApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleVersionApiException(const VersionApiException& e);
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
class  ApiV2VersionIdResource: public restbed::Resource
{
public:
    ApiV2VersionIdResource(const std::string& context = "");
    virtual ~ApiV2VersionIdResource() = default;

    ApiV2VersionIdResource(
        const ApiV2VersionIdResource& other) = default; // copy constructor
    ApiV2VersionIdResource(ApiV2VersionIdResource&& other) noexcept = default; // move constructor

    ApiV2VersionIdResource& operator=(const ApiV2VersionIdResource& other) = default; // copy assignment
    ApiV2VersionIdResource& operator=(ApiV2VersionIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw VersionApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleVersionApiException(const VersionApiException& e);
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

} /* namespace VersionApiResources */

using VersionApiApiV2VersionResource [[deprecated]] = VersionApiResources::ApiV2VersionResource;
using VersionApiApiV2VersionIdResource [[deprecated]] = VersionApiResources::ApiV2VersionIdResource;

//
// The restbed service to actually implement the REST server
//
class  VersionApi
{
public:
    explicit VersionApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~VersionApi();

    std::shared_ptr<VersionApiResources::ApiV2VersionResource> getApiV2VersionResource();
    std::shared_ptr<VersionApiResources::ApiV2VersionIdResource> getApiV2VersionIdResource();

    void setResource(std::shared_ptr<VersionApiResources::ApiV2VersionResource> resource);
    void setResource(std::shared_ptr<VersionApiResources::ApiV2VersionIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setVersionApiApiV2VersionResource(std::shared_ptr<VersionApiResources::ApiV2VersionResource> spVersionApiApiV2VersionResource);
    [[deprecated("use setResource()")]]
    virtual void setVersionApiApiV2VersionIdResource(std::shared_ptr<VersionApiResources::ApiV2VersionIdResource> spVersionApiApiV2VersionIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<VersionApiResources::ApiV2VersionResource> m_spApiV2VersionResource;
    std::shared_ptr<VersionApiResources::ApiV2VersionIdResource> m_spApiV2VersionIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* VersionApi_H_ */

