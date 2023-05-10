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
	 * 		Name   -> PredefinedFunction UCoreMemoryBehaviourBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryBehaviourBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryBehaviourBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0440F3E0
	 * 		Name   -> Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Fragments
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ACoreMemoryChallengePlayerSpecificController::OnRep_Fragments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Fragments"));
		
		ACoreMemoryChallengePlayerSpecificController_OnRep_Fragments_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0440F3C0
	 * 		Name   -> Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Controller
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ACoreMemoryChallengePlayerSpecificController::OnRep_Controller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryChallengePlayerSpecificController.OnRep_Controller"));
		
		ACoreMemoryChallengePlayerSpecificController_OnRep_Controller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoreMemoryChallengePlayerSpecificController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoreMemoryChallengePlayerSpecificController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryChallengePlayerSpecificController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0440F6A0
	 * 		Name   -> Function CoreMemory.CoreMemoryController.Authority_OnCharacterAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMemoryController::Authority_OnCharacterAdded(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryController.Authority_OnCharacterAdded"));
		
		UCoreMemoryController_Authority_OnCharacterAdded_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0440F610
	 * 		Name   -> Function CoreMemory.CoreMemoryController.Authority_CreatePlayerSpecificController
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMemoryController::Authority_CreatePlayerSpecificController(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryController.Authority_CreatePlayerSpecificController"));
		
		UCoreMemoryController_Authority_CreatePlayerSpecificController_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryDebugSpawnBehaviour.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryDebugSpawnBehaviour::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryDebugSpawnBehaviour"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryDefaultQuestProgressBehaviour.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryDefaultQuestProgressBehaviour::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryDefaultQuestProgressBehaviour"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0440FBE0
	 * 		Name   -> Function CoreMemory.CoreMemoryFragment.OnRep_SpawnLocation
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoreMemoryFragment::OnRep_SpawnLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragment.OnRep_SpawnLocation"));
		
		ACoreMemoryFragment_OnRep_SpawnLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoreMemoryFragment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoreMemoryFragment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryFragment"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.Server_OnFragmentCollected
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UCoreMemoryFragmentComponent::Server_OnFragmentCollected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.Server_OnFragmentCollected"));
		
		UCoreMemoryFragmentComponent_Server_OnFragmentCollected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04410750
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.OnRep_WasTriggered
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreMemoryFragmentComponent::OnRep_WasTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.OnRep_WasTriggered"));
		
		UCoreMemoryFragmentComponent_OnRep_WasTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04410730
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.OnRep_OwningPlayer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreMemoryFragmentComponent::OnRep_OwningPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.OnRep_OwningPlayer"));
		
		UCoreMemoryFragmentComponent_OnRep_OwningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044106A0
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMemoryFragmentComponent::OnLocallyObservedChanged(bool IsLocallyObserved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.OnLocallyObservedChanged"));
		
		UCoreMemoryFragmentComponent_OnLocallyObservedChanged_Params params {};
		params.IsLocallyObserved = IsLocallyObserved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04410680
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.OnIntroComplete
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UCoreMemoryFragmentComponent::OnIntroComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.OnIntroComplete"));
		
		UCoreMemoryFragmentComponent_OnIntroComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04410460
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.OnCollectZoneEntered
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCoreMemoryFragmentComponent::OnCollectZoneEntered(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.OnCollectZoneEntered"));
		
		UCoreMemoryFragmentComponent_OnCollectZoneEntered_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04410300
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneExited
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCoreMemoryFragmentComponent::Authority_OnTriggerZoneExited(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneExited"));
		
		UCoreMemoryFragmentComponent_Authority_OnTriggerZoneExited_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044100E0
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneEntered
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCoreMemoryFragmentComponent::Authority_OnTriggerZoneEntered(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.Authority_OnTriggerZoneEntered"));
		
		UCoreMemoryFragmentComponent_Authority_OnTriggerZoneEntered_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044100C0
	 * 		Name   -> Function CoreMemory.CoreMemoryFragmentComponent.Authority_CheckLineOfSight
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCoreMemoryFragmentComponent::Authority_CheckLineOfSight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryFragmentComponent.Authority_CheckLineOfSight"));
		
		UCoreMemoryFragmentComponent_Authority_CheckLineOfSight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryFragmentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryFragmentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryFragmentComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryFragmentFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryFragmentFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryFragmentFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryFragmentSimpleMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryFragmentSimpleMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryFragmentSimpleMovementComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryImposeStatusEffectBehaviour.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryImposeStatusEffectBehaviour::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryImposeStatusEffectBehaviour"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoreMemoryPortal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoreMemoryPortal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryPortal"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04411000
	 * 		Name   -> Function CoreMemory.CoreMemoryPortalComponent.GetPlayersWithActivePortal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ADBDPlayer*> UCoreMemoryPortalComponent::GetPlayersWithActivePortal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function CoreMemory.CoreMemoryPortalComponent.GetPlayersWithActivePortal"));
		
		UCoreMemoryPortalComponent_GetPlayersWithActivePortal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryPortalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryPortalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryPortalComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryPortalDefaultBehaviour.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryPortalDefaultBehaviour::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryPortalDefaultBehaviour"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryPortalFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryPortalFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryPortalFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryPortalOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryPortalOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryPortalOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemorySpawnFragmentsOnRandPlayerSpawnBehaviour"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMemoryUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMemoryUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.CoreMemoryUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USynchronizeCoreMemoryInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USynchronizeCoreMemoryInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class CoreMemory.SynchronizeCoreMemoryInteraction"));
		return ptr;
	}

}


