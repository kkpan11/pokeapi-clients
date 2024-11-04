# -*- encoding: utf-8 -*-

=begin
#

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah+oapicf@cliffano.com
Generated by: https://openapi-generator.tech
Generator version: 7.9.0

=end

$:.push File.expand_path("../lib", __FILE__)
require "pokeapi_client/version"

Gem::Specification.new do |s|
  s.name        = "pokeapi_client"
  s.version     = PokeApiClient::VERSION
  s.platform    = Gem::Platform::RUBY
  s.authors     = ["OpenAPI Clients Factory"]
  s.email       = ["blah+oapicf@cliffano.com"]
  s.homepage    = "https://github.com/oapicf/pokeapi-clients"
  s.summary     = " Ruby Gem"
  s.description = "No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)"
  s.license     = "MIT"
  s.required_ruby_version = ">= 2.0"
  s.metadata    = {}

  s.add_runtime_dependency 'typhoeus', '~> 1.0', '>= 1.0.1'

  s.add_development_dependency 'rspec', '~> 3.6', '>= 3.6.0'

  s.files         = `find *`.split("\n").uniq.sort.select { |f| !f.empty? }
  s.test_files    = `find spec/*`.split("\n")
  s.executables   = []
  s.require_paths = ["lib"]
end
