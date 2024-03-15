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
#include "OAIMoveAilmentApiRequest.h"

namespace OpenAPI {

OAIMoveAilmentApiRequest::OAIMoveAilmentApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIMoveAilmentApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIMoveAilmentApiRequest::~OAIMoveAilmentApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIMoveAilmentApiRequest::~OAIMoveAilmentApiRequest()";
}

QMap<QString, QString>
OAIMoveAilmentApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIMoveAilmentApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIMoveAilmentApiRequest::getRawSocket(){
    return socket;
}


void OAIMoveAilmentApiRequest::moveAilmentListRequest(){
    qDebug() << "/api/v2/move-ailment/";
    connect(this, &OAIMoveAilmentApiRequest::moveAilmentList, handler.data(), &OAIMoveAilmentApiHandler::moveAilmentList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    Q_EMIT moveAilmentList(limit, offset);
}


void OAIMoveAilmentApiRequest::moveAilmentReadRequest(const QString& idstr){
    qDebug() << "/api/v2/move-ailment/{id}/";
    connect(this, &OAIMoveAilmentApiRequest::moveAilmentRead, handler.data(), &OAIMoveAilmentApiHandler::moveAilmentRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    Q_EMIT moveAilmentRead(id);
}



void OAIMoveAilmentApiRequest::moveAilmentListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveAilmentApiRequest::moveAilmentReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIMoveAilmentApiRequest::moveAilmentListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveAilmentApiRequest::moveAilmentReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIMoveAilmentApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIMoveAilmentApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
