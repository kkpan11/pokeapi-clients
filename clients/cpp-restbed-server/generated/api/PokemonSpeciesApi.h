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
 * PokemonSpeciesApi.h
 *
 * 
 */

#ifndef PokemonSpeciesApi_H_
#define PokemonSpeciesApi_H_


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
class  PokemonSpeciesApiException: public std::exception
{
public:
    PokemonSpeciesApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace PokemonSpeciesApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Pokemon_speciesResource: public restbed::Resource
{
public:
    ApiV2Pokemon_speciesResource(const std::string& context = "");
    virtual ~ApiV2Pokemon_speciesResource() = default;

    ApiV2Pokemon_speciesResource(
        const ApiV2Pokemon_speciesResource& other) = default; // copy constructor
    ApiV2Pokemon_speciesResource(ApiV2Pokemon_speciesResource&& other) noexcept = default; // move constructor

    ApiV2Pokemon_speciesResource& operator=(const ApiV2Pokemon_speciesResource& other) = default; // copy assignment
    ApiV2Pokemon_speciesResource& operator=(ApiV2Pokemon_speciesResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw PokemonSpeciesApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handlePokemonSpeciesApiException(const PokemonSpeciesApiException& e);
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
class  ApiV2Pokemon_speciesIdResource: public restbed::Resource
{
public:
    ApiV2Pokemon_speciesIdResource(const std::string& context = "");
    virtual ~ApiV2Pokemon_speciesIdResource() = default;

    ApiV2Pokemon_speciesIdResource(
        const ApiV2Pokemon_speciesIdResource& other) = default; // copy constructor
    ApiV2Pokemon_speciesIdResource(ApiV2Pokemon_speciesIdResource&& other) noexcept = default; // move constructor

    ApiV2Pokemon_speciesIdResource& operator=(const ApiV2Pokemon_speciesIdResource& other) = default; // copy assignment
    ApiV2Pokemon_speciesIdResource& operator=(ApiV2Pokemon_speciesIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw PokemonSpeciesApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handlePokemonSpeciesApiException(const PokemonSpeciesApiException& e);
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

} /* namespace PokemonSpeciesApiResources */

using PokemonSpeciesApiApiV2Pokemon_speciesResource [[deprecated]] = PokemonSpeciesApiResources::ApiV2Pokemon_speciesResource;
using PokemonSpeciesApiApiV2Pokemon_speciesIdResource [[deprecated]] = PokemonSpeciesApiResources::ApiV2Pokemon_speciesIdResource;

//
// The restbed service to actually implement the REST server
//
class  PokemonSpeciesApi
{
public:
    explicit PokemonSpeciesApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~PokemonSpeciesApi();

    std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesResource> getApiV2Pokemon_speciesResource();
    std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesIdResource> getApiV2Pokemon_speciesIdResource();

    void setResource(std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesResource> resource);
    void setResource(std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setPokemonSpeciesApiApiV2Pokemon_speciesResource(std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesResource> spPokemonSpeciesApiApiV2Pokemon_speciesResource);
    [[deprecated("use setResource()")]]
    virtual void setPokemonSpeciesApiApiV2Pokemon_speciesIdResource(std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesIdResource> spPokemonSpeciesApiApiV2Pokemon_speciesIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesResource> m_spApiV2Pokemon_speciesResource;
    std::shared_ptr<PokemonSpeciesApiResources::ApiV2Pokemon_speciesIdResource> m_spApiV2Pokemon_speciesIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* PokemonSpeciesApi_H_ */

