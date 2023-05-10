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
	 * AnimBlueprintGeneratedClass AB_Slasher_28.AB_Slasher_27_C
	 * Size -> 0x1BF5 (FullSize[0x2225] - InheritedSize[0x0630])
	 */
	class UAB_Slasher_27_C : public UOnryoAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0638(0x0038)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0670(0x0050)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x06C0(0x0050)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_4;                         // 0x0710(0x00A8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x07B8(0x0050)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_3;                         // 0x0808(0x00A8)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x08B0(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0A08(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0A30(0x0080)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0AB0(0x0018)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0AC8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0B68(0x0038)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0BA0(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0BD0(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0C08(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0CB8(0x00C0)
		unsigned char                                              UnknownData_LDK2[0x8];                                   // 0x0D78(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x0D80(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x11E0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x1640(0x0460)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1AA0(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1AC0(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1AE0(0x0460)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x1F40(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1F70(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1FA8(0x00B0)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph_2;                         // 0x2058(0x00A8)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x2100(0x00A8)
		bool                                                       __CustomProperty__newLocomotion_FFEFA6284F8F2CC59493A397CAD13299; // 0x21A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D03Z[0x3];                                   // 0x21A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty__forwardVelocity_FFEFA6284F8F2CC59493A397CAD13299; // 0x21AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty__lateralVelocity_FFEFA6284F8F2CC59493A397CAD13299; // 0x21B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__isAttacking_FFEFA6284F8F2CC59493A397CAD13299; // 0x21B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__isIdle_FFEFA6284F8F2CC59493A397CAD13299; // 0x21B5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__isInAir_FFEFA6284F8F2CC59493A397CAD13299; // 0x21B6(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		EInteractionAnimation                                      __CustomProperty__interactionType_FFEFA6284F8F2CC59493A397CAD13299; // 0x21B7(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__isCarrying_FFEFA6284F8F2CC59493A397CAD13299; // 0x21B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TB2B[0x3];                                   // 0x21B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty__turnInPlaceThresholdAngle_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__enableTurnInPlace_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isAttacking_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsCarrying_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21C2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__FirstPersonView_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21C3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      __CustomProperty__animPitch_8E74A3334B40A0AD340705BAC04A4EE7; // 0x21C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_isMoving_05C674654E31B1BDC4AD979988D88A45; // 0x21C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsInOtherWorld_05C674654E31B1BDC4AD979988D88A45; // 0x21C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsExitingManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21CA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsEnteringManifest_05C674654E31B1BDC4AD979988D88A45; // 0x21CB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsTeleporting_05C674654E31B1BDC4AD979988D88A45; // 0x21CC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsTeleportCancelled_05C674654E31B1BDC4AD979988D88A45; // 0x21CD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsStartingUpTeleport_05C674654E31B1BDC4AD979988D88A45; // 0x21CE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_IsCrawlingOutOfTV_05C674654E31B1BDC4AD979988D88A45; // 0x21CF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__idle_05C674654E31B1BDC4AD979988D88A45; // 0x21D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isFPV_05C674654E31B1BDC4AD979988D88A45; // 0x21D1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__firstPersonView_C7B5989F49CD280AECC70E98AB545B32; // 0x21D2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X6WT[0x1];                                   // 0x21D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty__direction_C7B5989F49CD280AECC70E98AB545B32; // 0x21D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty__isAttack_C7B5989F49CD280AECC70E98AB545B32; // 0x21D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty__isIdle_C7B5989F49CD280AECC70E98AB545B32; // 0x21D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PVF8[0x6];                                   // 0x21DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   _Intro;                                                  // 0x21E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAset_Slasher_LookAT                                LookAtAnimSet;                                           // 0x21E8(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraFOV;                                               // 0x2220(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLegendary;                                             // 0x2224(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void FX_K27_InteractionStart_Vignette();
		void CosmeticOnUnmanifestChargeChanged(float ChargePercent);
		void CosmeticOnManifestChargeChanged(float ChargePercent);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LayeredBoneBlend_F41A42584CB2FDCF950E51843DC55766();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_LinkedAnimGraph_05C674654E31B1BDC4AD979988D88A45();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_27_AnimGraphNode_TransitionResult_A9EBC3F241464D8B3B7F3990D8938E3D();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_FX_K27_InteractionStart_Vignette();
		void BlueprintLinkedAnimationLayersInitialized();
		void ExecuteUbergraph_AB_Slasher_28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
