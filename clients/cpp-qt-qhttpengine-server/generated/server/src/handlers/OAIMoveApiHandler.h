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

#ifndef OAI_OAIMoveApiHandler_H
#define OAI_OAIMoveApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAIMoveApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIMoveApiHandler();
    virtual ~OAIMoveApiHandler();


public Q_SLOTS:
    virtual void moveList(qint32 limit, qint32 offset);
    virtual void moveRead(qint32 id);
    

};

}

#endif // OAI_OAIMoveApiHandler_H
