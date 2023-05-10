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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher26.AB_Menu_Slasher26_C
	 * Size -> 0x0128 (FullSize[0x0420] - InheritedSize[0x02F8])
	 */
	class UAB_Menu_Slasher26_C : public UBaseMenuAnimInstance
	{
	public:
		unsigned char                                              UnknownData_8ZRM[0x8];                                   // 0x02F8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0308(0x0038)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x0340(0x00A8)
		class ABP_Menu_Slasher26_C*                                KillerBP;                                                // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAset_Slasher_Menu                                  MenuAnimSet;                                             // 0x03F0(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void OnNotifyEnd_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName);
		void OnNotifyBegin_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName);
		void OnInterrupted_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName);
		void OnBlendOut_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName);
		void OnCompleted_179E1E3C4DD31E5A8CE35F98654474C7(const class FName& NotifyName);
		void BlueprintInitializeAnimation();
		void BlueprintLinkedAnimationLayersInitialized();
		void OnMenuAnimationStateChange_Event(Enum_MenuAnimationState State);
		void ExecuteUbergraph_AB_Menu_Slasher26(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
