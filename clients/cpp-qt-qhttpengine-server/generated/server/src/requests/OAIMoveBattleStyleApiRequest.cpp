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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QDebug>

#include "OAIHelpers.h"
#include "OAIMoveBattleStyleApiRequest.h"

namespace OpenAPI {

OAIMoveBattleStyleApiRequest::OAIMoveBattleStyleApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIMoveBattleStyleApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIMoveBattleStyleApiRequest::~OAIMoveBattleStyleApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIMoveBattleStyleApiRequest::~OAIMoveBattleStyleApiRequest()";
}

QMap<QString, QString>
OAIMoveBattleStyleApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIMoveBattleStyleApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIMoveBattleStyleApiRequest::getRawSocket(){
    return socket;
}


void OAIMoveBattleStyleApiRequest::moveBattleStyleListRequest(){
    qDebug() << "/api/v2/move-battle-style/";
    connect(this, &OAIMoveBattleStyleApiRequest::moveBattleStyleList, handler.data(), &OAIMoveBattleStyleApiHandler::moveBattleStyleList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    Q_EMIT moveBattleStyleList(limit, offset);
}


void OAIMoveBattleStyleApiRequest::moveBattleStyleReadRequest(const QString& idstr){
    qDebug() << "/api/v2/move-battle-style/{id}/";
    connect(this, &OAIMoveBattleStyleApiRequest::moveBattleStyleRead, handler.data(), &OAIMoveBattleStyleApiHandler::moveBattleStyleRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    Q_EMIT moveBattleStyleRead(id);
}



void OAIMoveBattleStyleApiRequest::moveBattleStyleListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveBattleStyleApiRequest::moveBattleStyleReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIMoveBattleStyleApiRequest::moveBattleStyleListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveBattleStyleApiRequest::moveBattleStyleReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIMoveBattleStyleApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveBattleStyleApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
