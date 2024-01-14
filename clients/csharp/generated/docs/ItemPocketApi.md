# Org.OpenAPITools.Api.ItemPocketApi

All URIs are relative to *https://pokeapi.co*

| Method | HTTP request | Description |
|--------|--------------|-------------|
| [**ItemPocketList**](ItemPocketApi.md#itempocketlist) | **GET** /api/v2/item-pocket/ |  |
| [**ItemPocketRead**](ItemPocketApi.md#itempocketread) | **GET** /api/v2/item-pocket/{id}/ |  |

<a id="itempocketlist"></a>
# **ItemPocketList**
> string ItemPocketList (int? limit = null, int? offset = null)



### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ItemPocketListExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://pokeapi.co";
            var apiInstance = new ItemPocketApi(config);
            var limit = 56;  // int? |  (optional) 
            var offset = 56;  // int? |  (optional) 

            try
            {
                string result = apiInstance.ItemPocketList(limit, offset);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ItemPocketApi.ItemPocketList: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the ItemPocketListWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    ApiResponse<string> response = apiInstance.ItemPocketListWithHttpInfo(limit, offset);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ItemPocketApi.ItemPocketListWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **limit** | **int?** |  | [optional]  |
| **offset** | **int?** |  | [optional]  |

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a id="itempocketread"></a>
# **ItemPocketRead**
> string ItemPocketRead (int id)



### Example
```csharp
using System.Collections.Generic;
using System.Diagnostics;
using Org.OpenAPITools.Api;
using Org.OpenAPITools.Client;
using Org.OpenAPITools.Model;

namespace Example
{
    public class ItemPocketReadExample
    {
        public static void Main()
        {
            Configuration config = new Configuration();
            config.BasePath = "https://pokeapi.co";
            var apiInstance = new ItemPocketApi(config);
            var id = 56;  // int | 

            try
            {
                string result = apiInstance.ItemPocketRead(id);
                Debug.WriteLine(result);
            }
            catch (ApiException  e)
            {
                Debug.Print("Exception when calling ItemPocketApi.ItemPocketRead: " + e.Message);
                Debug.Print("Status Code: " + e.ErrorCode);
                Debug.Print(e.StackTrace);
            }
        }
    }
}
```

#### Using the ItemPocketReadWithHttpInfo variant
This returns an ApiResponse object which contains the response data, status code and headers.

```csharp
try
{
    ApiResponse<string> response = apiInstance.ItemPocketReadWithHttpInfo(id);
    Debug.Write("Status Code: " + response.StatusCode);
    Debug.Write("Response Headers: " + response.Headers);
    Debug.Write("Response Body: " + response.Data);
}
catch (ApiException e)
{
    Debug.Print("Exception when calling ItemPocketApi.ItemPocketReadWithHttpInfo: " + e.Message);
    Debug.Print("Status Code: " + e.ErrorCode);
    Debug.Print(e.StackTrace);
}
```

### Parameters

| Name | Type | Description | Notes |
|------|------|-------------|-------|
| **id** | **int** |  |  |

### Return type

**string**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain


### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

