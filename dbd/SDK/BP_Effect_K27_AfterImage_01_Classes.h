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
	 * BlueprintGeneratedClass BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class ABP_Effect_K27_AfterImage_01_C : public APoseableHusk
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Fade_Fade_5487A9754B5AE15B4E9D0F8644A2CE40;              // 0x0268(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Fade__Direction_5487A9754B5AE15B4E9D0F8644A2CE40;        // 0x026C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9H98[0x3];                                   // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  fade;                                                    // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      opacityValue;                                            // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x027C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Fade__FinishedFunc();
		void Fade__UpdateFunc();
		void Fade__RemoveVFX__EventFunc();
		void Cosmetic_OnAnimationPoseCaptured();
		void HideHusk();
		void Cosmetic_InitializeSkeletalMesh(class USkeletalMeshComponent* Mesh);
		void ExecuteUbergraph_BP_Effect_K27_AfterImage_01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
