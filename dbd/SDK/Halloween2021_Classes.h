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
	 * Class Halloween2021.Pumpkin
	 * Size -> 0x01C0 (FullSize[0x0528] - InheritedSize[0x0368])
	 */
	class APumpkin : public ASpecialBehaviourInteractable
	{
	public:
		unsigned char                                              UnknownData_GI9G[0x18];                                  // 0x0368(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _specialBehaviourId;                                     // 0x0380(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPumpkinType                                               _pumpkinType;                                            // 0x038C(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_51DC[0x3];                                   // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPumpkinInteraction*                                 _pumpkinInteraction;                                     // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPumpkinInteraction*                                 _pumpkinInteractionKiller;                               // 0x0398(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _pumpkinInteractionChargeable;                           // 0x03A0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _pumpkinInteractionChargeableKiller;                     // 0x03A8(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _pumpkinInteractor;                                      // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _pumpkinInteractionZone;                                 // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinInteractionSecondsToCharge;                      // 0x03C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinInteractionSecondsToChargeKiller;                // 0x03E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _auraColorWhileInteracting;                              // 0x0410(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinTreatChance;                                     // 0x0420(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinTrickChance;                                     // 0x0448(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinTreatDuration;                                   // 0x0470(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinTrickDuration;                                   // 0x0498(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinSpeedBoost;                                      // 0x04C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _pumpkinSpeedDebuff;                                     // 0x04E8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _pumpkinTreatEffect;                                     // 0x0510(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _pumpkinTrickEffect;                                     // 0x0518(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStatusEffect*                                       _pumpkinStatusEffect;                                    // 0x0520(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		void Cosmetic_OnStoppedInteracting();
		void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);
		void Cosmetic_OnIntroCompleted();
		void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class Halloween2021.PumpkinInteraction
	 * Size -> 0x0040 (FullSize[0x0780] - InheritedSize[0x0740])
	 */
	class UPumpkinInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_K0VN[0x40];                                  // 0x0740(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
