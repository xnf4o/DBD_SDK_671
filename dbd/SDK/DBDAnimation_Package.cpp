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
	 * 		RVA    -> 0x044A8650
	 * 		Name   -> Function DBDAnimation.DBDBaseAnimInstance.HasBeenNotified
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        AnimNotify                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDBDBaseAnimInstance::HasBeenNotified(const class FName& AnimNotify)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.DBDBaseAnimInstance.HasBeenNotified"));
		
		UDBDBaseAnimInstance_HasBeenNotified_Params params {};
		params.AnimNotify = AnimNotify;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDBaseAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDBaseAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.DBDBaseAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB4D0
	 * 		Name   -> Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UPlayerAnimInstance::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay"));
		
		UPlayerAnimInstance_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB4B0
	 * 		Name   -> Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted
	 * 		Flags  -> (Native, Protected)
	 */
	void UPlayerAnimInstance::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted"));
		
		UPlayerAnimInstance_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB1C0
	 * 		Name   -> Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* UPlayerAnimInstance::GetOwningPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer"));
		
		UPlayerAnimInstance_GetOwningPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.PlayerAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8700
	 * 		Name   -> Function DBDAnimation.BaseSurvivorAnimInstance.IsPlayingMontageByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        MontageID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBaseSurvivorAnimInstance::IsPlayingMontageByName(const class FName& MontageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseSurvivorAnimInstance.IsPlayingMontageByName"));
		
		UBaseSurvivorAnimInstance_IsPlayingMontageByName_Params params {};
		params.MontageID = MontageID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A85E0
	 * 		Name   -> Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UBaseSurvivorAnimInstance::GetOwningSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor"));
		
		UBaseSurvivorAnimInstance_GetOwningSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseSurvivorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseSurvivorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BaseSurvivorAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAimOffsetSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimOffsetSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.AimOffsetSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A84D0
	 * 		Name   -> Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EArmIkMode                                         newMode                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArmIKSurvivorSubAnimInstance::ChangeMode(EArmIkMode newMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode"));
		
		UArmIKSurvivorSubAnimInstance_ChangeMode_Params params {};
		params.newMode = newMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArmIKSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArmIKSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.ArmIKSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8580
	 * 		Name   -> Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* UBaseKillerAnimInstance::GetOwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller"));
		
		UBaseKillerAnimInstance_GetOwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE3050
	 * 		Name   -> Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            animPOV                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseKillerAnimInstance::DBD_ForceAnimPOV(int32_t animPOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV"));
		
		UBaseKillerAnimInstance_DBD_ForceAnimPOV_Params params {};
		params.animPOV = animPOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseKillerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKillerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BaseKillerAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePlayerAttackSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePlayerAttackSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BasePlayerAttackSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8580
	 * 		Name   -> Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* UBaseKillerAttackSubAnimInstance::GetOwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller"));
		
		UBaseKillerAttackSubAnimInstance_GetOwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseKillerAttackSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKillerAttackSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BaseKillerAttackSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseKillerWeaponAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseKillerWeaponAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BaseKillerWeaponAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDAnimation.BaseMenuAnimInstance.OnCustomizationChanged
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                customizationArray                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBaseMenuAnimInstance::OnCustomizationChanged(TArray<class FName> customizationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseMenuAnimInstance.OnCustomizationChanged"));
		
		UBaseMenuAnimInstance_OnCustomizationChanged_Params params {};
		params.customizationArray = customizationArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A85B0
	 * 		Name   -> Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDMenuPlayer* UBaseMenuAnimInstance::GetOwningMenuPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer"));
		
		UBaseMenuAnimInstance_GetOwningMenuPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8550
	 * 		Name   -> Function DBDAnimation.BaseMenuAnimInstance.GetCurrentMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EGameFlowStep UBaseMenuAnimInstance::GetCurrentMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.BaseMenuAnimInstance.GetCurrentMenu"));
		
		UBaseMenuAnimInstance_GetCurrentMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseMenuAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMenuAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BaseMenuAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasePowerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasePowerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BasePowerSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBreathingSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreathingSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.BreathingSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8930
	 * 		Name   -> Function DBDAnimation.ChestAnimInstance.OnSearchedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               searched                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChestAnimInstance::OnSearchedChanged(bool searched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.ChestAnimInstance.OnSearchedChanged"));
		
		UChestAnimInstance_OnSearchedChanged_Params params {};
		params.searched = searched;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8840
	 * 		Name   -> Function DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStopped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UChestAnimInstance::OnBeingPriedOpenStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStopped"));
		
		UChestAnimInstance_OnBeingPriedOpenStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A87B0
	 * 		Name   -> Function DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChestAnimInstance::OnBeingPriedOpenStarted(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStarted"));
		
		UChestAnimInstance_OnBeingPriedOpenStarted_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChestAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChestAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.ChestAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.CrowAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomizationAnimationSelector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationAnimationSelector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.CustomizationAnimationSelector"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDynamicAccessoryAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicAccessoryAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.DynamicAccessoryAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEntityAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEntityAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.EntityAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFaceCorrectionSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFaceCorrectionSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.FaceCorrectionSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A89E0
	 * 		Name   -> Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorAnimInstance::SetSkillCheckSuccess(bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess"));
		
		UGeneratorAnimInstance_SetSkillCheckSuccess_Params params {};
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.GeneratorAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHatchAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.HatchAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A89C0
	 * 		Name   -> Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHealSurvivorSubAnimInstance::ResetHealerSkillCheckFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed"));
		
		UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8860
	 * 		Name   -> Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  healer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHealSurvivorSubAnimInstance::OnHealerSkillCheckResponseAesthetic(bool success, class ADBDPlayer* healer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic"));
		
		UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Params params {};
		params.success = success;
		params.healer = healer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHealSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.HealSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.InteractionSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044A8610
	 * 		Name   -> Function DBDAnimation.KillerAnimInstance.GetWeaponCustomizationId
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UKillerAnimInstance::GetWeaponCustomizationId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.KillerAnimInstance.GetWeaponCustomizationId"));
		
		UKillerAnimInstance_GetWeaponCustomizationId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.KillerAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerAttackSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerAttackSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.KillerAttackSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerLocomotionSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerLocomotionSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.KillerLocomotionSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerSpecificSurvivorAnimationPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerSpecificSurvivorAnimationPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.KillerSpecificSurvivorAnimationPicker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegIKSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegIKSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.LegIKSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocomotionLookAtSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionLookAtSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.LocomotionLookAtSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocomotionPredictor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionPredictor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.LocomotionPredictor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULocomotionSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocomotionSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.LocomotionSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB600
	 * 		Name   -> Function DBDAnimation.LookAtKillerSubAnimInstance.ResetNeutralIdleRotationYaw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULookAtKillerSubAnimInstance::ResetNeutralIdleRotationYaw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.LookAtKillerSubAnimInstance.ResetNeutralIdleRotationYaw"));
		
		ULookAtKillerSubAnimInstance_ResetNeutralIdleRotationYaw_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtKillerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtKillerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.LookAtKillerSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB420
	 * 		Name   -> Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULookAtTargetKillerSubAnimInstance::OnChaseStarted(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted"));
		
		ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB350
	 * 		Name   -> Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              chaseTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULookAtTargetKillerSubAnimInstance::OnChaseEnded(class ADBDPlayer* Target, float chaseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded"));
		
		ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Params params {};
		params.Target = Target;
		params.chaseTime = chaseTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtTargetKillerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtTargetKillerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.LookAtTargetKillerSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULookAtThreatSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtThreatSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.LookAtThreatSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshRotationCorrectionSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshRotationCorrectionSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.MeshRotationCorrectionSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenChestSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenChestSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.OpenChestSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB330
	 * 		Name   -> Function DBDAnimation.PalletAnimInstance.OnBeingPulledUpStopped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPalletAnimInstance::OnBeingPulledUpStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.PalletAnimInstance.OnBeingPulledUpStopped"));
		
		UPalletAnimInstance_OnBeingPulledUpStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB2A0
	 * 		Name   -> Function DBDAnimation.PalletAnimInstance.OnBeingPulledUpStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPalletAnimInstance::OnBeingPulledUpStarted(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.PalletAnimInstance.OnBeingPulledUpStarted"));
		
		UPalletAnimInstance_OnBeingPulledUpStarted_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB280
	 * 		Name   -> Function DBDAnimation.PalletAnimInstance.OnBeingDestroyedStopped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPalletAnimInstance::OnBeingDestroyedStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.PalletAnimInstance.OnBeingDestroyedStopped"));
		
		UPalletAnimInstance_OnBeingDestroyedStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB1F0
	 * 		Name   -> Function DBDAnimation.PalletAnimInstance.OnBeingDestroyedStarted
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPalletAnimInstance::OnBeingDestroyedStarted(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.PalletAnimInstance.OnBeingDestroyedStarted"));
		
		UPalletAnimInstance_OnBeingDestroyedStarted_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPalletAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPalletAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.PalletAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepairGeneratorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairGeneratorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.RepairGeneratorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URepairGeneratorSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URepairGeneratorSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.RepairGeneratorSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USabotageSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USabotageSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.SabotageSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB620
	 * 		Name   -> Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UScreamSurvivorSubAnimInstance::ResetScreamTrigger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger"));
		
		UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UScreamSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScreamSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.ScreamSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04007B50
	 * 		Name   -> Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void USkillCheckFailureTracker::ResetSkillCheckFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed"));
		
		USkillCheckFailureTracker_ResetSkillCheckFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AB4F0
	 * 		Name   -> Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USkillCheckFailureTracker::OnSkillCheckFailed(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed"));
		
		USkillCheckFailureTracker_OnSkillCheckFailed_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillCheckFailureTracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckFailureTracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.SkillCheckFailureTracker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorAimableArmSensor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimableArmSensor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.SurvivorAimableArmSensor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorAimableSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimableSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.SurvivorAimableSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorAnimInstance::SetAudioRummageAkEvent(const class FName& distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent"));
		
		USurvivorAnimInstance_SetAudioRummageAkEvent_Params params {};
		params.distance = distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USurvivorAnimInstance::OnInfectiousFrightScream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream"));
		
		USurvivorAnimInstance_OnInfectiousFrightScream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorAnimInstance::AddAudioRepairRateRadius(int32_t distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius"));
		
		USurvivorAnimInstance_AddAudioRepairRateRadius_Params params {};
		params.distance = distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.SurvivorAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AC440
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void UWakerObjectAnimInstance::ResetReappearTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer"));
		
		UWakerObjectAnimInstance_ResetReappearTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.OnReappear
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWakerObjectAnimInstance::OnReappear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.WakerObjectAnimInstance.OnReappear"));
		
		UWakerObjectAnimInstance_OnReappear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AC410
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWakerObjectAnimInstance::GetWakerObjectStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted"));
		
		UWakerObjectAnimInstance_GetWakerObjectStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AC3E0
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UWakerObjectAnimInstance::GetWakerObjectChargeComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete"));
		
		UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AC3B0
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float UWakerObjectAnimInstance::GetWakerObjectCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge"));
		
		UWakerObjectAnimInstance_GetWakerObjectCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044AC380
	 * 		Name   -> Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class AWakerObject* UWakerObjectAnimInstance::GetWakerObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject"));
		
		UWakerObjectAnimInstance_GetWakerObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWakerObjectAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWakerObjectAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnimation.WakerObjectAnimInstance"));
		return ptr;
	}

}


