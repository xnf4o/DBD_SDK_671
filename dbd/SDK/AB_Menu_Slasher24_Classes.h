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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher24.AB_Menu_Slasher24_C
	 * Size -> 0x0400 (FullSize[0x06F8] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher24_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_MHYS[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0340(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x03C0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0440(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x04E0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0558(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x05F8(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0630(0x00B0)
		bool                                                       RoleSelected;                                            // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x06E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1JZV[0x6];                                   // 0x06E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Slasher[0x10];                                           // 0x06E8(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_K24_Inter_Start();
		void AnimNotify_K24_Inter_Stop();
		void BlueprintInitializeAnimation();
		void ExecuteUbergraph_AB_Menu_Slasher24(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
