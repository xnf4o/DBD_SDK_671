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
	 * Class DBDCompetence.EnduranceEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UEnduranceEffect : public UStatusEffect
	{
	public:
		class UClass*                                              _enduranceHighlightEffectClass;                          // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D6KQ[0x8];                                   // 0x0358(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivatableEnduranceEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UActivatableEnduranceEffect : public UEnduranceEffect
	{
	public:
		void Authority_Start(float Duration);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AdjustableCooldownStatusEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UAdjustableCooldownStatusEffect : public UStatusEffect
	{
	public:
		struct FGameplayTag                                        CooldownModifierType;                                    // 0x0350(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZSHS[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ExhaustedEffect
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class UExhaustedEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		float                                                      CooldownModifier;                                        // 0x0360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FXK0[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivatableExhaustedEffect
	 * Size -> 0x0000 (FullSize[0x0368] - InheritedSize[0x0368])
	 */
	class UActivatableExhaustedEffect : public UExhaustedEffect
	{
	public:
		void Authority_Start(float Duration);
		void Authority_OnHookCamper(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivateOnEventTimedStatusEffect
	 * Size -> 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
	 */
	class UActivateOnEventTimedStatusEffect : public UStatusEffect
	{
	public:
		class UClass*                                              _activationStrategyClass;                                // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTagContainer                               _eventsToActivateOn;                                     // 0x0358(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		class UActivateOnEventBaseActivationStrategy*              _activationStrategy;                                     // 0x0378(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivateOnEventBaseActivationStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UActivateOnEventBaseActivationStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivateOnEventAlwaysActivationStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UActivateOnEventAlwaysActivationStrategy : public UActivateOnEventBaseActivationStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivateOnEventTargetActivationStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UActivateOnEventTargetActivationStrategy : public UActivateOnEventBaseActivationStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ActivateOnEventInstigatorActivationStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UActivateOnEventInstigatorActivationStrategy : public UActivateOnEventBaseActivationStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Adrenaline
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class UAdrenaline : public UPerk
	{
	public:
		class FName                                                _exhaustedEffectID;                                      // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UOHK[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _speedEffect;                                            // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _exhaustionEffect;                                       // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementSpeedDuration;                                  // 0x03E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementSpeedPercentage;                                // 0x03EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EXBN[0x18];                                  // 0x03F0(0x0018) MISSED OFFSET (PADDING)

	public:
		void Multicast_DispatchAdrenalineEvents(bool IsHealthy, float HealAmount);
		void Authority_AttemptApplyPerk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AlertKillerRevealEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UAlertKillerRevealEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AllHexTotemsAreActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UAllHexTotemsAreActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_985K[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AnyActorPairQueryRangeIsTrue
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_7CE0[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnInRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AnyMeansNecessary
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UAnyMeansNecessary : public UPerk
	{
	public:
		float                                                      _actionSpeedBonus[0x3];                                  // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OQY6[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _anyMeansNecessaryActionSpeedEffect;                     // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnPalletPulledUp(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.AnySurvivorHasObjectState
	 * Size -> 0x0070 (FullSize[0x0158] - InheritedSize[0x00E8])
	 */
	class UAnySurvivorHasObjectState : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_5XQ7[0x50];                                  // 0x00E8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _stateTag;                                               // 0x0138(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_070S[0x14];                                  // 0x0144(0x0014) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorRemoved(class ACamperPlayer* Survivor);
		void OnSurvivorAdded(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Babysitter
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UBabysitter : public UPerk
	{
	public:
		float                                                      _scratchMarkHidingTime[0x3];                             // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffect[0x3];                                       // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _showAuraTime[0x3];                                      // 0x03E0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownTime[0x3];                                      // 0x03EC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _perkEffect;                                             // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BabysitterEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UBabysitterEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BaseIsPerkUsableCondition
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UBaseIsPerkUsableCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_NCGG[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BaseIsPlayerPerformingInteraction
	 * Size -> 0x0030 (FullSize[0x0118] - InheritedSize[0x00E8])
	 */
	class UBaseIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTagContainer                               _interactionSemantics;                                   // 0x00E8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IP99[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (PADDING)

	public:
		void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);
		void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BaseLingeringStatusEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UBaseLingeringStatusEffect : public UStatusEffect
	{
	public:
		float                                                      _lingerDuration;                                         // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ID62[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetLingerDuration(float lingerDuration);
		void Authority_DeactivateEffect();
		void Authority_ActivateEffect();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BetterTogether
	 * Size -> 0x0068 (FullSize[0x0430] - InheritedSize[0x03C8])
	 */
	class UBetterTogether : public UPerk
	{
	public:
		bool                                                       ShouldRevealKiller;                                      // 0x03C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ShouldRevealSurvivors;                                   // 0x03C9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GCTC[0x2];                                   // 0x03CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RevealDistance;                                          // 0x03CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class ADBDPlayer*>                                  _affectedCampers;                                        // 0x03D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HIUA[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              _genToReveal;                                            // 0x03E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationByLevel[0x3];                                   // 0x03F0(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7J16[0x24];                                  // 0x03FC(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _timedSurvivorRevealEffect;                              // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _timedKillerRevealEffect;                                // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnStartedGeneratorRepair(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		float GetRevealDistance();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BlessedStatusEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UBlessedStatusEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_TDQU[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _vignetteControllerBlueprint;                            // 0x0358(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnExitBoonRange();
		void OnEnterBoonRange();
		class ATotem* GetBoundTotem();
		float GetBoonTotemBlessingRange();
		void Authority_OnSurvivorRemovedFromGame(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BloodEcho
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UBloodEcho : public UPerk
	{
	public:
		struct FGameplayTag                                        _statusEffectDurationTag;                                // 0x03C8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration[0x3];                                  // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetCooldownDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BoonDestroyer
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UBoonDestroyer : public UPerk
	{
	public:
		float                                                      _survivorAuraRevealDuration[0x3];                        // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3E2V[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _survivorRevealEffect;                                   // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BoonPerk
	 * Size -> 0x0060 (FullSize[0x0480] - InheritedSize[0x0420])
	 */
	class UBoonPerk : public UTotemBoundPerk
	{
	public:
		class UClass*                                              _blessedStatusEffectClass;                               // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBlessedStatusEffect*                                _blessedStatusEffect;                                    // 0x0428(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7N5W[0x50];                                  // 0x0430(0x0050) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSurvivorRemoved(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BoonTotemIsActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UBoonTotemIsActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_IZYT[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Breakout
	 * Size -> 0x0088 (FullSize[0x0450] - InheritedSize[0x03C8])
	 */
	class UBreakout : public UPerk
	{
	public:
		class ASlasherPlayer*                                      _slasher;                                                // 0x03C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ADBDPlayer*                                          _playerOwner;                                            // 0x03D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteStatusEffect;                                      // 0x03D8(0x0008) Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _wiggleStatusEffect;                                     // 0x03E0(0x0008) Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffect[0x3];                                       // 0x03E8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _wiggleEffect;                                           // 0x03F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _survivorDistanceMax;                                    // 0x03F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPerkActive;                                           // 0x03FC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MUVX[0x53];                                  // 0x03FD(0x0053) MISSED OFFSET (PADDING)

	public:
		void OnSlasherSet(class ASlasherPlayer* Slasher);
		void OnRep_IsPerkActive();
		void Authority_OnRangeChanged(bool inRange);
		void Authority_ImposeWiggleStatusEffect(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.BuckleUp
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UBuckleUp : public UPerk
	{
	public:
		float                                                      _perkDuration[0x3];                                      // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteValue;                                             // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _revealKillerStatusEffect;                               // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _hasteStatusEffect;                                      // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.CalmSpirit
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UCalmSpirit : public UPerk
	{
	public:
		class UClass*                                              _calmSpiritEffectClass;                                  // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _actionSpeed[0x3];                                       // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KHR5[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Camaraderie
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class UCamaraderie : public UPerk
	{
	public:
		float                                                      _percentUseItem[0x3];                                    // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _pauseTimer[0x3];                                        // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _camaraderieNotificationEffectClass;                     // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OF5J[0x38];                                  // 0x03E8(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.CollectableOwnerSubjectProvider
	 * Size -> 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
	 */
	class UCollectableOwnerSubjectProvider : public UModifierSubjectProvider
	{
	public:
		unsigned char                                              UnknownData_TZVZ[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.CorruptIntervention
	 * Size -> 0x0070 (FullSize[0x0438] - InheritedSize[0x03C8])
	 */
	class UCorruptIntervention : public UPerk
	{
	public:
		unsigned char                                              _blockedGeneratorCount[0x3];                             // 0x03C8(0x0003) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OTRM[0x1];                                   // 0x03CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _generatorBlockDuration[0x3];                            // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        _generatorAuraColorForKiller;                            // 0x03D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AGenerator*>                                  _blockedGenerators;                                      // 0x03E8(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C9LD[0x40];                                  // 0x03F8(0x0040) MISSED OFFSET (PADDING)

	public:
		void OnRep_BlockedGenerators();
		void LevelReadyToBlockedGenerators();
		float GetGeneratorBlockDuration();
		void Authority_TryActivatePerk();
		void Authority_OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Coulrophobia
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UCoulrophobia : public UPerk
	{
	public:
		class UClass*                                              _coulrophobiaEffect;                                     // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _healPenalty[0x3];                                       // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P5QR[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.CruelConfinement
	 * Size -> 0x00A0 (FullSize[0x0468] - InheritedSize[0x03C8])
	 */
	class UCruelConfinement : public UPerk
	{
	public:
		float                                                      _effectiveRadius[0x3];                                   // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _blockDuration[0x3];                                     // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _windowAuraColor;                                        // 0x03E0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AGenerator*, struct FWindowBlockableList>       _blockableLists;                                         // 0x03F0(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6K9G[0x28];                                  // 0x0440(0x0028) MISSED OFFSET (PADDING)

	public:
		float GetEffectiveRadiusAtLevel();
		float GetBlockDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DarkDevotion
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UDarkDevotion : public UPerk
	{
	public:
		class UTerrorRadiusEmitterComponent*                       _obsessionTerrorRadiusEmitter;                           // 0x03C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _obsessionTerrorRadius;                                  // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _simulatedFixedDistance;                                 // 0x03D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N6DW[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DarkSense
	 * Size -> 0x0048 (FullSize[0x0410] - InheritedSize[0x03C8])
	 */
	class UDarkSense : public UPerk
	{
	public:
		float                                                      _killerRevealDuration[0x3];                              // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _darkSenseRevealRange;                                   // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _timedRevealEffect;                                      // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_74KU[0x30];                                  // 0x03E0(0x0030) MISSED OFFSET (PADDING)

	public:
		void Authority_OnInRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DBDConditionFactory
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDBDConditionFactory : public UBlueprintFunctionLibrary
	{
	public:
		class UIsPlayerPerformingInteraction* STATIC_IsPlayerPerformingInteraction(const struct FGameplayTagContainer& interactionSemantics);
		class UDoesPerkHaveToken* STATIC_DoesPerkHaveToken(class UPerk* Perk);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DeadMansSwitchEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UDeadMansSwitchEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DeceptionEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UDeceptionEffect : public UStatusEffect
	{
	public:
		bool                                                       _hideBloodTrailsWhenCamperFakeEnterLocker;               // 0x0350(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ID28[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DecisiveStrike
	 * Size -> 0x00A0 (FullSize[0x0468] - InheritedSize[0x03C8])
	 */
	class UDecisiveStrike : public UPerk
	{
	public:
		float                                                      _timeAfterUnhook[0x3];                                   // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _skillCheckDelay;                                        // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _skillCheckBuffer;                                       // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _killerHearsSkillCheckCue;                               // 0x03DC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PLIZ[0x7B];                                  // 0x03DD(0x007B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _increaseObsessionChanceEffect;                          // 0x0458(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasBeenAttempted;                                       // 0x0460(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1ZMD[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnUnhookedTimerEnded();
		void OnSkillCheck(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnRep_HasBeenAttempted();
		void OnPickUpEnded(class ADBDPlayer* picker);
		void OnOwnerPickedUp(class ADBDPlayer* picker);
		float GetDurationAfterUnhook();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DejaVu
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class UDejaVu : public UPerk
	{
	public:
		int32_t                                                    _numGeneratorsToReveal;                                  // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _perkEffectDurations[0x3];                               // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _actionSpeeds[0x3];                                      // 0x03D8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _generatorAuraColor;                                     // 0x03E4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MIHV[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGenerator*>                                  _revealedGenerators;                                     // 0x03F8(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WJB3[0x18];                                  // 0x0408(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_RevealedGenerators();
		void LevelReadyToRevealOutlineGenerators();
		float GetPerkDurationAtLevel();
		float GetActionSpeedsAtLevel();
		void Authority_TryActivatePerk();
		void Authority_OnGeneratorRepaired(int32_t activatedGeneratorCount);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DelayedHealEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UDelayedHealEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_XYUS[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnOwningCamperPickedUp(class ADBDPlayer* picker);
		void Authority_OnOwningCamperHealthChanged(ECamperDamageState before, ECamperDamageState after);
		void Authority_OnActivationTimerComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DidGameEventOccurred
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	class UDidGameEventOccurred : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTag                                        EventTag;                                                // 0x00E8(0x000C) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OPP2[0x2C];                                  // 0x00F4(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Distortion
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class UDistortion : public UPerk
	{
	public:
		float                                                      _activationDurations[0x3];                               // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _auraBlockIsActive;                                      // 0x03D4(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTGH[0x3];                                   // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _regainTokenDurationTimer;                               // 0x03D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G54K[0x1C];                                  // 0x03DC(0x001C) MISSED OFFSET (PADDING)

	public:
		void OnRep_AuraBlockIsActive();
		void OnAuraBlockedCosmetic();
		bool AuraBlockCanBeActive();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DoesPerkHaveToken
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UDoesPerkHaveToken : public UEventDrivenModifierCondition
	{
	public:
		TWeakObjectPtr<class UPerk>                                _perk;                                                   // 0x00E8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_82A4[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetPerk(class UPerk* Perk);
		void OnRep_Perk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DownedByBasicAttack
	 * Size -> 0x0058 (FullSize[0x0140] - InheritedSize[0x00E8])
	 */
	class UDownedByBasicAttack : public UEventDrivenModifierCondition
	{
	public:
		bool                                                       _replicatedIsTrue;                                       // 0x00E8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ET6K[0x57];                                  // 0x00E9(0x0057) MISSED OFFSET (PADDING)

	public:
		void OnRep_ReplicatedIsTrue();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.DyingLight
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class UDyingLight : public UPerk
	{
	public:
		TArray<float>                                              _actionSpeedPenaltyPerToken;                             // 0x03C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      _obsessionActionSpeedBonus;                              // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _obsessionStatusEffectID;                                // 0x03DC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _nonObsessionStatusEffectID;                             // 0x03E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6WDZ[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusEffect*>                               _survivorDebuffs;                                        // 0x03F8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnObsessionChanged(class ACamperPlayer* newObsession, class ACamperPlayer* previousObsession);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.EnduranceHighlightEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UEnduranceHighlightEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_F9ZN[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ExposedEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UExposedEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Fixated
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class UFixated : public UPerk
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.FlipFlop
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UFlipFlop : public UPerk
	{
	public:
		float                                                      _recoveryProgressionConversionRatio[0x3];                // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _maxWiggleProgression[0x3];                              // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Authority_OnPickedUp(class ADBDPlayer* picker);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.FurtiveChase
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UFurtiveChase : public UPerk
	{
	public:
		int32_t                                                    _maxTokensByLevel[0x3];                                  // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _terrorRadiusSuppressionPerToken;                        // 0x03D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.GateBlockerEffect
	 * Size -> 0x0038 (FullSize[0x0388] - InheritedSize[0x0350])
	 */
	class UGateBlockerEffect : public UStatusEffect
	{
	public:
		float                                                      _blockGateLingeringTime;                                 // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M8GK[0x34];                                  // 0x0354(0x0034) MISSED OFFSET (PADDING)

	public:
		void RemoveCantEscapeFlag();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HasActiveHeartbeatEmitters
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UHasActiveHeartbeatEmitters : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_9XLA[0x20];                                  // 0x00E8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HasCleansedTotemInnerStrength
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UHasCleansedTotemInnerStrength : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_DVQ0[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HasFlag
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UHasFlag : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTag                                        _flag;                                                   // 0x00E8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5DW3[0x34];                                  // 0x00F4(0x0034) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HasLineOfSightQueryComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UHasLineOfSightQueryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XS8Z[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UHasPlayerReachedWiggleFillPercentCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_WSCY[0x4];                                   // 0x00E8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isWigglePercentReached;                                 // 0x00EC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BIHF[0x3];                                   // 0x00ED(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsWigglePercentReached();
		void Authority_OnOwnerWiggleChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HeadOn
	 * Size -> 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
	 */
	class UHeadOn : public UPerk
	{
	public:
		bool                                                       IsPerformingHeadOn;                                      // 0x03C8(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ExhaustOnlyOnSuccessfulStun;                             // 0x03C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StunKillersEnteringStunZone;                             // 0x03CA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A4IM[0x1];                                   // 0x03CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _hideDuration[0x3];                                      // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ALocker*                                             _locker;                                                 // 0x03D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_14NY[0x30];                                  // 0x03E0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      _stunnableActorsInZone;                                  // 0x0410(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3XPY[0x20];                                  // 0x0420(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnPawnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void OnPawnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void OnHeadOnAnimationComplete();
		void Multicast_TriggerStunOnActor(class UObject* stunnableInterfaceUObject, class ADBDPlayer* stunner);
		float GetHideDuration();
		bool CanApplyHeadOnInteraction();
		void Authority_ActivatePerk();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HemorrhageStatusEffect
	 * Size -> 0x0070 (FullSize[0x03D0] - InheritedSize[0x0360])
	 */
	class UHemorrhageStatusEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		float                                                      _cooldownFXTime;                                         // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _removeEffectWhenFullyHealed;                            // 0x0364(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HRMZ[0x6B];                                  // 0x0365(0x006B) MISSED OFFSET (PADDING)

	public:
		void OnStoppedHealing(class ADBDPlayer* Instigator, class ADBDPlayer* Target);
		void Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexPerk
	 * Size -> 0x0028 (FullSize[0x0448] - InheritedSize[0x0420])
	 */
	class UHexPerk : public UTotemBoundPerk
	{
	public:
		TArray<class ADBDPlayer*>                                  _playersWhoKnowCurse;                                    // 0x0420(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<class ADBDPlayer*>                                  _oldPlayersWhoKnowCurse;                                 // 0x0430(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BSTZ[0x8];                                   // 0x0440(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateCursedStatusViewOnLocalPlayer();
		void OnRep_PlayersWhoKnowCurse();
		bool IsCurseRevealedToPlayer(class ADBDPlayer* Player);
		void Authority_SetCurseRevealedToPlayer(class ADBDPlayer* Player, bool revealed);
		void Authority_RevealCurseToAllSurvivors(bool revealed);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexDevourHope
	 * Size -> 0x0080 (FullSize[0x04C8] - InheritedSize[0x0448])
	 */
	class UHexDevourHope : public UHexPerk
	{
	public:
		class UClass*                                              _devourHopeSpeedStatusEffect;                            // 0x0448(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _exposedStatusEffect;                                    // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _rangeFromUnhookedSurvivorNeeded;                        // 0x0458(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KCRE[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _tokenThresholdToImposeSpeedBoost;                       // 0x0460(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _tokenThresholdToImposeExposeEffect;                     // 0x0464(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _tokenThresholdToImposeAbilityToKill;                    // 0x0468(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G51L[0x4];                                   // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _attackGameEvents;                                       // 0x0470(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _moveSpeedIncrement[0x3];                                // 0x0490(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TRJ4[0x14];                                  // 0x049C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _vulnerabilityStatusViewID;                              // 0x04B0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_62CR[0xC];                                   // 0x04BC(0x000C) MISSED OFFSET (PADDING)

	public:
		float GetRangeFromUnhookedSurvivorNeeded(int32_t PerkLevel);
		float GetMoveSpeedIncrement(int32_t PerkLevel);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexHauntedGround
	 * Size -> 0x0020 (FullSize[0x0468] - InheritedSize[0x0448])
	 */
	class UHexHauntedGround : public UHexPerk
	{
	public:
		float                                                      _exposedStatusEffectDuration[0x3];                       // 0x0448(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TEPG[0x14];                                  // 0x0454(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexNoOneEscapesDeath
	 * Size -> 0x0070 (FullSize[0x04B8] - InheritedSize[0x0448])
	 */
	class UHexNoOneEscapesDeath : public UHexPerk
	{
	public:
		class UClass*                                              _hasteImposedEffectClass;                                // 0x0448(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _exposedEffectClass;                                     // 0x0450(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _revealCurseWhenTotemShownToSurvivor;                    // 0x0458(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _revealCurseWhenSurvivorGetHits;                         // 0x0459(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UTLV[0x2];                                   // 0x045A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _auraRevealStartDistance;                                // 0x045C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _auraRevealEndDistance;                                  // 0x0460(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _auraRevealDuration;                                     // 0x0464(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hastePerLevel[0x3];                                     // 0x0468(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _shouldActivateTotemOutline;                             // 0x0474(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I34T[0x43];                                  // 0x0475(0x0043) MISSED OFFSET (PADDING)

	public:
		void OnRep_SetShouldActivateTotemOutline();
		float GetHasteAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexRuin
	 * Size -> 0x00C8 (FullSize[0x0510] - InheritedSize[0x0448])
	 */
	class UHexRuin : public UHexPerk
	{
	public:
		unsigned char                                              UnknownData_6RD5[0x18];                                  // 0x0448(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AGenerator*, struct FFastTimer>                 _curseActivationTimers;                                  // 0x0460(0x0050) Transient, NativeAccessSpecifierPrivate
		float                                                      _regressionModifier[0x3];                                // 0x04B0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AIS4[0x4];                                   // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AGenerator*, uint64_t>                          _gameplayModifierHandles;                                // 0x04C0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		float GetRegressionModifierByLevel(int32_t PerkLevel);
		void Authority_SetupCurseOnAllGenerators();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexThirdSeal
	 * Size -> 0x0038 (FullSize[0x0480] - InheritedSize[0x0448])
	 */
	class UHexThirdSeal : public UHexPerk
	{
	public:
		int32_t                                                    _numOfHitPlayers;                                        // 0x0448(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_00XO[0x1C];                                  // 0x044C(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _thirdSealBlindnessEffect;                               // 0x0468(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _maximumBlindableSurvivors[0x3];                         // 0x0470(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MS10[0x4];                                   // 0x047C(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnRep_NumOfHitPlayers();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexThrillOfTheHunt
	 * Size -> 0x0020 (FullSize[0x0468] - InheritedSize[0x0448])
	 */
	class UHexThrillOfTheHunt : public UHexPerk
	{
	public:
		class UClass*                                              _thrillOfTheHuntStatusEffect;                            // 0x0448(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _hunterPointsBonusPercent;                               // 0x0450(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W8Z7[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusEffect*>                               _survivorThrillOfTheHuntEffects;                         // 0x0458(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HexThrillOfTheHuntStatusEffect
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class UHexThrillOfTheHuntStatusEffect : public UStatusEffect
	{
	public:
		float                                                      _speedPenaltyPercents[0x3];                              // 0x0350(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_11KX[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HideSurvivorVFXForKillerEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UHideSurvivorVFXForKillerEffect : public UStatusEffect
	{
	public:
		void HideVFX(bool Hide);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HighestLevelAndClosestEffectCondition
	 * Size -> 0x0048 (FullSize[0x0118] - InheritedSize[0x00D0])
	 */
	class UHighestLevelAndClosestEffectCondition : public UGameplayModifierCondition
	{
	public:
		unsigned char                                              UnknownData_4IVG[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStatusEffect*>                               _effectsLevel1;                                          // 0x00D8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStatusEffect*>                               _effectsLevel2;                                          // 0x00E8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStatusEffect*>                               _effectsLevel3;                                          // 0x00F8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1SXZ[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetCurrentEffectLevel(int32_t Level);
		void InitEffectArrays(const class FName& effectIDLevel1, const class FName& effectIDLevel2, const class FName& effectIDLevel3);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.HopePerk
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UHopePerk : public UPerk
	{
	public:
		class UClass*                                              _hopePerkEffect;                                         // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _hasteEffect[0x3];                                       // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6FBF[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ImAllEars
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class UImAllEars : public UPerk
	{
	public:
		int32_t                                                    _cooldownByLevel[0x3];                                   // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationByLevel[0x3];                                   // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _useTerrorRadius;                                        // 0x03E0(0x0001) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V2BC[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _triggerOutsideRadius;                                   // 0x03E4(0x0004) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5WPG[0x38];                                  // 0x03E8(0x0038) MISSED OFFSET (PADDING)

	public:
		void Server_OnCamperLoudNoise(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData);
		float GetDurationAtLevel();
		int32_t GetCooldownAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OnEventBaseAddon
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class UOnEventBaseAddon : public UItemAddon
	{
	public:
		struct FGameplayTag                                        _eventToListenTo;                                        // 0x02B8(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CE9M[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnEventFired(const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ImposeStatusEffectOnEventAddon
	 * Size -> 0x0020 (FullSize[0x02E8] - InheritedSize[0x02C8])
	 */
	class UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
	{
	public:
		float                                                      _statusEffectTime;                                       // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                _statusEffectNameDeprecated;                             // 0x02CC(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _statusEffect;                                           // 0x02D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EImposeEffectTo                                            _imposeEffectTo;                                         // 0x02E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H4CM[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.InfectiousFright
	 * Size -> 0x0048 (FullSize[0x0410] - InheritedSize[0x03C8])
	 */
	class UInfectiousFright : public UPerk
	{
	public:
		bool                                                       _revealPlayerInTerrorRadius;                             // 0x03C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _perkActivationCount;                                    // 0x03C9(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7NGR[0x6];                                   // 0x03CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACamperPlayer*>                               _revealedSurvivors;                                      // 0x03D0(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class ACamperPlayer*                                       _targetSurvivor;                                         // 0x03E0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5H4D[0x28];                                  // 0x03E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void RevealSurvivorLocation(class ACamperPlayer* Target);
		void OnRep_PerkActivationCount();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.InnerStrength
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UInnerStrength : public UPerk
	{
	public:
		unsigned char                                              UnknownData_GLVA[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _hideDuration[0x3];                                      // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3HMT[0x24];                                  // 0x03DC(0x0024) MISSED OFFSET (PADDING)

	public:
		float GetHideDuration();
		void Authority_OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Insidious
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UInsidious : public UPerk
	{
	public:
		float                                                      _stillnessRequired[0x3];                                 // 0x03C8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8079[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _insidiousEffect;                                        // 0x03D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.InsidiousEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UInsidiousEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsActivationTimerActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsActivationTimerActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_NRCE[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsActivationTimerActiveAndNotPaused
	 * Size -> 0x0020 (FullSize[0x0108] - InheritedSize[0x00E8])
	 */
	class UIsActivationTimerActiveAndNotPaused : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_SEO0[0x20];                                  // 0x00E8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsBestProveThyselfEffectInRange
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UIsBestProveThyselfEffectInRange : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_S04Z[0x28];                                  // 0x00E8(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnInRangeChanged(bool inRange, class UProveThyselfEffect* ProveThyselfEffect);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsBoonBlessed
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsBoonBlessed : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_GFQ6[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsClosestEffectCondition
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UIsClosestEffectCondition : public UGameplayModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsCooldownTimerActive
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsCooldownTimerActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_WPS7[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsHexCursed
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsHexCursed : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_3S9G[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect
	 * Size -> 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
	 */
	class UIsHighestLevelAndClosestOriginatingEffect : public UGameplayModifierCondition
	{
	public:
		TArray<class UStatusEffect*>                               _applicableEffects;                                      // 0x00D0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MZC4[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsHighestTierOriginatingPerk
	 * Size -> 0x0028 (FullSize[0x0110] - InheritedSize[0x00E8])
	 */
	class UIsHighestTierOriginatingPerk : public UEventDrivenModifierCondition
	{
	public:
		TArray<class UStatusEffect*>                               _applicableEffects;                                      // 0x00E8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1E2B[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnStatusEffectApplicableChanged(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable);
		void OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange
	 * Size -> 0x00B0 (FullSize[0x01A0] - InheritedSize[0x00F0])
	 */
	class UIsInAnyHookedSurvivorOriginatorAuraReadingRange : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_YQ7M[0xB0];                                  // 0x00F0(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsInRangeOfHookedSurvivor
	 * Size -> 0x00F0 (FullSize[0x01E0] - InheritedSize[0x00F0])
	 */
	class UIsInRangeOfHookedSurvivor : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_8LW2[0xF0];                                  // 0x00F0(0x00F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsInRangeOfOriginatingPlayer
	 * Size -> 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
	 */
	class UIsInRangeOfOriginatingPlayer : public URangeBasedCondition
	{
	public:
		unsigned char                                              UnknownData_Q30U[0x28];                                  // 0x00F0(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnInRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsLifetimeActive
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UIsLifetimeActive : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_ON4D[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOnHitSprintEffectActive
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UIsOnHitSprintEffectActive : public UEventDrivenModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOriginatingPerkBoundToTotems
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UIsOriginatingPerkBoundToTotems : public UEventDrivenModifierCondition
	{
	public:
		EComparisonOperation                                       _comparisonOperator;                                     // 0x00E8(0x0001) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_66X5[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _totemCount;                                             // 0x00EC(0x0004) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N6JW[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_TotemCount();
		void Init(EComparisonOperation comparisonOperator, int32_t totemCount);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOriginatingPerkUsableCondition
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UIsOriginatingPerkUsableCondition : public UBaseIsPerkUsableCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningPlayerInRangeFromHook
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UIsOwningPlayerInRangeFromHook : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		unsigned char                                              UnknownData_RQPD[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UIsOwningPlayerInHookRangeWhenKillerCarry : public UIsOwningPlayerInRangeFromHook
	{
	public:
		unsigned char                                              UnknownData_HNJQ[0x18];                                  // 0x0108(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningPlayerLastSurvivor
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UIsOwningPlayerLastSurvivor : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_4WK7[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller
	 * Size -> 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
	 */
	class UIsOwningSurvivorAuraRevealedToKiller : public UGameplayModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPerkUsableCondition
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UIsPerkUsableCondition : public UBaseIsPerkUsableCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPlayerLookingAtKillerCondition
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsPlayerLookingAtKillerCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_Z61R[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _precisionAngleDegrees;                                  // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isLookingTowards;                                       // 0x00FC(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_61M7[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsLookingTowards(bool IsLookingTowards);
		void OnPawnControllerChanged(class APawn* Pawn, class AController* Controller);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPlayerPerfInteractionWithNoItem
	 * Size -> 0x0040 (FullSize[0x0158] - InheritedSize[0x0118])
	 */
	class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction
	{
	public:
		unsigned char                                              UnknownData_NPBL[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _useItemInteractionSemantics;                            // 0x0128(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8G5R[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELoadoutItemType                                           _itemType;                                               // 0x0150(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E2ET[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnCollectableChargeStateChange(bool Empty);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPlayerPerformingItemInteraction
	 * Size -> 0x0020 (FullSize[0x0138] - InheritedSize[0x0118])
	 */
	class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction
	{
	public:
		unsigned char                                              UnknownData_MP72[0x20];                                  // 0x0118(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnCollectablePickedUp(class ADBDPlayer* Player);
		void OnCollectableDropped();
		void OnCollectableChargeStateChange(bool Empty);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsPlayerPerformingInteraction
	 * Size -> 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
	 */
	class UIsPlayerPerformingInteraction : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTagContainer                               _interactionSemantics;                                   // 0x00E8(0x0020) Edit, BlueprintVisible, Net, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LPQS[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateIsTrue(class UInteractionDefinition* InteractionDefinition);
		void SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.IsSubjectInteractingWithOriginatingPlayer
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UIsSubjectInteractingWithOriginatingPlayer : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_44W3[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KillerConditionalSpeedCurveEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class UKillerConditionalSpeedCurveEffect : public UStatusEffect
	{
	public:
		class UCurveFloat*                                         _speedCurve;                                             // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KillerIsLowOnAmmo
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UKillerIsLowOnAmmo : public UEventDrivenModifierCondition
	{
	public:
		int32_t                                                    _ammoThreshold;                                          // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EE1I[0x14];                                  // 0x00EC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KillerSubjectProvider
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UKillerSubjectProvider : public UModifierSubjectProvider
	{
	public:
		unsigned char                                              UnknownData_59NF[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void RegisterWhenKillerSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.KindredPerk
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class UKindredPerk : public UPerk
	{
	public:
		TArray<float>                                              _killerAuraRevealRange;                                  // 0x03C8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UClass*                                              _kindredRevealKillerOther;                               // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _kindredRevealKillerOwner;                               // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _kindredRevealSurvivors;                                 // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TNOT[0x8];                                   // 0x03F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringBlessedStatusEffect
	 * Size -> 0x0028 (FullSize[0x0388] - InheritedSize[0x0360])
	 */
	class ULingeringBlessedStatusEffect : public UBlessedStatusEffect
	{
	public:
		unsigned char                                              UnknownData_SDUZ[0x4];                                   // 0x0360(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _lingerDuration;                                         // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_861N[0x20];                                  // 0x0368(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetLingerDuration(float lingerDuration);
		void Authority_OnInRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringBlindnessEffect
	 * Size -> 0x0060 (FullSize[0x03C0] - InheritedSize[0x0360])
	 */
	class ULingeringBlindnessEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		struct FGameplayTag                                        startBlindnessEventTag;                                  // 0x0360(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        endBlindnessEventTag;                                    // 0x036C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        _state;                                                  // 0x0378(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RIAS[0x3C];                                  // 0x0384(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringExhaustedEffect
	 * Size -> 0x0060 (FullSize[0x03C8] - InheritedSize[0x0368])
	 */
	class ULingeringExhaustedEffect : public UExhaustedEffect
	{
	public:
		struct FGameplayTag                                        startExhaustedEventTag;                                  // 0x0368(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        endExhaustedEventTag;                                    // 0x0374(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        _state;                                                  // 0x0380(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VTZ[0x3C];                                  // 0x038C(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringMultiStateTagStatusEffect
	 * Size -> 0x0078 (FullSize[0x03D0] - InheritedSize[0x0358])
	 */
	class ULingeringMultiStateTagStatusEffect : public UBaseLingeringStatusEffect
	{
	public:
		TArray<struct FGameplayTag>                                _ownerStateTag;                                          // 0x0358(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		EMultiLingeringStateTagStrategy                            _strategy;                                               // 0x0368(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C2BH[0x67];                                  // 0x0369(0x0067) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LingeringStateTagStatusEffect
	 * Size -> 0x0038 (FullSize[0x0390] - InheritedSize[0x0358])
	 */
	class ULingeringStateTagStatusEffect : public UBaseLingeringStatusEffect
	{
	public:
		struct FGameplayTag                                        _ownerStateTag;                                          // 0x0358(0x000C) Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UH7S[0x2C];                                  // 0x0364(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.LuckyBreak
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class ULuckyBreak : public UPerk
	{
	public:
		float                                                      _maxActivationTime[0x3];                                 // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minActivationTime;                                      // 0x03D4(0x0004) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _healingTimeToActivationTimeRatio;                       // 0x03D8(0x0004) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isRecharging;                                           // 0x03DC(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BOV5[0x3];                                   // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpeedBasedNetSyncedValue                           _activationTime;                                         // 0x03E0(0x0038) Net, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FEEK[0x8];                                   // 0x0418(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_TryActivatePerk();
		void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		void ActivationTimerEnded();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.MakeYourChoice
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class UMakeYourChoice : public UPerk
	{
	public:
		float                                                      MinimumHookedSurvivorDistance;                           // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJHX[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (PADDING)

	public:
		bool CanApplyExposedEffect(class AActor* unhooker);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.MindBreaker
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UMindBreaker : public UPerk
	{
	public:
		float                                                      _effectDurationAfterRepair[0x3];                         // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FTQ0[0x2C];                                  // 0x03D4(0x002C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.MonstrousShrine
	 * Size -> 0x0030 (FullSize[0x03F8] - InheritedSize[0x03C8])
	 */
	class UMonstrousShrine : public UPerk
	{
	public:
		unsigned char                                              UnknownData_2RFK[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _fasterDrainPercentage[0x3];                             // 0x03E0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q211[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _fasterDrainOnScourgeHookEffect;                         // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnSurvivorUnhookedOnScourgeHook(const struct FGameEventData& GameEventData);
		void Authority_OnSurvivorHookedOnScourgeHook(const struct FGameEventData& GameEventData);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Nemesis
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UNemesis : public UPerk
	{
	public:
		unsigned char                                              UnknownData_5KG7[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _revealToKillerTime[0x3];                                // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _obliviousTime[0x3];                                     // 0x03DC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.NoOneLeftBehind
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UNoOneLeftBehind : public UPerk
	{
	public:
		float                                                      _movementSpeedPercentage;                                // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _movementSpeedDuration;                                  // 0x03CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _modifyHealOtherSpeedEffect;                             // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _modifyUnhookOtherSpeedEffect;                           // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _movementSpeedEffect;                                    // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _actionSpeedModifierValuePerLevel[0x3];                  // 0x03E8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_597M[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _alertKillerRevealEffect;                                // 0x03F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnExitGatePoweredApplicableChanged(class UGameplayModifierContainer* Container, bool Active);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ObliviousEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UObliviousEffect : public UAdjustableCooldownStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ObsessionTargetSubjectProvider
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UObsessionTargetSubjectProvider : public UModifierSubjectProvider
	{
	public:
		unsigned char                                              UnknownData_VULB[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OnEventSetTimerAddon
	 * Size -> 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
	 */
	class UOnEventSetTimerAddon : public UOnEventBaseAddon
	{
	public:
		float                                                      _addonEffectTime;                                        // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_56Z9[0x4];                                   // 0x02CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OriginatingEffectIsApplicable
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UOriginatingEffectIsApplicable : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_85U3[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OwningPlayerInBoonBlessingRange
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UOwningPlayerInBoonBlessingRange : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		class ATotem*                                              _boundTotem;                                             // 0x0100(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OwningPlayerInTotemRange
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UOwningPlayerInTotemRange : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		unsigned char                                              UnknownData_DIGH[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.OwningPlayerInDullTotemRange
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UOwningPlayerInDullTotemRange : public UOwningPlayerInTotemRange
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.PharmacyPerk
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class UPharmacyPerk : public UPerk
	{
	public:
		class UClass*                                              _pharmacyEffectClass;                                    // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _searchSpeeds[0x3];                                      // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P9CN[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.PlayerIsInExitArea
	 * Size -> 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
	 */
	class UPlayerIsInExitArea : public UGameplayModifierCondition
	{
	public:
		unsigned char                                              UnknownData_XD7L[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlayerExitExitArea();
		void PlayerEnterExitArea();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.PlayWithYourFood
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class UPlayWithYourFood : public UPerk
	{
	public:
		float                                                      _movementSpeedPercentBuff[0x3];                          // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZR45[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _basicAndSpecialAttackTags;                              // 0x03D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _chargeGainedCooldown;                                   // 0x03E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_158F[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void Authority_OnChaseEnded(class ADBDPlayer* Player, float chaseTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Poised
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class UPoised : public UPerk
	{
	public:
		float                                                      _activationTime[0x3];                                    // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CI4D[0x1C];                                  // 0x03D4(0x001C) MISSED OFFSET (PADDING)

	public:
		float GetActivationTime();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ProveThyself
	 * Size -> 0x00A8 (FullSize[0x0470] - InheritedSize[0x03C8])
	 */
	class UProveThyself : public UPerk
	{
	public:
		struct FDBDTunableRowHandle                                _proveThyselfRange;                                      // 0x03C8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EY4T[0x60];                                  // 0x03F0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FForAllSurvivorsStatusEffectImposer                 _proveThyselfEffectImposer;                              // 0x0450(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_38VW[0x8];                                   // 0x0468(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSurvivorInOwnerRangeChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class URemoveOnOriginatingSurvivorGoneStatusEffect : public UStatusEffect
	{
	public:
		unsigned char                                              UnknownData_4PV3[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSurvivorRemoved(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ProveThyselfEffect
	 * Size -> 0x00C0 (FullSize[0x0418] - InheritedSize[0x0358])
	 */
	class UProveThyselfEffect : public URemoveOnOriginatingSurvivorGoneStatusEffect
	{
	public:
		unsigned char                                              UnknownData_524T[0x20];                                  // 0x0358(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _proveThyselfRange;                                      // 0x0378(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _speedPercentageAddedPerSurvivorRepairingInRange;        // 0x03A0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BKZB[0x74];                                  // 0x03A4(0x0074) MISSED OFFSET (PADDING)

	public:
		void OnInRangeOfOriginatorChanged(bool inRange, class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.QuickAndQuiet
	 * Size -> 0x0000 (FullSize[0x03C8] - InheritedSize[0x03C8])
	 */
	class UQuickAndQuiet : public UPerk
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ResiliencePerk
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UResiliencePerk : public UPerk
	{
	public:
		float                                                      _actionSpeed[0x3];                                       // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I89O[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Saboteur
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class USaboteur : public UPerk
	{
	public:
		float                                                      _cooldownDuration[0x3];                                  // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealHookDistance[0x3];                                // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _scourgeHooksAuraColour;                                 // 0x03E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _saboteurEffect;                                         // 0x03F0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMeatHookOutlineUpdateStrategy*>              _revealedMeatHooksOultineStrategy;                       // 0x03F8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6LQR[0x18];                                  // 0x0408(0x0018) MISSED OFFSET (PADDING)

	public:
		float GetCooldownDurationAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SecondsToRateModifierBaseAddon
	 * Size -> 0x0110 (FullSize[0x03C8] - InheritedSize[0x02B8])
	 */
	class USecondsToRateModifierBaseAddon : public UItemAddon
	{
	public:
		struct FTunableStat                                        _chargeRate;                                             // 0x02B8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _maxCharge;                                              // 0x0338(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _secondsToAdd;                                           // 0x03B8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _rateModifierTagToCompute;                               // 0x03BC(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SecondWind
	 * Size -> 0x0048 (FullSize[0x0410] - InheritedSize[0x03C8])
	 */
	class USecondWind : public UPerk
	{
	public:
		unsigned char                                              UnknownData_3GN7[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESecondWindState                                           _currentState;                                           // 0x03D0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZMDA[0x3];                                   // 0x03D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _amountHealed;                                           // 0x03D4(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LAO9[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _numberOfHealStateToHealToActivate[0x3];                 // 0x03E0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationOfHeal[0x3];                                    // 0x03EC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _brokenStatusEffectClass;                                // 0x03F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _applyBrokenEffect;                                      // 0x0400(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N3WF[0xF];                                   // 0x0401(0x000F) MISSED OFFSET (PADDING)

	public:
		void Authority_OnHealProgress(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SelfCare
	 * Size -> 0x0018 (FullSize[0x03E0] - InheritedSize[0x03C8])
	 */
	class USelfCare : public UPerk
	{
	public:
		class UClass*                                              _selfHealNoMedkitSpeedPenaltyEffectClass;                // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _selfHealSpeedPenalty[0x3];                              // 0x03D0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7ZFN[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon
	 * Size -> 0x0010 (FullSize[0x02C8] - InheritedSize[0x02B8])
	 */
	class USpawnEffectsOnAllSurvivorsBaseAddon : public UItemAddon
	{
	public:
		bool                                                       _canCreateMultipleInstances;                             // 0x02B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MJFX[0xF];                                   // 0x02B9(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon
	 * Size -> 0x0010 (FullSize[0x02D8] - InheritedSize[0x02C8])
	 */
	class USimpleSpawnEffectsOnAllSurvivorsAddon : public USpawnEffectsOnAllSurvivorsBaseAddon
	{
	public:
		TArray<struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams;                               // 0x02C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SingleGateBlockerEffect
	 * Size -> 0x0050 (FullSize[0x03D8] - InheritedSize[0x0388])
	 */
	class USingleGateBlockerEffect : public UGateBlockerEffect
	{
	public:
		float                                                      _distanceThreshold;                                      // 0x0388(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U3JM[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEscapeDoor*                                         _gate;                                                   // 0x0390(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInRange;                                              // 0x0398(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9KXF[0x3F];                                  // 0x0399(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SmallGame
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class USmallGame : public UPerk
	{
	public:
		float                                                      _detectionConeAngle[0x3];                                // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _detectionConeAngleReductionRate[0x3];                   // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _totemDetected;                                          // 0x03E0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6FUH[0xF];                                   // 0x03E1(0x000F) MISSED OFFSET (PADDING)

	public:
		void VFXTotemFound();
		void SearchForTotems();
		void Multicast_TotemFound();
		float GetDetectionConeAngle();
		void Authority_SetTotemDetected(bool value);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SoleSurvivor
	 * Size -> 0x0060 (FullSize[0x0428] - InheritedSize[0x03C8])
	 */
	class USoleSurvivor : public UPerk
	{
	public:
		class UClass*                                              _modifyActionSpeedWhenRepairingEffect;                   // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _modifyActionSpeedWhenOpeningGateOrHatchEffect;          // 0x03D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _actionSpeedsRepairing[0x3];                             // 0x03D8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _actionSpeedsOpeningGateOrHatch[0x3];                    // 0x03E4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _auraHideDistancePerDeadOrDisconnectedSurvivor[0x3];     // 0x03F0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5S95[0x4];                                   // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACamperPlayer*>                               _otherSurvivors;                                         // 0x0400(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8GW1[0x18];                                  // 0x0410(0x0018) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSurvivorAdded(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Solidarity
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class USolidarity : public UPerk
	{
	public:
		bool                                                       _allowMedkit;                                            // 0x03C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3X18[0xF];                                   // 0x03C9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChargeableComponent*                                _healerHPSlot;                                           // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _targetHPSlot;                                           // 0x03E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableInteractionDefinition*                    _healOtherInteraction;                                   // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DY85[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange);
		void Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpawningEffectPerk
	 * Size -> 0x00B8 (FullSize[0x0480] - InheritedSize[0x03C8])
	 */
	class USpawningEffectPerk : public UPerk
	{
	public:
		struct FPerkLevelEffectArray                               _perkLevelEffects[0x3];                                  // 0x03C8(0x0030) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FPlayerStatusEffectSpawnerHelper                    _effectSpawnerHelper;                                    // 0x03F8(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpiesFromTheShadows
	 * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
	 */
	class USpiesFromTheShadows : public UPerk
	{
	public:
		float                                                      _cooldownDurationSecs;                                   // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UCSB[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SpineChillPerk
	 * Size -> 0x0090 (FullSize[0x0458] - InheritedSize[0x03C8])
	 */
	class USpineChillPerk : public UPerk
	{
	public:
		class UClass*                                              _spineChillEffectClass;                                  // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _actionSpeed[0x3];                                       // 0x03D0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lingerDuration;                                         // 0x03DC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _range;                                                  // 0x03E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _precisionAngleDegrees;                                  // 0x03E4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isInRange;                                              // 0x03E8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J4MN[0x6F];                                  // 0x03E9(0x006F) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsInRange();
		bool IsLookingTowards();
		bool IsInRange();
		bool HasLineOfSight();
		float GetRange();
		float GetLingerDuration();
		float GetActionSpeed(int32_t PerkLevel);
		void Authority_OnIsLookingTowardsChanged(bool IsLookingTowards);
		void Authority_OnIsInLineOfSightChanged(bool isInLineOfSight);
		void Authority_OnInRangeChanged(bool inRange);
		bool AreTriggersMet();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SprintBurst
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class USprintBurst : public UPerk
	{
	public:
		float                                                      _exhaustionDuration[0x3];                                // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _sprintDuration;                                         // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UActivatableExhaustedEffect*                         _exhaustedEffect;                                        // 0x03D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2BB[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetSprintDuration();
		float GetExhaustedDuration();
		void Authority_OnPerkFlagsChanged(const struct FGameplayTag& GameplayTag, bool isAdded);
		void Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.StakeOutPerk
	 * Size -> 0x0038 (FullSize[0x0400] - InheritedSize[0x03C8])
	 */
	class UStakeOutPerk : public UPerk
	{
	public:
		class UClass*                                              _stakeOutStatusEffectClass;                              // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStatusEffect*                                       _stakeOutStatusEffect;                                   // 0x03D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<int32_t>                                            _maxTokensByLevel;                                       // 0x03D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      _tokenChargeTime;                                        // 0x03E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V4YE[0x14];                                  // 0x03EC(0x0014) MISSED OFFSET (PADDING)

	public:
		void Server_ConsumeToken();
		void Local_BroadcastConsumeToken();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.StatsSystemUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UStatsSystemUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_InitStatBP(struct FTunableStat* theStat);
		float STATIC_GetStatValueBP(const struct FTunableStat& theStat);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.StatusEffectOriginatorSubjectProvider
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UStatusEffectOriginatorSubjectProvider : public UModifierSubjectProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Surge
	 * Size -> 0x0040 (FullSize[0x0408] - InheritedSize[0x03C8])
	 */
	class USurge : public UPerk
	{
	public:
		float                                                      _zoneRadius[0x3];                                        // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _instantRegression[0x3];                                 // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownDuration[0x3];                                  // 0x03E0(0x000C) Edit, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _hasCooldown;                                            // 0x03EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _useTerrorRadiusInsteadOfFixedDistance;                  // 0x03ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MJBS[0x1A];                                  // 0x03EE(0x001A) MISSED OFFSET (PADDING)

	public:
		float GetZoneRadius();
		float GetInstantRegressionAtLevel();
		bool GetHasCooldown();
		float GetCooldownDurationAtLevel();
		void Client_TriggerEffects(TArray<class AGenerator*> generators);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.SurvivorWasRecentlyUnhookedEffect
	 * Size -> 0x0028 (FullSize[0x0378] - InheritedSize[0x0350])
	 */
	class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _survivorWasRecentlyUnhookedDuration;                    // 0x0350(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue
	{
	public:
		class UActorPairQueryEvaluatorComponent*                   _actorPairQueryEvaluatorComponent;                       // 0x0100(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TestCollectable
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATestCollectable : public ACollectable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TestDBDGameState
	 * Size -> 0x0000 (FullSize[0x0868] - InheritedSize[0x0868])
	 */
	class ATestDBDGameState : public ADBDGameState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TheMettleOfMan
	 * Size -> 0x0050 (FullSize[0x0418] - InheritedSize[0x03C8])
	 */
	class UTheMettleOfMan : public UPerk
	{
	public:
		int32_t                                                    _tokenNeededToActivate[0x3];                             // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _revealOutsideRange[0x3];                                // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _mustBeInjured;                                          // 0x03E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DRRV[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _enduranceHighlightEffectClass;                          // 0x03E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _numTokenSoFar;                                          // 0x03F0(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ETheMettleOfManPhase                                       _currentPhase;                                           // 0x03F4(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SLDG[0xB];                                   // 0x03F5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStatusEffect*                                       _revealToKillerEffect;                                   // 0x0400(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BKZL[0x10];                                  // 0x0408(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_NumTokenSoFar();
		void OnRep_CurrentPhase();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ThrillingTremors
	 * Size -> 0x0060 (FullSize[0x0428] - InheritedSize[0x03C8])
	 */
	class UThrillingTremors : public UPerk
	{
	public:
		int32_t                                                    _cooldownByLevel[0x3];                                   // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _durationByLevel[0x3];                                   // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _disableWhenSurvivorPutDownOrUnhooked;                   // 0x03E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D0VT[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        _generatorAuraColorForKiller;                            // 0x03E4(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z4TC[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGenerator*>                                  _blockedGenerators;                                      // 0x03F8(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPrivate
		TArray<class AGenerator*>                                  _revealedGenerators;                                     // 0x0408(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FFTL[0x10];                                  // 0x0418(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnRep_BlockedGenerators();
		float GetDurationAtLevel();
		int32_t GetCooldownAtLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TimedObliviousEffect
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UTimedObliviousEffect : public UObliviousEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.TimedStatusEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UTimedStatusEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Tinkerer
	 * Size -> 0x0078 (FullSize[0x0440] - InheritedSize[0x03C8])
	 */
	class UTinkerer : public UPerk
	{
	public:
		class UClass*                                              _undetectableEffectClass;                                // 0x03C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _triggerThreshold;                                       // 0x03D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _distanceThreshold;                                      // 0x03D4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _activationTime[0x3];                                    // 0x03D8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJOK[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActor*, float>                                 _generatorActivationTimes;                               // 0x03E8(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q8CY[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetTriggerThreshold();
		float GetActivationTimeAtLevel();
		void Authority_OnUndetectableGeneratorInterrupt(class ADBDPlayer* Instigator, class ADBDPlayer* Target);
		void Authority_OnUndetectableAttackSuccessNearActiveGenerator(class ADBDPlayer* Instigator, class ADBDPlayer* Target);
		void Authority_OnLevelReadyToPlay();
		void Authority_OnGeneratorReachedThreshold(class AGenerator* Generator);
		void Authority_OnGeneratorChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.UndetectableEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UUndetectableEffect : public UStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.UndetectableTimedEffect
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class UUndetectableTimedEffect : public UTimedStatusEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.UnhookedMovementSpeedBonusEffect
	 * Size -> 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
	 */
	class UUnhookedMovementSpeedBonusEffect : public UStatusEffect
	{
	public:
		struct FDBDTunableRowHandle                                _movementSpeedBonusPercent;                              // 0x0350(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6PXV[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.WeddingRing
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UWeddingRing : public UItemAddon
	{
	public:
		unsigned char                                              UnknownData_JIIX[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.WereGonnaLiveForever
	 * Size -> 0x0028 (FullSize[0x03F0] - InheritedSize[0x03C8])
	 */
	class UWereGonnaLiveForever : public UPerk
	{
	public:
		float                                                      _healSpeedIncrease;                                      // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _enduranceEffectLevels[0x3];                             // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _healSpeedFromDyingStatusEffect;                         // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _enduranceEffect;                                        // 0x03E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isPerkEnabled;                                          // 0x03E8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VK6J[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_PerkEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.Whispers
	 * Size -> 0x0090 (FullSize[0x0458] - InheritedSize[0x03C8])
	 */
	class UWhispers : public UPerk
	{
	public:
		float                                                      _timeBetweenAudio;                                       // 0x03C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0UE2[0x34];                                  // 0x03CC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _survivorsInRange;                                       // 0x0400(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GZT3[0x54];                                  // 0x0404(0x0054) MISSED OFFSET (PADDING)

	public:
		void OnWhispersAudio();
		void OnRep_SurvivorsInRange();
		void Multicast_FireAudioEvent(int32_t survivorsInRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.YamaokaFamilyCrest
	 * Size -> 0x0040 (FullSize[0x02F8] - InheritedSize[0x02B8])
	 */
	class UYamaokaFamilyCrest : public UItemAddon
	{
	public:
		float                                                      _revealDuration;                                         // 0x02B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _revealRange;                                            // 0x02BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _revealAuraToKillerEffectClass;                          // 0x02C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ACamperPlayer*>                               _survivorsToReveal;                                      // 0x02C8(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              _addonActivationCount;                                   // 0x02D8(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZD34[0x1F];                                  // 0x02D9(0x001F) MISSED OFFSET (PADDING)

	public:
		void RevealSurvivor(class ACamperPlayer* survivorToReveal);
		void OnRep_AddonActivationCount();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCompetence.ZanshinTactics
	 * Size -> 0x0010 (FullSize[0x03D8] - InheritedSize[0x03C8])
	 */
	class UZanshinTactics : public UPerk
	{
	public:
		float                                                      _cooldownDuration[0x3];                                  // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UI29[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
