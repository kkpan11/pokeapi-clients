/**
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIPalParkAreaApiHandler_H
#define OAI_OAIPalParkAreaApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAIPalParkAreaApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIPalParkAreaApiHandler();
    virtual ~OAIPalParkAreaApiHandler();


public Q_SLOTS:
    virtual void palParkAreaList(qint32 limit, qint32 offset);
    virtual void palParkAreaRead(qint32 id);
    

};

}

#endif // OAI_OAIPalParkAreaApiHandler_H
