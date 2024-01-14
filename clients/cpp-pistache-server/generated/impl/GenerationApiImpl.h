/**
* 
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 20220523
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* GenerationApiImpl.h
*
* 
*/

#ifndef GENERATION_API_IMPL_H_
#define GENERATION_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>
#include <optional>

#include <GenerationApi.h>


#include <string>

namespace org::openapitools::server::api
{



class  GenerationApiImpl : public org::openapitools::server::api::GenerationApi {
public:
    explicit GenerationApiImpl(const std::shared_ptr<Pistache::Rest::Router>& rtr);
    ~GenerationApiImpl() override = default;

    void generation_list(const std::optional<int32_t> &limit, const std::optional<int32_t> &offset, Pistache::Http::ResponseWriter &response);
    void generation_read(const int32_t &id, Pistache::Http::ResponseWriter &response);

};

} // namespace org::openapitools::server::api



#endif
