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
 * ApiException.h
 *
 * This is the exception being thrown in case the api call was not successful
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ApiException_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ApiException_H_



#include <cpprest/details/basic_types.h>
#include <cpprest/http_msg.h>

#include <memory>
#include <map>

namespace org {
namespace openapitools {
namespace client {
namespace api {

class  ApiException
    : public web::http::http_exception
{
public:
    ApiException( int errorCode
        , const utility::string_t& message
        , std::shared_ptr<std::istream> content = nullptr );
    ApiException( int errorCode
        , const utility::string_t& message
        , std::map<utility::string_t, utility::string_t>& headers
        , std::shared_ptr<std::istream> content = nullptr );
    virtual ~ApiException();

    std::map<utility::string_t, utility::string_t>& getHeaders();
    std::shared_ptr<std::istream> getContent() const;

protected:
    std::shared_ptr<std::istream> m_Content;
    std::map<utility::string_t, utility::string_t> m_Headers;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ApiBase_H_ */
