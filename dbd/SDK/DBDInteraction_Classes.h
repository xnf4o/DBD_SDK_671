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
	 * Class DBDInteraction.BaseLockerInteraction
	 * Size -> 0x0030 (FullSize[0x0648] - InheritedSize[0x0618])
	 */
	class UBaseLockerInteraction : public UInteractionDefinition
	{
	public:
		class ALocker*                                             _owningLocker;                                           // 0x0618(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               _lockerPreventingTags;                                   // 0x0620(0x0020) Edit, NativeAccessSpecifierPrivate
		bool                                                       _lockerIsMontageFollower;                                // 0x0640(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_93Y0[0x7];                                   // 0x0641(0x0007) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.BaseStalkModeInteraction
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class UBaseStalkModeInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_M9Y5[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		class UStalkerComponent* GetStalkerComponent();
		bool CanStalk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.BasicChargeableInteraction
	 * Size -> 0x0038 (FullSize[0x0778] - InheritedSize[0x0740])
	 */
	class UBasicChargeableInteraction : public UChargeableInteractionDefinition
	{
	public:
		bool                                                       AutoSpawnChargeableComponent;                            // 0x0740(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ResetProgressWhenStoppingInteraction;                    // 0x0741(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoAddCharge;                                           // 0x0742(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VGF6[0x5];                                   // 0x0743(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _spawnedChargeable;                                      // 0x0748(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _chargeTime;                                             // 0x0750(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_SpawnedChargeable();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.BlessTotem
	 * Size -> 0x0030 (FullSize[0x0770] - InheritedSize[0x0740])
	 */
	class UBlessTotem : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _blessHexTotemSpeedPenalty;                              // 0x0740(0x0028) Edit, EditFixedSize, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N4JL[0x8];                                   // 0x0768(0x0008) MISSED OFFSET (PADDING)

	public:
		class ATotem* GetTotem();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.CleanseTotem
	 * Size -> 0x0000 (FullSize[0x0740] - InheritedSize[0x0740])
	 */
	class UCleanseTotem : public UChargeableInteractionDefinition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.CollectItemInteraction
	 * Size -> 0x0028 (FullSize[0x0640] - InheritedSize[0x0618])
	 */
	class UCollectItemInteraction : public UInteractionDefinition
	{
	public:
		class FScriptMulticastDelegate                             OnCollectUpdateStart;                                    // 0x0618(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCollectUpdateEnd;                                      // 0x0628(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MA9H[0x8];                                   // 0x0638(0x0008) MISSED OFFSET (PADDING)

	public:
		class ACollectable* GetItem();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.CollectItemFromSearchableInteraction
	 * Size -> 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
	 */
	class UCollectItemFromSearchableInteraction : public UCollectItemInteraction
	{
	public:
		unsigned char                                              UnknownData_OKCE[0x10];                                  // 0x0640(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.CollectItemInCrateInteraction
	 * Size -> 0x0020 (FullSize[0x0660] - InheritedSize[0x0640])
	 */
	class UCollectItemInCrateInteraction : public UCollectItemInteraction
	{
	public:
		class ASupplyCrateInteractable*                            _owningSupplyCrate;                                      // 0x0640(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2FWJ[0x18];                                  // 0x0648(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.DropItemInteraction
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class UDropItemInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_EN6C[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		class ACollectable* GetItem();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.EscapeMapInteraction
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class UEscapeMapInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_GRSQ[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.GeneratorDamageInteraction
	 * Size -> 0x0030 (FullSize[0x0770] - InheritedSize[0x0740])
	 */
	class UGeneratorDamageInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _baseImmediateDamagePercent;                             // 0x0740(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TS92[0x8];                                   // 0x0768(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_DamageGenerator(class ADBDPlayer* damageBy, class AGenerator* Generator);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.GeneratorRepairInteraction
	 * Size -> 0x0080 (FullSize[0x07C0] - InheritedSize[0x0740])
	 */
	class UGeneratorRepairInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FDBDTunableRowHandle                                _penaltyPerRepairPlayerCount[0x3];                       // 0x0740(0x0078) Edit, EditFixedSize, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N46Y[0x8];                                   // 0x07B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetIsObstructed(bool obstructed);
		bool IsObstructed();
		bool IsInteractionPossibleInternal(class ADBDPlayer* Player);
		bool IsBeingRepaired();
		class AGenerator* GetOwningGenerator();
		float GetInteractionChargeSpeedMultiplier_Implementation(class ADBDPlayer* Character);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.GeneratorToolboxRepairInteraction
	 * Size -> 0x0080 (FullSize[0x0840] - InheritedSize[0x07C0])
	 */
	class UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction
	{
	public:
		class FText                                                _interactionTextWhenEmpty;                               // 0x07C0(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _repairSkillCheckDurationWhenEmpty;                      // 0x07D8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _repairSkillCheckChanceWhenEmpty;                        // 0x0800(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SPK3[0x18];                                  // 0x0828(0x0018) MISSED OFFSET (PADDING)

	public:
		bool HasChargedToolBox(class ADBDPlayer* Player);
		class FString GetInteractionTextWhenEmpty();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.HealInteraction
	 * Size -> 0x0000 (FullSize[0x0740] - InheritedSize[0x0740])
	 */
	class UHealInteraction : public UChargeableInteractionDefinition
	{
	public:
		class ACamperPlayer* GetTargetSurvivor();
		void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.HookSurvivorDefinition
	 * Size -> 0x0010 (FullSize[0x0750] - InheritedSize[0x0740])
	 */
	class UHookSurvivorDefinition : public UChargeableInteractionDefinition
	{
	public:
		class ACamperPlayer*                                       _survivorBeingHooked;                                    // 0x0740(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3SLX[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)

	public:
		class AMeatHook* GetMeatHook();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.ItemCraftInteraction
	 * Size -> 0x0018 (FullSize[0x0630] - InheritedSize[0x0618])
	 */
	class UItemCraftInteraction : public UInteractionDefinition
	{
	public:
		class FName                                                _attachToSocketName;                                     // 0x0618(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NQW3[0x4];                                   // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _collectableClass;                                       // 0x0628(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.LinkedVomitInteraction
	 * Size -> 0x0020 (FullSize[0x0760] - InheritedSize[0x0740])
	 */
	class ULinkedVomitInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_XM8N[0x20];                                  // 0x0740(0x0020) MISSED OFFSET (PADDING)

	public:
		bool IsVomiting();
		class UVomitStateComponent* GetVomitStateComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.LockerFakeEnterInteraction
	 * Size -> 0x0038 (FullSize[0x0680] - InheritedSize[0x0648])
	 */
	class ULockerFakeEnterInteraction : public UBaseLockerInteraction
	{
	public:
		unsigned char                                              UnknownData_BZVM[0x8];                                   // 0x0648(0x0008) Fix Super Size
		struct FDBDTunableRowHandle                                _fakeEnterLoudNoiseRange;                                // 0x0650(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V9PV[0x8];                                   // 0x0678(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SearchChestInteractionBase
	 * Size -> 0x0028 (FullSize[0x0768] - InheritedSize[0x0740])
	 */
	class USearchChestInteractionBase : public UChargeableInteractionDefinition
	{
	public:
		bool                                                       _handleCompletionScoreEvents;                            // 0x0740(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2IZO[0x3];                                   // 0x0741(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _searchableCompleteContributionPercentTag;               // 0x0744(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _scoreEventFired;                                        // 0x0750(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9Y4C[0x7];                                   // 0x0751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASearchable*                                         _owningChest;                                            // 0x0758(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _onLastInteractionWasComplete;                           // 0x0760(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MCXT[0x7];                                   // 0x0761(0x0007) Fix size for supers

	public:
		void FireChestScoreEvent(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.OpenChestInteraction
	 * Size -> 0x0028 (FullSize[0x0790] - InheritedSize[0x0768])
	 */
	class UOpenChestInteraction : public USearchChestInteractionBase
	{
	public:
		struct FGameplayTag                                        _camperSearchablePercentTag;                             // 0x0768(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0JU7[0x4];                                   // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       _successExitTimeAnimSequenceReference;                   // 0x0778(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _startTime;                                              // 0x0780(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0PGS[0xC];                                   // 0x0784(0x000C) MISSED OFFSET (PADDING)

	public:
		void CollectItemIfEmptyHanded(class ACollectable* Collectable, class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.OpenHatchInteraction
	 * Size -> 0x0050 (FullSize[0x0790] - InheritedSize[0x0740])
	 */
	class UOpenHatchInteraction : public UChargeableInteractionDefinition
	{
	public:
		float                                                      SnapToEscapeLocationDuration;                            // 0x0740(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BS0E[0x4];                                   // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimationMontageDescriptor                         InteractionStoppedMontage;                               // 0x0748(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FAnimationMontageDescriptor                         InteractionSucceedMontage;                               // 0x0768(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VWFA[0x8];                                   // 0x0788(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.PalletPullUpInteraction
	 * Size -> 0x0020 (FullSize[0x0760] - InheritedSize[0x0740])
	 */
	class UPalletPullUpInteraction : public UChargeableInteractionDefinition
	{
	public:
		EPalletSide                                                _side;                                                   // 0x0740(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0XC[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APallet*                                             _owningPallet;                                           // 0x0748(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B0RI[0x10];                                  // 0x0750(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SacrificeSurvivorInteraction
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class USacrificeSurvivorInteraction : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_9HA9[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SearchOpenedChestInteraction
	 * Size -> 0x0018 (FullSize[0x0780] - InheritedSize[0x0768])
	 */
	class USearchOpenedChestInteraction : public USearchChestInteractionBase
	{
	public:
		TArray<class FName>                                        _rummagePrioritySources;                                 // 0x0768(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J4K2[0x8];                                   // 0x0778(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SelfUnhook
	 * Size -> 0x00D0 (FullSize[0x0810] - InheritedSize[0x0740])
	 */
	class USelfUnhook : public UChargeableInteractionDefinition
	{
	public:
		struct FAnimationMontageDescriptor                         _selfUnhookMontage;                                      // 0x0740(0x0020) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FString                                              _guaranteedUnhookAttemptText;                            // 0x0760(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _enduranceEffectDuration;                                // 0x0770(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _movementSpeedBonusDuration;                             // 0x0798(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _enduranceEffectClass;                                   // 0x07C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _movementSpeedBonusEffectClass;                          // 0x07C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DYBS[0x40];                                  // 0x07D0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SetTrapInteraction
	 * Size -> 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
	 */
	class USetTrapInteraction : public UChargeableInteractionDefinition
	{
	public:
		struct FSocketOrBoneCache                                  _dropSocket;                                             // 0x0740(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.SnuffTotem
	 * Size -> 0x0008 (FullSize[0x0620] - InheritedSize[0x0618])
	 */
	class USnuffTotem : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_WDCR[0x8];                                   // 0x0618(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.ThrowInteraction
	 * Size -> 0x0010 (FullSize[0x0750] - InheritedSize[0x0740])
	 */
	class UThrowInteraction : public UChargeableInteractionDefinition
	{
	public:
		class UCurveFloat*                                         _throwCancelledSpeedCurve;                               // 0x0740(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _throwCancellationExitTime;                              // 0x0748(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z4DY[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (PADDING)

	public:
		void InitThrowCancellationExitTime(float value);
		bool HasCancelledThrow();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.Unhook
	 * Size -> 0x00D0 (FullSize[0x0810] - InheritedSize[0x0740])
	 */
	class UUnhook : public UChargeableInteractionDefinition
	{
	public:
		TArray<class USceneComponent*>                             _snapPoints;                                             // 0x0740(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _unhookLoudNoiseRange;                                   // 0x0750(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _enduranceEffectDuration;                                // 0x0778(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _movementSpeedBonusDuration;                             // 0x07A0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _enduranceEffectClass;                                   // 0x07C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _movementSpeedBonusEffectClass;                          // 0x07D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorRecentlyUnhookedEffectClass;                    // 0x07D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_56IU[0x8];                                   // 0x07E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayer*                                          _unhookingPlayer;                                        // 0x07E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hookedCharacterSnapTime;                                // 0x07F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0AJV[0x4];                                   // 0x07F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACamperPlayer*                                       _playerBeingUnhooked;                                    // 0x07F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UM3R[0x10];                                  // 0x0800(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInteraction.UnhookReplicationComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UUnhookReplicationComponent : public UActorComponent
	{
	public:
		void Multicast_SetPlayerBeingUnhooked(class UUnhook* unhookInteraction, class ACamperPlayer* playerBeingUnhooked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
