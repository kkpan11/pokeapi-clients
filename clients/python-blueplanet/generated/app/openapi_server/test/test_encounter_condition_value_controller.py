# coding: utf-8

from __future__ import absolute_import

from flask import json
from io import BytesIO

from openapi_server.test import BaseTestCase


class TestEncounterConditionValueController(BaseTestCase):
    """EncounterConditionValueController integration test stubs"""

    def test_encounter_condition_value_list(self):
        """Test case for encounter_condition_value_list

        
        """
        query_string = [('limit', 56),
                        ('offset', 56)]
        response = self.client.open(
            '/api/v2/encounter-condition-value/',
            method='GET',
            query_string=query_string)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_encounter_condition_value_read(self):
        """Test case for encounter_condition_value_read

        
        """
        response = self.client.open(
            '/api/v2/encounter-condition-value/{id}'.format(id=56),
            method='GET')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    import unittest
    unittest.main()
