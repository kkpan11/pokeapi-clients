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

# Unit tests for OpenAPIClient::PokemonSpeciesApi
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe "PokemonSpeciesApi" do
  describe "test an instance of PokemonSpeciesApi" do
    it "should create an instance of PokemonSpeciesApi" do
      api_instance = OpenAPIClient::PokemonSpeciesApi.new
      # TODO expect(api_instance).to be_instance_of(OpenAPIClient::PokemonSpeciesApi)
    end
  end

  # unit tests for pokemon_species_list
  # @param [Hash] opts the optional parameters
  # @option opts [Int32] :limit 
  # @option opts [Int32] :offset 
  # @return [String]
  describe "pokemon_species_list test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

  # unit tests for pokemon_species_read
  # @param id 
  # @param [Hash] opts the optional parameters
  # @return [String]
  describe "pokemon_species_read test" do
    it "should work" do
      # assertion here. ref: https://crystal-lang.org/reference/guides/testing.html
    end
  end

end
