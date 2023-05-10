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
	 * Class DBDGameplay.ActorPairQueryEvaluatorUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UActorPairQueryEvaluatorUtilities : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimableComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UAimableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_40U9[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      _occlusionIgnoredActors;                                 // 0x00C0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		float                                                      _maxAimDistance;                                         // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LAEX[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAimDirectionProvider*                               _aimDirectionProvider;                                   // 0x00D8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _useOcclusion;                                           // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G4UP[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _aimPointLerpFactor;                                     // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAimPointProcessor*>                          _preOcclusionAimPointProcessors;                         // 0x00E8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1JGW[0x18];                                  // 0x00F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetProcessors(TArray<class UAimPointProcessor*> processors);
		void SetOcclusionIgnoredActors(TArray<class AActor*> IgnoredActors);
		void SetMaxAimDistance(float maxAimDistance);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimDirectionProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAimDirectionProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimPointProcessor
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UAimPointProcessor : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AimPointPerlinNoise
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UAimPointPerlinNoise : public UAimPointProcessor
	{
	public:
		unsigned char                                              UnknownData_7RK6[0x4];                                   // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _baseInaccuracyNoisePersistence;                         // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    _baseInaccuracyNoiseOctaveCount;                         // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _baseInaccuracyNoiseAmplitude;                           // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_65JM[0x4];                                   // 0x00C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _baseInaccuracyNoiseFrequency;                           // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OKH4[0x4];                                   // 0x00D0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _timeOffset;                                             // 0x00D4(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HFQF[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetNoiseFrequencyMultiplier(float Multiplier);
		void SetNoiseAmplitudeMultiplier(float Multiplier);
		void SetBaseInaccuracyNoisePersistence(float noisePersistence);
		void SetBaseInaccuracyNoiseOctaveCount(int32_t octaveCount);
		void SetBaseInaccuracyNoiseFrequency(float Frequency);
		void SetBaseInaccuracyNoiseAmplitude(float Amplitude);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AISenseConfig_Terror
	 * Size -> 0x0068 (FullSize[0x00B8] - InheritedSize[0x0050])
	 */
	class UAISenseConfig_Terror : public UAISenseConfig
	{
	public:
		class UClass*                                              Implementation;                                          // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBreathingSoundRange;                                  // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6M9[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EAITerrorLevel, float>                                TerrorRanges;                                            // 0x0060(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEHM[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AISenseEvent_Terror
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UAISenseEvent_Terror : public UAISenseEvent
	{
	public:
		struct FAITerrorEvent                                      Event;                                                   // 0x0030(0x0028) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AISense_Terror
	 * Size -> 0x0060 (FullSize[0x00F0] - InheritedSize[0x0090])
	 */
	class UAISense_Terror : public UAISense
	{
	public:
		TArray<struct FAITerrorEvent>                              _events;                                                 // 0x0090(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KEYA[0x50];                                  // 0x00A0(0x0050) MISSED OFFSET (PADDING)

	public:
		void STATIC_ReportTerrorEvent(class UObject* worldContextObj, const struct FVector& Location, class AActor* Instigator, class UTerrorRadiusEmitterComponent* TerrorEmitter);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.AuraOverriderComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UAuraOverriderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_D4KH[0x50];                                  // 0x00B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void ResetAura(class AActor* Actor);
		void ForceShowAura(class AActor* Actor, const struct FLinearColor& Color, bool IsAlwaysVisible, float minimumOutlineDistance);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BaseActorAttackableComponent
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class UBaseActorAttackableComponent : public UAttackableComponent
	{
	public:
		unsigned char                                              UnknownData_EKFQ[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _killerProjectilesThatCanDamageActor;                    // 0x00D0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected

	public:
		void HitWithProjectile(class ABaseProjectile* Projectile);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BaseCamperCollectable
	 * Size -> 0x0048 (FullSize[0x04F8] - InheritedSize[0x04B0])
	 */
	class ABaseCamperCollectable : public ACollectable
	{
	public:
		class USpherePlayerOverlapComponent*                       _interactable;                                           // 0x04B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInteractor*                                         _collectableInteractor;                                  // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDropItemInteraction*                                _dropInteraction;                                        // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollectItemInteraction*                             _collectInteraction;                                     // 0x04C8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USphereComponent*                                    _infectablePrimitive;                                    // 0x04D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x04D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialHelper*                                     _materialHelper;                                         // 0x04E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USurvivorCollectableOutlineUpdateStrategy*           _survivorCollectableOutlineUpdateStrategy;               // 0x04E8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7790[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BaseHusk
	 * Size -> 0x0020 (FullSize[0x0258] - InheritedSize[0x0238])
	 */
	class ABaseHusk : public ABaseVFX
	{
	public:
		class UDBDSkeletalMeshComponentBudgeted*                   _huskMesh;                                               // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCustomizedSkeletalMesh*                             _huskCustomizedSkeletalMesh;                             // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _shouldDeactivateVFX;                                    // 0x0248(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8DZT[0xB];                                   // 0x0249(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _updateWeaponAccessories;                                // 0x0254(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _shouldWeaponBeVisible;                                  // 0x0255(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NFKJ[0x2];                                   // 0x0256(0x0002) MISSED OFFSET (PADDING)

	public:
		void SetScalarParameterOnAllChildrenMeshes(const class FName& ParameterName, float value, class USkeletalMeshComponent* Mesh);
		void SetHuskVisibility(bool visible);
		void InitializeHusk(class UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);
		void Cosmetic_InitializeSkeletalMesh(class USkeletalMeshComponent* Mesh);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightableLightingStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFlashlightableLightingStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightablePointsLightingStrategy
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy
	{
	public:
		class UPointsProvider*                                     _pointsProvider;                                         // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _impactPointDistanceError;                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VJVY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BlindFlashlightableLightingStrategy
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightTargetFXComponent
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UFlashlightTargetFXComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_UZOF[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _modifiesBeamAngle;                                      // 0x00E8(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OPX0[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFlashlightableComponent*                            _flashlightable;                                         // 0x00F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GJ66[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnIsLitChanged(bool IsLit);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.BlindFlashlightTargetFXComponent
	 * Size -> 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
	 */
	class UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
	{
	public:
		unsigned char                                              UnknownData_AGET[0x28];                                  // 0x0100(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FootstepCreatorComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UFootstepCreatorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YT3U[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _fadeCurve;                                              // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         _veinsCurve;                                             // 0x00E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              _footstepManagerComponentClass;                          // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OQJS[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _secondsUntilFootprintTrigger;                           // 0x00F8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _canSpawnFootstepsDefaultValue;                          // 0x00FC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J7LS[0xB];                                   // 0x00FD(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.CamperFootstepCreatorComponent
	 * Size -> 0x0238 (FullSize[0x0340] - InheritedSize[0x0108])
	 */
	class UCamperFootstepCreatorComponent : public UFootstepCreatorComponent
	{
	public:
		TArray<struct FGameplayTag>                                _disallowFootstepsSpawnPerkFlags;                        // 0x0108(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FStatProperty                                       _footstepIndicatorAngle;                                 // 0x0118(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _footstepIndicatorDecalSize;                             // 0x01A0(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _footstepIndicatorDurationAdditive;                      // 0x0228(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FStatProperty                                       _footstepIndicatorDurationMultiplictive;                 // 0x02B0(0x0088) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SYET[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction, bool isDeceivingNoise);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FootstepPerceptionComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UFootstepPerceptionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_57AU[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _canSeeFootstepsDefaultValue;                            // 0x00C8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_54B1[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerFootstepPerceptionComponent
	 * Size -> 0x0040 (FullSize[0x0110] - InheritedSize[0x00D0])
	 */
	class UPlayerFootstepPerceptionComponent : public UFootstepPerceptionComponent
	{
	public:
		TArray<struct FGameplayTag>                                _allowFootstepsSeenPerkFlags;                            // 0x00D0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                _disallowFootstepsSeenPerkFlags;                         // 0x00E0(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8AY8[0x20];                                  // 0x00F0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.CamperFootstepPerceptionComponent
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UCamperFootstepPerceptionComponent : public UPlayerFootstepPerceptionComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.CharacterOptimizer
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UCharacterOptimizer : public UActorComponent
	{
	public:
		float                                                      _characterMovementTickRateWhenInsignificant;             // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8IMW[0xC];                                   // 0x00BC(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.CollectableComponentUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCollectableComponentUtilities : public UBlueprintFunctionLibrary
	{
	public:
		class ADBDPlayer* STATIC_GetCollector(class UActorComponent* Component);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.ConspicuousActionComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UConspicuousActionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_91J4[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.DBDCharacterPusherComponent
	 * Size -> 0x0010 (FullSize[0x0180] - InheritedSize[0x0170])
	 */
	class UDBDCharacterPusherComponent : public UCharacterPusherComponent
	{
	public:
		unsigned char                                              UnknownData_OBNE[0x10];                                  // 0x0170(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.DebugIndicator
	 * Size -> 0x0020 (FullSize[0x0250] - InheritedSize[0x0230])
	 */
	class ADebugIndicator : public AActor
	{
	public:
		class UStaticMeshComponent*                                _staticMeshComponent;                                    // 0x0230(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDBDOutlineComponent*                                _outlineComponent;                                       // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5OBE[0x10];                                  // 0x0240(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVisible(bool visible);
		void SetColor(const struct FLinearColor& Color);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.DecoySlasherComponent
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UDecoySlasherComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_8ZG7[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStunned;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             TriggerDecoyVisibilityVFX;                               // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       HasTerrorRadius;                                         // 0x00E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HasRedGlow;                                              // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _isActive;                                               // 0x00E2(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _initialized;                                            // 0x00E3(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J527[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTerrorRadiusEmitterComponent*                       _terrorRadiusEmitter;                                    // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class URedStainComponent*                                  _redStainComponent;                                      // 0x00F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetDecoyIsActive(bool IsActive, const struct FVector& Location, const struct FRotator& Rotation, bool visibleRedGlow);
		void OnRealSlasherTerrorRadiusChanged(float NewValue);
		bool IsDecoyActive();
		class ASlasherPlayer* GetRealSlasher();
		void DoPostVFXUpdates(const struct FVector& Location, const struct FRotator& Rotation);
		void CopyCustomizationFromSlasher();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.EtherealComponent
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UEtherealComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_47H0[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isEthereal;                                             // 0x00E0(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EJ0Y[0x17];                                  // 0x00E1(0x0017) MISSED OFFSET (PADDING)

	public:
		void Server_SetIsEthereal(float Timestamp, bool Ethereal);
		void OnRep_OnIsEtherealChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.RangeToActorsTrackerStrategy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class URangeToActorsTrackerStrategy : public UObject
	{
	public:
		struct FDBDTunableRowHandle                                _range;                                                  // 0x0030(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O1TN[0x18];                                  // 0x0058(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnInRangeToTrackedActorsChanged(bool inRange);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UExitGateSwitchesRangeTrackerStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FadeComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UFadeComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFadePercentChanged;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      _fadeDuration;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UDYW[0xC];                                   // 0x00CC(0x000C) MISSED OFFSET (PADDING)

	public:
		float GetFadePercent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FirecrackerSpawner
	 * Size -> 0x0000 (FullSize[0x04F8] - InheritedSize[0x04F8])
	 */
	class AFirecrackerSpawner : public ABaseCamperCollectable
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.Flashlight
	 * Size -> 0x00B8 (FullSize[0x05B0] - InheritedSize[0x04F8])
	 */
	class AFlashlight : public ABaseCamperCollectable
	{
	public:
		struct FGameplayTagContainer                               _allowedInteractionSemanticsDuringUse;                   // 0x04F8(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4EXR[0x58];                                  // 0x0518(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _shouldUseCooldowns;                                     // 0x0570(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6JOQ[0x3];                                   // 0x0571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _cooldownWhileOnDuration;                                // 0x0574(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _cooldownWhileOffDuration;                               // 0x0578(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DH3B[0x34];                                  // 0x057C(0x0034) MISSED OFFSET (PADDING)

	public:
		class USpotLightComponent* GetSpotlightComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightableComponent
	 * Size -> 0x0088 (FullSize[0x0140] - InheritedSize[0x00B8])
	 */
	class UFlashlightableComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFlashlightAddedEvent;                                  // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightRemovedEvent;                                // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightLitChangedEvent;                             // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UFlashlightableLightingStrategy*                     _lightingStrategy;                                       // 0x00E8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _flashlights[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		void OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit);
		void OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);
		bool IsLit();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightComponent
	 * Size -> 0x0148 (FullSize[0x0200] - InheritedSize[0x00B8])
	 */
	class UFlashlightComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IJE2[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFlashlightTurnedOn;                                    // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightTurnedOff;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFlashlightablesUpdated;                                // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FDBDTunableRowHandle                                _baseBlindnessDuration;                                  // 0x00F0(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _baseAccuracy;                                           // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _lagDuration;                                            // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _flashlightables[0x50];                                  // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _autonomousLitFlashlightables[0x50];                     // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<class UFlashlightableComponent*>                    _replicatedLitFlashlightables;                           // 0x01C0(0x0010) ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       _isOwnerLagging;                                         // 0x01D0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P67M[0x2F];                                  // 0x01D1(0x002F) MISSED OFFSET (PADDING)

	public:
		void TurnOn();
		void TurnOff();
		void Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashlightableComponent*> newLitFlashlightables);
		void OnRep_ReplicatedLitFlashlightables();
		void OnRep_IsOwnerLagging();
		void OnFlashlightEvent__DelegateSignature();
		bool IsOn();
		float GetEffectiveTimeToBlindModifier();
		float GetEffectiveBlindnessDuration();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightConeComponent
	 * Size -> 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
	 */
	class UFlashlightConeComponent : public UActorComponent
	{
	public:
		struct FVector                                             AIAimBeamLocationOffset;                                 // 0x00B8(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AIAimBeamRotationOffset;                                 // 0x00C4(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class USceneComponent*                                     _flashlightBottom;                                       // 0x00D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _baseBeamAngle;                                          // 0x00D8(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _baseBeamLength;                                         // 0x0100(0x0028) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class AActor>                               _cacheCollidingActor;                                    // 0x0128(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZYY5[0x18];                                  // 0x0130(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayTag>                                _tagsPreventingBeamOcclusion;                            // 0x0148(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate

	public:
		float GetOcclusionDistance();
		float GetEffectiveConeLength();
		float GetEffectiveConeHalfAngle();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightFXComponent
	 * Size -> 0x01A0 (FullSize[0x0258] - InheritedSize[0x00B8])
	 */
	class UFlashlightFXComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnFlashEvent;                                            // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USceneComponent*                                     _tip;                                                    // 0x00C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                _centerGlowMesh;                                         // 0x00D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USplineMeshComponent*                                _beamMesh;                                               // 0x00D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _minimumOcclusionDistanceForSpotlight;                   // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R4UU[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _flashEffectIntensityCurve;                              // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _flashEffectDuration;                                    // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _spotLightHalfAngle;                                     // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _spotLightIntensity;                                     // 0x00F8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamBlindingHalfAngle;                                  // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamFlashHalfAngle;                                     // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamBlindingRatioInterpSpeedWithTarget;                 // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _beamBlindingRatioInterpSpeedWithoutTarget;              // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _resizeConeLength;                                       // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PK19[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _centerGlowWidthScaleWithoutBlindTarget;                 // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowWidthScaleWithBlindTarget;                    // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowWidthScaleDuringFlash;                        // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowShrinkDistance;                               // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _centerGlowLengthMaxScale;                               // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9WS5[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkObservedPlayerSoundLoop                          _aimedAtSoundLoop;                                       // 0x0128(0x0040) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UFlashlightTargetFXComponent*                        _currentBeamModifyingTarget;                             // 0x0168(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _targets[0x50];                                          // 0x0170(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_JQZ8[0x98];                                  // 0x01C0(0x0098) MISSED OFFSET (PADDING)

	public:
		void UpdateFXTargets();
		void UpdateConeEvent(float Length, float halfAngle);
		void PostUpdateEvent();
		void OnTurnedOn();
		void OnTurnedOff();
		void OnStopEvent();
		void OnStartEvent();
		void OnFlashEvent__DelegateSignature();
		void OnDroppedEvent();
		void OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved);
		void OnCollectedEvent(class ADBDPlayer* collector);
		float GetBlindingSuccessRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FlashlightUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UFlashlightUtilities : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.FootstepManagerComponent
	 * Size -> 0x0328 (FullSize[0x03E0] - InheritedSize[0x00B8])
	 */
	class UFootstepManagerComponent : public UActorComponent
	{
	public:
		struct FBHVRPerDetailModeInt                               _decalPoolSize;                                          // 0x00B8(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FBHVRPerDetailModeFloat                             _recycleThresholdPercentage;                             // 0x0158(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FBHVRPerDetailModeFloat                             _recycleDistancePercentage;                              // 0x01F8(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FBHVRPerDetailModeInt                               _maxOverlapping;                                         // 0x0298(0x00A0) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		float                                                      _raycastHalfAngle;                                       // 0x0338(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _raycastZOffset;                                         // 0x033C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _raycastDistance;                                        // 0x0340(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _minimumDecalSize;                                       // 0x0344(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maximumDecalSize;                                       // 0x0348(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _projectionTickness;                                     // 0x034C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterial*                                           _footstepsMaterial;                                      // 0x0350(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FFootstep>                                   _currentFootSteps;                                       // 0x0358(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UDecalSpawner*                                       _decalSpawner;                                           // 0x0368(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C9NF[0x70];                                  // 0x0370(0x0070) MISSED OFFSET (PADDING)

	public:
		void TriggerSpawnFootstep(class UFootstepCreatorComponent* originatorComponent, const struct FVector& Location);
		void OnUpdateObserverFootsteps();
		void OnUpdateCreatorFootsteps(class UFootstepCreatorComponent* creator);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy
	 * Size -> 0x0068 (FullSize[0x00D8] - InheritedSize[0x0070])
	 */
	class UHooksWithSurvivorRangeTrackerStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		unsigned char                                              UnknownData_7O9N[0x68];                                  // 0x0070(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.InteractionStarterComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UInteractionStarterComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_P0D5[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractionDefinition*                              _interaction;                                            // 0x00C0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _shouldStartInteraction;                                 // 0x00C8(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LHLT[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_ShouldStartInteraction();
		void OnInteractionStarted();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.KillerFlashlightSFXComponent
	 * Size -> 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
	 */
	class UKillerFlashlightSFXComponent : public UActorComponent
	{
	public:
		struct FAkObservedPlayerSoundLoop                          _targetSoundLoop;                                        // 0x00B8(0x0040) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UFlashlightTargetFXComponent*>                _flashlightTargets;                                      // 0x00F8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U0DK[0x50];                                  // 0x0108(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.KillerFootstepPerceptionComponent
	 * Size -> 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
	 */
	class UKillerFootstepPerceptionComponent : public UPlayerFootstepPerceptionComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.KillerInstinctComponent
	 * Size -> 0x0178 (FullSize[0x0230] - InheritedSize[0x00B8])
	 */
	class UKillerInstinctComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_01JD[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCustomKillerInstinctData                           _defaultKillerInstinctAsset;                             // 0x00C0(0x0028) Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class UNiagaraComponent*                                   _particleSystemComponent;                                // 0x00E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GHTS[0x4];                                   // 0x00F0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        _camperHighlightColorOverride;                           // 0x00F4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TDH6[0xAC];                                  // 0x0104(0x00AC) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomKillerInstinctData>                   _customKillerInstinctData;                               // 0x01B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FCustomKillerInstinctData                           _currentKillerInstinctData;                              // 0x01C0(0x0028) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CSG5[0x48];                                  // 0x01E8(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetParticleSystem(class UNiagaraComponent* ParticleSystemComponent);
		void OnKillerLocallyObservedChanged(bool locallyObserved);
		bool IsOwnerInKillerInstinctRadius();
		class UNiagaraComponent* GetParticleSystem();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.LullabyFeedbackComponent
	 * Size -> 0x0080 (FullSize[0x0138] - InheritedSize[0x00B8])
	 */
	class ULullabyFeedbackComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_V8TU[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLullabyKillerData>                          _killersData;                                            // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1LYX[0x58];                                  // 0x00E0(0x0058) MISSED OFFSET (PADDING)

	public:
		void OnSlasherSet(class ASlasherPlayer* killer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.MapCollectable
	 * Size -> 0x0000 (FullSize[0x04F8] - InheritedSize[0x04F8])
	 */
	class AMapCollectable : public ABaseCamperCollectable
	{
	public:
		class UChargerComponent* GetChargerComponent();
		class UChargeableComponent* GetChargeableComponent();
		class UActorKnowledgeCollection* GetActorKnowledgeCollection();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.Medkit
	 * Size -> 0x0040 (FullSize[0x0538] - InheritedSize[0x04F8])
	 */
	class AMedkit : public ABaseCamperCollectable
	{
	public:
		class UAkComponent*                                        _akComponent;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargerComponent*                                   _charger;                                                // 0x0500(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     _dustRingTemplate;                                       // 0x0508(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _medkitGetAkEvent;                                       // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioEvent*                                       _medkitDropAkEvent;                                      // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAkAudioBank*                                        _medkitBank;                                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _healOtherChargeMultiplier;                              // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZLTJ[0xC];                                   // 0x052C(0x000C) MISSED OFFSET (PADDING)

	public:
		void UseCharge(float Seconds);
		void OnMedkitHealedCamper(class ADBDPlayer* healedPlayer);
		bool HasCharge();
		float GetChargeMultiplier();
		float GetCharge();
		void Authority_OnChargeStateChange(bool Empty);
		void Authority_OnAnyOngoingInteractionChanged(bool IsInteracting);
		void Authority_ConsumeIfNotInteracting();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PointsProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPointsProvider : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.MeshSocketPointsProvider
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UMeshSocketPointsProvider : public UPointsProvider
	{
	public:
		struct FComponentReference                                 _meshReference;                                          // 0x0030(0x0030) Edit, NativeAccessSpecifierPrivate
		class UMeshComponent*                                      _mesh;                                                   // 0x0060(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        _sockets;                                                // 0x0068(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.MoveToGroundComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UMoveToGroundComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_697N[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void MoveOwnerToGround();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.MultiSceneComponentPointProvider
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UMultiSceneComponentPointProvider : public UPointsProvider
	{
	public:
		TArray<struct FComponentReference>                         _sceneReferences;                                        // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class USceneComponent*>                             _sceneComponents;                                        // 0x0040(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.NearestOutsideMapBoundsLocator
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UNearestOutsideMapBoundsLocator : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_HQ1T[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkComponent*                                        _akComponent;                                            // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxDistanceFromBorderAllowed;                           // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _heightOfOOBPosition;                                    // 0x00CC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4L0S[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnGameEnd(EEndGameReason endGameReason);
		void OnGameBegin();
		void Client_InitializeAkLimitPointEvent();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerCameraAimDirectionProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerCameraAimDirectionProvider : public UAimDirectionProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerInteractionListenerComponent
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UPlayerInteractionListenerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L8HQ[0x50];                                  // 0x00B8(0x0050) MISSED OFFSET (PADDING)

	public:
		void UnlistenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		void UnlistenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		void OnActorDestroyed(class AActor* DestroyedActor);
		void ListenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate);
		void ListenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate);
		void InteractionMulticastDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		void InteractionDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PlayerMovementUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPlayerMovementUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_Local_SetGamepadYawCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);
		void STATIC_Local_SetGamepadPitchCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);
		void STATIC_Local_ResetRotationScale(class ADBDPlayer* Player, float adjustmentTime);
		void STATIC_Local_ResetGamepadLookCurves(class ADBDPlayer* Player);
		void STATIC_Local_ApplyYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyRotationScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyMouseYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyMousePitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyGamepadYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		void STATIC_Local_ApplyGamepadPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PoseableHusk
	 * Size -> 0x0008 (FullSize[0x0260] - InheritedSize[0x0258])
	 */
	class APoseableHusk : public ABaseHusk
	{
	public:
		unsigned char                                              UnknownData_UF7Z[0x8];                                   // 0x0258(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetIsActive(bool IsActive);
		void OnActiveStateChanged(bool IsActive);
		bool GetIsActive();
		void Cosmetic_OnAnimationPoseCaptured();
		void CapturePose();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PositionLagCompensationComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UPositionLagCompensationComponent : public UActorComponent
	{
	public:
		float                                                      _maxExtrapolationDurationInSeconds;                      // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _maxInterpolationToServerMoveInSeconds;                  // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PowerChargeComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class UPowerChargeComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnPowerChargeChanged;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18X8[0x58];                                  // 0x00C8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpeedBasedNetSyncedValue                           _currentCharge;                                          // 0x0120(0x0038) Net, Transient, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BN8W[0x4];                                   // 0x0158(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _forceFullCharge;                                        // 0x015C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y9N0[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnRep_CurrentCharge();
		void OnCurrentChargeChanged(float value);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PowerChargePresentationItemProgressComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
	{
	public:
		class UPowerChargeComponent*                               _powerChargeComponent;                                   // 0x00B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPowerToggleComponent*                               _powerToggleComponent;                                   // 0x00C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _chargeReadyThreshold;                                   // 0x00C8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LTWQ[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.PowerToggleComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UPowerToggleComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_PL19[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _isInPower;                                              // 0x00D0(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N1F0[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnRep_IsInPower();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.RangeToActorsTrackerComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class URangeToActorsTrackerComponent : public UActorComponent
	{
	public:
		TArray<class URangeToActorsTrackerStrategy*>               _rangeTrackers;                                          // 0x00B8(0x0010) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, NoClear, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.RangeToActorsTrackerDefaultStrategy
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		class UClass*                                              _actorClass;                                             // 0x0070(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.ReadMapInteraction
	 * Size -> 0x0010 (FullSize[0x0750] - InheritedSize[0x0740])
	 */
	class UReadMapInteraction : public UChargeableInteractionDefinition
	{
	public:
		bool                                                       _chargeCompleted;                                        // 0x0740(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WJEK[0xF];                                   // 0x0741(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SceneComponentPointProvider
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USceneComponentPointProvider : public UPointsProvider
	{
	public:
		struct FComponentReference                                 _sceneReference;                                         // 0x0030(0x0030) Edit, NativeAccessSpecifierPrivate
		class USceneComponent*                                     _sceneComponent;                                         // 0x0060(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SightRevealableComponent
	 * Size -> 0x0218 (FullSize[0x02D0] - InheritedSize[0x00B8])
	 */
	class USightRevealableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YM5T[0x48];                                  // 0x00B8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               _ignoredTags;                                            // 0x0100(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _revealTimeBase;                                         // 0x0120(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _revealRate;                                             // 0x01A0(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTunableStat                                        _revealRegressionRate;                                   // 0x0220(0x0080) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KDTF[0x30];                                  // 0x02A0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TerrorRadiusEmitterComponent
	 * Size -> 0x00F8 (FullSize[0x0310] - InheritedSize[0x0218])
	 */
	class UTerrorRadiusEmitterComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_FH8M[0x8];                                   // 0x0218(0x0008) Fix Super Size
		unsigned char                                              UnknownData_SPIX[0x28];                                  // 0x0220(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _simulatedFixedDistance;                                 // 0x0248(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       _imitatesAudioOnly;                                      // 0x024C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _active;                                                 // 0x024D(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isFakeTerrorRadius;                                     // 0x024E(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_68LA[0x1];                                   // 0x024F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _radius;                                                 // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E5I6[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<TWeakObjectPtr<class UTerrorRadiusReceiverComponent>, bool> _receiversInTerrorRadiusMap;                             // 0x0258(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<TWeakObjectPtr<class UTerrorRadiusReceiverComponent>, bool> _receiversPhysicallyInRadiusRangeMap;                    // 0x02A8(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XAC1[0x18];                                  // 0x02F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTerrorRadius(float Radius);
		void SetSimulatedFixedDistance(float distance);
		void SetIsFakeTerrorRadius(bool value);
		void SetImitatesAudioOnly(bool imitatesAudioOnly);
		void SetEmitterActive(bool Active);
		bool IsInTerrorRadius(class UTerrorRadiusReceiverComponent* receiver);
		float GetSimulatedFixedDistance();
		float GetRadius();
		bool GetIsActive();
		bool GetImitatesAudioOnly();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SlasherTerrorRadiusEmitterComponent
	 * Size -> 0x0090 (FullSize[0x03A0] - InheritedSize[0x0310])
	 */
	class USlasherTerrorRadiusEmitterComponent : public UTerrorRadiusEmitterComponent
	{
	public:
		unsigned char                                              UnknownData_L3QA[0x90];                                  // 0x0310(0x0090) MISSED OFFSET (PADDING)

	public:
		void SetBaseTerrorRadius(float baseTerrorRadius, bool progressive);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.StruggleComponent
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UStruggleComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L8TW[0x5C];                                  // 0x00B8(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    _skillCheckCount;                                        // 0x0114(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W77Q[0x68];                                  // 0x0118(0x0068) MISSED OFFSET (PADDING)

	public:
		void OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void Authority_TryActivateSkillCheck();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USurvivorAimStanceCameraDirectionProvider : public UAimDirectionProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.SurvivorAimStateComponent
	 * Size -> 0x0060 (FullSize[0x0118] - InheritedSize[0x00B8])
	 */
	class USurvivorAimStateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_K5QT[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACollectable*                                        _aimableCollectable;                                     // 0x00C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6TWU[0x48];                                  // 0x00D0(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TerrorRadiusAudioFeedbackComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UTerrorRadiusAudioFeedbackComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NMBI[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TerrorRadiusBPMComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UTerrorRadiusBPMComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_S1RT[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TerrorRadiusEmitterFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTerrorRadiusEmitterFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_GetActiveFakeTerrorRadiusEmittersCount(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TerrorRadiusReceiverComponent
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UTerrorRadiusReceiverComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_0Z2J[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _trVerticalDistanceFactor;                               // 0x00E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      _heartbeatSmoothingInterpolationSpeed;                   // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F2RL[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnIsInTerrorRadiusChanged;                               // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FBY3[0xC8];                                  // 0x0108(0x00C8) MISSED OFFSET (PADDING)

	public:
		void OnIsInTerrorRadiusChanged__DelegateSignature();
		bool IsInTerrorRadiusRange();
		bool IsInTerrorRadius();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TerrorRadiusScreenIndicatorComponent
	 * Size -> 0x00B0 (FullSize[0x02E0] - InheritedSize[0x0230])
	 */
	class UTerrorRadiusScreenIndicatorComponent : public UScreenIndicatorWorldMarkerComponent
	{
	public:
		TArray<struct FHideHeartIndicatorWithDelay>                _hideHeartIndicatorWithDelay;                            // 0x0230(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RTXA[0xA0];                                  // 0x0240(0x00A0) MISSED OFFSET (PADDING)

	public:
		void OnHeartStateChanged(const struct FGameplayTag& heartState);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TerrorRadiusVisualFeedbackComponent
	 * Size -> 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
	 */
	class UTerrorRadiusVisualFeedbackComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHeartStateChanged;                                     // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FTerrorRadiusVisualIndicatorHeartStateRange> _heartStateRanges;                                       // 0x00C8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGameplayTag>                                _hideHeartStateTags;                                     // 0x00D8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnHeartBeat;                                             // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DOBI[0x78];                                  // 0x00F8(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.TracingConeFlashlightableLightingStrategy
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy
	{
	public:
		int32_t                                                    _aroundConeCircleTraceCount;                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ONLY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.UnhookedSurvivorTrackerComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UUnhookedSurvivorTrackerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_OAE6[0x30];                                  // 0x00B8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.VisibleHatchRangeTrackerStrategy
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class UVisibleHatchRangeTrackerStrategy : public URangeToActorsTrackerStrategy
	{
	public:
		unsigned char                                              UnknownData_ZF29[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.WiggleComponent
	 * Size -> 0x0190 (FullSize[0x0248] - InheritedSize[0x00B8])
	 */
	class UWiggleComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GRR1[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFailSkillCheckAudioEvent;                              // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnMissSkillCheckAudioEvent;                              // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FString                                              AUDIO_EVENT_SKILL_CHECK_WARNING;                         // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              AUDIO_EVENT_SKILL_CHECK_GOOD;                            // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              AUDIO_EVENT_SKILL_CHECK_GREAT;                           // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UChargeableComponent*                                _wiggleProgress;                                         // 0x0110(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class ASlasherPlayer>                       _killerWigglingFrom;                                     // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UInputComponent>                      _inputComponent;                                         // 0x0120(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_POOI[0x110];                                 // 0x0128(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _wiggleInputLockTime;                                    // 0x0238(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JGEH[0xC];                                   // 0x023C(0x000C) MISSED OFFSET (PADDING)

	public:
		void Server_OnWiggleEnd();
		void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnWiggleInput();
		void OnWiggleEnd();
		void OnPlayerPickedUpStart(class ADBDPlayer* picker);
		void OnPlayerPickedUpEnd(class ADBDPlayer* picker);
		void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnLevelReadyToPlay();
		void OnKeyBindingsChanged();
		void OnHideWiggleSkillCheck(ESkillCheckCustomType Type);
		class UChargeableComponent* GetWiggleChargeable();
		void DBD_SetWiggleProgress(float ProgressPercent);
		void Authority_TutorialEndWiggle();
		void Authority_AddWiggleCharge(float ChargeAmount);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.WiggleFreeComponent
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UWiggleFreeComponent : public UActorComponent
	{
	public:
		class ASlasherPlayer*                                      _killerWigglingFrom;                                     // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TZTX[0x28];                                  // 0x00C0(0x0028) MISSED OFFSET (PADDING)

	public:
		void Authority_OnWiggleEnd();
		void Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker);
		void Authority_OnLevelReadyToPlay();
		void Authority_OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDGameplay.WiggleMotionComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class UWiggleMotionComponent : public UActorComponent
	{
	public:
		class ADBDPlayer*                                          _carriedPlayer;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDBDCharacterMovementComponent*                      _ownerMovementComponent;                                 // 0x00C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FRMT[0x48];                                  // 0x00C8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDBDTunableRowHandle                                _goodSkillCheckBumpsAmplitude;                           // 0x0110(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FDBDTunableRowHandle                                _greatSkillCheckBumpsAmplitude;                          // 0x0138(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetIsBeingWiggled(bool isBeingWiggled);
		void Server_SetIsBeingWiggled(bool isBeingWiggled);
		void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);
		void OnSurvivorRemoved(class ADBDPlayer* Target);
		void OnSurvivorPickedUp(class ADBDPlayer* Target);
		void OnHideWiggleSkillCheck(ESkillCheckCustomType Type);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
