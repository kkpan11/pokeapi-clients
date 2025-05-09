{-
   
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 20220523
   Contact: blah+oapicf@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Nature exposing
    ( natureList
    , natureRead
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode


natureList : Maybe Int -> Maybe Int -> Api.Request ()
natureList limit_query offset_query =
    Api.request
        "GET"
        "/api/v2/nature/"
        []
        [ ( "limit", Maybe.map String.fromInt limit_query ), ( "offset", Maybe.map String.fromInt offset_query ) ]
        []
        Nothing
        (Json.Decode.succeed ())


natureRead : Int -> Api.Request ()
natureRead id_path =
    Api.request
        "GET"
        "/api/v2/nature/{id}/"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        (Json.Decode.succeed ())

