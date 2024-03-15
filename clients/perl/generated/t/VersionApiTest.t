=begin comment



No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 20220523
Contact: blah+oapicf@cliffano.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator
# Please update the test cases below to test the API endpoints.
# Ref: https://openapi-generator.tech
#
use Test::More;
use Test::Exception;

use lib 'lib';
use strict;
use warnings;

use_ok('WWW::OpenAPIClient::VersionApi');

my $api = WWW::OpenAPIClient::VersionApi->new();
isa_ok($api, 'WWW::OpenAPIClient::VersionApi');

#
# version_list test
#
# uncomment below and update the test
#my $version_list_limit = undef; # replace NULL with a proper value
#my $version_list_offset = undef; # replace NULL with a proper value
#my $version_list_result = $api->version_list(limit => $version_list_limit, offset => $version_list_offset);

#
# version_read test
#
# uncomment below and update the test
#my $version_read_id = undef; # replace NULL with a proper value
#my $version_read_result = $api->version_read(id => $version_read_id);


done_testing();
