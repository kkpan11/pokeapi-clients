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
 * GenerationApi.h
 *
 * 
 */

#ifndef GenerationApi_H_
#define GenerationApi_H_


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
class  GenerationApiException: public std::exception
{
public:
    GenerationApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace GenerationApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2GenerationResource: public restbed::Resource
{
public:
    ApiV2GenerationResource(const std::string& context = "");
    virtual ~ApiV2GenerationResource() = default;

    ApiV2GenerationResource(
        const ApiV2GenerationResource& other) = default; // copy constructor
    ApiV2GenerationResource(ApiV2GenerationResource&& other) noexcept = default; // move constructor

    ApiV2GenerationResource& operator=(const ApiV2GenerationResource& other) = default; // copy assignment
    ApiV2GenerationResource& operator=(ApiV2GenerationResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw GenerationApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleGenerationApiException(const GenerationApiException& e);
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
class  ApiV2GenerationIdResource: public restbed::Resource
{
public:
    ApiV2GenerationIdResource(const std::string& context = "");
    virtual ~ApiV2GenerationIdResource() = default;

    ApiV2GenerationIdResource(
        const ApiV2GenerationIdResource& other) = default; // copy constructor
    ApiV2GenerationIdResource(ApiV2GenerationIdResource&& other) noexcept = default; // move constructor

    ApiV2GenerationIdResource& operator=(const ApiV2GenerationIdResource& other) = default; // copy assignment
    ApiV2GenerationIdResource& operator=(ApiV2GenerationIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw GenerationApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleGenerationApiException(const GenerationApiException& e);
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

} /* namespace GenerationApiResources */

using GenerationApiApiV2GenerationResource [[deprecated]] = GenerationApiResources::ApiV2GenerationResource;
using GenerationApiApiV2GenerationIdResource [[deprecated]] = GenerationApiResources::ApiV2GenerationIdResource;

//
// The restbed service to actually implement the REST server
//
class  GenerationApi
{
public:
    explicit GenerationApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~GenerationApi();

    std::shared_ptr<GenerationApiResources::ApiV2GenerationResource> getApiV2GenerationResource();
    std::shared_ptr<GenerationApiResources::ApiV2GenerationIdResource> getApiV2GenerationIdResource();

    void setResource(std::shared_ptr<GenerationApiResources::ApiV2GenerationResource> resource);
    void setResource(std::shared_ptr<GenerationApiResources::ApiV2GenerationIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setGenerationApiApiV2GenerationResource(std::shared_ptr<GenerationApiResources::ApiV2GenerationResource> spGenerationApiApiV2GenerationResource);
    [[deprecated("use setResource()")]]
    virtual void setGenerationApiApiV2GenerationIdResource(std::shared_ptr<GenerationApiResources::ApiV2GenerationIdResource> spGenerationApiApiV2GenerationIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<GenerationApiResources::ApiV2GenerationResource> m_spApiV2GenerationResource;
    std::shared_ptr<GenerationApiResources::ApiV2GenerationIdResource> m_spApiV2GenerationIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* GenerationApi_H_ */

