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
	 * Class TheShape.KillStandingInteractionDefinition
	 * Size -> 0x0018 (FullSize[0x0630] - InheritedSize[0x0618])
	 */
	class UKillStandingInteractionDefinition : public UInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_6QG0[0x4];                                   // 0x0618(0x0004) Fix Super Size
		float                                                      _slasherFacingTolerance;                                 // 0x061C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JQVH[0x10];                                  // 0x0620(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheShape.ObjectOfObsession
	 * Size -> 0x0070 (FullSize[0x0438] - InheritedSize[0x03C8])
	 */
	class UObjectOfObsession : public UPerk
	{
	public:
		float                                                      _revealTimeIntervals[0x3];                               // 0x03C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealTimeDuration[0x3];                                // 0x03D4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _actionSpeedBonus[0x3];                                  // 0x03E0(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z2J7[0x34];                                  // 0x03EC(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _increaseObsessionChanceEffect;                          // 0x0420(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _revealToKillerStatusEffect;                             // 0x0428(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _objectOfObsessionActionSpeedEffect;                     // 0x0430(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState);
		void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);
		static UClass* StaticClass();
	};

	/**
	 * Class TheShape.ShapeAnimInstance
	 * Size -> 0x0010 (FullSize[0x0610] - InheritedSize[0x0600])
	 */
	class UShapeAnimInstance : public UKillerAnimInstance
	{
	public:
		bool                                                       _isTier3Active;                                          // 0x0600(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8WAD[0x7];                                   // 0x0601(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEvilWithinComponent*                                _evilWithinComponent;                                    // 0x0608(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheShape.ShapePounceAttackOpenSubstate
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UShapePounceAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		TArray<struct FDBDTunableRowHandle>                        _tierDurations;                                          // 0x0130(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
