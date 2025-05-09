# OpenAPIServer
No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

This [Symfony](https://symfony.com/) bundle is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 20220523
- Generator version: 7.12.0
- Build package: org.openapitools.codegen.languages.PhpSymfonyServerCodegen
For more information, please visit [https://github.com/oapicf/pokeapi-clients](https://github.com/oapicf/pokeapi-clients)

## Requirements

PHP 8.0 and later

## Installation & Usage

To install the dependencies via [Composer](http://getcomposer.org/), add the following repository to `composer.json` of your Symfony project:

```json
{
    "repositories": [{
        "type": "path",
        "url": "//Path to your generated openapi bundle"
    }],
}
```

Then run:

```
composer require oapicf/pokeapi-clients:dev-master
```

to add the generated openapi bundle as a dependency.

## Tests

To run the unit tests for the generated bundle, first navigate to the directory containing the code, then run the following commands:

```
composer install
./vendor/bin/phpunit
```


## Getting Started

Step 1: Please follow the [installation procedure](#installation--usage) first.

Step 2: Enable the bundle in the bundle configuration:

```php
// app/config/bundles.php
return [
    // ...
    OpenAPI\Server\OpenAPIServerBundle::class => ['all' => true],
];
```

Step 3: Register the routes:

```yaml
# app/config/routes.yaml
open_api_server:
    resource: "@OpenAPIServerBundle/Resources/config/routing.yaml"
```

Step 4: Implement the API calls:

```php
<?php
// src/Acme/MyBundle/Api/AbilityApi.php

namespace Acme\MyBundle\Api;

use OpenAPI\Server\Api\AbilityApiInterface;

class AbilityApi implements AbilityApiInterface // An interface is autogenerated
{

    // Other operation methods ...
}
```

Step 5: Tag your API implementation:

```yaml
# config/services.yaml
services:
    # ...
    Acme\MyBundle\Api\AbilityApi:
        tags:
            - { name: "open_api_server.api", api: "ability" }
    # ...
```

Now you can start using the bundle!


## Documentation for API Endpoints

All URIs are relative to *https://pokeapi.co*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AbilityApiInterface* | [**abilityList**](docs/Api/AbilityApiInterface.md#abilitylist) | **GET** /api/v2/ability/ | 
*AbilityApiInterface* | [**abilityRead**](docs/Api/AbilityApiInterface.md#abilityread) | **GET** /api/v2/ability/{id}/ | 
*BerryApiInterface* | [**berryList**](docs/Api/BerryApiInterface.md#berrylist) | **GET** /api/v2/berry/ | 
*BerryApiInterface* | [**berryRead**](docs/Api/BerryApiInterface.md#berryread) | **GET** /api/v2/berry/{id}/ | 
*BerryFirmnessApiInterface* | [**berryFirmnessList**](docs/Api/BerryFirmnessApiInterface.md#berryfirmnesslist) | **GET** /api/v2/berry-firmness/ | 
*BerryFirmnessApiInterface* | [**berryFirmnessRead**](docs/Api/BerryFirmnessApiInterface.md#berryfirmnessread) | **GET** /api/v2/berry-firmness/{id}/ | 
*BerryFlavorApiInterface* | [**berryFlavorList**](docs/Api/BerryFlavorApiInterface.md#berryflavorlist) | **GET** /api/v2/berry-flavor/ | 
*BerryFlavorApiInterface* | [**berryFlavorRead**](docs/Api/BerryFlavorApiInterface.md#berryflavorread) | **GET** /api/v2/berry-flavor/{id}/ | 
*CharacteristicApiInterface* | [**characteristicList**](docs/Api/CharacteristicApiInterface.md#characteristiclist) | **GET** /api/v2/characteristic/ | 
*CharacteristicApiInterface* | [**characteristicRead**](docs/Api/CharacteristicApiInterface.md#characteristicread) | **GET** /api/v2/characteristic/{id}/ | 
*ContestEffectApiInterface* | [**contestEffectList**](docs/Api/ContestEffectApiInterface.md#contesteffectlist) | **GET** /api/v2/contest-effect/ | 
*ContestEffectApiInterface* | [**contestEffectRead**](docs/Api/ContestEffectApiInterface.md#contesteffectread) | **GET** /api/v2/contest-effect/{id}/ | 
*ContestTypeApiInterface* | [**contestTypeList**](docs/Api/ContestTypeApiInterface.md#contesttypelist) | **GET** /api/v2/contest-type/ | 
*ContestTypeApiInterface* | [**contestTypeRead**](docs/Api/ContestTypeApiInterface.md#contesttyperead) | **GET** /api/v2/contest-type/{id}/ | 
*EggGroupApiInterface* | [**eggGroupList**](docs/Api/EggGroupApiInterface.md#egggrouplist) | **GET** /api/v2/egg-group/ | 
*EggGroupApiInterface* | [**eggGroupRead**](docs/Api/EggGroupApiInterface.md#egggroupread) | **GET** /api/v2/egg-group/{id}/ | 
*EncounterConditionApiInterface* | [**encounterConditionList**](docs/Api/EncounterConditionApiInterface.md#encounterconditionlist) | **GET** /api/v2/encounter-condition/ | 
*EncounterConditionApiInterface* | [**encounterConditionRead**](docs/Api/EncounterConditionApiInterface.md#encounterconditionread) | **GET** /api/v2/encounter-condition/{id}/ | 
*EncounterConditionValueApiInterface* | [**encounterConditionValueList**](docs/Api/EncounterConditionValueApiInterface.md#encounterconditionvaluelist) | **GET** /api/v2/encounter-condition-value/ | 
*EncounterConditionValueApiInterface* | [**encounterConditionValueRead**](docs/Api/EncounterConditionValueApiInterface.md#encounterconditionvalueread) | **GET** /api/v2/encounter-condition-value/{id}/ | 
*EncounterMethodApiInterface* | [**encounterMethodList**](docs/Api/EncounterMethodApiInterface.md#encountermethodlist) | **GET** /api/v2/encounter-method/ | 
*EncounterMethodApiInterface* | [**encounterMethodRead**](docs/Api/EncounterMethodApiInterface.md#encountermethodread) | **GET** /api/v2/encounter-method/{id}/ | 
*EvolutionChainApiInterface* | [**evolutionChainList**](docs/Api/EvolutionChainApiInterface.md#evolutionchainlist) | **GET** /api/v2/evolution-chain/ | 
*EvolutionChainApiInterface* | [**evolutionChainRead**](docs/Api/EvolutionChainApiInterface.md#evolutionchainread) | **GET** /api/v2/evolution-chain/{id}/ | 
*EvolutionTriggerApiInterface* | [**evolutionTriggerList**](docs/Api/EvolutionTriggerApiInterface.md#evolutiontriggerlist) | **GET** /api/v2/evolution-trigger/ | 
*EvolutionTriggerApiInterface* | [**evolutionTriggerRead**](docs/Api/EvolutionTriggerApiInterface.md#evolutiontriggerread) | **GET** /api/v2/evolution-trigger/{id}/ | 
*GenderApiInterface* | [**genderList**](docs/Api/GenderApiInterface.md#genderlist) | **GET** /api/v2/gender/ | 
*GenderApiInterface* | [**genderRead**](docs/Api/GenderApiInterface.md#genderread) | **GET** /api/v2/gender/{id}/ | 
*GenerationApiInterface* | [**generationList**](docs/Api/GenerationApiInterface.md#generationlist) | **GET** /api/v2/generation/ | 
*GenerationApiInterface* | [**generationRead**](docs/Api/GenerationApiInterface.md#generationread) | **GET** /api/v2/generation/{id}/ | 
*GrowthRateApiInterface* | [**growthRateList**](docs/Api/GrowthRateApiInterface.md#growthratelist) | **GET** /api/v2/growth-rate/ | 
*GrowthRateApiInterface* | [**growthRateRead**](docs/Api/GrowthRateApiInterface.md#growthrateread) | **GET** /api/v2/growth-rate/{id}/ | 
*ItemApiInterface* | [**itemList**](docs/Api/ItemApiInterface.md#itemlist) | **GET** /api/v2/item/ | 
*ItemApiInterface* | [**itemRead**](docs/Api/ItemApiInterface.md#itemread) | **GET** /api/v2/item/{id}/ | 
*ItemAttributeApiInterface* | [**itemAttributeList**](docs/Api/ItemAttributeApiInterface.md#itemattributelist) | **GET** /api/v2/item-attribute/ | 
*ItemAttributeApiInterface* | [**itemAttributeRead**](docs/Api/ItemAttributeApiInterface.md#itemattributeread) | **GET** /api/v2/item-attribute/{id}/ | 
*ItemCategoryApiInterface* | [**itemCategoryList**](docs/Api/ItemCategoryApiInterface.md#itemcategorylist) | **GET** /api/v2/item-category/ | 
*ItemCategoryApiInterface* | [**itemCategoryRead**](docs/Api/ItemCategoryApiInterface.md#itemcategoryread) | **GET** /api/v2/item-category/{id}/ | 
*ItemFlingEffectApiInterface* | [**itemFlingEffectList**](docs/Api/ItemFlingEffectApiInterface.md#itemflingeffectlist) | **GET** /api/v2/item-fling-effect/ | 
*ItemFlingEffectApiInterface* | [**itemFlingEffectRead**](docs/Api/ItemFlingEffectApiInterface.md#itemflingeffectread) | **GET** /api/v2/item-fling-effect/{id}/ | 
*ItemPocketApiInterface* | [**itemPocketList**](docs/Api/ItemPocketApiInterface.md#itempocketlist) | **GET** /api/v2/item-pocket/ | 
*ItemPocketApiInterface* | [**itemPocketRead**](docs/Api/ItemPocketApiInterface.md#itempocketread) | **GET** /api/v2/item-pocket/{id}/ | 
*LanguageApiInterface* | [**languageList**](docs/Api/LanguageApiInterface.md#languagelist) | **GET** /api/v2/language/ | 
*LanguageApiInterface* | [**languageRead**](docs/Api/LanguageApiInterface.md#languageread) | **GET** /api/v2/language/{id}/ | 
*LocationApiInterface* | [**locationList**](docs/Api/LocationApiInterface.md#locationlist) | **GET** /api/v2/location/ | 
*LocationApiInterface* | [**locationRead**](docs/Api/LocationApiInterface.md#locationread) | **GET** /api/v2/location/{id}/ | 
*LocationAreaApiInterface* | [**locationAreaList**](docs/Api/LocationAreaApiInterface.md#locationarealist) | **GET** /api/v2/location-area/ | 
*LocationAreaApiInterface* | [**locationAreaRead**](docs/Api/LocationAreaApiInterface.md#locationarearead) | **GET** /api/v2/location-area/{id}/ | 
*MachineApiInterface* | [**machineList**](docs/Api/MachineApiInterface.md#machinelist) | **GET** /api/v2/machine/ | 
*MachineApiInterface* | [**machineRead**](docs/Api/MachineApiInterface.md#machineread) | **GET** /api/v2/machine/{id}/ | 
*MoveApiInterface* | [**moveList**](docs/Api/MoveApiInterface.md#movelist) | **GET** /api/v2/move/ | 
*MoveApiInterface* | [**moveRead**](docs/Api/MoveApiInterface.md#moveread) | **GET** /api/v2/move/{id}/ | 
*MoveAilmentApiInterface* | [**moveAilmentList**](docs/Api/MoveAilmentApiInterface.md#moveailmentlist) | **GET** /api/v2/move-ailment/ | 
*MoveAilmentApiInterface* | [**moveAilmentRead**](docs/Api/MoveAilmentApiInterface.md#moveailmentread) | **GET** /api/v2/move-ailment/{id}/ | 
*MoveBattleStyleApiInterface* | [**moveBattleStyleList**](docs/Api/MoveBattleStyleApiInterface.md#movebattlestylelist) | **GET** /api/v2/move-battle-style/ | 
*MoveBattleStyleApiInterface* | [**moveBattleStyleRead**](docs/Api/MoveBattleStyleApiInterface.md#movebattlestyleread) | **GET** /api/v2/move-battle-style/{id}/ | 
*MoveCategoryApiInterface* | [**moveCategoryList**](docs/Api/MoveCategoryApiInterface.md#movecategorylist) | **GET** /api/v2/move-category/ | 
*MoveCategoryApiInterface* | [**moveCategoryRead**](docs/Api/MoveCategoryApiInterface.md#movecategoryread) | **GET** /api/v2/move-category/{id}/ | 
*MoveDamageClassApiInterface* | [**moveDamageClassList**](docs/Api/MoveDamageClassApiInterface.md#movedamageclasslist) | **GET** /api/v2/move-damage-class/ | 
*MoveDamageClassApiInterface* | [**moveDamageClassRead**](docs/Api/MoveDamageClassApiInterface.md#movedamageclassread) | **GET** /api/v2/move-damage-class/{id}/ | 
*MoveLearnMethodApiInterface* | [**moveLearnMethodList**](docs/Api/MoveLearnMethodApiInterface.md#movelearnmethodlist) | **GET** /api/v2/move-learn-method/ | 
*MoveLearnMethodApiInterface* | [**moveLearnMethodRead**](docs/Api/MoveLearnMethodApiInterface.md#movelearnmethodread) | **GET** /api/v2/move-learn-method/{id}/ | 
*MoveTargetApiInterface* | [**moveTargetList**](docs/Api/MoveTargetApiInterface.md#movetargetlist) | **GET** /api/v2/move-target/ | 
*MoveTargetApiInterface* | [**moveTargetRead**](docs/Api/MoveTargetApiInterface.md#movetargetread) | **GET** /api/v2/move-target/{id}/ | 
*NatureApiInterface* | [**natureList**](docs/Api/NatureApiInterface.md#naturelist) | **GET** /api/v2/nature/ | 
*NatureApiInterface* | [**natureRead**](docs/Api/NatureApiInterface.md#natureread) | **GET** /api/v2/nature/{id}/ | 
*PalParkAreaApiInterface* | [**palParkAreaList**](docs/Api/PalParkAreaApiInterface.md#palparkarealist) | **GET** /api/v2/pal-park-area/ | 
*PalParkAreaApiInterface* | [**palParkAreaRead**](docs/Api/PalParkAreaApiInterface.md#palparkarearead) | **GET** /api/v2/pal-park-area/{id}/ | 
*PokeathlonStatApiInterface* | [**pokeathlonStatList**](docs/Api/PokeathlonStatApiInterface.md#pokeathlonstatlist) | **GET** /api/v2/pokeathlon-stat/ | 
*PokeathlonStatApiInterface* | [**pokeathlonStatRead**](docs/Api/PokeathlonStatApiInterface.md#pokeathlonstatread) | **GET** /api/v2/pokeathlon-stat/{id}/ | 
*PokedexApiInterface* | [**pokedexList**](docs/Api/PokedexApiInterface.md#pokedexlist) | **GET** /api/v2/pokedex/ | 
*PokedexApiInterface* | [**pokedexRead**](docs/Api/PokedexApiInterface.md#pokedexread) | **GET** /api/v2/pokedex/{id}/ | 
*PokemonApiInterface* | [**pokemonList**](docs/Api/PokemonApiInterface.md#pokemonlist) | **GET** /api/v2/pokemon/ | 
*PokemonApiInterface* | [**pokemonRead**](docs/Api/PokemonApiInterface.md#pokemonread) | **GET** /api/v2/pokemon/{id}/ | 
*PokemonColorApiInterface* | [**pokemonColorList**](docs/Api/PokemonColorApiInterface.md#pokemoncolorlist) | **GET** /api/v2/pokemon-color/ | 
*PokemonColorApiInterface* | [**pokemonColorRead**](docs/Api/PokemonColorApiInterface.md#pokemoncolorread) | **GET** /api/v2/pokemon-color/{id}/ | 
*PokemonFormApiInterface* | [**pokemonFormList**](docs/Api/PokemonFormApiInterface.md#pokemonformlist) | **GET** /api/v2/pokemon-form/ | 
*PokemonFormApiInterface* | [**pokemonFormRead**](docs/Api/PokemonFormApiInterface.md#pokemonformread) | **GET** /api/v2/pokemon-form/{id}/ | 
*PokemonHabitatApiInterface* | [**pokemonHabitatList**](docs/Api/PokemonHabitatApiInterface.md#pokemonhabitatlist) | **GET** /api/v2/pokemon-habitat/ | 
*PokemonHabitatApiInterface* | [**pokemonHabitatRead**](docs/Api/PokemonHabitatApiInterface.md#pokemonhabitatread) | **GET** /api/v2/pokemon-habitat/{id}/ | 
*PokemonShapeApiInterface* | [**pokemonShapeList**](docs/Api/PokemonShapeApiInterface.md#pokemonshapelist) | **GET** /api/v2/pokemon-shape/ | 
*PokemonShapeApiInterface* | [**pokemonShapeRead**](docs/Api/PokemonShapeApiInterface.md#pokemonshaperead) | **GET** /api/v2/pokemon-shape/{id}/ | 
*PokemonSpeciesApiInterface* | [**pokemonSpeciesList**](docs/Api/PokemonSpeciesApiInterface.md#pokemonspecieslist) | **GET** /api/v2/pokemon-species/ | 
*PokemonSpeciesApiInterface* | [**pokemonSpeciesRead**](docs/Api/PokemonSpeciesApiInterface.md#pokemonspeciesread) | **GET** /api/v2/pokemon-species/{id}/ | 
*RegionApiInterface* | [**regionList**](docs/Api/RegionApiInterface.md#regionlist) | **GET** /api/v2/region/ | 
*RegionApiInterface* | [**regionRead**](docs/Api/RegionApiInterface.md#regionread) | **GET** /api/v2/region/{id}/ | 
*StatApiInterface* | [**statList**](docs/Api/StatApiInterface.md#statlist) | **GET** /api/v2/stat/ | 
*StatApiInterface* | [**statRead**](docs/Api/StatApiInterface.md#statread) | **GET** /api/v2/stat/{id}/ | 
*SuperContestEffectApiInterface* | [**superContestEffectList**](docs/Api/SuperContestEffectApiInterface.md#supercontesteffectlist) | **GET** /api/v2/super-contest-effect/ | 
*SuperContestEffectApiInterface* | [**superContestEffectRead**](docs/Api/SuperContestEffectApiInterface.md#supercontesteffectread) | **GET** /api/v2/super-contest-effect/{id}/ | 
*TypeApiInterface* | [**typeList**](docs/Api/TypeApiInterface.md#typelist) | **GET** /api/v2/type/ | 
*TypeApiInterface* | [**typeRead**](docs/Api/TypeApiInterface.md#typeread) | **GET** /api/v2/type/{id}/ | 
*VersionApiInterface* | [**versionList**](docs/Api/VersionApiInterface.md#versionlist) | **GET** /api/v2/version/ | 
*VersionApiInterface* | [**versionRead**](docs/Api/VersionApiInterface.md#versionread) | **GET** /api/v2/version/{id}/ | 
*VersionGroupApiInterface* | [**versionGroupList**](docs/Api/VersionGroupApiInterface.md#versiongrouplist) | **GET** /api/v2/version-group/ | 
*VersionGroupApiInterface* | [**versionGroupRead**](docs/Api/VersionGroupApiInterface.md#versiongroupread) | **GET** /api/v2/version-group/{id}/ | 


## Documentation For Models



## Documentation For Authorization

Endpoints do not require authorization.


## Author

blah+oapicf@cliffano.com

