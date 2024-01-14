=begin
#

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah@cliffano.com
Generated by: https://openapi-generator.tech
OpenAPI Generator version: 7.2.0

=end

require 'spec_helper'
require 'json'

# Unit tests for PokeApiClient::BerryFlavorApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'BerryFlavorApi' do
  before do
    # run before each test
    @api_instance = PokeApiClient::BerryFlavorApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of BerryFlavorApi' do
    it 'should create an instance of BerryFlavorApi' do
      expect(@api_instance).to be_instance_of(PokeApiClient::BerryFlavorApi)
    end
  end

  # unit tests for berry_flavor_list
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :limit 
  # @option opts [Integer] :offset 
  # @return [String]
  describe 'berry_flavor_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for berry_flavor_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe 'berry_flavor_read test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
