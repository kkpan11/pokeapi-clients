# coding: utf-8

from __future__ import absolute_import

from flask import json
from io import BytesIO

from openapi_server.test import BaseTestCase


class TestEncounterConditionController(BaseTestCase):
    """EncounterConditionController integration test stubs"""

    def test_encounter_condition_list(self):
        """Test case for encounter_condition_list

        
        """
        query_string = [('limit', 56),
                        ('offset', 56)]
        response = self.client.open(
            '/api/v2/encounter-condition/',
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_encounter_condition_read(self):
        """Test case for encounter_condition_read

        
        """
        response = self.client.open(
            '/api/v2/encounter-condition/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
