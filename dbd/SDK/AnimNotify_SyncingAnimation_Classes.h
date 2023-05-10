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
	 * BlueprintGeneratedClass AnimNotify_SyncingAnimation.AnimNotify_SyncingAnimation_C
	 * Size -> 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
	 */
	class UAnimNotify_SyncingAnimation_C : public UAnimNotifyState
	{
	public:
		Enum_MenuAnimationState                                    AnimationState;                                          // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
