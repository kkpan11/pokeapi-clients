note
 description:"[
		
 		No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
  		The version of the OpenAPI document: 20220523
 	    Contact: blah+oapicf@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"

class
	ENCOUNTERCONDITIONVALUE_API

inherit

    API_I


feature -- API Access


	encounter_condition_value_list (limit: INTEGER_32; offset: INTEGER_32): detachable STRING_32
			-- 
			-- 
			-- 
			-- argument: limit  (optional, default to null)
			-- 
			-- argument: offset  (optional, default to null)
			-- 
			-- 
			-- Result STRING_32
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/api/v2/encounter-condition-value/"
			l_request.fill_query_params(api_client.parameter_to_tuple("", "limit", limit));
			l_request.fill_query_params(api_client.parameter_to_tuple("", "offset", offset));


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"text/plain">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<>>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { STRING_32 } l_response.data ({ STRING_32 }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end

	encounter_condition_value_read (id: INTEGER_32): detachable STRING_32
			-- 
			-- 
			-- 
			-- argument: id  (required)
			-- 
			-- 
			-- Result STRING_32
		require
		local
  			l_path: STRING
  			l_request: API_CLIENT_REQUEST
  			l_response: API_CLIENT_RESPONSE
		do
			reset_error
			create l_request
			
			l_path := "/api/v2/encounter-condition-value/{id}/"
			l_path.replace_substring_all ("{"+"id"+"}", api_client.url_encode (id.out))


			if attached {STRING} api_client.select_header_accept ({ARRAY [STRING]}<<"text/plain">>)  as l_accept then
				l_request.add_header(l_accept,"Accept");
			end
			l_request.add_header(api_client.select_header_content_type ({ARRAY [STRING]}<<>>),"Content-Type")
			l_request.set_auth_names ({ARRAY [STRING]}<<>>)
			l_response := api_client.call_api (l_path, "Get", l_request, Void, agent deserializer)
			if l_response.has_error then
				last_error := l_response.error
			elseif attached { STRING_32 } l_response.data ({ STRING_32 }) as l_data then
				Result := l_data
			else
				create last_error.make ("Unknown error: Status response [ " + l_response.status.out + "]")
			end
		end


end
