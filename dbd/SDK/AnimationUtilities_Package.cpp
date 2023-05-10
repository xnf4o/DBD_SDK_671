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
	 * 		RVA    -> 0x07A02B80
	 * 		Name   -> Function AnimationUtilities.SleepingAnimInstance.Wakeup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USleepingAnimInstance::Wakeup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.SleepingAnimInstance.Wakeup"));
		
		USleepingAnimInstance_Wakeup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A02AF0
	 * 		Name   -> Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               neverIdle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USleepingAnimInstance::SetNeverIdle(bool neverIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle"));
		
		USleepingAnimInstance_SetNeverIdle_Params params {};
		params.neverIdle = neverIdle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A02A60
	 * 		Name   -> Function AnimationUtilities.SleepingAnimInstance.OnMontageStart
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USleepingAnimInstance::OnMontageStart(class UAnimMontage* Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.SleepingAnimInstance.OnMontageStart"));
		
		USleepingAnimInstance_OnMontageStart_Params params {};
		params.Montage = Montage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USleepingAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USleepingAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.SleepingAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.AnimCollection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimEffectBlackBoard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimEffectBlackBoard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.AnimEffectBlackBoard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A00680
	 * 		Name   -> Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NotifyName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAnimEffectHandler::HandleAnimNotify(class AActor* Player, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify"));
		
		UAnimEffectHandler_HandleAnimNotify_Params params {};
		params.Player = Player;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimEffectHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimEffectHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.AnimEffectHandler"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A00BD0
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               Root                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimInstance* UAnimInstanceExt::STATIC_GetSubAnimInstance(class UAnimInstance* Root, class UClass* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance"));
		
		UAnimInstanceExt_GetSubAnimInstance_Params params {};
		params.Root = Root;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A00B40
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* UAnimInstanceExt::STATIC_GetRootSkeletalMeshComponent(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent"));
		
		UAnimInstanceExt_GetRootSkeletalMeshComponent_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A00AB0
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* UAnimInstanceExt::STATIC_GetOwningCharacterSkeletalMeshComponent(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent"));
		
		UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A00A20
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACharacter* UAnimInstanceExt::STATIC_GetOwningCharacter(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter"));
		
		UAnimInstanceExt_GetOwningCharacter_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A00990
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UAnimInstanceExt::STATIC_GetOwningActor(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.AnimInstanceExt.GetOwningActor"));
		
		UAnimInstanceExt_GetOwningActor_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.AnimInstanceExt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimLayerUpdateInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimLayerUpdateInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.AnimLayerUpdateInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDetectionFanComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDetectionFanComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.DetectionFanComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArmDetectionFanComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArmDetectionFanComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.ArmDetectionFanComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A01440
	 * 		Name   -> Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkinnedMeshComponent*                       Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseGroundDetectorComponent::InitSkinnedMeshComponent(class USkinnedMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent"));
		
		UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A01340
	 * 		Name   -> Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     targetPos                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     extraOffset                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBaseGroundDetectorComponent::GetGroundPosition(const struct FVector& targetPos, const struct FVector& extraOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition"));
		
		UBaseGroundDetectorComponent_GetGroundPosition_Params params {};
		params.targetPos = targetPos;
		params.extraOffset = extraOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseGroundDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseGroundDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.BaseGroundDetectorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A01640
	 * 		Name   -> Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        BoneSocketName                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBoneSocketLocalVelocityEvaluator::GetLocalVelocity(const class FName& BoneSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity"));
		
		UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Params params {};
		params.BoneSocketName = BoneSocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoneSocketLocalVelocityEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneSocketLocalVelocityEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.BoneSocketLocalVelocityEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFootGroundDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootGroundDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.FootGroundDetectorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFromBoneGroundDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFromBoneGroundDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.FromBoneGroundDetectorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimationDependency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimationDependency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.AnimationDependency"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstanceLeader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceLeader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.AnimInstanceLeader"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USleepableSkeletalMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USleepableSkeletalMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.SleepableSkeletalMesh"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A02470
	 * 		Name   -> Function AnimationUtilities.MoveComponentToComponent.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMoveComponentToComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.MoveComponentToComponent.Stop"));
		
		UMoveComponentToComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A02350
	 * 		Name   -> Function AnimationUtilities.MoveComponentToComponent.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             componentToMove                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Target                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoveComponentToComponent::Start(class USceneComponent* componentToMove, class USceneComponent* Target, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.MoveComponentToComponent.Start"));
		
		UMoveComponentToComponent_Start_Params params {};
		params.componentToMove = componentToMove;
		params.Target = Target;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMoveComponentToComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveComponentToComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.MoveComponentToComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResetControlPitchAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResetControlPitchAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.ResetControlPitchAnimNotify"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A027C0
	 * 		Name   -> Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      masterMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlaveAnimInstance::SetMasterMesh(class USkeletalMeshComponent* masterMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh"));
		
		USlaveAnimInstance_SetMasterMesh_Params params {};
		params.masterMesh = masterMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07A02790
	 * 		Name   -> Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* USlaveAnimInstance::GetMasterMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh"));
		
		USlaveAnimInstance_GetMasterMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlaveAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlaveAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.SlaveAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USleepingSkinnedMeshRegisterer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USleepingSkinnedMeshRegisterer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class AnimationUtilities.SleepingSkinnedMeshRegisterer"));
		return ptr;
	}

}


