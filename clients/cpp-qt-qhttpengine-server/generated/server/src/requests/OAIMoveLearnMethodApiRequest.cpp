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
#include "OAIMoveLearnMethodApiRequest.h"

namespace OpenAPI {

OAIMoveLearnMethodApiRequest::OAIMoveLearnMethodApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIMoveLearnMethodApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIMoveLearnMethodApiRequest::~OAIMoveLearnMethodApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIMoveLearnMethodApiRequest::~OAIMoveLearnMethodApiRequest()";
}

QMap<QString, QString>
OAIMoveLearnMethodApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIMoveLearnMethodApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIMoveLearnMethodApiRequest::getRawSocket(){
    return socket;
}


void OAIMoveLearnMethodApiRequest::moveLearnMethodListRequest(){
    qDebug() << "/api/v2/move-learn-method/";
    connect(this, &OAIMoveLearnMethodApiRequest::moveLearnMethodList, handler.data(), &OAIMoveLearnMethodApiHandler::moveLearnMethodList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    Q_EMIT moveLearnMethodList(limit, offset);
}


void OAIMoveLearnMethodApiRequest::moveLearnMethodReadRequest(const QString& idstr){
    qDebug() << "/api/v2/move-learn-method/{id}/";
    connect(this, &OAIMoveLearnMethodApiRequest::moveLearnMethodRead, handler.data(), &OAIMoveLearnMethodApiHandler::moveLearnMethodRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    Q_EMIT moveLearnMethodRead(id);
}



void OAIMoveLearnMethodApiRequest::moveLearnMethodListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveLearnMethodApiRequest::moveLearnMethodReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIMoveLearnMethodApiRequest::moveLearnMethodListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveLearnMethodApiRequest::moveLearnMethodReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIMoveLearnMethodApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveLearnMethodApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
