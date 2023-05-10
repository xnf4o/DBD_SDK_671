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
	 * 		Name   -> PredefinedFunction UHagAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHagAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHag.HagAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHagDynamicAccessoryAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHagDynamicAccessoryAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHag.HagDynamicAccessoryAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FAAFF0
	 * 		Name   -> Function TheHag.HagScoreComponent.Authority_OnActorEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHagScoreComponent::Authority_OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.HagScoreComponent.Authority_OnActorEndPlay"));
		
		UHagScoreComponent_Authority_OnActorEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHagScoreComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHagScoreComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHag.HagScoreComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FAB760
	 * 		Name   -> Function TheHag.PhantomTrap.OnTrapReset
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void APhantomTrap::OnTrapReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.OnTrapReset"));
		
		APhantomTrap_OnTrapReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FAB740
	 * 		Name   -> Function TheHag.PhantomTrap.OnTrapActivated
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void APhantomTrap::OnTrapActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.OnTrapActivated"));
		
		APhantomTrap_OnTrapActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D27A10
	 * 		Name   -> Function TheHag.PhantomTrap.Multicast_DestroyTrap
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ACamperPlayer*                               playerDestroyingTrap                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APhantomTrap::Multicast_DestroyTrap(class ACamperPlayer* playerDestroyingTrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.Multicast_DestroyTrap"));
		
		APhantomTrap_Multicast_DestroyTrap_Params params {};
		params.playerDestroyingTrap = playerDestroyingTrap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2B30
	 * 		Name   -> Function TheHag.PhantomTrap.IsTrapSet
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool APhantomTrap::IsTrapSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.IsTrapSet"));
		
		APhantomTrap_IsTrapSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FAB6B0
	 * 		Name   -> Function TheHag.PhantomTrap.InitializeTerrorRadiusEmitter
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ASlasherPlayer*                              OwningSlasher                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APhantomTrap::InitializeTerrorRadiusEmitter(class ASlasherPlayer* OwningSlasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.InitializeTerrorRadiusEmitter"));
		
		APhantomTrap_InitializeTerrorRadiusEmitter_Params params {};
		params.OwningSlasher = OwningSlasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHag.PhantomTrap.GetMesh
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class USkeletalMeshComponent* APhantomTrap::GetMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.GetMesh"));
		
		APhantomTrap_GetMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FAB5E0
	 * 		Name   -> Function TheHag.PhantomTrap.CanActivateTrap
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsInUse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool APhantomTrap::CanActivateTrap(class ACamperPlayer* camper, bool IsInUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.CanActivateTrap"));
		
		APhantomTrap_CanActivateTrap_Params params {};
		params.camper = camper;
		params.IsInUse = IsInUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHag.PhantomTrap.BP_OnTrapDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               playerDestroyingTrap                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APhantomTrap::BP_OnTrapDestroyed(class ACamperPlayer* playerDestroyingTrap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.PhantomTrap.BP_OnTrapDestroyed"));
		
		APhantomTrap_BP_OnTrapDestroyed_Params params {};
		params.playerDestroyingTrap = playerDestroyingTrap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APhantomTrap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APhantomTrap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHag.PhantomTrap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FABC20
	 * 		Name   -> Function TheHag.TeleportToPhantomTrap.GetTeleportMaxDistance
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTeleportToPhantomTrap::GetTeleportMaxDistance(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.TeleportToPhantomTrap.GetTeleportMaxDistance"));
		
		UTeleportToPhantomTrap_GetTeleportMaxDistance_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FABBF0
	 * 		Name   -> Function TheHag.TeleportToPhantomTrap.GetPhantomTrap
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class APhantomTrap* UTeleportToPhantomTrap::GetPhantomTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.TeleportToPhantomTrap.GetPhantomTrap"));
		
		UTeleportToPhantomTrap_GetPhantomTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHag.TeleportToPhantomTrap.Cosmetic_OnTeleport
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APhantomTrap*                                trap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportToPhantomTrap::Cosmetic_OnTeleport(class ASlasherPlayer* Slasher, class APhantomTrap* trap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.TeleportToPhantomTrap.Cosmetic_OnTeleport"));
		
		UTeleportToPhantomTrap_Cosmetic_OnTeleport_Params params {};
		params.Slasher = Slasher;
		params.trap = trap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHag.TeleportToPhantomTrap.Cosmetic_OnInteractionFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hasInteractionStarted                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportToPhantomTrap::Cosmetic_OnInteractionFinished(class ADBDPlayer* Slasher, bool hasInteractionStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.TeleportToPhantomTrap.Cosmetic_OnInteractionFinished"));
		
		UTeleportToPhantomTrap_Cosmetic_OnInteractionFinished_Params params {};
		params.Slasher = Slasher;
		params.hasInteractionStarted = hasInteractionStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHag.TeleportToPhantomTrap.BP_OnTeleport
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APhantomTrap*                                trap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTeleportToPhantomTrap::BP_OnTeleport(class ASlasherPlayer* Slasher, class APhantomTrap* trap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.TeleportToPhantomTrap.BP_OnTeleport"));
		
		UTeleportToPhantomTrap_BP_OnTeleport_Params params {};
		params.Slasher = Slasher;
		params.trap = trap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTeleportToPhantomTrap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeleportToPhantomTrap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHag.TeleportToPhantomTrap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FAC000
	 * 		Name   -> Function TheHag.WipeAwayPhantomTrapInteraction.CancelInteraction
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWipeAwayPhantomTrapInteraction::CancelInteraction(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHag.WipeAwayPhantomTrapInteraction.CancelInteraction"));
		
		UWipeAwayPhantomTrapInteraction_CancelInteraction_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWipeAwayPhantomTrapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWipeAwayPhantomTrapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHag.WipeAwayPhantomTrapInteraction"));
		return ptr;
	}

}


