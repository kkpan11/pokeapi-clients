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
pub enum GrowthRateListResponse {
    /// Default response
    Status0_DefaultResponse
    (String)
}

#[derive(Debug, PartialEq, Serialize, Deserialize)]
#[must_use]
#[allow(clippy::large_enum_variant)]
pub enum GrowthRateReadResponse {
    /// Default response
    Status0_DefaultResponse
    (String)
}


/// GrowthRate
#[async_trait]
#[allow(clippy::ptr_arg)]
pub trait GrowthRate<E: std::fmt::Debug + Send + Sync + 'static = ()>: super::ErrorHandler<E> {
    /// GrowthRateList - GET /api/v2/growth-rate/
    async fn growth_rate_list(
    &self,
    method: &Method,
    host: &Host,
    cookies: &CookieJar,
      query_params: &models::GrowthRateListQueryParams,
    ) -> Result<GrowthRateListResponse, E>;

    /// GrowthRateRead - GET /api/v2/growth-rate/{id}/
    async fn growth_rate_read(
    &self,
    method: &Method,
    host: &Host,
    cookies: &CookieJar,
      path_params: &models::GrowthRateReadPathParams,
    ) -> Result<GrowthRateReadResponse, E>;
}
