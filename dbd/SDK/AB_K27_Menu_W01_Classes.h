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
	 * AnimBlueprintGeneratedClass AB_K27_Menu_W01.AB_K27_Menu_W01_C
	 * Size -> 0x03F8 (FullSize[0x06F0] - InheritedSize[0x02F8])
	 */
	class UAB_K27_Menu_W01_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_LDCM[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0340(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0368(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x0390(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0410(0x0080)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x0490(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0530(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x05B0(0x0038)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x05E8(0x0018)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x0600(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0638(0x00B0)
		bool                                                       PlayInterrupt;                                           // 0x06E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EFK8[0x3];                                   // 0x06E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponID;                                                // 0x06EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void AnimNotify_ResetPlayInterrupt();
		void PlayWeaponInterrupt(int32_t WeaponID);
		void AnimNotify_Test_prestige();
		void ExecuteUbergraph_AB_K27_Menu_W01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
