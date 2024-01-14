import unittest

from flask import json

from openapi_server.test import BaseTestCase


class TestEncounterMethodController(BaseTestCase):
    """EncounterMethodController integration test stubs"""

    def test_encounter_method_list(self):
        """Test case for encounter_method_list

        
        """
        query_string = [('limit', 56),
                        ('offset', 56)]
        headers = { 
            'Accept': 'text/plain',
        }
        response = self.client.open(
            '/api/v2/encounter-method/',
            method='GET',
            headers=headers,
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_encounter_method_read(self):
        """Test case for encounter_method_read

        
        """
        headers = { 
            'Accept': 'text/plain',
        }
        response = self.client.open(
            '/api/v2/encounter-method/{id}'.format(id=56),
            method='GET',
            headers=headers)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    unittest.main()
