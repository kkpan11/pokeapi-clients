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


#include "CppRestOpenAPIClient/api/GenerationApi.h"
#include "CppRestOpenAPIClient/IHttpBody.h"
#include "CppRestOpenAPIClient/JsonBody.h"
#include "CppRestOpenAPIClient/MultipartFormData.h"

#include <boost/algorithm/string/replace.hpp>

#include <unordered_set>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;

GenerationApi::GenerationApi( std::shared_ptr<const ApiClient> apiClient )
    : m_ApiClient(apiClient)
{
}

GenerationApi::~GenerationApi()
{
}

pplx::task<utility::string_t> GenerationApi::generationList(boost::optional<int32_t> limit, boost::optional<int32_t> offset) const
{


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/api/v2/generation/");

    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;
    localVarResponseHttpContentTypes.insert( utility::conversions::to_string_t("text/plain") );

    utility::string_t localVarResponseHttpContentType;

    // use JSON if possible
    if ( localVarResponseHttpContentTypes.size() == 0 )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("text/plain");
    }
    // JSON
    else if ( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    // plain text
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("text/plain")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("text/plain");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("GenerationApi->generationList does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;

    if (limit)
    {
        localVarQueryParams[utility::conversions::to_string_t("limit")] = ApiClient::parameterToString(*limit);
    }
    if (offset)
    {
        localVarQueryParams[utility::conversions::to_string_t("offset")] = ApiClient::parameterToString(*offset);
    }

    std::shared_ptr<IHttpBody> localVarHttpBody;
    utility::string_t localVarRequestHttpContentType;

    // use JSON if possible
    if ( localVarConsumeHttpContentTypes.size() == 0 || localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else if (localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/x-www-form-urlencoded")) != localVarConsumeHttpContentTypes.end())
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/x-www-form-urlencoded");
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("GenerationApi->generationList does not consume any supported media type"));
    }


    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("GET"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
    .then([=](web::http::http_response localVarResponse)
    {
        if (m_ApiClient->getResponseHandler())
        {
            m_ApiClient->getResponseHandler()(localVarResponse.status_code(), localVarResponse.headers());
        }

        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (localVarResponse.status_code() >= 400)
        {
            throw ApiException(localVarResponse.status_code()
                , utility::conversions::to_string_t("error calling generationList: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling generationList: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        utility::string_t localVarResult(utility::conversions::to_string_t(""));

        if(localVarResponseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value localVarJson = web::json::value::parse(localVarResponse);

            ModelBase::fromJson(localVarJson, localVarResult);
        }
        else if(localVarResponseHttpContentType == utility::conversions::to_string_t("text/plain"))
        {
            localVarResult = localVarResponse;
        }
        // else if(localVarResponseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling generationList: unsupported response type"));
        }

        return localVarResult;
    });
}
pplx::task<utility::string_t> GenerationApi::generationRead(int32_t id) const
{


    std::shared_ptr<const ApiConfiguration> localVarApiConfiguration( m_ApiClient->getConfiguration() );
    utility::string_t localVarPath = utility::conversions::to_string_t("/api/v2/generation/{id}/");
    boost::replace_all(localVarPath, utility::conversions::to_string_t("{") + utility::conversions::to_string_t("id") + utility::conversions::to_string_t("}"), web::uri::encode_uri(ApiClient::parameterToString(id)));

    std::map<utility::string_t, utility::string_t> localVarQueryParams;
    std::map<utility::string_t, utility::string_t> localVarHeaderParams( localVarApiConfiguration->getDefaultHeaders() );
    std::map<utility::string_t, utility::string_t> localVarFormParams;
    std::map<utility::string_t, std::shared_ptr<HttpContent>> localVarFileParams;

    std::unordered_set<utility::string_t> localVarResponseHttpContentTypes;
    localVarResponseHttpContentTypes.insert( utility::conversions::to_string_t("text/plain") );

    utility::string_t localVarResponseHttpContentType;

    // use JSON if possible
    if ( localVarResponseHttpContentTypes.size() == 0 )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("text/plain");
    }
    // JSON
    else if ( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    // plain text
    else if( localVarResponseHttpContentTypes.find(utility::conversions::to_string_t("text/plain")) != localVarResponseHttpContentTypes.end() )
    {
        localVarResponseHttpContentType = utility::conversions::to_string_t("text/plain");
    }
    else
    {
        throw ApiException(400, utility::conversions::to_string_t("GenerationApi->generationRead does not produce any supported media type"));
    }

    localVarHeaderParams[utility::conversions::to_string_t("Accept")] = localVarResponseHttpContentType;

    std::unordered_set<utility::string_t> localVarConsumeHttpContentTypes;


    std::shared_ptr<IHttpBody> localVarHttpBody;
    utility::string_t localVarRequestHttpContentType;

    // use JSON if possible
    if ( localVarConsumeHttpContentTypes.size() == 0 || localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/json")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/json");
    }
    // multipart formdata
    else if( localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("multipart/form-data")) != localVarConsumeHttpContentTypes.end() )
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("multipart/form-data");
    }
    else if (localVarConsumeHttpContentTypes.find(utility::conversions::to_string_t("application/x-www-form-urlencoded")) != localVarConsumeHttpContentTypes.end())
    {
        localVarRequestHttpContentType = utility::conversions::to_string_t("application/x-www-form-urlencoded");
    }
    else
    {
        throw ApiException(415, utility::conversions::to_string_t("GenerationApi->generationRead does not consume any supported media type"));
    }


    return m_ApiClient->callApi(localVarPath, utility::conversions::to_string_t("GET"), localVarQueryParams, localVarHttpBody, localVarHeaderParams, localVarFormParams, localVarFileParams, localVarRequestHttpContentType)
    .then([=](web::http::http_response localVarResponse)
    {
        if (m_ApiClient->getResponseHandler())
        {
            m_ApiClient->getResponseHandler()(localVarResponse.status_code(), localVarResponse.headers());
        }

        // 1xx - informational : OK
        // 2xx - successful       : OK
        // 3xx - redirection   : OK
        // 4xx - client error  : not OK
        // 5xx - client error  : not OK
        if (localVarResponse.status_code() >= 400)
        {
            throw ApiException(localVarResponse.status_code()
                , utility::conversions::to_string_t("error calling generationRead: ") + localVarResponse.reason_phrase()
                , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
        }

        // check response content type
        if(localVarResponse.headers().has(utility::conversions::to_string_t("Content-Type")))
        {
            utility::string_t localVarContentType = localVarResponse.headers()[utility::conversions::to_string_t("Content-Type")];
            if( localVarContentType.find(localVarResponseHttpContentType) == std::string::npos )
            {
                throw ApiException(500
                    , utility::conversions::to_string_t("error calling generationRead: unexpected response type: ") + localVarContentType
                    , std::make_shared<std::stringstream>(localVarResponse.extract_utf8string(true).get()));
            }
        }

        return localVarResponse.extract_string();
    })
    .then([=](utility::string_t localVarResponse)
    {
        utility::string_t localVarResult(utility::conversions::to_string_t(""));

        if(localVarResponseHttpContentType == utility::conversions::to_string_t("application/json"))
        {
            web::json::value localVarJson = web::json::value::parse(localVarResponse);

            ModelBase::fromJson(localVarJson, localVarResult);
        }
        else if(localVarResponseHttpContentType == utility::conversions::to_string_t("text/plain"))
        {
            localVarResult = localVarResponse;
        }
        // else if(localVarResponseHttpContentType == utility::conversions::to_string_t("multipart/form-data"))
        // {
        // TODO multipart response parsing
        // }
        else
        {
            throw ApiException(500
                , utility::conversions::to_string_t("error calling generationRead: unsupported response type"));
        }

        return localVarResult;
    });
}

}
}
}
}

