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
 * PokemonShapeApi.h
 *
 * 
 */

#ifndef PokemonShapeApi_H_
#define PokemonShapeApi_H_


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
class  PokemonShapeApiException: public std::exception
{
public:
    PokemonShapeApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace PokemonShapeApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Pokemon_shapeResource: public restbed::Resource
{
public:
    ApiV2Pokemon_shapeResource(const std::string& context = "");
    virtual ~ApiV2Pokemon_shapeResource() = default;

    ApiV2Pokemon_shapeResource(
        const ApiV2Pokemon_shapeResource& other) = default; // copy constructor
    ApiV2Pokemon_shapeResource(ApiV2Pokemon_shapeResource&& other) noexcept = default; // move constructor

    ApiV2Pokemon_shapeResource& operator=(const ApiV2Pokemon_shapeResource& other) = default; // copy assignment
    ApiV2Pokemon_shapeResource& operator=(ApiV2Pokemon_shapeResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw PokemonShapeApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handlePokemonShapeApiException(const PokemonShapeApiException& e);
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
class  ApiV2Pokemon_shapeIdResource: public restbed::Resource
{
public:
    ApiV2Pokemon_shapeIdResource(const std::string& context = "");
    virtual ~ApiV2Pokemon_shapeIdResource() = default;

    ApiV2Pokemon_shapeIdResource(
        const ApiV2Pokemon_shapeIdResource& other) = default; // copy constructor
    ApiV2Pokemon_shapeIdResource(ApiV2Pokemon_shapeIdResource&& other) noexcept = default; // move constructor

    ApiV2Pokemon_shapeIdResource& operator=(const ApiV2Pokemon_shapeIdResource& other) = default; // copy assignment
    ApiV2Pokemon_shapeIdResource& operator=(ApiV2Pokemon_shapeIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw PokemonShapeApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handlePokemonShapeApiException(const PokemonShapeApiException& e);
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

} /* namespace PokemonShapeApiResources */

using PokemonShapeApiApiV2Pokemon_shapeResource [[deprecated]] = PokemonShapeApiResources::ApiV2Pokemon_shapeResource;
using PokemonShapeApiApiV2Pokemon_shapeIdResource [[deprecated]] = PokemonShapeApiResources::ApiV2Pokemon_shapeIdResource;

//
// The restbed service to actually implement the REST server
//
class  PokemonShapeApi
{
public:
    explicit PokemonShapeApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~PokemonShapeApi();

    std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeResource> getApiV2Pokemon_shapeResource();
    std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeIdResource> getApiV2Pokemon_shapeIdResource();

    void setResource(std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeResource> resource);
    void setResource(std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setPokemonShapeApiApiV2Pokemon_shapeResource(std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeResource> spPokemonShapeApiApiV2Pokemon_shapeResource);
    [[deprecated("use setResource()")]]
    virtual void setPokemonShapeApiApiV2Pokemon_shapeIdResource(std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeIdResource> spPokemonShapeApiApiV2Pokemon_shapeIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeResource> m_spApiV2Pokemon_shapeResource;
    std::shared_ptr<PokemonShapeApiResources::ApiV2Pokemon_shapeIdResource> m_spApiV2Pokemon_shapeIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* PokemonShapeApi_H_ */

