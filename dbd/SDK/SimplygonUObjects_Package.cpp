/**
 * Name: dbd
 * Version: 6711
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonStandinPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonStandinPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonStandinPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStandinNearPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandinNearPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.StandinNearPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStandinFarPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStandinFarPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.StandinFarPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBillboardCloudPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBillboardCloudPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.BillboardCloudPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlipbookPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlipbookPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.FlipbookPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBillboardCloudVegetationPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBillboardCloudVegetationPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.BillboardCloudVegetationPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonMaterialCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonMaterialCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonMaterialCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonColorCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonColorCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonColorCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseColorCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseColorCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.BaseColorCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetallicCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetallicCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.MetallicCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpecualarCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpecualarCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SpecualarCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URoughnessCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoughnessCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.RoughnessCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonNormalCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonNormalCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonNormalCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNormalCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNormalCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.NormalCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonOpacityCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonOpacityCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonOpacityCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpacityCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpacityCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.OpacityCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmissiveCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmissiveCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.EmissiveCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpacityMaskCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpacityMaskCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.OpacityMaskCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAmbientOcclusionMaskCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbientOcclusionMaskCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.AmbientOcclusionMaskCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReductionPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReductionPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.ReductionPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemeshingPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemeshingPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.RemeshingPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAggregationPipeline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAggregationPipeline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.AggregationPipeline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonDisplacementCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonDisplacementCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonDisplacementCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonAmbientOcclusionCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonAmbientOcclusionCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonAmbientOcclusionCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonGeometryDataCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonGeometryDataCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonGeometryDataCaster"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimplygonVertexColorCaster.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimplygonVertexColorCaster::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SimplygonUObjects.SimplygonVertexColorCaster"));
		return ptr;
	}

}


