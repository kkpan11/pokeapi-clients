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
 * JsonBody.h
 *
 * This is a JSON http body which can be submitted via http
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_JsonBody_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_JsonBody_H_


#include "CppRestOpenAPIClient/IHttpBody.h"

#include <cpprest/json.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class  JsonBody
    : public IHttpBody
{
public:
    JsonBody( const web::json::value& value );
    virtual ~JsonBody();

    void writeTo( std::ostream& target ) override;

protected:
    web::json::value m_Json;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_JsonBody_H_ */
