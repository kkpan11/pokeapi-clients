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
 * BerryFirmnessApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_BerryFirmnessApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_BerryFirmnessApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"
#include "CppRestOpenAPIClient/ModelBase.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  BerryFirmnessApi 
{
public:

    explicit BerryFirmnessApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~BerryFirmnessApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="limit"> (optional, default to 0)</param>
    /// <param name="offset"> (optional, default to 0)</param>
    pplx::task<utility::string_t> berryFirmnessList(
        boost::optional<int32_t> limit,
        boost::optional<int32_t> offset
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id"></param>
    pplx::task<utility::string_t> berryFirmnessRead(
        int32_t id
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_BerryFirmnessApi_H_ */

