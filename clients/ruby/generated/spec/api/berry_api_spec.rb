=begin
#

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah+oapicf@cliffano.com
Generated by: https://openapi-generator.tech
Generator version: 7.6.0

=end

require 'spec_helper'
require 'json'

# Unit tests for PokeApiClient::BerryApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'BerryApi' do
  before do
    # run before each test
    @api_instance = PokeApiClient::BerryApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of BerryApi' do
    it 'should create an instance of BerryApi' do
      expect(@api_instance).to be_instance_of(PokeApiClient::BerryApi)
    end
  end

  # unit tests for berry_list
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :limit 
  # @option opts [Integer] :offset 
  # @return [String]
  describe 'berry_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for berry_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe 'berry_read test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
