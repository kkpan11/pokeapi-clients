# pokeapi-client

PokeapiClient - JavaScript client for pokeapi-client
No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
This SDK is automatically generated by the [OpenAPI Generator](https://openapi-generator.tech) project:

- API version: 20220523
- Package version: 1.1.1-pre.0
- Generator version: 7.12.0
- Build package: org.openapitools.codegen.languages.JavascriptClientCodegen
For more information, please visit [https://github.com/oapicf/pokeapi-clients](https://github.com/oapicf/pokeapi-clients)

## Installation

### For [Node.js](https://nodejs.org/)

#### npm

To publish the library as a [npm](https://www.npmjs.com/), please follow the procedure in ["Publishing npm packages"](https://docs.npmjs.com/getting-started/publishing-npm-packages).

Then install it via:

```shell
npm install pokeapi-client --save
```

Finally, you need to build the module:

```shell
npm run build
```

##### Local development

To use the library locally without publishing to a remote npm registry, first install the dependencies by changing into the directory containing `package.json` (and this README). Let's call this `JAVASCRIPT_CLIENT_DIR`. Then run:

```shell
npm install
```

Next, [link](https://docs.npmjs.com/cli/link) it globally in npm with the following, also from `JAVASCRIPT_CLIENT_DIR`:

```shell
npm link
```

To use the link you just defined in your project, switch to the directory you want to use your pokeapi-client from, and run:

```shell
npm link /path/to/<JAVASCRIPT_CLIENT_DIR>
```

Finally, you need to build the module:

```shell
npm run build
```

#### git

If the library is hosted at a git repository, e.g.https://github.com/oapicf/pokeapi-clients
then install it via:

```shell
    npm install oapicf/pokeapi-clients --save
```

### For browser

The library also works in the browser environment via npm and [browserify](http://browserify.org/). After following
the above steps with Node.js and installing browserify with `npm install -g browserify`,
perform the following (assuming *main.js* is your entry file):

```shell
browserify main.js > bundle.js
```

Then include *bundle.js* in the HTML pages.

### Webpack Configuration

Using Webpack you may encounter the following error: "Module not found: Error:
Cannot resolve module", most certainly you should disable AMD loader. Add/merge
the following section to your webpack config:

```javascript
module: {
  rules: [
    {
      parser: {
        amd: false
      }
    }
  ]
}
```

## Getting Started

Please follow the [installation](#installation) instruction and execute the following JS code:

```javascript
var PokeapiClient = require('pokeapi-client');


var api = new PokeapiClient.AbilityApi()
var opts = {
  'limit': 56, // {Number} 
  'offset': 56 // {Number} 
};
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
api.abilityList(opts, callback);

```

## Documentation for API Endpoints

All URIs are relative to *https://pokeapi.co*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*PokeapiClient.AbilityApi* | [**abilityList**](docs/AbilityApi.md#abilityList) | **GET** /api/v2/ability/ | 
*PokeapiClient.AbilityApi* | [**abilityRead**](docs/AbilityApi.md#abilityRead) | **GET** /api/v2/ability/{id}/ | 
*PokeapiClient.BerryApi* | [**berryList**](docs/BerryApi.md#berryList) | **GET** /api/v2/berry/ | 
*PokeapiClient.BerryApi* | [**berryRead**](docs/BerryApi.md#berryRead) | **GET** /api/v2/berry/{id}/ | 
*PokeapiClient.BerryFirmnessApi* | [**berryFirmnessList**](docs/BerryFirmnessApi.md#berryFirmnessList) | **GET** /api/v2/berry-firmness/ | 
*PokeapiClient.BerryFirmnessApi* | [**berryFirmnessRead**](docs/BerryFirmnessApi.md#berryFirmnessRead) | **GET** /api/v2/berry-firmness/{id}/ | 
*PokeapiClient.BerryFlavorApi* | [**berryFlavorList**](docs/BerryFlavorApi.md#berryFlavorList) | **GET** /api/v2/berry-flavor/ | 
*PokeapiClient.BerryFlavorApi* | [**berryFlavorRead**](docs/BerryFlavorApi.md#berryFlavorRead) | **GET** /api/v2/berry-flavor/{id}/ | 
*PokeapiClient.CharacteristicApi* | [**characteristicList**](docs/CharacteristicApi.md#characteristicList) | **GET** /api/v2/characteristic/ | 
*PokeapiClient.CharacteristicApi* | [**characteristicRead**](docs/CharacteristicApi.md#characteristicRead) | **GET** /api/v2/characteristic/{id}/ | 
*PokeapiClient.ContestEffectApi* | [**contestEffectList**](docs/ContestEffectApi.md#contestEffectList) | **GET** /api/v2/contest-effect/ | 
*PokeapiClient.ContestEffectApi* | [**contestEffectRead**](docs/ContestEffectApi.md#contestEffectRead) | **GET** /api/v2/contest-effect/{id}/ | 
*PokeapiClient.ContestTypeApi* | [**contestTypeList**](docs/ContestTypeApi.md#contestTypeList) | **GET** /api/v2/contest-type/ | 
*PokeapiClient.ContestTypeApi* | [**contestTypeRead**](docs/ContestTypeApi.md#contestTypeRead) | **GET** /api/v2/contest-type/{id}/ | 
*PokeapiClient.EggGroupApi* | [**eggGroupList**](docs/EggGroupApi.md#eggGroupList) | **GET** /api/v2/egg-group/ | 
*PokeapiClient.EggGroupApi* | [**eggGroupRead**](docs/EggGroupApi.md#eggGroupRead) | **GET** /api/v2/egg-group/{id}/ | 
*PokeapiClient.EncounterConditionApi* | [**encounterConditionList**](docs/EncounterConditionApi.md#encounterConditionList) | **GET** /api/v2/encounter-condition/ | 
*PokeapiClient.EncounterConditionApi* | [**encounterConditionRead**](docs/EncounterConditionApi.md#encounterConditionRead) | **GET** /api/v2/encounter-condition/{id}/ | 
*PokeapiClient.EncounterConditionValueApi* | [**encounterConditionValueList**](docs/EncounterConditionValueApi.md#encounterConditionValueList) | **GET** /api/v2/encounter-condition-value/ | 
*PokeapiClient.EncounterConditionValueApi* | [**encounterConditionValueRead**](docs/EncounterConditionValueApi.md#encounterConditionValueRead) | **GET** /api/v2/encounter-condition-value/{id}/ | 
*PokeapiClient.EncounterMethodApi* | [**encounterMethodList**](docs/EncounterMethodApi.md#encounterMethodList) | **GET** /api/v2/encounter-method/ | 
*PokeapiClient.EncounterMethodApi* | [**encounterMethodRead**](docs/EncounterMethodApi.md#encounterMethodRead) | **GET** /api/v2/encounter-method/{id}/ | 
*PokeapiClient.EvolutionChainApi* | [**evolutionChainList**](docs/EvolutionChainApi.md#evolutionChainList) | **GET** /api/v2/evolution-chain/ | 
*PokeapiClient.EvolutionChainApi* | [**evolutionChainRead**](docs/EvolutionChainApi.md#evolutionChainRead) | **GET** /api/v2/evolution-chain/{id}/ | 
*PokeapiClient.EvolutionTriggerApi* | [**evolutionTriggerList**](docs/EvolutionTriggerApi.md#evolutionTriggerList) | **GET** /api/v2/evolution-trigger/ | 
*PokeapiClient.EvolutionTriggerApi* | [**evolutionTriggerRead**](docs/EvolutionTriggerApi.md#evolutionTriggerRead) | **GET** /api/v2/evolution-trigger/{id}/ | 
*PokeapiClient.GenderApi* | [**genderList**](docs/GenderApi.md#genderList) | **GET** /api/v2/gender/ | 
*PokeapiClient.GenderApi* | [**genderRead**](docs/GenderApi.md#genderRead) | **GET** /api/v2/gender/{id}/ | 
*PokeapiClient.GenerationApi* | [**generationList**](docs/GenerationApi.md#generationList) | **GET** /api/v2/generation/ | 
*PokeapiClient.GenerationApi* | [**generationRead**](docs/GenerationApi.md#generationRead) | **GET** /api/v2/generation/{id}/ | 
*PokeapiClient.GrowthRateApi* | [**growthRateList**](docs/GrowthRateApi.md#growthRateList) | **GET** /api/v2/growth-rate/ | 
*PokeapiClient.GrowthRateApi* | [**growthRateRead**](docs/GrowthRateApi.md#growthRateRead) | **GET** /api/v2/growth-rate/{id}/ | 
*PokeapiClient.ItemApi* | [**itemList**](docs/ItemApi.md#itemList) | **GET** /api/v2/item/ | 
*PokeapiClient.ItemApi* | [**itemRead**](docs/ItemApi.md#itemRead) | **GET** /api/v2/item/{id}/ | 
*PokeapiClient.ItemAttributeApi* | [**itemAttributeList**](docs/ItemAttributeApi.md#itemAttributeList) | **GET** /api/v2/item-attribute/ | 
*PokeapiClient.ItemAttributeApi* | [**itemAttributeRead**](docs/ItemAttributeApi.md#itemAttributeRead) | **GET** /api/v2/item-attribute/{id}/ | 
*PokeapiClient.ItemCategoryApi* | [**itemCategoryList**](docs/ItemCategoryApi.md#itemCategoryList) | **GET** /api/v2/item-category/ | 
*PokeapiClient.ItemCategoryApi* | [**itemCategoryRead**](docs/ItemCategoryApi.md#itemCategoryRead) | **GET** /api/v2/item-category/{id}/ | 
*PokeapiClient.ItemFlingEffectApi* | [**itemFlingEffectList**](docs/ItemFlingEffectApi.md#itemFlingEffectList) | **GET** /api/v2/item-fling-effect/ | 
*PokeapiClient.ItemFlingEffectApi* | [**itemFlingEffectRead**](docs/ItemFlingEffectApi.md#itemFlingEffectRead) | **GET** /api/v2/item-fling-effect/{id}/ | 
*PokeapiClient.ItemPocketApi* | [**itemPocketList**](docs/ItemPocketApi.md#itemPocketList) | **GET** /api/v2/item-pocket/ | 
*PokeapiClient.ItemPocketApi* | [**itemPocketRead**](docs/ItemPocketApi.md#itemPocketRead) | **GET** /api/v2/item-pocket/{id}/ | 
*PokeapiClient.LanguageApi* | [**languageList**](docs/LanguageApi.md#languageList) | **GET** /api/v2/language/ | 
*PokeapiClient.LanguageApi* | [**languageRead**](docs/LanguageApi.md#languageRead) | **GET** /api/v2/language/{id}/ | 
*PokeapiClient.LocationApi* | [**locationList**](docs/LocationApi.md#locationList) | **GET** /api/v2/location/ | 
*PokeapiClient.LocationApi* | [**locationRead**](docs/LocationApi.md#locationRead) | **GET** /api/v2/location/{id}/ | 
*PokeapiClient.LocationAreaApi* | [**locationAreaList**](docs/LocationAreaApi.md#locationAreaList) | **GET** /api/v2/location-area/ | 
*PokeapiClient.LocationAreaApi* | [**locationAreaRead**](docs/LocationAreaApi.md#locationAreaRead) | **GET** /api/v2/location-area/{id}/ | 
*PokeapiClient.MachineApi* | [**machineList**](docs/MachineApi.md#machineList) | **GET** /api/v2/machine/ | 
*PokeapiClient.MachineApi* | [**machineRead**](docs/MachineApi.md#machineRead) | **GET** /api/v2/machine/{id}/ | 
*PokeapiClient.MoveApi* | [**moveList**](docs/MoveApi.md#moveList) | **GET** /api/v2/move/ | 
*PokeapiClient.MoveApi* | [**moveRead**](docs/MoveApi.md#moveRead) | **GET** /api/v2/move/{id}/ | 
*PokeapiClient.MoveAilmentApi* | [**moveAilmentList**](docs/MoveAilmentApi.md#moveAilmentList) | **GET** /api/v2/move-ailment/ | 
*PokeapiClient.MoveAilmentApi* | [**moveAilmentRead**](docs/MoveAilmentApi.md#moveAilmentRead) | **GET** /api/v2/move-ailment/{id}/ | 
*PokeapiClient.MoveBattleStyleApi* | [**moveBattleStyleList**](docs/MoveBattleStyleApi.md#moveBattleStyleList) | **GET** /api/v2/move-battle-style/ | 
*PokeapiClient.MoveBattleStyleApi* | [**moveBattleStyleRead**](docs/MoveBattleStyleApi.md#moveBattleStyleRead) | **GET** /api/v2/move-battle-style/{id}/ | 
*PokeapiClient.MoveCategoryApi* | [**moveCategoryList**](docs/MoveCategoryApi.md#moveCategoryList) | **GET** /api/v2/move-category/ | 
*PokeapiClient.MoveCategoryApi* | [**moveCategoryRead**](docs/MoveCategoryApi.md#moveCategoryRead) | **GET** /api/v2/move-category/{id}/ | 
*PokeapiClient.MoveDamageClassApi* | [**moveDamageClassList**](docs/MoveDamageClassApi.md#moveDamageClassList) | **GET** /api/v2/move-damage-class/ | 
*PokeapiClient.MoveDamageClassApi* | [**moveDamageClassRead**](docs/MoveDamageClassApi.md#moveDamageClassRead) | **GET** /api/v2/move-damage-class/{id}/ | 
*PokeapiClient.MoveLearnMethodApi* | [**moveLearnMethodList**](docs/MoveLearnMethodApi.md#moveLearnMethodList) | **GET** /api/v2/move-learn-method/ | 
*PokeapiClient.MoveLearnMethodApi* | [**moveLearnMethodRead**](docs/MoveLearnMethodApi.md#moveLearnMethodRead) | **GET** /api/v2/move-learn-method/{id}/ | 
*PokeapiClient.MoveTargetApi* | [**moveTargetList**](docs/MoveTargetApi.md#moveTargetList) | **GET** /api/v2/move-target/ | 
*PokeapiClient.MoveTargetApi* | [**moveTargetRead**](docs/MoveTargetApi.md#moveTargetRead) | **GET** /api/v2/move-target/{id}/ | 
*PokeapiClient.NatureApi* | [**natureList**](docs/NatureApi.md#natureList) | **GET** /api/v2/nature/ | 
*PokeapiClient.NatureApi* | [**natureRead**](docs/NatureApi.md#natureRead) | **GET** /api/v2/nature/{id}/ | 
*PokeapiClient.PalParkAreaApi* | [**palParkAreaList**](docs/PalParkAreaApi.md#palParkAreaList) | **GET** /api/v2/pal-park-area/ | 
*PokeapiClient.PalParkAreaApi* | [**palParkAreaRead**](docs/PalParkAreaApi.md#palParkAreaRead) | **GET** /api/v2/pal-park-area/{id}/ | 
*PokeapiClient.PokeathlonStatApi* | [**pokeathlonStatList**](docs/PokeathlonStatApi.md#pokeathlonStatList) | **GET** /api/v2/pokeathlon-stat/ | 
*PokeapiClient.PokeathlonStatApi* | [**pokeathlonStatRead**](docs/PokeathlonStatApi.md#pokeathlonStatRead) | **GET** /api/v2/pokeathlon-stat/{id}/ | 
*PokeapiClient.PokedexApi* | [**pokedexList**](docs/PokedexApi.md#pokedexList) | **GET** /api/v2/pokedex/ | 
*PokeapiClient.PokedexApi* | [**pokedexRead**](docs/PokedexApi.md#pokedexRead) | **GET** /api/v2/pokedex/{id}/ | 
*PokeapiClient.PokemonApi* | [**pokemonList**](docs/PokemonApi.md#pokemonList) | **GET** /api/v2/pokemon/ | 
*PokeapiClient.PokemonApi* | [**pokemonRead**](docs/PokemonApi.md#pokemonRead) | **GET** /api/v2/pokemon/{id}/ | 
*PokeapiClient.PokemonColorApi* | [**pokemonColorList**](docs/PokemonColorApi.md#pokemonColorList) | **GET** /api/v2/pokemon-color/ | 
*PokeapiClient.PokemonColorApi* | [**pokemonColorRead**](docs/PokemonColorApi.md#pokemonColorRead) | **GET** /api/v2/pokemon-color/{id}/ | 
*PokeapiClient.PokemonFormApi* | [**pokemonFormList**](docs/PokemonFormApi.md#pokemonFormList) | **GET** /api/v2/pokemon-form/ | 
*PokeapiClient.PokemonFormApi* | [**pokemonFormRead**](docs/PokemonFormApi.md#pokemonFormRead) | **GET** /api/v2/pokemon-form/{id}/ | 
*PokeapiClient.PokemonHabitatApi* | [**pokemonHabitatList**](docs/PokemonHabitatApi.md#pokemonHabitatList) | **GET** /api/v2/pokemon-habitat/ | 
*PokeapiClient.PokemonHabitatApi* | [**pokemonHabitatRead**](docs/PokemonHabitatApi.md#pokemonHabitatRead) | **GET** /api/v2/pokemon-habitat/{id}/ | 
*PokeapiClient.PokemonShapeApi* | [**pokemonShapeList**](docs/PokemonShapeApi.md#pokemonShapeList) | **GET** /api/v2/pokemon-shape/ | 
*PokeapiClient.PokemonShapeApi* | [**pokemonShapeRead**](docs/PokemonShapeApi.md#pokemonShapeRead) | **GET** /api/v2/pokemon-shape/{id}/ | 
*PokeapiClient.PokemonSpeciesApi* | [**pokemonSpeciesList**](docs/PokemonSpeciesApi.md#pokemonSpeciesList) | **GET** /api/v2/pokemon-species/ | 
*PokeapiClient.PokemonSpeciesApi* | [**pokemonSpeciesRead**](docs/PokemonSpeciesApi.md#pokemonSpeciesRead) | **GET** /api/v2/pokemon-species/{id}/ | 
*PokeapiClient.RegionApi* | [**regionList**](docs/RegionApi.md#regionList) | **GET** /api/v2/region/ | 
*PokeapiClient.RegionApi* | [**regionRead**](docs/RegionApi.md#regionRead) | **GET** /api/v2/region/{id}/ | 
*PokeapiClient.StatApi* | [**statList**](docs/StatApi.md#statList) | **GET** /api/v2/stat/ | 
*PokeapiClient.StatApi* | [**statRead**](docs/StatApi.md#statRead) | **GET** /api/v2/stat/{id}/ | 
*PokeapiClient.SuperContestEffectApi* | [**superContestEffectList**](docs/SuperContestEffectApi.md#superContestEffectList) | **GET** /api/v2/super-contest-effect/ | 
*PokeapiClient.SuperContestEffectApi* | [**superContestEffectRead**](docs/SuperContestEffectApi.md#superContestEffectRead) | **GET** /api/v2/super-contest-effect/{id}/ | 
*PokeapiClient.TypeApi* | [**typeList**](docs/TypeApi.md#typeList) | **GET** /api/v2/type/ | 
*PokeapiClient.TypeApi* | [**typeRead**](docs/TypeApi.md#typeRead) | **GET** /api/v2/type/{id}/ | 
*PokeapiClient.VersionApi* | [**versionList**](docs/VersionApi.md#versionList) | **GET** /api/v2/version/ | 
*PokeapiClient.VersionApi* | [**versionRead**](docs/VersionApi.md#versionRead) | **GET** /api/v2/version/{id}/ | 
*PokeapiClient.VersionGroupApi* | [**versionGroupList**](docs/VersionGroupApi.md#versionGroupList) | **GET** /api/v2/version-group/ | 
*PokeapiClient.VersionGroupApi* | [**versionGroupRead**](docs/VersionGroupApi.md#versionGroupRead) | **GET** /api/v2/version-group/{id}/ | 


## Documentation for Models



## Documentation for Authorization

Endpoints do not require authorization.

