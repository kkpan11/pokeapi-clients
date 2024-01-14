# EggGroupApi

All URIs are relative to *https://pokeapi.co*

| Method | HTTP request | Description |
|------------- | ------------- | -------------|
| [**eggGroupList**](EggGroupApi.md#eggGroupList) | **GET** /api/v2/egg-group/ |  |
| [**eggGroupRead**](EggGroupApi.md#eggGroupRead) | **GET** /api/v2/egg-group/{id}/ |  |


<a id="eggGroupList"></a>
# **eggGroupList**
> String eggGroupList(limit, offset)



### Example
```java
// Import classes:
import com.cliffano.pokeapiclient.ApiClient;
import com.cliffano.pokeapiclient.ApiException;
import com.cliffano.pokeapiclient.Configuration;
import com.cliffano.pokeapiclient.models.*;
import com.cliffano.pokeapiclient.api.EggGroupApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://pokeapi.co");

    EggGroupApi apiInstance = new EggGroupApi(defaultClient);
    Integer limit = 56; // Integer | 
    Integer offset = 56; // Integer | 
    try {
      String result = apiInstance.eggGroupList(limit, offset);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling EggGroupApi#eggGroupList");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **limit** | **Integer**|  | [optional] |
| **offset** | **Integer**|  | [optional] |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

<a id="eggGroupRead"></a>
# **eggGroupRead**
> String eggGroupRead(id)



### Example
```java
// Import classes:
import com.cliffano.pokeapiclient.ApiClient;
import com.cliffano.pokeapiclient.ApiException;
import com.cliffano.pokeapiclient.Configuration;
import com.cliffano.pokeapiclient.models.*;
import com.cliffano.pokeapiclient.api.EggGroupApi;

public class Example {
  public static void main(String[] args) {
    ApiClient defaultClient = Configuration.getDefaultApiClient();
    defaultClient.setBasePath("https://pokeapi.co");

    EggGroupApi apiInstance = new EggGroupApi(defaultClient);
    Integer id = 56; // Integer | 
    try {
      String result = apiInstance.eggGroupRead(id);
      System.out.println(result);
    } catch (ApiException e) {
      System.err.println("Exception when calling EggGroupApi#eggGroupRead");
      System.err.println("Status code: " + e.getCode());
      System.err.println("Reason: " + e.getResponseBody());
      System.err.println("Response headers: " + e.getResponseHeaders());
      e.printStackTrace();
    }
  }
}
```

### Parameters

| Name | Type | Description  | Notes |
|------------- | ------------- | ------------- | -------------|
| **id** | **Integer**|  | |

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
| **0** | Default response |  -  |

