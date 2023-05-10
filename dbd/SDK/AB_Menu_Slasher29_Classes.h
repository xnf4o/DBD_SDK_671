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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher29.AB_Menu_Slasher29_C
	 * Size -> 0x0A88 (FullSize[0x0D80] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher29_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_U7P7[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0390(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x03B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x03E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0408(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0488(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x04C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0540(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0578(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0628(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0660(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x06E0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0718(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0798(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x07D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x07F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0820(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0848(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0870(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0898(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x08C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0940(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0978(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x09F8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0A30(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0AB0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0AE8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0B68(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0BA0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0C50(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0C88(0x00B0)
		bool                                                       RoleSelected;                                            // 0x0D38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x0D39(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PFEN[0x2];                                   // 0x0D3A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomInterupt;                                          // 0x0D3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            StartRot;                                                // 0x0D40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OMC[0x4];                                   // 0x0D4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Menu_Slasher27_C*                                KillerBP;                                                // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CharacterRotationBeforeJumpScare;                        // 0x0D58(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O00M[0x4];                                   // 0x0D64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Menu_Slasher29_C*                                AsBPMenuSlasher29;                                       // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _isAboutToPlayCameraInterrupt;                           // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DZO0[0x7];                                   // 0x0D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDMenuPlayer*                                      AsDBDMenuPlayer;                                         // 0x0D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_707E28DC47ACE390FE617EB7FC2B8C2D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_E78BBE4441702E793C6476A83981FEA0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_4E65A5A7443D73F2DCB461B382A86454();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_GenerateRandom();
		void BlueprintInitializeAnimation();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher29_AnimGraphNode_TransitionResult_933F777D4FDB588172B385AEE6364472();
		void AnimNotify_GrabAnimationStarted();
		void AnimNotify_GrabAnimationEnded();
		void AnimNotify_EnableCloth();
		void AnimNotify_InterruptStart();
		void ExecuteUbergraph_AB_Menu_Slasher29(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
