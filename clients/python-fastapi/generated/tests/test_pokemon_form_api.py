# coding: utf-8

from fastapi.testclient import TestClient




def test_pokemon_form_list(client: TestClient):
    """Test case for pokemon_form_list

    
    """
    params = [("limit", 56),     ("offset", 56)]
    headers = {
    }
    # uncomment below to make a request
    #response = client.request(
    #    "GET",
    #    "/api/v2/pokemon-form/",
    #    headers=headers,
    #    params=params,
    #)

    # uncomment below to assert the status code of the HTTP response
    #assert response.status_code == 200


def test_pokemon_form_read(client: TestClient):
    """Test case for pokemon_form_read

    
    """

    headers = {
    }
    # uncomment below to make a request
    #response = client.request(
    #    "GET",
    #    "/api/v2/pokemon-form/{id}/".format(id=56),
    #    headers=headers,
    #)

    # uncomment below to assert the status code of the HTTP response
    #assert response.status_code == 200

