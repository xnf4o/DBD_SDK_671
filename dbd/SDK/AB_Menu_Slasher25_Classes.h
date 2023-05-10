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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher25.AB_Menu_Slasher25_C
	 * Size -> 0x088E (FullSize[0x0B86] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher25_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_FZZS[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0390(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x03B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x03E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0408(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0430(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x04B0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x04E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0568(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x05A0(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0620(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x06E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0760(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0798(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0848(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x08C8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0948(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x09E8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0A88(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0AC0(0x00B0)
		bool                                                       RoleSelected;                                            // 0x0B70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x0B71(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       _interrupt02;                                            // 0x0B72(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AG35[0x5];                                   // 0x0B73(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Menu_Slasher25_C*                                KillerBP;                                                // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomInterupt;                                          // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _IsLegendary;                                            // 0x0B84(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CancelInterrupt;                                         // 0x0B85(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void OnInterrupted_D845EE60491051D138D7E69B859DEC98(const class FName& NotifyName);
		void OnBlendOut_D845EE60491051D138D7E69B859DEC98(const class FName& NotifyName);
		void OnCompleted_D845EE60491051D138D7E69B859DEC98(const class FName& NotifyName);
		void OnNotifyEnd_22E050B7467A5A507B9A4EB97AFB3C7A(const class FName& NotifyName);
		void OnNotifyBegin_22E050B7467A5A507B9A4EB97AFB3C7A(const class FName& NotifyName);
		void OnInterrupted_22E050B7467A5A507B9A4EB97AFB3C7A(const class FName& NotifyName);
		void OnBlendOut_22E050B7467A5A507B9A4EB97AFB3C7A(const class FName& NotifyName);
		void OnCompleted_22E050B7467A5A507B9A4EB97AFB3C7A(const class FName& NotifyName);
		void OnNotifyEnd_1C411FA44F6B6E7B537275A481080575(const class FName& NotifyName);
		void OnNotifyBegin_1C411FA44F6B6E7B537275A481080575(const class FName& NotifyName);
		void OnInterrupted_1C411FA44F6B6E7B537275A481080575(const class FName& NotifyName);
		void OnBlendOut_1C411FA44F6B6E7B537275A481080575(const class FName& NotifyName);
		void OnCompleted_1C411FA44F6B6E7B537275A481080575(const class FName& NotifyName);
		void OnNotifyEnd_0E98A85F4EB644014D42909522C7C474(const class FName& NotifyName);
		void OnNotifyBegin_0E98A85F4EB644014D42909522C7C474(const class FName& NotifyName);
		void OnInterrupted_0E98A85F4EB644014D42909522C7C474(const class FName& NotifyName);
		void OnBlendOut_0E98A85F4EB644014D42909522C7C474(const class FName& NotifyName);
		void OnCompleted_0E98A85F4EB644014D42909522C7C474(const class FName& NotifyName);
		void OnNotifyBegin_D845EE60491051D138D7E69B859DEC98(const class FName& NotifyName);
		void OnNotifyEnd_D845EE60491051D138D7E69B859DEC98(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_LayeredBoneBlend_634B60C44CBBE54A99205A9667B45B41();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_TransitionResult_F4FE0D2D4C45163D1651928AAD4B8ED4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher25_AnimGraphNode_TransitionResult_3432C8EB4229B4949B98409C2AC734CF();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_Interupt02Start();
		void AnimNotify_Interupt01Start();
		void BlueprintInitializeAnimation();
		void AnimNotify_Idle();
		void AnimNotify_FX_K25_Menu_AppearBox();
		void AnimNotify_FX_K25_Menu_DisappearBox();
		void HideAccessories();
		void HideChainsAndLament();
		void ExecuteUbergraph_AB_Menu_Slasher25(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
