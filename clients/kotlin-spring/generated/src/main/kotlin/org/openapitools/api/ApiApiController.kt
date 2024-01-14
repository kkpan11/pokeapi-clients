package org.openapitools.api

import io.swagger.v3.oas.annotations.*
import io.swagger.v3.oas.annotations.enums.*
import io.swagger.v3.oas.annotations.media.*
import io.swagger.v3.oas.annotations.responses.*
import io.swagger.v3.oas.annotations.security.*
import org.springframework.http.HttpStatus
import org.springframework.http.MediaType
import org.springframework.http.ResponseEntity

import org.springframework.web.bind.annotation.*
import org.springframework.validation.annotation.Validated
import org.springframework.web.context.request.NativeWebRequest
import org.springframework.beans.factory.annotation.Autowired

import javax.validation.Valid
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Email
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

import kotlin.collections.List
import kotlin.collections.Map

@RestController
@Validated
@RequestMapping("\${api.base-path:}")
class ApiApiController() {

    @Operation(
        summary = "",
        operationId = "abilityList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/ability/"],
        produces = ["text/plain"]
    )
    fun abilityList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "abilityRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/ability/{id}/"],
        produces = ["text/plain"]
    )
    fun abilityRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "berryFirmnessList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/berry-firmness/"],
        produces = ["text/plain"]
    )
    fun berryFirmnessList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "berryFirmnessRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/berry-firmness/{id}/"],
        produces = ["text/plain"]
    )
    fun berryFirmnessRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "berryFlavorList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/berry-flavor/"],
        produces = ["text/plain"]
    )
    fun berryFlavorList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "berryFlavorRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/berry-flavor/{id}/"],
        produces = ["text/plain"]
    )
    fun berryFlavorRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "berryList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/berry/"],
        produces = ["text/plain"]
    )
    fun berryList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "berryRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/berry/{id}/"],
        produces = ["text/plain"]
    )
    fun berryRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "characteristicList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/characteristic/"],
        produces = ["text/plain"]
    )
    fun characteristicList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "characteristicRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/characteristic/{id}/"],
        produces = ["text/plain"]
    )
    fun characteristicRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "contestEffectList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/contest-effect/"],
        produces = ["text/plain"]
    )
    fun contestEffectList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "contestEffectRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/contest-effect/{id}/"],
        produces = ["text/plain"]
    )
    fun contestEffectRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "contestTypeList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/contest-type/"],
        produces = ["text/plain"]
    )
    fun contestTypeList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "contestTypeRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/contest-type/{id}/"],
        produces = ["text/plain"]
    )
    fun contestTypeRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "eggGroupList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/egg-group/"],
        produces = ["text/plain"]
    )
    fun eggGroupList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "eggGroupRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/egg-group/{id}/"],
        produces = ["text/plain"]
    )
    fun eggGroupRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "encounterConditionList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/encounter-condition/"],
        produces = ["text/plain"]
    )
    fun encounterConditionList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "encounterConditionRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/encounter-condition/{id}/"],
        produces = ["text/plain"]
    )
    fun encounterConditionRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "encounterConditionValueList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/encounter-condition-value/"],
        produces = ["text/plain"]
    )
    fun encounterConditionValueList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "encounterConditionValueRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/encounter-condition-value/{id}/"],
        produces = ["text/plain"]
    )
    fun encounterConditionValueRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "encounterMethodList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/encounter-method/"],
        produces = ["text/plain"]
    )
    fun encounterMethodList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "encounterMethodRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/encounter-method/{id}/"],
        produces = ["text/plain"]
    )
    fun encounterMethodRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "evolutionChainList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/evolution-chain/"],
        produces = ["text/plain"]
    )
    fun evolutionChainList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "evolutionChainRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/evolution-chain/{id}/"],
        produces = ["text/plain"]
    )
    fun evolutionChainRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "evolutionTriggerList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/evolution-trigger/"],
        produces = ["text/plain"]
    )
    fun evolutionTriggerList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "evolutionTriggerRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/evolution-trigger/{id}/"],
        produces = ["text/plain"]
    )
    fun evolutionTriggerRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "genderList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/gender/"],
        produces = ["text/plain"]
    )
    fun genderList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "genderRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/gender/{id}/"],
        produces = ["text/plain"]
    )
    fun genderRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "generationList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/generation/"],
        produces = ["text/plain"]
    )
    fun generationList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "generationRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/generation/{id}/"],
        produces = ["text/plain"]
    )
    fun generationRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "growthRateList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/growth-rate/"],
        produces = ["text/plain"]
    )
    fun growthRateList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "growthRateRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/growth-rate/{id}/"],
        produces = ["text/plain"]
    )
    fun growthRateRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemAttributeList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-attribute/"],
        produces = ["text/plain"]
    )
    fun itemAttributeList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemAttributeRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-attribute/{id}/"],
        produces = ["text/plain"]
    )
    fun itemAttributeRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemCategoryList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-category/"],
        produces = ["text/plain"]
    )
    fun itemCategoryList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemCategoryRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-category/{id}/"],
        produces = ["text/plain"]
    )
    fun itemCategoryRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemFlingEffectList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-fling-effect/"],
        produces = ["text/plain"]
    )
    fun itemFlingEffectList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemFlingEffectRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-fling-effect/{id}/"],
        produces = ["text/plain"]
    )
    fun itemFlingEffectRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item/"],
        produces = ["text/plain"]
    )
    fun itemList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemPocketList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-pocket/"],
        produces = ["text/plain"]
    )
    fun itemPocketList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemPocketRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item-pocket/{id}/"],
        produces = ["text/plain"]
    )
    fun itemPocketRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "itemRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/item/{id}/"],
        produces = ["text/plain"]
    )
    fun itemRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "languageList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/language/"],
        produces = ["text/plain"]
    )
    fun languageList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "languageRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/language/{id}/"],
        produces = ["text/plain"]
    )
    fun languageRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "locationAreaList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/location-area/"],
        produces = ["text/plain"]
    )
    fun locationAreaList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "locationAreaRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/location-area/{id}/"],
        produces = ["text/plain"]
    )
    fun locationAreaRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "locationList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/location/"],
        produces = ["text/plain"]
    )
    fun locationList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "locationRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/location/{id}/"],
        produces = ["text/plain"]
    )
    fun locationRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "machineList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/machine/"],
        produces = ["text/plain"]
    )
    fun machineList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "machineRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/machine/{id}/"],
        produces = ["text/plain"]
    )
    fun machineRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveAilmentList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-ailment/"],
        produces = ["text/plain"]
    )
    fun moveAilmentList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveAilmentRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-ailment/{id}/"],
        produces = ["text/plain"]
    )
    fun moveAilmentRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveBattleStyleList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-battle-style/"],
        produces = ["text/plain"]
    )
    fun moveBattleStyleList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveBattleStyleRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-battle-style/{id}/"],
        produces = ["text/plain"]
    )
    fun moveBattleStyleRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveCategoryList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-category/"],
        produces = ["text/plain"]
    )
    fun moveCategoryList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveCategoryRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-category/{id}/"],
        produces = ["text/plain"]
    )
    fun moveCategoryRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveDamageClassList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-damage-class/"],
        produces = ["text/plain"]
    )
    fun moveDamageClassList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveDamageClassRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-damage-class/{id}/"],
        produces = ["text/plain"]
    )
    fun moveDamageClassRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveLearnMethodList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-learn-method/"],
        produces = ["text/plain"]
    )
    fun moveLearnMethodList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveLearnMethodRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-learn-method/{id}/"],
        produces = ["text/plain"]
    )
    fun moveLearnMethodRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move/"],
        produces = ["text/plain"]
    )
    fun moveList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move/{id}/"],
        produces = ["text/plain"]
    )
    fun moveRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveTargetList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-target/"],
        produces = ["text/plain"]
    )
    fun moveTargetList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "moveTargetRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/move-target/{id}/"],
        produces = ["text/plain"]
    )
    fun moveTargetRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "natureList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/nature/"],
        produces = ["text/plain"]
    )
    fun natureList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "natureRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/nature/{id}/"],
        produces = ["text/plain"]
    )
    fun natureRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "palParkAreaList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pal-park-area/"],
        produces = ["text/plain"]
    )
    fun palParkAreaList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "palParkAreaRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pal-park-area/{id}/"],
        produces = ["text/plain"]
    )
    fun palParkAreaRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokeathlonStatList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokeathlon-stat/"],
        produces = ["text/plain"]
    )
    fun pokeathlonStatList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokeathlonStatRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokeathlon-stat/{id}/"],
        produces = ["text/plain"]
    )
    fun pokeathlonStatRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokedexList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokedex/"],
        produces = ["text/plain"]
    )
    fun pokedexList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokedexRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokedex/{id}/"],
        produces = ["text/plain"]
    )
    fun pokedexRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonColorList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-color/"],
        produces = ["text/plain"]
    )
    fun pokemonColorList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonColorRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-color/{id}/"],
        produces = ["text/plain"]
    )
    fun pokemonColorRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonFormList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-form/"],
        produces = ["text/plain"]
    )
    fun pokemonFormList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonFormRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-form/{id}/"],
        produces = ["text/plain"]
    )
    fun pokemonFormRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonHabitatList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-habitat/"],
        produces = ["text/plain"]
    )
    fun pokemonHabitatList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonHabitatRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-habitat/{id}/"],
        produces = ["text/plain"]
    )
    fun pokemonHabitatRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon/"],
        produces = ["text/plain"]
    )
    fun pokemonList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon/{id}/"],
        produces = ["text/plain"]
    )
    fun pokemonRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonShapeList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-shape/"],
        produces = ["text/plain"]
    )
    fun pokemonShapeList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonShapeRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-shape/{id}/"],
        produces = ["text/plain"]
    )
    fun pokemonShapeRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonSpeciesList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-species/"],
        produces = ["text/plain"]
    )
    fun pokemonSpeciesList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "pokemonSpeciesRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/pokemon-species/{id}/"],
        produces = ["text/plain"]
    )
    fun pokemonSpeciesRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "regionList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/region/"],
        produces = ["text/plain"]
    )
    fun regionList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "regionRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/region/{id}/"],
        produces = ["text/plain"]
    )
    fun regionRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "statList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/stat/"],
        produces = ["text/plain"]
    )
    fun statList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "statRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/stat/{id}/"],
        produces = ["text/plain"]
    )
    fun statRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "superContestEffectList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/super-contest-effect/"],
        produces = ["text/plain"]
    )
    fun superContestEffectList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "superContestEffectRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/super-contest-effect/{id}/"],
        produces = ["text/plain"]
    )
    fun superContestEffectRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "typeList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/type/"],
        produces = ["text/plain"]
    )
    fun typeList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "typeRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/type/{id}/"],
        produces = ["text/plain"]
    )
    fun typeRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "versionGroupList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/version-group/"],
        produces = ["text/plain"]
    )
    fun versionGroupList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "versionGroupRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/version-group/{id}/"],
        produces = ["text/plain"]
    )
    fun versionGroupRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "versionList",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/version/"],
        produces = ["text/plain"]
    )
    fun versionList(@Parameter(description = "") @Valid @RequestParam(value = "limit", required = false) limit: kotlin.Int?,@Parameter(description = "") @Valid @RequestParam(value = "offset", required = false) offset: kotlin.Int?): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }

    @Operation(
        summary = "",
        operationId = "versionRead",
        description = """""",
        responses = [
            ApiResponse(responseCode = "200", description = "Default response", content = [Content(schema = Schema(implementation = kotlin.String::class))]) ]
    )
    @RequestMapping(
        method = [RequestMethod.GET],
        value = ["/api/v2/version/{id}/"],
        produces = ["text/plain"]
    )
    fun versionRead(@Parameter(description = "", required = true) @PathVariable("id") id: kotlin.Int): ResponseEntity<kotlin.String> {
        return ResponseEntity(HttpStatus.NOT_IMPLEMENTED)
    }
}
