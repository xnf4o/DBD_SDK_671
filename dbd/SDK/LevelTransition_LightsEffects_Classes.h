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
	 * BlueprintGeneratedClass LevelTransition_LightsEffects.LevelTransition_LightsEffects_C
	 * Size -> 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
	 */
	class ALevelTransition_LightsEffects_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Fade_Out_Intensity_Multiplier__23A1AA444F5E07D5215601B3AED70035; // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Fade_Out__Direction_23A1AA444F5E07D5215601B3AED70035;    // 0x0244(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UMIG[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeOut;                                                 // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              FogDensities;                                            // 0x0250(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void FadeOut__FinishedFunc();
		void FadeOut__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_LevelTransition_LightsEffects(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
