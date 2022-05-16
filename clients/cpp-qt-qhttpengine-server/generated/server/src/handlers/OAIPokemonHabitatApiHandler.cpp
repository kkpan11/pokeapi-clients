/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIPokemonHabitatApiHandler.h"
#include "OAIPokemonHabitatApiRequest.h"

namespace OpenAPI {

OAIPokemonHabitatApiHandler::OAIPokemonHabitatApiHandler(){

}

OAIPokemonHabitatApiHandler::~OAIPokemonHabitatApiHandler(){

}

void OAIPokemonHabitatApiHandler::pokemonHabitatList(qint32 limit, qint32 offset) {
    Q_UNUSED(limit);
    Q_UNUSED(offset);
    auto reqObj = qobject_cast<OAIPokemonHabitatApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->pokemonHabitatListResponse(res);
    }
}
void OAIPokemonHabitatApiHandler::pokemonHabitatRead(qint32 id) {
    Q_UNUSED(id);
    auto reqObj = qobject_cast<OAIPokemonHabitatApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->pokemonHabitatReadResponse(res);
    }
}


}