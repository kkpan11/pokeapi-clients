# #
#
##No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
#The version of the OpenAPI document: 20220523
#Contact: blah+oapicf@cliffano.com
#Generated by: https://openapi-generator.tech
#Generator version: 7.9.0
#

require "../spec_helper"
require "json"
require "time"

# Unit tests for OpenAPIClient::ItemAttributeApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "ItemAttributeApi" do
  describe "test an instance of ItemAttributeApi" do
    it "should create an instance of ItemAttributeApi" do
      api_instance = OpenAPIClient::ItemAttributeApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::ItemAttributeApi)
    end
  end

  # unit tests for item_attribute_list
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :limit 
  # @option opts [Int32] :offset 
  # @return [String]
  describe "item_attribute_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for item_attribute_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe "item_attribute_read test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
