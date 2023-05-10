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
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCosmetic.DBDActorIndicator.Cosmetic_UpdateIndicatorActivationStatus
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActivated                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADBDActorIndicator::Cosmetic_UpdateIndicatorActivationStatus(bool IsActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.DBDActorIndicator.Cosmetic_UpdateIndicatorActivationStatus"));
		
		ADBDActorIndicator_Cosmetic_UpdateIndicatorActivationStatus_Params params {};
		params.IsActivated = IsActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADBDActorIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADBDActorIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCosmetic.DBDActorIndicator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CF570
	 * 		Name   -> Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivorByClass
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      cosmeticHelperActorClassType                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ASurvivorCosmeticHelperActor*> UDBDCosmeticModuleUtilities::STATIC_GetCosmeticHelperActorsOfSurvivorByClass(class ACamperPlayer* Survivor, class UClass* cosmeticHelperActorClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivorByClass"));
		
		UDBDCosmeticModuleUtilities_GetCosmeticHelperActorsOfSurvivorByClass_Params params {};
		params.Survivor = Survivor;
		params.cosmeticHelperActorClassType = cosmeticHelperActorClassType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CF4A0
	 * 		Name   -> Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ASurvivorCosmeticHelperActor*> UDBDCosmeticModuleUtilities::STATIC_GetCosmeticHelperActorsOfSurvivor(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivor"));
		
		UDBDCosmeticModuleUtilities_GetCosmeticHelperActorsOfSurvivor_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDCosmeticModuleUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDCosmeticModuleUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCosmetic.DBDCosmeticModuleUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CFB20
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.IsLocallyObserved
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ASurvivorCosmeticHelperActor::IsLocallyObserved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.IsLocallyObserved"));
		
		ASurvivorCosmeticHelperActor_IsLocallyObserved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CFAF0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* ASurvivorCosmeticHelperActor::GetSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetSurvivor"));
		
		ASurvivorCosmeticHelperActor_GetSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CFAC0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetMaterialHelper
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMaterialHelper* ASurvivorCosmeticHelperActor::GetMaterialHelper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetMaterialHelper"));
		
		ASurvivorCosmeticHelperActor_GetMaterialHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CFA90
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetCustomizedSkeletalMesh
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCustomizedSkeletalMesh* ASurvivorCosmeticHelperActor::GetCustomizedSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetCustomizedSkeletalMesh"));
		
		ASurvivorCosmeticHelperActor_GetCustomizedSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CFA60
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.GetAudioComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAkComponent* ASurvivorCosmeticHelperActor::GetAudioComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.GetAudioComponent"));
		
		ASurvivorCosmeticHelperActor_GetAudioComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorLinked
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorLinked                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivorCosmeticHelperActor::Cosmetic_OnSurvivorLinked(class ACamperPlayer* survivorLinked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorLinked"));
		
		ASurvivorCosmeticHelperActor_Cosmetic_OnSurvivorLinked_Params params {};
		params.survivorLinked = survivorLinked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsLocallyObservingSurvivorChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isLocallyObservingSurvivor                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivorCosmeticHelperActor::Cosmetic_OnIsLocallyObservingSurvivorChanged(bool isLocallyObservingSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsLocallyObservingSurvivorChanged"));
		
		ASurvivorCosmeticHelperActor_Cosmetic_OnIsLocallyObservingSurvivorChanged_Params params {};
		params.isLocallyObservingSurvivor = isLocallyObservingSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsGettingMoriedStatusChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isGettingMoried                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASurvivorCosmeticHelperActor::Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsGettingMoriedStatusChanged"));
		
		ASurvivorCosmeticHelperActor_Cosmetic_OnIsGettingMoriedStatusChanged_Params params {};
		params.isGettingMoried = isGettingMoried;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCosmetic.SurvivorCosmeticHelperActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045D0080
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ASurvivorCosmeticHelperActor*> USurvivorCosmeticHelperSpawnerComponent::GetCosmeticHelperActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActors"));
		
		USurvivorCosmeticHelperSpawnerComponent_GetCosmeticHelperActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CFFA0
	 * 		Name   -> Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActorByClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      cosmeticHelperActorClassType                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ASurvivorCosmeticHelperActor*> USurvivorCosmeticHelperSpawnerComponent::GetCosmeticHelperActorByClass(class UClass* cosmeticHelperActorClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActorByClass"));
		
		USurvivorCosmeticHelperSpawnerComponent_GetCosmeticHelperActorByClass_Params params {};
		params.cosmeticHelperActorClassType = cosmeticHelperActorClassType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorCosmeticHelperSpawnerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorCosmeticHelperSpawnerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent"));
		return ptr;
	}

}


