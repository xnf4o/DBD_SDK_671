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
	 * AnimBlueprintGeneratedClass AB_Slasher_SubGraph_Menu.AB_Slasher_SubGraph_Menu_C
	 * Size -> 0x0749 (FullSize[0x0A41] - InheritedSize[0x02F8])
	 */
	class UAB_Slasher_SubGraph_Menu_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_XQXV[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0340(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x03E0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0480(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0500(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0580(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x05A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x05D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x05F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0620(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0648(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0670(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x06F0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0728(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x07A8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x07E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0860(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0898(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0918(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0950(0x00B0)
		bool                                                       RoleSelected;                                            // 0x0A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x0A01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_149Y[0x2];                                   // 0x0A02(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomInterupt;                                          // 0x0A04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Menu_BaseSlasher_C*                              BPMenuBaseSlasher;                                       // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MenuLobby;                                               // 0x0A10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MenuIdle;                                                // 0x0A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MenuIdleInterrupt01;                                     // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MenuIdleInterrupt02;                                     // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MenuIdleBack;                                            // 0x0A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   MenuIdleInterrupt03;                                     // 0x0A38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugPassToNextAnimation;                                // 0x0A40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_315C8E6444B60C3D4699AC863DECF763();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_3E3ABF8E4F276B5FBBFA5697451292CF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_13069AA346A598DDCD65FEB86788577B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_EE90647340D120A12EF9CD9BF02FCFA5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_6D2F7FB540BF4660E4584AB0B255221D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Slasher_SubGraph_Menu_AnimGraphNode_TransitionResult_342F73ED4DFC794BEF5B00B8DC5E510A();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void ChangeMenuInterrupt(int32_t MenuInterrupt, bool DebugPassCurrentAnimation);
		void SetMenuAnimationFromMainAB(const struct FAset_Slasher_Menu& MenuAnimSet);
		void ExecuteUbergraph_AB_Slasher_SubGraph_Menu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
