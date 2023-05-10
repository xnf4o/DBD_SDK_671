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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher15.AB_Menu_Slasher15_C
	 * Size -> 0x1A0A (FullSize[0x1D02] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher15_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_C508[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0340(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x03C0(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0440(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0460(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x0480(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x08E0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x0D40(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x11A0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1600(0x0460)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1A60(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x1B00(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1B78(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1C18(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1C50(0x00B0)
		bool                                                       RoleSelected;                                            // 0x1D00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x1D01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_Menu_Slasher15(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
