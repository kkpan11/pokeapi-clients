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

#ifndef OAI_OAIMoveDamageClassApiHandler_H
#define OAI_OAIMoveDamageClassApiHandler_H

#include <QObject>

#include <QString>

namespace OpenAPI {

class OAIMoveDamageClassApiHandler : public QObject
{
    Q_OBJECT

public:
    OAIMoveDamageClassApiHandler();
    virtual ~OAIMoveDamageClassApiHandler();


public slots:
    virtual void moveDamageClassList(qint32 limit, qint32 offset);
    virtual void moveDamageClassRead(qint32 id);
    

};

}

#endif // OAI_OAIMoveDamageClassApiHandler_H