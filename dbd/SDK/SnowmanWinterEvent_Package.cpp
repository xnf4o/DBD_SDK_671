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
	 * 		RVA    -> 0x04ED4F90
	 * 		Name   -> Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StopControllingSnowman
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideInSnowmanInteraction::Multicast_StopControllingSnowman(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StopControllingSnowman"));
		
		UHideInSnowmanInteraction_Multicast_StopControllingSnowman_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED4F00
	 * 		Name   -> Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StartControllingSnowman
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideInSnowmanInteraction::Multicast_StartControllingSnowman(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.HideInSnowmanInteraction.Multicast_StartControllingSnowman"));
		
		UHideInSnowmanInteraction_Multicast_StartControllingSnowman_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHideInSnowmanInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideInSnowmanInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.HideInSnowmanInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerHideInSnowmanInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerHideInSnowmanInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.KillerHideInSnowmanInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6F40
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.OnRep_SnowmanState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_SnowmanState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.OnRep_SnowmanState"));
		
		ASnowman_OnRep_SnowmanState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6F20
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.OnRep_SnowmanDestructionType
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_SnowmanDestructionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.OnRep_SnowmanDestructionType"));
		
		ASnowman_OnRep_SnowmanDestructionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6F00
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.OnRep_PlayerUsingSnowman
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_PlayerUsingSnowman()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.OnRep_PlayerUsingSnowman"));
		
		ASnowman_OnRep_PlayerUsingSnowman_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6EE0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.OnRep_IsMoving
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_IsMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.OnRep_IsMoving"));
		
		ASnowman_OnRep_IsMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6EC0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.OnRep_HighFiveFollower
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ASnowman::OnRep_HighFiveFollower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.OnRep_HighFiveFollower"));
		
		ASnowman_OnRep_HighFiveFollower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6DB0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.OnFinishedPlaying
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ASnowman::OnFinishedPlaying(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.OnFinishedPlaying"));
		
		ASnowman_OnFinishedPlaying_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6C40
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_StartSnowmanDestruction
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		ESnowmanDestructionType                            snowmanDestructionType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               unlockRequirementsSatisfiedForSurvivor                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               unlockRequirementsSatisfiedForKiller                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  playerInSnowman                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_StartSnowmanDestruction(ESnowmanDestructionType snowmanDestructionType, bool unlockRequirementsSatisfiedForSurvivor, bool unlockRequirementsSatisfiedForKiller, class ADBDPlayer* playerInSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_StartSnowmanDestruction"));
		
		ASnowman_Multicast_StartSnowmanDestruction_Params params {};
		params.snowmanDestructionType = snowmanDestructionType;
		params.unlockRequirementsSatisfiedForSurvivor = unlockRequirementsSatisfiedForSurvivor;
		params.unlockRequirementsSatisfiedForKiller = unlockRequirementsSatisfiedForKiller;
		params.playerInSnowman = playerInSnowman;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6BA0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_SpawnSnowman
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FSnowmanSpawnData                           spawnData                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_SpawnSnowman(const struct FSnowmanSpawnData& spawnData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_SpawnSnowman"));
		
		ASnowman_Multicast_SpawnSnowman_Params params {};
		params.spawnData = spawnData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6B10
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanMaterialVariant
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		int32_t                                            materialVariantIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_SetSnowmanMaterialVariant(int32_t materialVariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanMaterialVariant"));
		
		ASnowman_Multicast_SetSnowmanMaterialVariant_Params params {};
		params.materialVariantIndex = materialVariantIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6A80
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanHiddenInGame
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               IsHidden                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_SetSnowmanHiddenInGame(bool IsHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_SetSnowmanHiddenInGame"));
		
		ASnowman_Multicast_SetSnowmanHiddenInGame_Params params {};
		params.IsHidden = IsHidden;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED69F0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedBySurvivor"));
		
		ASnowman_Multicast_OnSnowmanStartBeingUsedBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CFC280
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedByKiller
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerUsingSnowman                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_OnSnowmanStartBeingUsedByKiller(class ASlasherPlayer* killerUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingUsedByKiller"));
		
		ASnowman_Multicast_OnSnowmanStartBeingUsedByKiller_Params params {};
		params.killerUsingSnowman = killerUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6960
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledBySurvivor"));
		
		ASnowman_Multicast_OnSnowmanStartBeingControlledBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D27440
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledByKiller
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerUsingSnowman                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_OnSnowmanStartBeingControlledByKiller(class ASlasherPlayer* killerUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_OnSnowmanStartBeingControlledByKiller"));
		
		ASnowman_Multicast_OnSnowmanStartBeingControlledByKiller_Params params {};
		params.killerUsingSnowman = killerUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6880
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Multicast_DrawDebugCollisionCheck
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, Const)
	 * Parameters:
	 * 		struct FVector                                     BoxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              debugLifetime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Multicast_DrawDebugCollisionCheck(const struct FVector& BoxExtent, float debugLifetime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Multicast_DrawDebugCollisionCheck"));
		
		ASnowman_Multicast_DrawDebugCollisionCheck_Params params {};
		params.BoxExtent = BoxExtent;
		params.debugLifetime = debugLifetime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_SetSnowmanMaterialVariant
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            materialVariantIndex                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_SetSnowmanMaterialVariant(int32_t materialVariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_SetSnowmanMaterialVariant"));
		
		ASnowman_Cosmetic_SetSnowmanMaterialVariant_Params params {};
		params.materialVariantIndex = materialVariantIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanStartBeingUsedBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedBySurvivor"));
		
		ASnowman_Cosmetic_OnSnowmanStartBeingUsedBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedByKiller
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerUsingSnowman                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanStartBeingUsedByKiller(class ASlasherPlayer* killerUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingUsedByKiller"));
		
		ASnowman_Cosmetic_OnSnowmanStartBeingUsedByKiller_Params params {};
		params.killerUsingSnowman = killerUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanStartBeingControlledBySurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledBySurvivor"));
		
		ASnowman_Cosmetic_OnSnowmanStartBeingControlledBySurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledByKiller
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerUsingSnowman                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanStartBeingControlledByKiller(class ASlasherPlayer* killerUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanStartBeingControlledByKiller"));
		
		ASnowman_Cosmetic_OnSnowmanStartBeingControlledByKiller_Params params {};
		params.killerUsingSnowman = killerUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanSpawned
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ASnowman::Cosmetic_OnSnowmanSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanSpawned"));
		
		ASnowman_Cosmetic_OnSnowmanSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanHighFive
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASnowman*                                    otherSnowman                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanHighFive(class ASnowman* otherSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanHighFive"));
		
		ASnowman_Cosmetic_OnSnowmanHighFive_Params params {};
		params.otherSnowman = otherSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedBySurvivorRunExit(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedBySurvivorRunExit"));
		
		ASnowman_Cosmetic_OnSnowmanDestroyedBySurvivorRunExit_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerCancelExit
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedByKillerCancelExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerCancelExit"));
		
		ASnowman_Cosmetic_OnSnowmanDestroyedByKillerCancelExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerAttackExit
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerUsingSnowman                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedByKillerAttackExit(class ASlasherPlayer* killerUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByKillerAttackExit"));
		
		ASnowman_Cosmetic_OnSnowmanDestroyedByKillerAttackExit_Params params {};
		params.killerUsingSnowman = killerUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty(class ASlasherPlayer* killerAttackingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty"));
		
		ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileEmpty_Params params {};
		params.killerAttackingSnowman = killerAttackingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnSnowmanDestroyedByAttackWhileControlled(class ACamperPlayer* survivorUsingSnowman, class ASlasherPlayer* killerAttackingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnSnowmanDestroyedByAttackWhileControlled"));
		
		ASnowman_Cosmetic_OnSnowmanDestroyedByAttackWhileControlled_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		params.killerAttackingSnowman = killerAttackingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorUsingSnowman                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor(class ACamperPlayer* survivorUsingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor"));
		
		ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForSurvivor_Params params {};
		params.survivorUsingSnowman = survivorUsingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killerAttackingSnowman                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller(class ASlasherPlayer* killerAttackingSnowman)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller"));
		
		ASnowman_Cosmetic_OnCosmeticUnlockRequirementsSatisfiedForKiller_Params params {};
		params.killerAttackingSnowman = killerAttackingSnowman;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED6720
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Authority_OnSnowmanHandOverlapEnd(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapEnd"));
		
		ASnowman_Authority_OnSnowmanHandOverlapEnd_Params params {};
		params.HitComponent = HitComponent;
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
	 * 		RVA    -> 0x04ED6500
	 * 		Name   -> Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ASnowman::Authority_OnSnowmanHandOverlapBegin(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.Snowman.Authority_OnSnowmanHandOverlapBegin"));
		
		ASnowman_Authority_OnSnowmanHandOverlapBegin_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASnowman.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASnowman::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.Snowman"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SnowmanWinterEvent.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESnowmanDestructionType                            snowmanDestructionType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USnowmanAnimInstance::Cosmetic_OnSnowmanDestroyedEvent(ESnowmanDestructionType snowmanDestructionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.SnowmanAnimInstance.Cosmetic_OnSnowmanDestroyedEvent"));
		
		USnowmanAnimInstance_Cosmetic_OnSnowmanDestroyedEvent_Params params {};
		params.snowmanDestructionType = snowmanDestructionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnowmanAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnowmanAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.SnowmanAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED74C0
	 * 		Name   -> Function SnowmanWinterEvent.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USnowmanSpawnPlacementStrategy::Authority_OnIntroCompletedOrLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.SnowmanSpawnPlacementStrategy.Authority_OnIntroCompletedOrLevelReadyToPlay"));
		
		USnowmanSpawnPlacementStrategy_Authority_OnIntroCompletedOrLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnowmanSpawnPlacementStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnowmanSpawnPlacementStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.SnowmanSpawnPlacementStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED77D0
	 * 		Name   -> Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021VisualizeCalculatedSpawnData
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              numberOfSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USnowmanWinterEventComponent::DBD_Winter2021VisualizeCalculatedSpawnData(float numberOfSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021VisualizeCalculatedSpawnData"));
		
		USnowmanWinterEventComponent_DBD_Winter2021VisualizeCalculatedSpawnData_Params params {};
		params.numberOfSeconds = numberOfSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED7750
	 * 		Name   -> Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		float                                              numberOfSeconds                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USnowmanWinterEventComponent::DBD_Winter2021ShowSnowmenSpawnCollisionChecks(float numberOfSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ShowSnowmenSpawnCollisionChecks"));
		
		USnowmanWinterEventComponent_DBD_Winter2021ShowSnowmenSpawnCollisionChecks_Params params {};
		params.numberOfSeconds = numberOfSeconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED7730
	 * 		Name   -> Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021RecalculateSpawnPoints
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void USnowmanWinterEventComponent::DBD_Winter2021RecalculateSpawnPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021RecalculateSpawnPoints"));
		
		USnowmanWinterEventComponent_DBD_Winter2021RecalculateSpawnPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED7710
	 * 		Name   -> Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ForceRespawnAllSnowmen
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void USnowmanWinterEventComponent::DBD_Winter2021ForceRespawnAllSnowmen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.SnowmanWinterEventComponent.DBD_Winter2021ForceRespawnAllSnowmen"));
		
		USnowmanWinterEventComponent_DBD_Winter2021ForceRespawnAllSnowmen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnowmanWinterEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnowmanWinterEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.SnowmanWinterEventComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnowmanWinterEventPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnowmanWinterEventPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.SnowmanWinterEventPlayerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED7BA0
	 * 		Name   -> Function SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Authority_OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorHideInSnowmanInteraction::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SnowmanWinterEvent.SurvivorHideInSnowmanInteraction.Authority_OnDamageStateChanged"));
		
		USurvivorHideInSnowmanInteraction_Authority_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorHideInSnowmanInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorHideInSnowmanInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SnowmanWinterEvent.SurvivorHideInSnowmanInteraction"));
		return ptr;
	}

}


