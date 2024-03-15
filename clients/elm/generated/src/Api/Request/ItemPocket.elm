{-
   
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 20220523
   Contact: blah+oapicf@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.ItemPocket exposing
    ( itemPocketList
    , itemPocketRead
    )

import Api
import Api.Data exposing (..)
import Dict
import Http
import Json.Decode
import Json.Encode

itemPocketList : Maybe Int -> Maybe Int -> Api.Request ()
itemPocketList limit_query offset_query =
    Api.request
        "GET"
        "/api/v2/item-pocket/"
        []
        [ ( "limit", Maybe.map String.fromInt limit_query ), ( "offset", Maybe.map String.fromInt offset_query ) ]
        []
        Nothing
        (Json.Decode.succeed ())


itemPocketRead : Int -> Api.Request ()
itemPocketRead id_path =
    Api.request
        "GET"
        "/api/v2/item-pocket/{id}/"
        [ ( "id", String.fromInt id_path ) ]
        []
        []
        Nothing
        (Json.Decode.succeed ())

