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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher01.AB_Menu_Slasher01_C
	 * Size -> 0x1A0A (FullSize[0x1D02] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher01_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_9JJM[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0340(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0360(0x0020)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x0380(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x07E0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x0C40(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x10A0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x1500(0x0460)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1960(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x1A00(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1A78(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x1B18(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1B98(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x1C18(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1C50(0x00B0)
		bool                                                       RoleSelected;                                            // 0x1D00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x1D01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void ExecuteUbergraph_AB_Menu_Slasher01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
