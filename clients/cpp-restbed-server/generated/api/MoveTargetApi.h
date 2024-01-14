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
 * MoveTargetApi.h
 *
 * 
 */

#ifndef MoveTargetApi_H_
#define MoveTargetApi_H_


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
class  MoveTargetApiException: public std::exception
{
public:
    MoveTargetApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace MoveTargetApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Move_targetResource: public restbed::Resource
{
public:
    ApiV2Move_targetResource(const std::string& context = "");
    virtual ~ApiV2Move_targetResource() = default;

    ApiV2Move_targetResource(
        const ApiV2Move_targetResource& other) = default; // copy constructor
    ApiV2Move_targetResource(ApiV2Move_targetResource&& other) noexcept = default; // move constructor

    ApiV2Move_targetResource& operator=(const ApiV2Move_targetResource& other) = default; // copy assignment
    ApiV2Move_targetResource& operator=(ApiV2Move_targetResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw MoveTargetApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleMoveTargetApiException(const MoveTargetApiException& e);
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
class  ApiV2Move_targetIdResource: public restbed::Resource
{
public:
    ApiV2Move_targetIdResource(const std::string& context = "");
    virtual ~ApiV2Move_targetIdResource() = default;

    ApiV2Move_targetIdResource(
        const ApiV2Move_targetIdResource& other) = default; // copy constructor
    ApiV2Move_targetIdResource(ApiV2Move_targetIdResource&& other) noexcept = default; // move constructor

    ApiV2Move_targetIdResource& operator=(const ApiV2Move_targetIdResource& other) = default; // copy assignment
    ApiV2Move_targetIdResource& operator=(ApiV2Move_targetIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw MoveTargetApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleMoveTargetApiException(const MoveTargetApiException& e);
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

} /* namespace MoveTargetApiResources */

using MoveTargetApiApiV2Move_targetResource [[deprecated]] = MoveTargetApiResources::ApiV2Move_targetResource;
using MoveTargetApiApiV2Move_targetIdResource [[deprecated]] = MoveTargetApiResources::ApiV2Move_targetIdResource;

//
// The restbed service to actually implement the REST server
//
class  MoveTargetApi
{
public:
    explicit MoveTargetApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~MoveTargetApi();

    std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetResource> getApiV2Move_targetResource();
    std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetIdResource> getApiV2Move_targetIdResource();

    void setResource(std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetResource> resource);
    void setResource(std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setMoveTargetApiApiV2Move_targetResource(std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetResource> spMoveTargetApiApiV2Move_targetResource);
    [[deprecated("use setResource()")]]
    virtual void setMoveTargetApiApiV2Move_targetIdResource(std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetIdResource> spMoveTargetApiApiV2Move_targetIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetResource> m_spApiV2Move_targetResource;
    std::shared_ptr<MoveTargetApiResources::ApiV2Move_targetIdResource> m_spApiV2Move_targetIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* MoveTargetApi_H_ */

