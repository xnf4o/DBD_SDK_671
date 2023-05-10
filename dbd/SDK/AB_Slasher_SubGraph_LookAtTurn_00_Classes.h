#pragma once

/**
 * Name: dbd
 * Version: 6711
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass AB_Slasher_SubGraph_LookAtTurn_00.AB_Slasher_SubGraph_LookAtTurn_00_C
	 * Size -> 0x21C0 (FullSize[0x24D0] - InheritedSize[0x0310])
	 */
	class UAB_Slasher_SubGraph_LookAtTurn_00_C : public ULookAtKillerSubAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0318(0x0038)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x0350(0x0120)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0470(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x05C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x05F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0618(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0640(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0668(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0690(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x06B8(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_6;                // 0x06E8(0x0198)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x0880(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x08A0(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x08C0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x0D20(0x0460)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1180(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x11B8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1238(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x12D8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1398(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5;                // 0x13C8(0x0198)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x1560(0x0198)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x16F8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x1728(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x17E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1868(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x18A0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1920(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x19C0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1A80(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x1AB0(0x0198)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x1C48(0x0198)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1DE0(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1E10(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1ED0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1F50(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1F88(0x0030)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x1FB8(0x0198)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x2150(0x01D0)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2320(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2340(0x0020)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2360(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2398(0x00B0)
		class UBlendSpaceBase*                                     AimOffset_FPV;                                           // 0x2448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpaceBase*                                     AimOffset;                                               // 0x2450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _animPitch;                                              // 0x2458(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _firstPersonView;                                        // 0x245C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CZZS[0x3];                                   // 0x245D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpaceBase*                                     CarryAimOffset;                                          // 0x2460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       TurnLeftSequence;                                        // 0x2468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       TurnRightSequence;                                       // 0x2470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeftHandDynamicAlpha;                                    // 0x2478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightHandDynamicAlpha;                                   // 0x247C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       CarryTurnLeftSequence;                                   // 0x2480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       CarryTurnRightSequence;                                  // 0x2488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       CurrentTurnRightSequence;                                // 0x2490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _allowLookAt;                                            // 0x2498(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCarrying;                                              // 0x249C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _ignoreAimOffsetBSRelevancy;                             // 0x249D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OXT3[0x2];                                   // 0x249E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtTargetPosition;                                    // 0x24A0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentYaw;                                              // 0x24AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              CharacterMesh;                                           // 0x24B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpaceBase*                                     CurrentAimOffset;                                        // 0x24B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       CurrentTurnLeftSequence;                                 // 0x24C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAttacking;                                             // 0x24C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       lowerBodyTurnOnly;                                       // 0x24C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_54RE[0x2];                                   // 0x24CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      isCarryingAsFloat;                                       // 0x24CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
		void IsValidCarry(class UObject* animObject, bool* IsValid);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_1E0AB618474B57CB4F4B139CD2FF153F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_D8D9B40B45225383413A8EBDDD151010();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_3FE40A804DF9318CF70B05BA1D9A9CEB();
		void AnimNotify_TurnEnd();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00_AnimGraphNode_TransitionResult_08B24A344AB2AFE94EF76DA71BA99240();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void SetLookAtAnimationFromMainAB(const struct FAset_Slasher_LookAT& LookAtAnimSet);
		void ExecuteUbergraph_AB_Slasher_SubGraph_LookAtTurn_00(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
