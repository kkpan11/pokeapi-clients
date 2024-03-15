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
 * NatureApi.h
 *
 * 
 */

#ifndef NatureApi_H_
#define NatureApi_H_


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
class  NatureApiException: public std::exception
{
public:
    NatureApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace NatureApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2NatureResource: public restbed::Resource
{
public:
    ApiV2NatureResource(const std::string& context = "");
    virtual ~ApiV2NatureResource() = default;

    ApiV2NatureResource(
        const ApiV2NatureResource& other) = default; // copy constructor
    ApiV2NatureResource(ApiV2NatureResource&& other) noexcept = default; // move constructor

    ApiV2NatureResource& operator=(const ApiV2NatureResource& other) = default; // copy assignment
    ApiV2NatureResource& operator=(ApiV2NatureResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw NatureApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleNatureApiException(const NatureApiException& e);
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
class  ApiV2NatureIdResource: public restbed::Resource
{
public:
    ApiV2NatureIdResource(const std::string& context = "");
    virtual ~ApiV2NatureIdResource() = default;

    ApiV2NatureIdResource(
        const ApiV2NatureIdResource& other) = default; // copy constructor
    ApiV2NatureIdResource(ApiV2NatureIdResource&& other) noexcept = default; // move constructor

    ApiV2NatureIdResource& operator=(const ApiV2NatureIdResource& other) = default; // copy assignment
    ApiV2NatureIdResource& operator=(ApiV2NatureIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw NatureApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleNatureApiException(const NatureApiException& e);
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

} /* namespace NatureApiResources */

using NatureApiApiV2NatureResource [[deprecated]] = NatureApiResources::ApiV2NatureResource;
using NatureApiApiV2NatureIdResource [[deprecated]] = NatureApiResources::ApiV2NatureIdResource;

//
// The restbed service to actually implement the REST server
//
class  NatureApi
{
public:
    explicit NatureApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~NatureApi();

    std::shared_ptr<NatureApiResources::ApiV2NatureResource> getApiV2NatureResource();
    std::shared_ptr<NatureApiResources::ApiV2NatureIdResource> getApiV2NatureIdResource();

    void setResource(std::shared_ptr<NatureApiResources::ApiV2NatureResource> resource);
    void setResource(std::shared_ptr<NatureApiResources::ApiV2NatureIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setNatureApiApiV2NatureResource(std::shared_ptr<NatureApiResources::ApiV2NatureResource> spNatureApiApiV2NatureResource);
    [[deprecated("use setResource()")]]
    virtual void setNatureApiApiV2NatureIdResource(std::shared_ptr<NatureApiResources::ApiV2NatureIdResource> spNatureApiApiV2NatureIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<NatureApiResources::ApiV2NatureResource> m_spApiV2NatureResource;
    std::shared_ptr<NatureApiResources::ApiV2NatureIdResource> m_spApiV2NatureIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* NatureApi_H_ */

