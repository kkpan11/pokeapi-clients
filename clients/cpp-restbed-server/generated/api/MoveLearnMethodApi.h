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
 * MoveLearnMethodApi.h
 *
 * 
 */

#ifndef MoveLearnMethodApi_H_
#define MoveLearnMethodApi_H_


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
class  MoveLearnMethodApiException: public std::exception
{
public:
    MoveLearnMethodApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace MoveLearnMethodApiResources {
/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  ApiV2Move_learn_methodResource: public restbed::Resource
{
public:
    ApiV2Move_learn_methodResource(const std::string& context = "");
    virtual ~ApiV2Move_learn_methodResource() = default;

    ApiV2Move_learn_methodResource(
        const ApiV2Move_learn_methodResource& other) = default; // copy constructor
    ApiV2Move_learn_methodResource(ApiV2Move_learn_methodResource&& other) noexcept = default; // move constructor

    ApiV2Move_learn_methodResource& operator=(const ApiV2Move_learn_methodResource& other) = default; // copy assignment
    ApiV2Move_learn_methodResource& operator=(ApiV2Move_learn_methodResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & limit, int32_t & offset)> handler_GET_func =
            [](int32_t &, int32_t &) -> std::pair<int, std::string>
                { throw MoveLearnMethodApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleMoveLearnMethodApiException(const MoveLearnMethodApiException& e);
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
class  ApiV2Move_learn_methodIdResource: public restbed::Resource
{
public:
    ApiV2Move_learn_methodIdResource(const std::string& context = "");
    virtual ~ApiV2Move_learn_methodIdResource() = default;

    ApiV2Move_learn_methodIdResource(
        const ApiV2Move_learn_methodIdResource& other) = default; // copy constructor
    ApiV2Move_learn_methodIdResource(ApiV2Move_learn_methodIdResource&& other) noexcept = default; // move constructor

    ApiV2Move_learn_methodIdResource& operator=(const ApiV2Move_learn_methodIdResource& other) = default; // copy assignment
    ApiV2Move_learn_methodIdResource& operator=(ApiV2Move_learn_methodIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::string>(
        int32_t & id)> handler_GET_func =
            [](int32_t &) -> std::pair<int, std::string>
                { throw MoveLearnMethodApiException(501, "Not implemented"); };


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

    virtual std::pair<int, std::string> handleMoveLearnMethodApiException(const MoveLearnMethodApiException& e);
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

} /* namespace MoveLearnMethodApiResources */

using MoveLearnMethodApiApiV2Move_learn_methodResource [[deprecated]] = MoveLearnMethodApiResources::ApiV2Move_learn_methodResource;
using MoveLearnMethodApiApiV2Move_learn_methodIdResource [[deprecated]] = MoveLearnMethodApiResources::ApiV2Move_learn_methodIdResource;

//
// The restbed service to actually implement the REST server
//
class  MoveLearnMethodApi
{
public:
    explicit MoveLearnMethodApi(std::shared_ptr<restbed::Service> const& restbedService);
    virtual ~MoveLearnMethodApi();

    std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodResource> getApiV2Move_learn_methodResource();
    std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodIdResource> getApiV2Move_learn_methodIdResource();

    void setResource(std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodResource> resource);
    void setResource(std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodIdResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setMoveLearnMethodApiApiV2Move_learn_methodResource(std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodResource> spMoveLearnMethodApiApiV2Move_learn_methodResource);
    [[deprecated("use setResource()")]]
    virtual void setMoveLearnMethodApiApiV2Move_learn_methodIdResource(std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodIdResource> spMoveLearnMethodApiApiV2Move_learn_methodIdResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
    std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodResource> m_spApiV2Move_learn_methodResource;
    std::shared_ptr<MoveLearnMethodApiResources::ApiV2Move_learn_methodIdResource> m_spApiV2Move_learn_methodIdResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* MoveLearnMethodApi_H_ */

