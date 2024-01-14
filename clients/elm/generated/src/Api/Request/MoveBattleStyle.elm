{-
   
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 20220523
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.MoveBattleStyle exposing
    ( moveBattleStyleList
    , moveBattleStyleRead
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode

moveBattleStyleList : Maybe Int -> Maybe Int -> Api.Request ()
moveBattleStyleList limit_query offset_query =
    Api.request
        "GET"
        "/api/v2/move-battle-style/"
        []
        [ ( "limit", Maybe.map String.fromInt limit_query ), ( "offset", Maybe.map String.fromInt offset_query ) ]
        []
        Nothing
        (Json.Decode.succeed ())


moveBattleStyleRead : Int -> Api.Request ()
moveBattleStyleRead id_path =
    Api.request
        "GET"
        "/api/v2/move-battle-style/{id}/"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        (Json.Decode.succeed ())

