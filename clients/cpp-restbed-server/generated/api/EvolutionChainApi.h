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
 * EvolutionChainApi.h
 *
 * 
 */

#ifndef EvolutionChainApi_H_
#define EvolutionChainApi_H_


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
class  EvolutionChainApiException: public std::exception
{
public:
    EvolutionChainApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace EvolutionChainApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Evolution_chainResource: public restbed::Resource
{
public:
    ApiV2Evolution_chainResource(const std::string& context = "");
    virtual ~ApiV2Evolution_chainResource() = default;

    ApiV2Evolution_chainResource(
        const ApiV2Evolution_chainResource& other) = default; // copy constructor
    ApiV2Evolution_chainResource(ApiV2Evolution_chainResource&& other) noexcept = default; // move constructor

    ApiV2Evolution_chainResource& operator=(const ApiV2Evolution_chainResource& other) = default; // copy assignment
    ApiV2Evolution_chainResource& operator=(ApiV2Evolution_chainResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw EvolutionChainApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleEvolutionChainApiException(const EvolutionChainApiException& e);
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
class  ApiV2Evolution_chainIdResource: public restbed::Resource
{
public:
    ApiV2Evolution_chainIdResource(const std::string& context = "");
    virtual ~ApiV2Evolution_chainIdResource() = default;

    ApiV2Evolution_chainIdResource(
        const ApiV2Evolution_chainIdResource& other) = default; // copy constructor
    ApiV2Evolution_chainIdResource(ApiV2Evolution_chainIdResource&& other) noexcept = default; // move constructor

    ApiV2Evolution_chainIdResource& operator=(const ApiV2Evolution_chainIdResource& other) = default; // copy assignment
    ApiV2Evolution_chainIdResource& operator=(ApiV2Evolution_chainIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw EvolutionChainApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleEvolutionChainApiException(const EvolutionChainApiException& e);
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

} /* namespace EvolutionChainApiResources */

using EvolutionChainApiApiV2Evolution_chainResource [[deprecated]] = EvolutionChainApiResources::ApiV2Evolution_chainResource;
using EvolutionChainApiApiV2Evolution_chainIdResource [[deprecated]] = EvolutionChainApiResources::ApiV2Evolution_chainIdResource;

//
// The restbed service to actually implement the REST server
//
class  EvolutionChainApi
{
public:
    explicit EvolutionChainApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~EvolutionChainApi();

    std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainResource> getApiV2Evolution_chainResource();
    std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainIdResource> getApiV2Evolution_chainIdResource();

    void setResource(std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainResource> resource);
    void setResource(std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setEvolutionChainApiApiV2Evolution_chainResource(std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainResource> spEvolutionChainApiApiV2Evolution_chainResource);
    [[deprecated("use setResource()")]]
    virtual void setEvolutionChainApiApiV2Evolution_chainIdResource(std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainIdResource> spEvolutionChainApiApiV2Evolution_chainIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainResource> m_spApiV2Evolution_chainResource;
    std::shared_ptr<EvolutionChainApiResources::ApiV2Evolution_chainIdResource> m_spApiV2Evolution_chainIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* EvolutionChainApi_H_ */

