=begin
#

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah+oapicf@cliffano.com
Generated by: https://openapi-generator.tech
Generator version: 7.4.0

=end

require 'spec_helper'
require 'json'

# Unit tests for PokeApiClient::PokemonSpeciesApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'PokemonSpeciesApi' do
  before do
    # run before each test
    @api_instance = PokeApiClient::PokemonSpeciesApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of PokemonSpeciesApi' do
    it 'should create an instance of PokemonSpeciesApi' do
      expect(@api_instance).to be_instance_of(PokeApiClient::PokemonSpeciesApi)
    end
  end

  # unit tests for pokemon_species_list
  # @param [Hash] opts the optional parameters
  # @option opts [Integer] :limit 
  # @option opts [Integer] :offset 
  # @return [String]
  describe 'pokemon_species_list test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

  # unit tests for pokemon_species_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe 'pokemon_species_read test' do
    it 'should work' do
      # assertion here. ref: https://rspec.info/features/3-12/rspec-expectations/built-in-matchers/
    end
  end

end
