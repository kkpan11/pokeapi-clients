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

# Unit tests for OpenAPIClient::SuperContestEffectApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "SuperContestEffectApi" do
  describe "test an instance of SuperContestEffectApi" do
    it "should create an instance of SuperContestEffectApi" do
      api_instance = OpenAPIClient::SuperContestEffectApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::SuperContestEffectApi)
    end
  end

  # unit tests for super_contest_effect_list
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :limit 
  # @option opts [Int32] :offset 
  # @return [String]
  describe "super_contest_effect_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for super_contest_effect_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe "super_contest_effect_read test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
