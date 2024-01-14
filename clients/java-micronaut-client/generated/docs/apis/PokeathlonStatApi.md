# PokeathlonStatApi

All URIs are relative to *https://pokeapi.co*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**pokeathlonStatList**](PokeathlonStatApi.md#pokeathlonStatList) | **GET** /api/v2/pokeathlon-stat/ |  |
| [**pokeathlonStatRead**](PokeathlonStatApi.md#pokeathlonStatRead) | **GET** /api/v2/pokeathlon-stat/{id}/ |  |


## Creating PokeathlonStatApi

To initiate an instance of `PokeathlonStatApi`, you can use micronaut's `ApplicationContext`:
```java
/* imports
import io.micronaut.runtime.Micronaut;
import io.micronaut.context.ApplicationContext;
import org.openapitools.api.PokeathlonStatApi;
*/

ApplicationContext context = Micronaut.run(/* ... */);
PetApi apiInstance = context.getBean(PokeathlonStatApi.class);
```

Or the `@Inject` annotation:
```java
@Singleton
class MyClass {
    @Inject
    PokeathlonStatApi pokeathlonStatApi;

    /* ... use the injected variable */
}
```
Note that the class needs to be annotated with one of Micronaut's [scope annotations](https://docs.micronaut.io/latest/guide/#scopes) like `Singleton` in order to be processed.

More information can be found inside [Inversion of Control guide section](https://docs.micronaut.io/latest/guide/#ioc).

<a id="pokeathlonStatList"></a>
# **pokeathlonStatList**
```java
Mono<String> PokeathlonStatApi.pokeathlonStatList(limitoffset)
```



### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **limit** | `Integer`|  | [optional parameter] |
| **offset** | `Integer`|  | [optional parameter] |


### Return type
`String`



### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `text/plain`

<a id="pokeathlonStatRead"></a>
# **pokeathlonStatRead**
```java
Mono<String> PokeathlonStatApi.pokeathlonStatRead(id)
```



### Parameters
| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | `Integer`|  | |


### Return type
`String`



### HTTP request headers
 - **Content-Type**: Not defined
 - **Accept**: `text/plain`

