# #
#
##No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
#The version of the OpenAPI document: 20220523
#Contact: blah+oapicf@cliffano.com
#Generated by: https://openapi-generator.tech
#Generator version: 7.6.0
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for OpenAPIClient::GrowthRateApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "GrowthRateApi" do
  describe "test an instance of GrowthRateApi" do
    it "should create an instance of GrowthRateApi" do
      api_instance = OpenAPIClient::GrowthRateApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::GrowthRateApi)
    end
  end

  # unit tests for growth_rate_list
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :limit 
  # @option opts [Int32] :offset 
  # @return [String]
  describe "growth_rate_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for growth_rate_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe "growth_rate_read test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
