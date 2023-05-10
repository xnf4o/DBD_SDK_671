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
	 * Class TheCannibal.BBQAndChili
	 * Size -> 0x0020 (FullSize[0x03E8] - InheritedSize[0x03C8])
	 */
	class UBBQAndChili : public UPerk
	{
	public:
		float                                                      _auraRevealDuration;                                     // 0x03C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minDistanceToHookedPlayerByLevel[0x3];                  // 0x03CC(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _survivorImposedEffectClass;                             // 0x03D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T08S[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetMinDistanceToKillerByLevel(int32_t Level);
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalAnalyticsComponent
	 * Size -> 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
	 */
	class UCannibalAnalyticsComponent : public UChainsawAnalyticsBaseComponent
	{
	public:
		unsigned char                                              UnknownData_UAOU[0x20];                                  // 0x0100(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawAttack
	 * Size -> 0x0060 (FullSize[0x0450] - InheritedSize[0x03F0])
	 */
	class UCannibalChainsawAttack : public UHillbillyChainsawAttack
	{
	public:
		unsigned char                                              UnknownData_Y40M[0x10];                                  // 0x03F0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isInTantrum;                                            // 0x0400(0x0030) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_85IO[0x20];                                  // 0x0430(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawAttackOpenSubstate
	 * Size -> 0x0018 (FullSize[0x0190] - InheritedSize[0x0178])
	 */
	class UCannibalChainsawAttackOpenSubstate : public UHillbillyChainsawAttackOpenSubstate
	{
	public:
		unsigned char                                              UnknownData_3J8T[0x18];                                  // 0x0178(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UCannibalChainsawAttackHittingSubstate : public UHillbillyChainsawAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UCannibalChainsawAttackSuccessSubstate : public UHillbillyChainsawAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawAttackMissSubstate
	 * Size -> 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
	 */
	class UCannibalChainsawAttackMissSubstate : public UHillbillyChainsawAttackMissSubstate
	{
	public:
		unsigned char                                              UnknownData_YT20[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawAttackObstructSubstate
	 * Size -> 0x0058 (FullSize[0x0180] - InheritedSize[0x0128])
	 */
	class UCannibalChainsawAttackObstructSubstate : public UHillbillyChainsawAttackObstructSubstate
	{
	public:
		struct FTagStateBool                                       _isInTantrum;                                            // 0x0128(0x0030) Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YN2F[0x28];                                  // 0x0158(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawHitEventAddon
	 * Size -> 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
	 */
	class UCannibalChainsawHitEventAddon : public UOnEventBaseAddon
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawPowerComponent
	 * Size -> 0x05F8 (FullSize[0x06B0] - InheritedSize[0x00B8])
	 */
	class UCannibalChainsawPowerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_KCK2[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPowerChargeComponent*                               _chainsawPowerCharge;                                    // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _chainsawPowerDischarge;                                 // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPowerChargeComponent*                               _tantrumPowerCharge;                                     // 0x00D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0URV[0xD0];                                  // 0x00D8(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTagStateBool                                       _isInTantrum;                                            // 0x01A8(0x0030) Net, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _numPowerCharges;                                        // 0x01D8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _numPowerChargesConsumed;                                // 0x01DC(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YU8Q[0x8];                                   // 0x01E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTunableStat                                        _chainsawDashDuration;                                   // 0x01E8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chainsawPowerMaxCharge;                                 // 0x0268(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chainsawChargeRate;                                     // 0x02E8(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chainsawMaxNumberOfCharges;                             // 0x0368(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _chainsawCooldownIncreaseRate;                           // 0x03E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _chainsawCooldownDuration;                               // 0x0410(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _chainsawMaxCooldownDuration;                            // 0x0490(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tantrumChargeRate;                                      // 0x04B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tantrumDischargeRate;                                   // 0x04E0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _tantrumMaxCharge;                                       // 0x0508(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _tantrumDurationIncreaseRate;                            // 0x0588(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _tantrumDuration;                                        // 0x05B0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _tantrumMaxDuration;                                     // 0x0630(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Server_OnTantrumPowerChargeFull();
		void OnRep_NumPowerCharges(int32_t previousNumPowerCharges);
		void OnLevelReadyToPlay();
		void Multicast_OnTantrumPowerChargeFull();
		void Local_OnTantrumPowerChargeFull();
		int32_t GetNumberOfChainsawPowerCharges();
		void Authority_OnChainsawPowerChargeFull();
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalChainsawRevInteraction
	 * Size -> 0x0090 (FullSize[0x0830] - InheritedSize[0x07A0])
	 */
	class UCannibalChainsawRevInteraction : public UChainsawRevInteraction
	{
	public:
		unsigned char                                              UnknownData_6SMD[0x90];                                  // 0x07A0(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CannibalPowerPresentationItemProgressComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UCannibalPowerPresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UCannibalChainsawPowerComponent*                     _cannibalPowerChainsawComponent;                         // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetCannibalChainsawPowerComponent(class UCannibalChainsawPowerComponent* cannibalPowerChainsawComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.CarburetorTuningGuideAddon
	 * Size -> 0x0010 (FullSize[0x02D8] - InheritedSize[0x02C8])
	 */
	class UCarburetorTuningGuideAddon : public UOnEventBaseAddon
	{
	public:
		unsigned char                                              UnknownData_15PE[0x10];                                  // 0x02C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.IridescentLeatherAddon
	 * Size -> 0x0010 (FullSize[0x02D8] - InheritedSize[0x02C8])
	 */
	class UIridescentLeatherAddon : public UCannibalChainsawHitEventAddon
	{
	public:
		unsigned char                                              UnknownData_1BIH[0x10];                                  // 0x02C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.Knockout
	 * Size -> 0x0058 (FullSize[0x0420] - InheritedSize[0x03C8])
	 */
	class UKnockout : public UPerk
	{
	public:
		float                                                      _slowAndBlindDuration[0x3];                              // 0x03C8(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _crawlSpeedPenalty[0x3];                                 // 0x03D4(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _auraDisruptionRange[0x3];                               // 0x03E0(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KT72[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FForAllSurvivorsStatusEffectImposer                 _slowAndBlindEffectImposer;                              // 0x03F0(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FForAllSurvivorsStatusEffectImposer                 _hideAuraEffectImposer;                                  // 0x0408(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheCannibal.ShopLubricantAddon
	 * Size -> 0x0010 (FullSize[0x02D8] - InheritedSize[0x02C8])
	 */
	class UShopLubricantAddon : public UOnEventBaseAddon
	{
	public:
		float                                                      _auraBlockingDuration;                                   // 0x02C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _auraVisibleDistance;                                    // 0x02CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _hiddenFromOtherSurvivorsWhileDyingEffectClass;          // 0x02D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
