# LocationAreaController

All URIs are relative to `""`

The controller class is defined in **[LocationAreaController.java](../../src/main/java/org/openapitools/controller/LocationAreaController.java)**

Method | HTTP request | Description
------------- | ------------- | -------------
[**locationAreaList**](#locationAreaList) | **GET** /api/v2/location-area/ | 
[**locationAreaRead**](#locationAreaRead) | **GET** /api/v2/location-area/{id}/ | 

<a id="locationAreaList"></a>
# **locationAreaList**
```java
Mono<String> LocationAreaController.locationAreaList(limitoffset)
```



### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**limit** | `Integer` |  | [optional parameter]
**offset** | `Integer` |  | [optional parameter]

### Return type
`String`


### HTTP request headers
 - **Accepts Content-Type**: Not defined
 - **Produces Content-Type**: `text/plain`

<a id="locationAreaRead"></a>
# **locationAreaRead**
```java
Mono<String> LocationAreaController.locationAreaRead(id)
```



### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**id** | `Integer` |  |

### Return type
`String`


### HTTP request headers
 - **Accepts Content-Type**: Not defined
 - **Produces Content-Type**: `text/plain`

