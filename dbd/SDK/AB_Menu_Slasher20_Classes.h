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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher20.AB_Menu_Slasher20_C
	 * Size -> 0x0302 (FullSize[0x05FA] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher20_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_V5JJ[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0340(0x00A0)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x03E0(0x0078)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0458(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x04F8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0578(0x0080)
		bool                                                       RoleSelected;                                            // 0x05F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x05F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_FX_SK_SwitchClub_DemonMode();
		void AnimNotify_FX_SK_SwitchClub_NormalMode();
		void AnimNotify_FK_SK_ShowKatana();
		void AnimNotify_FX_SK_HideKatana();
		void AnimNotify_FX_SK_ShowDemonCosmetic();
		void AnimNotify_FX_SK_HideDemonCosmetic();
		void AnimNotify_FX_SK_HideKatana_TPV();
		void ExecuteUbergraph_AB_Menu_Slasher20(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
