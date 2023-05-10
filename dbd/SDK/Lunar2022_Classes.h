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
	 * Class Lunar2022.Lunar2022EventComponent
	 * Size -> 0x00F8 (FullSize[0x01C0] - InheritedSize[0x00C8])
	 */
	class ULunar2022EventComponent : public URespawningEventComponent
	{
	public:
		class FName                                                _eventTag;                                               // 0x00C8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5FMF[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TWeakObjectPtr<class ARedEnvelope>>                 _redEnvelopes;                                           // 0x00D8(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9NJD[0xB4];                                  // 0x00E8(0x00B4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        _scoreNormal;                                            // 0x019C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _scoreJackpot;                                           // 0x01A8(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        _scoreOwner;                                             // 0x01B4(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Authority_OnPlayerFinishPlaying(class ADBDPlayerState* PlayerState);
		static UClass* StaticClass();
	};

	/**
	 * Class Lunar2022.RedEnvelope
	 * Size -> 0x00D0 (FullSize[0x03F8] - InheritedSize[0x0328])
	 */
	class ARedEnvelope : public AInteractable
	{
	public:
		class ADBDPlayerState*                                     _ownerPlayerState;                                       // 0x0328(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CJRA[0x8];                                   // 0x0330(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRedEnvelopeData                                    _redEnvelopeData;                                        // 0x0338(0x0018) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OAHT[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URedEnvelopeInteraction*                             _redEnvelopeInteraction;                                 // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URedEnvelopeInteraction*                             _redEnvelopeInteractionKiller;                           // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _redEnvelopeInteractionChargeable;                       // 0x0368(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChargeableComponent*                                _redEnvelopeInteractionChargeableKiller;                 // 0x0370(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInteractor*                                         _redEnvelopeInteractor;                                  // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPrimitiveComponent*                                 _redEnvelopeInteractionZone;                             // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMeshComponent*                                _redEnvelopeMesh;                                        // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _redEnvelopeInteractionSecondsToCharge;                  // 0x0398(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _redEnvelopeInteractionSecondsToChargeKiller;            // 0x03C0(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ULunar2022EventComponent>             _eventComponent;                                         // 0x03E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URedEnvelopeOutlineUpdateStrategy*                   _redEnvelopeOutlineUpdateStrategy;                       // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_RedEnvelopeData();
		void OnRep_OwnerPlayerState();
		void OnLocallyObservedChanged();
		void Cosmetic_SetBackgroundVFX(bool isOwner);
		void Cosmetic_OnTriggerDisappearingVFX(class ADBDPlayer* interactingPlayer, bool isOwner, bool IsJackpot);
		void Cosmetic_OnInteractionUpdate(class ADBDPlayer* interactingPlayer, float ChargePercent, bool isOwner);
		void Cosmetic_OnInteractionStopped(class ADBDPlayer* interactingPlayer, bool isOwner);
		void Cosmetic_OnInteractionStart(class ADBDPlayer* interactingPlayer, bool isOwner);
		void Cosmetic_OnAddEmberEffect(class ADBDPlayer* OwningPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class Lunar2022.RedEnvelopeInteraction
	 * Size -> 0x0060 (FullSize[0x07A0] - InheritedSize[0x0740])
	 */
	class URedEnvelopeInteraction : public UChargeableInteractionDefinition
	{
	public:
		unsigned char                                              UnknownData_0OWG[0x60];                                  // 0x0740(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Lunar2022.RedEnvelopeOutlineUpdateStrategy
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class URedEnvelopeOutlineUpdateStrategy : public UOutlineUpdateStrategy
	{
	public:
		struct FLinearColor                                        _auraColorOwner;                                         // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        _auraColorNonOwner;                                      // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
