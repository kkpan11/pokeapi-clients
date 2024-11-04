# .LanguageApi

All URIs are relative to *https://pokeapi.co*

Method | HTTP request | Description
------------- | ------------- | -------------
[**languageList**](LanguageApi.md#languageList) | **GET** /api/v2/language/ | 
[**languageRead**](LanguageApi.md#languageRead) | **GET** /api/v2/language/{id}/ | 


# **languageList**
> languageList()


### Example


```typescript
import { createConfiguration, LanguageApi } from '';
import type { LanguageApiLanguageListRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LanguageApi(configuration);

const request: LanguageApiLanguageListRequest = {
  
  limit: 1,
  
  offset: 1,
};

const data = await apiInstance.languageList(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **limit** | [**number**] |  | (optional) defaults to undefined
 **offset** | [**number**] |  | (optional) defaults to undefined


### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)

# **languageRead**
> languageRead()


### Example


```typescript
import { createConfiguration, LanguageApi } from '';
import type { LanguageApiLanguageReadRequest } from '';

const configuration = createConfiguration();
const apiInstance = new LanguageApi(configuration);

const request: LanguageApiLanguageReadRequest = {
  
  id: 1,
};

const data = await apiInstance.languageRead(request);
console.log('API called successfully. Returned data:', data);
```


### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **id** | [**number**] |  | defaults to undefined


### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](README.md#documentation-for-api-endpoints) [[Back to Model list]](README.md#documentation-for-models) [[Back to README]](README.md)


