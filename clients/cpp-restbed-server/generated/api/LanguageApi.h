/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * LanguageApi.h
 *
 * 
 */

#ifndef LanguageApi_H_
#define LanguageApi_H_


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
class  LanguageApiException: public std::exception
{
public:
    LanguageApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace LanguageApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2LanguageResource: public restbed::Resource
{
public:
    ApiV2LanguageResource(const std::string& context = "");
    virtual ~ApiV2LanguageResource() = default;

    ApiV2LanguageResource(
        const ApiV2LanguageResource& other) = default; // copy constructor
    ApiV2LanguageResource(ApiV2LanguageResource&& other) noexcept = default; // move constructor

    ApiV2LanguageResource& operator=(const ApiV2LanguageResource& other) = default; // copy assignment
    ApiV2LanguageResource& operator=(ApiV2LanguageResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw LanguageApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleLanguageApiException(const LanguageApiException& e);
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
class  ApiV2LanguageIdResource: public restbed::Resource
{
public:
    ApiV2LanguageIdResource(const std::string& context = "");
    virtual ~ApiV2LanguageIdResource() = default;

    ApiV2LanguageIdResource(
        const ApiV2LanguageIdResource& other) = default; // copy constructor
    ApiV2LanguageIdResource(ApiV2LanguageIdResource&& other) noexcept = default; // move constructor

    ApiV2LanguageIdResource& operator=(const ApiV2LanguageIdResource& other) = default; // copy assignment
    ApiV2LanguageIdResource& operator=(ApiV2LanguageIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw LanguageApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleLanguageApiException(const LanguageApiException& e);
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

} /* namespace LanguageApiResources */

using LanguageApiApiV2LanguageResource [[deprecated]] = LanguageApiResources::ApiV2LanguageResource;
using LanguageApiApiV2LanguageIdResource [[deprecated]] = LanguageApiResources::ApiV2LanguageIdResource;

//
// The restbed service to actually implement the REST server
//
class  LanguageApi
{
public:
    explicit LanguageApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~LanguageApi();

    std::shared_ptr<LanguageApiResources::ApiV2LanguageResource> getApiV2LanguageResource();
    std::shared_ptr<LanguageApiResources::ApiV2LanguageIdResource> getApiV2LanguageIdResource();

    void setResource(std::shared_ptr<LanguageApiResources::ApiV2LanguageResource> resource);
    void setResource(std::shared_ptr<LanguageApiResources::ApiV2LanguageIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setLanguageApiApiV2LanguageResource(std::shared_ptr<LanguageApiResources::ApiV2LanguageResource> spLanguageApiApiV2LanguageResource);
    [[deprecated("use setResource()")]]
    virtual void setLanguageApiApiV2LanguageIdResource(std::shared_ptr<LanguageApiResources::ApiV2LanguageIdResource> spLanguageApiApiV2LanguageIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<LanguageApiResources::ApiV2LanguageResource> m_spApiV2LanguageResource;
    std::shared_ptr<LanguageApiResources::ApiV2LanguageIdResource> m_spApiV2LanguageIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* LanguageApi_H_ */

