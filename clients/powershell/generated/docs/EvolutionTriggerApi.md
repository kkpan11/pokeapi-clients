# PSOpenAPITools.PSOpenAPITools/Api.EvolutionTriggerApi

All URIs are relative to *https://pokeapi.co/api/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**Invoke-EvolutionTriggerList**](EvolutionTriggerApi.md#Invoke-EvolutionTriggerList) | **GET** /api/v2/evolution-trigger/ | 
[**Invoke-EvolutionTriggerRead**](EvolutionTriggerApi.md#Invoke-EvolutionTriggerRead) | **GET** /api/v2/evolution-trigger/{id}/ | 


<a name="Invoke-EvolutionTriggerList"></a>
# **Invoke-EvolutionTriggerList**
> String Invoke-EvolutionTriggerList<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Limit] <System.Nullable[Int32]><br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Offset] <System.Nullable[Int32]><br>



### Example
```powershell
$Limit = 56 # Int32 |  (optional)
$Offset = 56 # Int32 |  (optional)

try {
    $Result = Invoke-EvolutionTriggerList -Limit $Limit -Offset $Offset
} catch {
    Write-Host ("Exception occurred when calling Invoke-EvolutionTriggerList: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Limit** | **Int32**|  | [optional] 
 **Offset** | **Int32**|  | [optional] 

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

<a name="Invoke-EvolutionTriggerRead"></a>
# **Invoke-EvolutionTriggerRead**
> String Invoke-EvolutionTriggerRead<br>
> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[-Id] <Int32><br>



### Example
```powershell
$Id = 56 # Int32 | 

try {
    $Result = Invoke-EvolutionTriggerRead -Id $Id
} catch {
    Write-Host ("Exception occurred when calling Invoke-EvolutionTriggerRead: {0}" -f ($_.ErrorDetails | ConvertFrom-Json))
    Write-Host ("Response headers: {0}" -f ($_.Exception.Response.Headers | ConvertTo-Json))
}
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **Id** | **Int32**|  | 

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: text/plain

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)
