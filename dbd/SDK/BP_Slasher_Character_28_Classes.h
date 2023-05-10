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
	 * BlueprintGeneratedClass BP_Slasher_Character_28.BP_Slasher_Character_27_C
	 * Size -> 0x0164 (FullSize[0x1B21] - InheritedSize[0x19BD])
	 */
	class ABP_Slasher_Character_27_C : public ABP_Slasher_Character_C
	{
	public:
		unsigned char                                              UnknownData_3ORD[0x3];                                   // 0x19BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x19C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UIgnorePlayersCollisionsComponent*                   IgnorePlayersCollisions;                                 // 0x19C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak_Audio_Killer_NoOcclusion;                             // 0x19D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_AfterImageComponent_C*                           BP_AfterImageComponent;                                  // 0x19D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Audio_KLR_27_C*                                  BP_Audio_KLR_28;                                         // 0x19E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USlashAttack_BP_C*                                   SlashAttack_BP_C;                                        // 0x19E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPounceAttack_BP_C*                                  PounceAttack_BP_C;                                       // 0x19F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TML_VignetteIntensityOnInteraction_InteractionVignetteVanish_19417BB8491889DE9FDC42BE330FFFDD; // 0x19F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_VignetteIntensityOnInteraction__Direction_19417BB8491889DE9FDC42BE330FFFDD; // 0x19FC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MXK6[0x3];                                   // 0x19FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_VignetteIntensityOnInteraction;                      // 0x1A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_TeleportHideMesh_NewTrack_0_00E7BDF14A0844E3B8BCBDB228CC22D8; // 0x1A08(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_TeleportHideMesh__Direction_00E7BDF14A0844E3B8BCBDB228CC22D8; // 0x1A0C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YFG4[0x3];                                   // 0x1A0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_TeleportHideMesh;                                    // 0x1A10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_TeleportFeet_VaultOpacityDissolveLvl_2155BA49426F5ED7364FE88DDA5883B4; // 0x1A18(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_TeleportFeet__Direction_2155BA49426F5ED7364FE88DDA5883B4; // 0x1A1C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9BS4[0x3];                                   // 0x1A1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_TeleportFeet;                                        // 0x1A20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Unmanifest_PowerScaling_5390BF654162A90BA43CDCB423451EBF; // 0x1A28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Unmanifest_Vignette_Intensity_5390BF654162A90BA43CDCB423451EBF; // 0x1A2C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_Unmanifest__Direction_5390BF654162A90BA43CDCB423451EBF; // 0x1A30(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NMS9[0x7];                                   // 0x1A31(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_Unmanifest;                                          // 0x1A38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Manifest_PowerScaling_C8B2EF204D929F27887891B9BEA446ED; // 0x1A40(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Manifest_Vignette_Intensity_C8B2EF204D929F27887891B9BEA446ED; // 0x1A44(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_Manifest__Direction_C8B2EF204D929F27887891B9BEA446ED; // 0x1A48(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TVQY[0x7];                                   // 0x1A49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_Manifest;                                            // 0x1A50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Opacity_Opacity_Hair_98033A1B44F8FE679812E7804399EB22; // 0x1A58(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Opacity_Opacity_Body_98033A1B44F8FE679812E7804399EB22; // 0x1A5C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_Opacity__Direction_98033A1B44F8FE679812E7804399EB22; // 0x1A60(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D531[0x7];                                   // 0x1A61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_Opacity;                                             // 0x1A68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_FadeToBlack_Use_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A70(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_Vignette_Intensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A74(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_Outline_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A78(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_FadeIntensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A7C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeToBlackTimeline__Direction_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A80(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H1XF[0x7];                                   // 0x1A81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeToBlackTimeline;                                     // 0x1A88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PPVignetteBasicFadeToBlack;                              // 0x1A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      prevFadeToBlackBasicSize;                                // 0x1A98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsForwardFade;                                           // 0x1A9C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZCDO[0x3];                                   // 0x1A9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PP_Vignette_K27_Manifest;                                // 0x1AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedBlendable                                  Manifest_WeightedBlendable;                              // 0x1AA8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FWeightedBlendable>                          Manifest_WeightedBlendables;                             // 0x1AB8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UNiagaraComponent*>                           NS_FX_Manifest_Charge;                                   // 0x1AC8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsTeleporting;                                           // 0x1AD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MMOZ[0x7];                                   // 0x1AD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraComponent*                                   NS_FX_Manifest_Charge_02;                                // 0x1AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedBlendable                                  FadeToBlack_WeightedBlendable;                           // 0x1AE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FWeightedBlendable>                          FadeToBlack_WeightedBlendables;                          // 0x1AF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAB_Slasher_27_C*                                    AB_Slasher_28;                                           // 0x1B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Teleport_VeinsColor;                                     // 0x1B10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsManifested;                                            // 0x1B1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WantsVisible;                                            // 0x1B1D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInTeleportInteraction;                                 // 0x1B1E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsVisible;                                               // 0x1B1F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFlickeringStopped;                                     // 0x1B20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OtherWorldVignetteIntensity();
		void TryRestartFlickerAfterTeleportation();
		void SetCastShadow(bool NewCastShadow);
		bool CanUpdateFlicker();
		void FinishHideMesh();
		void StopFlicker();
		void RandomLocationAfterImage(struct FTransform* NewParam);
		void UserConstructionScript();
		void FadeToBlackTimeline__FinishedFunc();
		void FadeToBlackTimeline__UpdateFunc();
		void TML_Opacity__FinishedFunc();
		void TML_Opacity__UpdateFunc();
		void TML_Opacity__EventHideVFX__EventFunc();
		void TML_Opacity__EventShadow__EventFunc();
		void TML_Manifest__FinishedFunc();
		void TML_Manifest__UpdateFunc();
		void TML_Unmanifest__FinishedFunc();
		void TML_Unmanifest__UpdateFunc();
		void TML_TeleportHideMesh__FinishedFunc();
		void TML_TeleportHideMesh__UpdateFunc();
		void TML_TeleportFeet__FinishedFunc();
		void TML_TeleportFeet__UpdateFunc();
		void TML_VignetteIntensityOnInteraction__FinishedFunc();
		void TML_VignetteIntensityOnInteraction__UpdateFunc();
		void FX_K27_SpawnMiniMoriVignette();
		void FX_FadeCondemnedStatus();
		void FX_K27_ShowTape();
		void FX_K27_HideTape();
		void Cosmetic_OnTeleportSuccess();
		void Cosmetic_OnTeleportStart();
		void Cosmetic_OnTeleportFinished();
		void Cosmetic_OnTeleportCancelled();
		void SpawnAfterImage();
		void ReceiveBeginPlay();
		void Cosmetic_OnChargeManifestSuccess();
		void Cosmetic_OnChargeManifestStart();
		void Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest);
		void Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force);
		void Cosmetic_OnChargeManifestCancelled();
		void Cosmetic_OnChargeUnmanifestStart();
		void Cosmetic_OnChargeUnmanifestSuccess();
		void Cosmetic_OnChargeUnmanifestCancelled();
		void CosmeticOnUnmanifestChargeChanged(float ChargePercent);
		void CosmeticOnManifestChargeChanged(float ChargePercent);
		void ManifestCancelCharge();
		void UnmanifestCancelCharge();
		void FX_K27_InteractionStart_Vignette();
		void HideMesh();
		void UpdateVisibilityOnTeleportsuccess();
		void EventOnManifestedThroughInteraction();
		void UnhideMesh();
		void OnLevelReadyToPlay();
		void CE_OnSoundbankLoaded();
		void ExecuteUbergraph_BP_Slasher_Character_28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
