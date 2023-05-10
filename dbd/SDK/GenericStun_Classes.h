﻿#pragma once

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
	 * BlueprintGeneratedClass GenericStun.GenericStun_C
	 * Size -> 0x0020 (FullSize[0x0638] - InheritedSize[0x0618])
	 */
	class UGenericStun_C : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_TLF1[0x8];                                   // 0x0618(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FString>                                      ForceOverrideableInteractions;                           // 0x0628(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DispatchStunEvent(class ADBDPlayer* Player);
		bool CanOverrideInteraction(class UInteractionDefinition* Interaction);
		bool IsInteractionPossibleBP(class ADBDPlayer* Player, EInputInteractionType interactionType);
		void OnInteractionUpdateStart(class ADBDPlayer* Player);
		void ExecuteUbergraph_GenericStun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
