use async_trait::async_trait;
use axum::extract::*;
use axum_extra::extract::{CookieJar, Host};
use bytes::Bytes;
use http::Method;
use serde::{Deserialize, Serialize};

use crate::{models, types::*};

#[derive(Debug, PartialEq, Serialize, Deserialize)]
#[must_use]
#[allow(clippy::large_enum_variant)]
pub enum ItemPocketListResponse {
    /// Default response
    Status0_DefaultResponse
    (String)
}

#[derive(Debug, PartialEq, Serialize, Deserialize)]
#[must_use]
#[allow(clippy::large_enum_variant)]
pub enum ItemPocketReadResponse {
    /// Default response
    Status0_DefaultResponse
    (String)
}


/// ItemPocket
#[async_trait]
#[allow(clippy::ptr_arg)]
pub trait ItemPocket<E: std::fmt::Debug + Send + Sync + 'static = ()>: super::ErrorHandler<E> {
    /// ItemPocketList - GET /api/v2/item-pocket/
    async fn item_pocket_list(
    &self,
    method: &Method,
    host: &Host,
    cookies: &CookieJar,
      query_params: &models::ItemPocketListQueryParams,
    ) -> Result<ItemPocketListResponse, E>;

    /// ItemPocketRead - GET /api/v2/item-pocket/{id}/
    async fn item_pocket_read(
    &self,
    method: &Method,
    host: &Host,
    cookies: &CookieJar,
      path_params: &models::ItemPocketReadPathParams,
    ) -> Result<ItemPocketReadResponse, E>;
}
