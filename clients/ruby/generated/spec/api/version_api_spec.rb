=begin
#

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah+oapicf@cliffano.com
Generated by: https://openapi-generator.tech
Generator version: 7.9.0

=end

require 'spec_helper'
require 'json'

# Unit tests for PokeApiClient::VersionApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'VersionApi' do
  before do
    # run before each test
    @api_instance = PokeApiClient::VersionApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of VersionApi' do
    it 'should create an instance of VersionApi' do
      expect(@api_instance).to be_instance_of(PokeApiClient::VersionApi)
    end
  end

  # unit tests for version_list
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :limit 
  # @option opts [Integer] :offset 
  # @return [String]
  describe 'version_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for version_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe 'version_read test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
