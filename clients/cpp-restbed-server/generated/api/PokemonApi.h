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
 * PokemonApi.h
 *
 * 
 */

#ifndef PokemonApi_H_
#define PokemonApi_H_


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
class  PokemonApiException: public std::exception
{
public:
    PokemonApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace PokemonApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2PokemonResource: public restbed::Resource
{
public:
    ApiV2PokemonResource(const std::string& context = "");
    virtual ~ApiV2PokemonResource() = default;

    ApiV2PokemonResource(
        const ApiV2PokemonResource& other) = default; // copy constructor
    ApiV2PokemonResource(ApiV2PokemonResource&& other) noexcept = default; // move constructor

    ApiV2PokemonResource& operator=(const ApiV2PokemonResource& other) = default; // copy assignment
    ApiV2PokemonResource& operator=(ApiV2PokemonResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw PokemonApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handlePokemonApiException(const PokemonApiException& e);
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
class  ApiV2PokemonIdResource: public restbed::Resource
{
public:
    ApiV2PokemonIdResource(const std::string& context = "");
    virtual ~ApiV2PokemonIdResource() = default;

    ApiV2PokemonIdResource(
        const ApiV2PokemonIdResource& other) = default; // copy constructor
    ApiV2PokemonIdResource(ApiV2PokemonIdResource&& other) noexcept = default; // move constructor

    ApiV2PokemonIdResource& operator=(const ApiV2PokemonIdResource& other) = default; // copy assignment
    ApiV2PokemonIdResource& operator=(ApiV2PokemonIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw PokemonApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handlePokemonApiException(const PokemonApiException& e);
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

} /* namespace PokemonApiResources */

using PokemonApiApiV2PokemonResource [[deprecated]] = PokemonApiResources::ApiV2PokemonResource;
using PokemonApiApiV2PokemonIdResource [[deprecated]] = PokemonApiResources::ApiV2PokemonIdResource;

//
// The restbed service to actually implement the REST server
//
class  PokemonApi
{
public:
    explicit PokemonApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~PokemonApi();

    std::shared_ptr<PokemonApiResources::ApiV2PokemonResource> getApiV2PokemonResource();
    std::shared_ptr<PokemonApiResources::ApiV2PokemonIdResource> getApiV2PokemonIdResource();

    void setResource(std::shared_ptr<PokemonApiResources::ApiV2PokemonResource> resource);
    void setResource(std::shared_ptr<PokemonApiResources::ApiV2PokemonIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setPokemonApiApiV2PokemonResource(std::shared_ptr<PokemonApiResources::ApiV2PokemonResource> spPokemonApiApiV2PokemonResource);
    [[deprecated("use setResource()")]]
    virtual void setPokemonApiApiV2PokemonIdResource(std::shared_ptr<PokemonApiResources::ApiV2PokemonIdResource> spPokemonApiApiV2PokemonIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<PokemonApiResources::ApiV2PokemonResource> m_spApiV2PokemonResource;
    std::shared_ptr<PokemonApiResources::ApiV2PokemonIdResource> m_spApiV2PokemonIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* PokemonApi_H_ */

