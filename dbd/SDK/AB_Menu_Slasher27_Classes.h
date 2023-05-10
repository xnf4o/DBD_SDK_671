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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher27.AB_Menu_Slasher27_C
	 * Size -> 0x1C90 (FullSize[0x1F88] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher27_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_33K8[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0340(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0368(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x03E8(0x0038)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x0420(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x0880(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x0CE0(0x0460)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1140(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1160(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1180(0x0460)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x15E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x1608(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x1630(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x1658(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x1680(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x16A8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x16D0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1750(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1788(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1808(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1840(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x18C0(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x1940(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x19E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x1A60(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x1A98(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1B18(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1B50(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1C00(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1C80(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1D00(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1DA0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1E40(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1E78(0x00B0)
		bool                                                       RoleSelected;                                            // 0x1F28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x1F29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _interrupt02;                                            // 0x1F2A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VK6Q[0x5];                                   // 0x1F2B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Menu_Slasher27_C*                                KillerBP;                                                // 0x1F30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomInterupt;                                          // 0x1F38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLegendary;                                             // 0x1F3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VTXF[0x3];                                   // 0x1F3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            StartRot;                                                // 0x1F40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EGameFlowStep                                              CurrentMenu;                                             // 0x1F4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZLLX[0x3];                                   // 0x1F4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentMenuString;                                       // 0x1F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                WeaponName;                                              // 0x1F60(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WeaponID;                                                // 0x1F6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CharacterRotationBeforeJumpScare;                        // 0x1F70(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KY1S[0x4];                                   // 0x1F7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAB_K27_Menu_W01_C*                                  WeaponAnimInstance;                                      // 0x1F80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_F521E66243F7D658ECD60EABD1FD6098();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_3A26F1734FC9DE8BBD6B39895C1BA90F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_388D65DB4FF539B276F58B9B40396116();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_AFBF06C142D14A80305DC69BD20DAE36();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_AnimDynamics_6EF9BF254B3C640B6710C0BB5707683E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_943CB0FE470D01362FE2FDBD2417F2B2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_12DEC89A4BE201613574DA826ADAE117();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher27_AnimGraphNode_TransitionResult_4CF4DAD64CEDF5C78EA13380714C48FD();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void LockRotation(bool lock);
		void AnimNotify_FX_K27_PostprocessInterrupt_02();
		void AnimNotify_FX_K27_IdleInterrupt_01();
		void AnimNotify_FX_K27_IdleInterrupt_01_Destroy();
		void AnimNotify_FX_K27_IdleInterrupt_02_Destroy();
		void AnimNotify_GenerateRandom();
		void AnimNotify_OnJumpScareAnimStarted();
		void AnimNotify_OnJumpScareAnimEnded();
		void OnCustomizationChanged(TArray<class FName> customizationArray);
		void AnimNotify_IntroStart();
		void AnimNotify_IntroEnd();
		void ExecuteUbergraph_AB_Menu_Slasher27(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
