// <auto-generated>
/*
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 20220523
 * Contact: blah+oapicf@cliffano.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

#nullable enable

using System;
using System.Collections.Generic;
using System.Net;
using System.Threading.Tasks;
using Microsoft.Extensions.Logging;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Text.Json;
using Org.OpenAPITools.Client;
using System.Diagnostics.CodeAnalysis;

namespace Org.OpenAPITools.Api
{
    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// This class is registered as transient.
    /// </summary>
    public interface IEncounterConditionApi : IApi
    {
        /// <summary>
        /// The class containing the events
        /// </summary>
        EncounterConditionApiEvents Events { get; }

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="ApiException">Thrown when fails to make API call</exception>
        /// <param name="limit"> (optional)</param>
        /// <param name="offset"> (optional)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionListApiResponse"/>&gt;</returns>
        Task<IEncounterConditionListApiResponse> EncounterConditionListAsync(Option<int> limit = default, Option<int> offset = default, System.Threading.CancellationToken cancellationToken = default);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <param name="limit"> (optional)</param>
        /// <param name="offset"> (optional)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionListApiResponse"/>?&gt;</returns>
        Task<IEncounterConditionListApiResponse?> EncounterConditionListOrDefaultAsync(Option<int> limit = default, Option<int> offset = default, System.Threading.CancellationToken cancellationToken = default);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <exception cref="ApiException">Thrown when fails to make API call</exception>
        /// <param name="id"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionReadApiResponse"/>&gt;</returns>
        Task<IEncounterConditionReadApiResponse> EncounterConditionReadAsync(int id, System.Threading.CancellationToken cancellationToken = default);

        /// <summary>
        /// 
        /// </summary>
        /// <remarks>
        /// 
        /// </remarks>
        /// <param name="id"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionReadApiResponse"/>?&gt;</returns>
        Task<IEncounterConditionReadApiResponse?> EncounterConditionReadOrDefaultAsync(int id, System.Threading.CancellationToken cancellationToken = default);
    }

    /// <summary>
    /// The <see cref="IEncounterConditionListApiResponse"/>
    /// </summary>
    public interface IEncounterConditionListApiResponse : Org.OpenAPITools.Client.IApiResponse, IDefault<string?>
    {
        /// <summary>
        /// Returns true if the response is the default response type
        /// </summary>
        /// <returns></returns>
        bool IsDefault { get; }
    }

    /// <summary>
    /// The <see cref="IEncounterConditionReadApiResponse"/>
    /// </summary>
    public interface IEncounterConditionReadApiResponse : Org.OpenAPITools.Client.IApiResponse, IDefault<string?>
    {
        /// <summary>
        /// Returns true if the response is the default response type
        /// </summary>
        /// <returns></returns>
        bool IsDefault { get; }
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public class EncounterConditionApiEvents
    {
        /// <summary>
        /// The event raised after the server response
        /// </summary>
        public event EventHandler<ApiResponseEventArgs>? OnEncounterConditionList;

        /// <summary>
        /// The event raised after an error querying the server
        /// </summary>
        public event EventHandler<ExceptionEventArgs>? OnErrorEncounterConditionList;

        internal void ExecuteOnEncounterConditionList(EncounterConditionApi.EncounterConditionListApiResponse apiResponse)
        {
            OnEncounterConditionList?.Invoke(this, new ApiResponseEventArgs(apiResponse));
        }

        internal void ExecuteOnErrorEncounterConditionList(Exception exception)
        {
            OnErrorEncounterConditionList?.Invoke(this, new ExceptionEventArgs(exception));
        }

        /// <summary>
        /// The event raised after the server response
        /// </summary>
        public event EventHandler<ApiResponseEventArgs>? OnEncounterConditionRead;

        /// <summary>
        /// The event raised after an error querying the server
        /// </summary>
        public event EventHandler<ExceptionEventArgs>? OnErrorEncounterConditionRead;

        internal void ExecuteOnEncounterConditionRead(EncounterConditionApi.EncounterConditionReadApiResponse apiResponse)
        {
            OnEncounterConditionRead?.Invoke(this, new ApiResponseEventArgs(apiResponse));
        }

        internal void ExecuteOnErrorEncounterConditionRead(Exception exception)
        {
            OnErrorEncounterConditionRead?.Invoke(this, new ExceptionEventArgs(exception));
        }
    }

    /// <summary>
    /// Represents a collection of functions to interact with the API endpoints
    /// </summary>
    public sealed partial class EncounterConditionApi : IEncounterConditionApi
    {
        private JsonSerializerOptions _jsonSerializerOptions;

        /// <summary>
        /// The logger factory
        /// </summary>
        public ILoggerFactory LoggerFactory { get; }

        /// <summary>
        /// The logger
        /// </summary>
        public ILogger<EncounterConditionApi> Logger { get; }

        /// <summary>
        /// The HttpClient
        /// </summary>
        public HttpClient HttpClient { get; }

        /// <summary>
        /// The class containing the events
        /// </summary>
        public EncounterConditionApiEvents Events { get; }

        /// <summary>
        /// Initializes a new instance of the <see cref="EncounterConditionApi"/> class.
        /// </summary>
        /// <returns></returns>
        public EncounterConditionApi(ILogger<EncounterConditionApi> logger, ILoggerFactory loggerFactory, HttpClient httpClient, JsonSerializerOptionsProvider jsonSerializerOptionsProvider, EncounterConditionApiEvents encounterConditionApiEvents)
        {
            _jsonSerializerOptions = jsonSerializerOptionsProvider.Options;
            LoggerFactory = loggerFactory;
            Logger = LoggerFactory.CreateLogger<EncounterConditionApi>();
            HttpClient = httpClient;
            Events = encounterConditionApiEvents;
        }

        partial void FormatEncounterConditionList(ref Option<int> limit, ref Option<int> offset);

        /// <summary>
        /// Processes the server response
        /// </summary>
        /// <param name="apiResponseLocalVar"></param>
        /// <param name="limit"></param>
        /// <param name="offset"></param>
        private void AfterEncounterConditionListDefaultImplementation(IEncounterConditionListApiResponse apiResponseLocalVar, Option<int> limit, Option<int> offset)
        {
            bool suppressDefaultLog = false;
            AfterEncounterConditionList(ref suppressDefaultLog, apiResponseLocalVar, limit, offset);
            if (!suppressDefaultLog)
                Logger.LogInformation("{0,-9} | {1} | {3}", (apiResponseLocalVar.DownloadedAt - apiResponseLocalVar.RequestedAt).TotalSeconds, apiResponseLocalVar.StatusCode, apiResponseLocalVar.Path);
        }

        /// <summary>
        /// Processes the server response
        /// </summary>
        /// <param name="suppressDefaultLog"></param>
        /// <param name="apiResponseLocalVar"></param>
        /// <param name="limit"></param>
        /// <param name="offset"></param>
        partial void AfterEncounterConditionList(ref bool suppressDefaultLog, IEncounterConditionListApiResponse apiResponseLocalVar, Option<int> limit, Option<int> offset);

        /// <summary>
        /// Logs exceptions that occur while retrieving the server response
        /// </summary>
        /// <param name="exceptionLocalVar"></param>
        /// <param name="pathFormatLocalVar"></param>
        /// <param name="pathLocalVar"></param>
        /// <param name="limit"></param>
        /// <param name="offset"></param>
        private void OnErrorEncounterConditionListDefaultImplementation(Exception exceptionLocalVar, string pathFormatLocalVar, string pathLocalVar, Option<int> limit, Option<int> offset)
        {
            bool suppressDefaultLogLocalVar = false;
            OnErrorEncounterConditionList(ref suppressDefaultLogLocalVar, exceptionLocalVar, pathFormatLocalVar, pathLocalVar, limit, offset);
            if (!suppressDefaultLogLocalVar)
                Logger.LogError(exceptionLocalVar, "An error occurred while sending the request to the server.");
        }

        /// <summary>
        /// A partial method that gives developers a way to provide customized exception handling
        /// </summary>
        /// <param name="suppressDefaultLogLocalVar"></param>
        /// <param name="exceptionLocalVar"></param>
        /// <param name="pathFormatLocalVar"></param>
        /// <param name="pathLocalVar"></param>
        /// <param name="limit"></param>
        /// <param name="offset"></param>
        partial void OnErrorEncounterConditionList(ref bool suppressDefaultLogLocalVar, Exception exceptionLocalVar, string pathFormatLocalVar, string pathLocalVar, Option<int> limit, Option<int> offset);

        /// <summary>
        ///  
        /// </summary>
        /// <param name="limit"> (optional)</param>
        /// <param name="offset"> (optional)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionListApiResponse"/>&gt;</returns>
        public async Task<IEncounterConditionListApiResponse?> EncounterConditionListOrDefaultAsync(Option<int> limit = default, Option<int> offset = default, System.Threading.CancellationToken cancellationToken = default)
        {
            try
            {
                return await EncounterConditionListAsync(limit, offset, cancellationToken).ConfigureAwait(false);
            }
            catch (Exception)
            {
                return null;
            }
        }

        /// <summary>
        ///  
        /// </summary>
        /// <exception cref="ApiException">Thrown when fails to make API call</exception>
        /// <param name="limit"> (optional)</param>
        /// <param name="offset"> (optional)</param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionListApiResponse"/>&gt;</returns>
        public async Task<IEncounterConditionListApiResponse> EncounterConditionListAsync(Option<int> limit = default, Option<int> offset = default, System.Threading.CancellationToken cancellationToken = default)
        {
            UriBuilder uriBuilderLocalVar = new UriBuilder();

            try
            {
                FormatEncounterConditionList(ref limit, ref offset);

                using (HttpRequestMessage httpRequestMessageLocalVar = new HttpRequestMessage())
                {
                    uriBuilderLocalVar.Host = HttpClient.BaseAddress!.Host;
                    uriBuilderLocalVar.Port = HttpClient.BaseAddress.Port;
                    uriBuilderLocalVar.Scheme = HttpClient.BaseAddress.Scheme;
                    uriBuilderLocalVar.Path = ClientUtils.CONTEXT_PATH + "/api/v2/encounter-condition/";

                    System.Collections.Specialized.NameValueCollection parseQueryStringLocalVar = System.Web.HttpUtility.ParseQueryString(string.Empty);

                    if (limit.IsSet)
                        parseQueryStringLocalVar["limit"] = ClientUtils.ParameterToString(limit.Value);

                    if (offset.IsSet)
                        parseQueryStringLocalVar["offset"] = ClientUtils.ParameterToString(offset.Value);

                    uriBuilderLocalVar.Query = parseQueryStringLocalVar.ToString();

                    httpRequestMessageLocalVar.RequestUri = uriBuilderLocalVar.Uri;

                    string[] acceptLocalVars = new string[] {
                        "text/plain"
                    };

                    string? acceptLocalVar = ClientUtils.SelectHeaderAccept(acceptLocalVars);

                    if (acceptLocalVar != null)
                        httpRequestMessageLocalVar.Headers.Accept.Add(new MediaTypeWithQualityHeaderValue(acceptLocalVar));

                    httpRequestMessageLocalVar.Method = HttpMethod.Get;

                    DateTime requestedAtLocalVar = DateTime.UtcNow;

                    using (HttpResponseMessage httpResponseMessageLocalVar = await HttpClient.SendAsync(httpRequestMessageLocalVar, cancellationToken).ConfigureAwait(false))
                    {
                        string responseContentLocalVar = await httpResponseMessageLocalVar.Content.ReadAsStringAsync(cancellationToken).ConfigureAwait(false);

                        ILogger<EncounterConditionListApiResponse> apiResponseLoggerLocalVar = LoggerFactory.CreateLogger<EncounterConditionListApiResponse>();

                        EncounterConditionListApiResponse apiResponseLocalVar = new(apiResponseLoggerLocalVar, httpRequestMessageLocalVar, httpResponseMessageLocalVar, responseContentLocalVar, "/api/v2/encounter-condition/", requestedAtLocalVar, _jsonSerializerOptions);

                        AfterEncounterConditionListDefaultImplementation(apiResponseLocalVar, limit, offset);

                        Events.ExecuteOnEncounterConditionList(apiResponseLocalVar);

                        return apiResponseLocalVar;
                    }
                }
            }
            catch(Exception e)
            {
                OnErrorEncounterConditionListDefaultImplementation(e, "/api/v2/encounter-condition/", uriBuilderLocalVar.Path, limit, offset);
                Events.ExecuteOnErrorEncounterConditionList(e);
                throw;
            }
        }

        /// <summary>
        /// The <see cref="EncounterConditionListApiResponse"/>
        /// </summary>
        public partial class EncounterConditionListApiResponse : Org.OpenAPITools.Client.ApiResponse, IEncounterConditionListApiResponse
        {
            /// <summary>
            /// The logger
            /// </summary>
            public ILogger<EncounterConditionListApiResponse> Logger { get; }

            /// <summary>
            /// The <see cref="EncounterConditionListApiResponse"/>
            /// </summary>
            /// <param name="logger"></param>
            /// <param name="httpRequestMessage"></param>
            /// <param name="httpResponseMessage"></param>
            /// <param name="rawContent"></param>
            /// <param name="path"></param>
            /// <param name="requestedAt"></param>
            /// <param name="jsonSerializerOptions"></param>
            public EncounterConditionListApiResponse(ILogger<EncounterConditionListApiResponse> logger, System.Net.Http.HttpRequestMessage httpRequestMessage, System.Net.Http.HttpResponseMessage httpResponseMessage, string rawContent, string path, DateTime requestedAt, System.Text.Json.JsonSerializerOptions jsonSerializerOptions) : base(httpRequestMessage, httpResponseMessage, rawContent, path, requestedAt, jsonSerializerOptions)
            {
                Logger = logger;
                OnCreated(httpRequestMessage, httpResponseMessage);
            }

            partial void OnCreated(global::System.Net.Http.HttpRequestMessage httpRequestMessage, System.Net.Http.HttpResponseMessage httpResponseMessage);

            /// <summary>
            /// Returns true if the response is the default response type
            /// </summary>
            /// <returns></returns>
            public bool IsDefault => true;

            /// <summary>
            /// Deserializes the response if the response is 0 Default
            /// </summary>
            /// <returns></returns>
            public string? Default()
            {
                // This logic may be modified with the AsModel.mustache template
                return IsDefault
                    ? System.Text.Json.JsonSerializer.Deserialize<string>(RawContent, _jsonSerializerOptions)
                    : null;
            }

            /// <summary>
            /// Returns true if the response is 0 Default and the deserialized response is not null
            /// </summary>
            /// <param name="result"></param>
            /// <returns></returns>
            public bool TryDefault([NotNullWhen(true)]out string? result)
            {
                result = null;

                try
                {
                    result = Default();
                } catch (Exception e)
                {
                    OnDeserializationErrorDefaultImplementation(e, (HttpStatusCode)0);
                }

                return result != null;
            }

            private void OnDeserializationErrorDefaultImplementation(Exception exception, HttpStatusCode httpStatusCode)
            {
                bool suppressDefaultLog = false;
                OnDeserializationError(ref suppressDefaultLog, exception, httpStatusCode);
                if (!suppressDefaultLog)
                    Logger.LogError(exception, "An error occurred while deserializing the {code} response.", httpStatusCode);
            }

            partial void OnDeserializationError(ref bool suppressDefaultLog, Exception exception, HttpStatusCode httpStatusCode);
        }

        partial void FormatEncounterConditionRead(ref int id);

        /// <summary>
        /// Processes the server response
        /// </summary>
        /// <param name="apiResponseLocalVar"></param>
        /// <param name="id"></param>
        private void AfterEncounterConditionReadDefaultImplementation(IEncounterConditionReadApiResponse apiResponseLocalVar, int id)
        {
            bool suppressDefaultLog = false;
            AfterEncounterConditionRead(ref suppressDefaultLog, apiResponseLocalVar, id);
            if (!suppressDefaultLog)
                Logger.LogInformation("{0,-9} | {1} | {3}", (apiResponseLocalVar.DownloadedAt - apiResponseLocalVar.RequestedAt).TotalSeconds, apiResponseLocalVar.StatusCode, apiResponseLocalVar.Path);
        }

        /// <summary>
        /// Processes the server response
        /// </summary>
        /// <param name="suppressDefaultLog"></param>
        /// <param name="apiResponseLocalVar"></param>
        /// <param name="id"></param>
        partial void AfterEncounterConditionRead(ref bool suppressDefaultLog, IEncounterConditionReadApiResponse apiResponseLocalVar, int id);

        /// <summary>
        /// Logs exceptions that occur while retrieving the server response
        /// </summary>
        /// <param name="exceptionLocalVar"></param>
        /// <param name="pathFormatLocalVar"></param>
        /// <param name="pathLocalVar"></param>
        /// <param name="id"></param>
        private void OnErrorEncounterConditionReadDefaultImplementation(Exception exceptionLocalVar, string pathFormatLocalVar, string pathLocalVar, int id)
        {
            bool suppressDefaultLogLocalVar = false;
            OnErrorEncounterConditionRead(ref suppressDefaultLogLocalVar, exceptionLocalVar, pathFormatLocalVar, pathLocalVar, id);
            if (!suppressDefaultLogLocalVar)
                Logger.LogError(exceptionLocalVar, "An error occurred while sending the request to the server.");
        }

        /// <summary>
        /// A partial method that gives developers a way to provide customized exception handling
        /// </summary>
        /// <param name="suppressDefaultLogLocalVar"></param>
        /// <param name="exceptionLocalVar"></param>
        /// <param name="pathFormatLocalVar"></param>
        /// <param name="pathLocalVar"></param>
        /// <param name="id"></param>
        partial void OnErrorEncounterConditionRead(ref bool suppressDefaultLogLocalVar, Exception exceptionLocalVar, string pathFormatLocalVar, string pathLocalVar, int id);

        /// <summary>
        ///  
        /// </summary>
        /// <param name="id"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionReadApiResponse"/>&gt;</returns>
        public async Task<IEncounterConditionReadApiResponse?> EncounterConditionReadOrDefaultAsync(int id, System.Threading.CancellationToken cancellationToken = default)
        {
            try
            {
                return await EncounterConditionReadAsync(id, cancellationToken).ConfigureAwait(false);
            }
            catch (Exception)
            {
                return null;
            }
        }

        /// <summary>
        ///  
        /// </summary>
        /// <exception cref="ApiException">Thrown when fails to make API call</exception>
        /// <param name="id"></param>
        /// <param name="cancellationToken">Cancellation Token to cancel the request.</param>
        /// <returns><see cref="Task"/>&lt;<see cref="IEncounterConditionReadApiResponse"/>&gt;</returns>
        public async Task<IEncounterConditionReadApiResponse> EncounterConditionReadAsync(int id, System.Threading.CancellationToken cancellationToken = default)
        {
            UriBuilder uriBuilderLocalVar = new UriBuilder();

            try
            {
                FormatEncounterConditionRead(ref id);

                using (HttpRequestMessage httpRequestMessageLocalVar = new HttpRequestMessage())
                {
                    uriBuilderLocalVar.Host = HttpClient.BaseAddress!.Host;
                    uriBuilderLocalVar.Port = HttpClient.BaseAddress.Port;
                    uriBuilderLocalVar.Scheme = HttpClient.BaseAddress.Scheme;
                    uriBuilderLocalVar.Path = ClientUtils.CONTEXT_PATH + "/api/v2/encounter-condition/{id}/";
                    uriBuilderLocalVar.Path = uriBuilderLocalVar.Path.Replace("%7Bid%7D", Uri.EscapeDataString(id.ToString()));

                    httpRequestMessageLocalVar.RequestUri = uriBuilderLocalVar.Uri;

                    string[] acceptLocalVars = new string[] {
                        "text/plain"
                    };

                    string? acceptLocalVar = ClientUtils.SelectHeaderAccept(acceptLocalVars);

                    if (acceptLocalVar != null)
                        httpRequestMessageLocalVar.Headers.Accept.Add(new MediaTypeWithQualityHeaderValue(acceptLocalVar));

                    httpRequestMessageLocalVar.Method = HttpMethod.Get;

                    DateTime requestedAtLocalVar = DateTime.UtcNow;

                    using (HttpResponseMessage httpResponseMessageLocalVar = await HttpClient.SendAsync(httpRequestMessageLocalVar, cancellationToken).ConfigureAwait(false))
                    {
                        string responseContentLocalVar = await httpResponseMessageLocalVar.Content.ReadAsStringAsync(cancellationToken).ConfigureAwait(false);

                        ILogger<EncounterConditionReadApiResponse> apiResponseLoggerLocalVar = LoggerFactory.CreateLogger<EncounterConditionReadApiResponse>();

                        EncounterConditionReadApiResponse apiResponseLocalVar = new(apiResponseLoggerLocalVar, httpRequestMessageLocalVar, httpResponseMessageLocalVar, responseContentLocalVar, "/api/v2/encounter-condition/{id}/", requestedAtLocalVar, _jsonSerializerOptions);

                        AfterEncounterConditionReadDefaultImplementation(apiResponseLocalVar, id);

                        Events.ExecuteOnEncounterConditionRead(apiResponseLocalVar);

                        return apiResponseLocalVar;
                    }
                }
            }
            catch(Exception e)
            {
                OnErrorEncounterConditionReadDefaultImplementation(e, "/api/v2/encounter-condition/{id}/", uriBuilderLocalVar.Path, id);
                Events.ExecuteOnErrorEncounterConditionRead(e);
                throw;
            }
        }

        /// <summary>
        /// The <see cref="EncounterConditionReadApiResponse"/>
        /// </summary>
        public partial class EncounterConditionReadApiResponse : Org.OpenAPITools.Client.ApiResponse, IEncounterConditionReadApiResponse
        {
            /// <summary>
            /// The logger
            /// </summary>
            public ILogger<EncounterConditionReadApiResponse> Logger { get; }

            /// <summary>
            /// The <see cref="EncounterConditionReadApiResponse"/>
            /// </summary>
            /// <param name="logger"></param>
            /// <param name="httpRequestMessage"></param>
            /// <param name="httpResponseMessage"></param>
            /// <param name="rawContent"></param>
            /// <param name="path"></param>
            /// <param name="requestedAt"></param>
            /// <param name="jsonSerializerOptions"></param>
            public EncounterConditionReadApiResponse(ILogger<EncounterConditionReadApiResponse> logger, System.Net.Http.HttpRequestMessage httpRequestMessage, System.Net.Http.HttpResponseMessage httpResponseMessage, string rawContent, string path, DateTime requestedAt, System.Text.Json.JsonSerializerOptions jsonSerializerOptions) : base(httpRequestMessage, httpResponseMessage, rawContent, path, requestedAt, jsonSerializerOptions)
            {
                Logger = logger;
                OnCreated(httpRequestMessage, httpResponseMessage);
            }

            partial void OnCreated(global::System.Net.Http.HttpRequestMessage httpRequestMessage, System.Net.Http.HttpResponseMessage httpResponseMessage);

            /// <summary>
            /// Returns true if the response is the default response type
            /// </summary>
            /// <returns></returns>
            public bool IsDefault => true;

            /// <summary>
            /// Deserializes the response if the response is 0 Default
            /// </summary>
            /// <returns></returns>
            public string? Default()
            {
                // This logic may be modified with the AsModel.mustache template
                return IsDefault
                    ? System.Text.Json.JsonSerializer.Deserialize<string>(RawContent, _jsonSerializerOptions)
                    : null;
            }

            /// <summary>
            /// Returns true if the response is 0 Default and the deserialized response is not null
            /// </summary>
            /// <param name="result"></param>
            /// <returns></returns>
            public bool TryDefault([NotNullWhen(true)]out string? result)
            {
                result = null;

                try
                {
                    result = Default();
                } catch (Exception e)
                {
                    OnDeserializationErrorDefaultImplementation(e, (HttpStatusCode)0);
                }

                return result != null;
            }

            private void OnDeserializationErrorDefaultImplementation(Exception exception, HttpStatusCode httpStatusCode)
            {
                bool suppressDefaultLog = false;
                OnDeserializationError(ref suppressDefaultLog, exception, httpStatusCode);
                if (!suppressDefaultLog)
                    Logger.LogError(exception, "An error occurred while deserializing the {code} response.", httpStatusCode);
            }

            partial void OnDeserializationError(ref bool suppressDefaultLog, Exception exception, HttpStatusCode httpStatusCode);
        }
    }
}
