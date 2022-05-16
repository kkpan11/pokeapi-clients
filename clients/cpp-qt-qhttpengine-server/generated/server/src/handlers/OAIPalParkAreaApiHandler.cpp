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

#include "OAIPalParkAreaApiHandler.h"
#include "OAIPalParkAreaApiRequest.h"

namespace OpenAPI {

OAIPalParkAreaApiHandler::OAIPalParkAreaApiHandler(){

}

OAIPalParkAreaApiHandler::~OAIPalParkAreaApiHandler(){

}

void OAIPalParkAreaApiHandler::palParkAreaList(qint32 limit, qint32 offset) {
    Q_UNUSED(limit);
    Q_UNUSED(offset);
    auto reqObj = qobject_cast<OAIPalParkAreaApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->palParkAreaListResponse(res);
    }
}
void OAIPalParkAreaApiHandler::palParkAreaRead(qint32 id) {
    Q_UNUSED(id);
    auto reqObj = qobject_cast<OAIPalParkAreaApiRequest*>(sender());
    if( reqObj != nullptr )
    {
        QString res;
        reqObj->palParkAreaReadResponse(res);
    }
}


}