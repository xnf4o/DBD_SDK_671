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
	 * BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C
	 * Size -> 0x00E9 (FullSize[0x07D5] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher18_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_T844[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_18_C*                                  BP_Audio_KLR_19;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              rings;                                                   // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDemonModeMenuComponent*                             DemonModeMenu;                                           // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SKWS01_REF;                                              // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TML_DemonModeCusto_Color_4A028AF64D8C75B37ACB968AFFF999A6; // 0x0718(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_DemonModeCusto_Demon_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x0728(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_DemonModeCusto_Normal_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x072C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_DemonModeCusto__Direction_4A028AF64D8C75B37ACB968AFFF999A6; // 0x0730(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NZ99[0x7];                                   // 0x0731(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_DemonModeCusto;                                      // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_KatanaDissolve_Dissolve_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x0740(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_KatanaDissolve__Direction_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x0744(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UJAG[0x3];                                   // 0x0745(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_KatanaDissolve;                                      // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsKatanaVisible;                                         // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YVRF[0x7];                                   // 0x0751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMeshComponent*>                      NormalModeCustoParts;                                    // 0x0758(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UParticleSystemComponent*>                    DemonModeVFX;                                            // 0x0768(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USkeletalMeshComponent*>                      DemonModeCustoParts;                                     // 0x0778(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FLinearColor>                                SKOniEmissiveDefault;                                    // 0x0788(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsInDemonMode;                                           // 0x0798(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1EA1[0x7];                                   // 0x0799(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                SM_OniEmissiveDefault;                                   // 0x07A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MaxSwordDissolveValue;                                   // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinDissolvevalue;                                        // 0x07B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UParticleSystemComponent*>                    NormalModeVFX;                                           // 0x07B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    SK_OniEmissiveIndex;                                     // 0x07C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SK_IsOniEmissiveIndex0;                                  // 0x07CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_56FZ[0x3];                                   // 0x07CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OniSMEmissiveIndex;                                      // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOniSMEmissiveIndex0;                                   // 0x07D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ResetOniEmissiveParameterSM();
		void ResetOniEmissiveParameterSK();
		void SM_SetOniEmissiveParameter(const struct FLinearColor& Emissive);
		void SK_SetOniEmissiveParameter(const struct FLinearColor& Emissive);
		void ShowDemonModeCusto(bool IsInDemonMode, bool IsInNormalMode);
		void SaveOniEmissiveParameter();
		void GetDemonModeCusto();
		void TML_KatanaDissolve__FinishedFunc();
		void TML_KatanaDissolve__UpdateFunc();
		void TML_DemonModeCusto__FinishedFunc();
		void TML_DemonModeCusto__UpdateFunc();
		void TML_DemonModeCusto__SwitchNormal__EventFunc();
		void TML_DemonModeCusto__SwitchDemon__EventFunc();
		void ActivateEndGameVignette(bool IsActive);
		void ActivatePlayerExposedVFX();
		void ActivateLocalPlayerExposedVFX();
		void SetPlayerExposedVFX();
		void SetHighlightedVFX();
		void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool intense);
		void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool killer);
		void StartTravellingPP();
		void StartTravellingDissolve();
		void StopTravellingDissolve();
		void StartPounceVFX();
		void StopPounceVFX();
		void StartSalivaVFX();
		void StopSalivaVFX();
		void StopTravellingPP();
		void ActivatePounceStateVFX();
		void DestroyBloodOrb();
		void SwitchOniWeaponsToNormal();
		void DisableDemonMode();
		void ReturnToDemonMode();
		void HideOniKatana_TPV();
		void ShowGunBullet();
		void HideGunBullet();
		void SpawnFakeBullet();
		void ActivateSacrificeCamBlood();
		void StartDeathBedDissolve();
		void DeactivateKnockoutVFX();
		void ActivateKnockoutVFX();
		void SpawnFullScreenBlood();
		void StartDeathBedRelocateVignette();
		void ActivateAttemptEscapeVFX();
		void ShowSyringe();
		void HideSyringe();
		void AnimateLiquidSyringe();
		void ActivateVignetteOnWallCollision();
		void HideSyringeOnStun();
		void K22_SpawnWipeVFX();
		void K22_HighlightDormantMain(bool IsDormantMain);
		void K22_HighlightDormant(bool IsDormant);
		void K22_HighlightMissJump();
		void K22_DormantAttachedSlasher();
		void K22_JumpTrail_Activate();
		void K22_JumpTrail_Deactivate();
		void K22_ReleaseBrother();
		void K22_MembraneRecovery();
		void K22_MembraneDelete();
		void K22_BabyBloodDissolve();
		void K22_BabyRespawn();
		void K22_Jump_Active();
		void K22_Jump_Inactive();
		void OnExecution();
		void K05_SetTrap();
		void K05_TrapImpact();
		void K05_TrapImpactOff();
		void K05_BloodDrops();
		void K04_InvisibleOn();
		void K04_InvisibleOff();
		void K04_TelekinesisOn();
		void K04_TelekinesisOff();
		void K22_WrongLanding(bool WrongLanding);
		void K22_AttachedToSurvivor_VFX();
		void K22_DetachedFromSurvivor_VFX();
		void K22_WrongLandingVignette(bool WrongLanding);
		void K12_GetToxinVignette(EBombType BombType);
		void K12_GetAntidoteVignette();
		void K12_Killer_AntidoteEnd();
		void K12_Killer_AntidoteBegin();
		void K12_Killer_BombSmokeColor();
		void K12_Killer_RemoveVignette();
		void K12_Killer_PlaceVignette();
		void K22_QuickDissolveBrother();
		void Killer_LungeAttack_Start();
		void Killer_LungeAttack_End();
		void Camper_AntidoteBoostVignette_Start();
		void Camper_AntidoteBoostVignette_End();
		void K22_BrotherDissolveLocker();
		void K22_HighlightMissJump_Stop();
		void K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous);
		void K22_IsAttachedLocker(bool IsAttachedLocker);
		void K23_ShowKnifeLT();
		void K23_ShowKnifeRT();
		void K23_ShowBat();
		void K23_HideBat();
		void K23_HideKnifeRT();
		void K23_HideKnifeLT();
		void AddBloodDrippingGKMoriMale();
		void Survivor_BoonRadius_Enter();
		void Survivor_BoonRadius_Exit();
		void Boon_Unbound();
		void ReceiveBeginPlay();
		void SwitchKanoboToDemonMode();
		void SwitchKanobotoNormalMode();
		void ShowOniKatana();
		void HideOniKatana();
		void OnCustomisationUpdated();
		void ShowDemonCosmetic();
		void HideDemonCosmetic();
		void ReturnOniToNormal();
		void StopTransformation();
		void ExecuteUbergraph_BP_Menu_Slasher18(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
