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
#include "OAIContestTypeApiRequest.h"

namespace OpenAPI {

OAIContestTypeApiRequest::OAIContestTypeApiRequest(QHttpEngine::Socket *s, QSharedPointer<OAIContestTypeApiHandler> hdl) : QObject(s), socket(s), handler(hdl) {
    auto headers = s->headers();
    for(auto itr = headers.begin(); itr != headers.end(); itr++) {
        requestHeaders.insert(QString(itr.key()), QString(itr.value()));
    }
}

OAIContestTypeApiRequest::~OAIContestTypeApiRequest(){
    disconnect(this, nullptr, nullptr, nullptr);
    qDebug() << "OAIContestTypeApiRequest::~OAIContestTypeApiRequest()";
}

QMap<QString, QString>
OAIContestTypeApiRequest::getRequestHeaders() const {
    return requestHeaders;
}

void OAIContestTypeApiRequest::setResponseHeaders(const QMultiMap<QString, QString>& headers){
    for(auto itr = headers.begin(); itr != headers.end(); ++itr) {
        responseHeaders.insert(itr.key(), itr.value());
    }
}


QHttpEngine::Socket* OAIContestTypeApiRequest::getRawSocket(){
    return socket;
}


void OAIContestTypeApiRequest::contestTypeListRequest(){
    qDebug() << "/api/v2/contest-type/";
    connect(this, &OAIContestTypeApiRequest::contestTypeList, handler.data(), &OAIContestTypeApiHandler::contestTypeList);

    
    qint32 limit;
    if(socket->queryString().keys().contains("limit")){
        fromStringValue(socket->queryString().value("limit"), limit);
    }
    
    qint32 offset;
    if(socket->queryString().keys().contains("offset")){
        fromStringValue(socket->queryString().value("offset"), offset);
    }
    


    Q_EMIT contestTypeList(limit, offset);
}


void OAIContestTypeApiRequest::contestTypeReadRequest(const QString& idstr){
    qDebug() << "/api/v2/contest-type/{id}/";
    connect(this, &OAIContestTypeApiRequest::contestTypeRead, handler.data(), &OAIContestTypeApiHandler::contestTypeRead);

    
    qint32 id;
    fromStringValue(idstr, id);
    

    Q_EMIT contestTypeRead(id);
}



void OAIContestTypeApiRequest::contestTypeListResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIContestTypeApiRequest::contestTypeReadResponse(const QString& res){
    setSocketResponseHeaders();
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIContestTypeApiRequest::contestTypeListError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIContestTypeApiRequest::contestTypeReadError(const QString& res, QNetworkReply::NetworkError error_type, QString& error_str){
    Q_UNUSED(error_type); // TODO: Remap error_type to QHttpEngine::Socket errors
    setSocketResponseHeaders();
    Q_UNUSED(error_str);  // response will be used instead of error string
    socket->write(::OpenAPI::toStringValue(res).toUtf8());
    if(socket->isOpen()){
        socket->close();
    }
}


void OAIContestTypeApiRequest::sendCustomResponse(QByteArray & res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type); // TODO
    socket->write(res);
    if(socket->isOpen()){
        socket->close();
    }
}

void OAIContestTypeApiRequest::sendCustomResponse(QIODevice *res, QNetworkReply::NetworkError error_type){
    Q_UNUSED(error_type);  // TODO
    socket->write(res->readAll());
    if(socket->isOpen()){
        socket->close();
    }
}

}
