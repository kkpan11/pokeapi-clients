# coding: utf-8

from typing import Dict, List  # noqa: F401
import importlib
import pkgutil

from openapi_server.apis.version_api_base import BaseVersionApi
import openapi_server.impl

from fastapi import (  # noqa: F401
    APIRouter,
    Body,
    Cookie,
    Depends,
    Form,
    Header,
    HTTPException,
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
    "/api/v2/version/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["version"],
    response_model_by_alias=True,
)
async def version_list(
    limit: int = Query(None, description="", alias="limit"),
    offset: int = Query(None, description="", alias="offset"),
) -> str:
    if not BaseVersionApi.subclasses:
        raise HTTPException(status_code=500, detail="Not implemented")
    return await BaseVersionApi.subclasses[0]().version_list(limit, offset)


@router.get(
    "/api/v2/version/{id}/",
    responses={
        200: {"model": str, "description": "Default response"},
    },
    tags=["version"],
    response_model_by_alias=True,
)
async def version_read(
    id: int = Path(..., description=""),
) -> str:
    if not BaseVersionApi.subclasses:
        raise HTTPException(status_code=500, detail="Not implemented")
    return await BaseVersionApi.subclasses[0]().version_read(id)
