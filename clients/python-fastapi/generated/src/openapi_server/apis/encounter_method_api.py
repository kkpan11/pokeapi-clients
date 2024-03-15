# coding: utf-8

from typing import Dict, List  # noqa: F401
import importlib
import pkgutil

from openapi_server.apis.encounter_method_api_base import BaseEncounterMethodApi
import openapi_server.impl

from fastapi import (  # noqa: F401
    APIRouter,
    Body,
    Cookie,
    Depends,
    Form,
    Header,
    Path,
    Query,
    Response,
    Security,
    status,
)

from openapi_server.models.extra_models import TokenModel  # noqa: F401


router = APIRouter()

ns_pkg = openapi_server.impl
for _, name, _ in pkgutil.iter_modules(ns_pkg.__path__, ns_pkg.__name__ + "."):
    importlib.import_module(name)


@router.get(
    "/api/v2/encounter-method/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["encounter-method"],
    response_model_by_alias=True,
)
async def encounter_method_list(
    limit: int = Query(None, description="", alias="limit"),
    offset: int = Query(None, description="", alias="offset"),
) -> str:
    ...


@router.get(
    "/api/v2/encounter-method/{id}/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["encounter-method"],
    response_model_by_alias=True,
)
async def encounter_method_read(
    id: int = Path(..., description=""),
) -> str:
    ...
