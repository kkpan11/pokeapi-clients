# #
#
##No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
#The version of the OpenAPI document: 20220523
#Contact: blah@cliffano.com
#Generated by: https://openapi-generator.tech
#OpenAPI Generator version: 7.2.0
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for OpenAPIClient::NatureApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "NatureApi" do
  describe "test an instance of NatureApi" do
    it "should create an instance of NatureApi" do
      api_instance = OpenAPIClient::NatureApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::NatureApi)
    end
  end

  # unit tests for nature_list
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :limit 
  # @option opts [Int32] :offset 
  # @return [String]
  describe "nature_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for nature_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe "nature_read test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
