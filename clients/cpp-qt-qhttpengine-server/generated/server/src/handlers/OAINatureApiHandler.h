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

#ifndef OAI_OAINatureApiHandler_H
#define OAI_OAINatureApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAINatureApiHandler : public QObject
{
    Q_OBJECT

public:
    OAINatureApiHandler();
    virtual ~OAINatureApiHandler();


public Q_SLOTS:
    virtual void natureList(qint32 limit, qint32 offset);
    virtual void natureRead(qint32 id);
    

};

}

#endif // OAI_OAINatureApiHandler_H
