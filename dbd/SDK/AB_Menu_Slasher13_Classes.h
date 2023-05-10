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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher13.AB_Menu_Slasher13_C
	 * Size -> 0x3B1A (FullSize[0x3E12] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher13_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_YR3P[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0340(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x03C0(0x0080)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_12;                           // 0x0440(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_11;                           // 0x08A0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_10;                           // 0x0D00(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_9;                            // 0x1160(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_8;                            // 0x15C0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_7;                            // 0x1A20(0x0460)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone_2;                              // 0x1E80(0x0138)
		struct FAnimNode_SpringBone                                AnimGraphNode_SpringBone;                                // 0x1FB8(0x0138)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_6;                            // 0x20F0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_5;                            // 0x2550(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_4;                            // 0x29B0(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_3;                            // 0x2E10(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics_2;                            // 0x3270(0x0460)
		struct FAnimNode_AnimDynamics                              AnimGraphNode_AnimDynamics;                              // 0x36D0(0x0460)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x3B30(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x3B50(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x3B70(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x3C10(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x3C88(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x3D28(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x3D60(0x00B0)
		bool                                                       RoleSelected;                                            // 0x3E10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x3E11(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_FX_HK_MenuInt_MakeWeaponAppear();
		void AnimNotify_FX_HK_MenuInt_MakeWeaponDisappear();
		void AnimNotify_FX_HK_MenuBack_MakeSwordVisible();
		void AnimNotify_FX_HK_Menu_MakeSwordInvisible();
		void ExecuteUbergraph_AB_Menu_Slasher13(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
