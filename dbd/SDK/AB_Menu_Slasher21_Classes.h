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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher21.AB_Menu_Slasher21_C
	 * Size -> 0x1081 (FullSize[0x1379] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher21_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_EVUN[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0368(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0390(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x03B8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x03E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x0460(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x0498(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x0518(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0550(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x05D0(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0608(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x0630(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0658(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0680(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x06A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x06D0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x06F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0778(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x07B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0830(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0868(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x08E8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x0920(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x09A0(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x09D8(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0A88(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x0AC0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x0B40(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x0B78(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x0BF8(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0C78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0CA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0CC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0CF0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0D18(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0D40(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x0D68(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x0DE8(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0E20(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0EA0(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0ED8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0F58(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0F90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1010(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1048(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x10F8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1198(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1238(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1270(0x00B0)
		bool                                                       RoleSelected;                                            // 0x1320(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x1321(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WWAR[0x6];                                   // 0x1322(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   IdleMenu;                                                // 0x1328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleMenu_Intro;                                          // 0x1330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleMenu_Lobby;                                          // 0x1338(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   IdleMenu_Back;                                           // 0x1340(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   idleMenu_Interrupt01;                                    // 0x1348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   idleMenu_Interrupt02;                                    // 0x1350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   idleMenu_Interrupt03;                                    // 0x1358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RandomInterupt;                                          // 0x1360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XQ6K[0x4];                                   // 0x1364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentMenuString;                                       // 0x1368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		EGameFlowStep                                              CurrentMenu;                                             // 0x1378(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_65E3A51A4E4A32F3EB4E6084B6C2051B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_0308113A4692318ED9C00FA18D1BAE8F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_8B8BA99E43DCB2CD83B2A1A5049D28B0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_6836D95B44C934D53C9EA686EC26F524();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_31788C2048D69F83B9A4D4A3DB16BDB7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_460FAC434547763AE5D8ABAEEA2332A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher21_AnimGraphNode_TransitionResult_7E106FCE45C1E61B87C563AA3F91739B();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_GenerateRandom();
		void ExecuteUbergraph_AB_Menu_Slasher21(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
