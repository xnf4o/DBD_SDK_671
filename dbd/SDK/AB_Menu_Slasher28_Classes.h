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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher28.AB_Menu_Slasher28_C
	 * Size -> 0x0A30 (FullSize[0x0D40] - InheritedSize[0x0310])
	 */
	class UAB_Menu_Slasher28_C : public UK28MenuAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0318(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x0350(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0378(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x03F8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0430(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x04B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x04D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0500(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0528(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0550(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0578(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x05A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0620(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0658(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x06D8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0710(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0790(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x07C8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x0848(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0880(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0930(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x09B0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0A50(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0AF0(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0B28(0x00B0)
		bool                                                       RoleSelected;                                            // 0x0BD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x0BD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7T25[0x6];                                   // 0x0BDA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Menu_Slasher28_C*                                KillerBP;                                                // 0x0BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomInterupt;                                          // 0x0BE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLegendary;                                             // 0x0BEC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EGameFlowStep                                              CurrentMenu;                                             // 0x0BED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WG5Z[0x2];                                   // 0x0BEE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentMenuString;                                       // 0x0BF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Anim_IdleMenuSpawn;                                      // 0x0C00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Anim_IdleMenuLobby;                                      // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Anim_IdleMenuBack;                                       // 0x0C10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Anim_MenuInterupt01;                                     // 0x0C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Anim_MenuInterupt02;                                     // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Anim_MenuInterupt03;                                     // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   Anim_IdleMenu;                                           // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AnimationMappingIndex;                                   // 0x0C38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3CO4[0x4];                                   // 0x0C3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FASet_Slasher_28_Menu                               ASet_Menu_AA;                                            // 0x0C40(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FASet_Slasher_28_Menu                               ASet_Menu_AB;                                            // 0x0C78(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FASet_Slasher_28_Menu                               ASet_Menu_BA;                                            // 0x0CB0(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		struct FASet_Slasher_28_Menu                               ASet_Menu_BB;                                            // 0x0CE8(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             K28_IntroStart_Menu_EventDispatcher;                     // 0x0D20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             K28_IntroEnd_Menu_EventDispatcher;                       // 0x0D30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void OnInterrupted_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName);
		void OnBlendOut_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName);
		void OnCompleted_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName);
		void OnNotifyEnd_67A4A0524204789067E9DB964585A407(const class FName& NotifyName);
		void OnNotifyBegin_67A4A0524204789067E9DB964585A407(const class FName& NotifyName);
		void OnInterrupted_67A4A0524204789067E9DB964585A407(const class FName& NotifyName);
		void OnBlendOut_67A4A0524204789067E9DB964585A407(const class FName& NotifyName);
		void OnCompleted_67A4A0524204789067E9DB964585A407(const class FName& NotifyName);
		void OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName);
		void OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName);
		void OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName);
		void OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName);
		void OnCompleted_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName);
		void OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName);
		void OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName);
		void OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName);
		void OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName);
		void OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName);
		void OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName);
		void OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void AnimNotify_GenerateRandom();
		void BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);
		void UpdateAnimationSet();
		void AnimNotify_Idle();
		void AnimNotify_Interupt01Start();
		void AnimNotify_Interupt02Start();
		void AnimNotify_K24_Menu_Interrupt01();
		void AnimNotify_Hand_Start();
		void AnimNotify_IntroEnd();
		void ExecuteUbergraph_AB_Menu_Slasher28(int32_t EntryPoint);
		void K28_IntroEnd_Menu_EventDispatcher__DelegateSignature();
		void K28_IntroStart_Menu_EventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
