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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDGameplay.AITerrorEvent
	 * Size -> 0x0028
	 */
	struct FAITerrorEvent
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OVBN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Instigator;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTerrorRadiusEmitterComponent*                       TerrorEmitter;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGenericTeamId                                      TeamIdentifier;                                          // 0x0020(0x0001) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYOV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.Footstep
	 * Size -> 0x0050
	 */
	struct FFootstep
	{
	public:
		unsigned char                                              UnknownData_96W8[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FadeCurve;                                               // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         VeinsCurve;                                              // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSLL[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDBDDecalComponent*                                  _decal;                                                  // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YU7N[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.CustomKillerInstinctData
	 * Size -> 0x0028
	 */
	struct FCustomKillerInstinctData
	{
	public:
		class UNiagaraSystem*                                      ParticleSystemAsset;                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                SurvivorStateTags;                                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                KillerStateTags;                                         // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDGameplay.LullabyKillerData
	 * Size -> 0x0028
	 */
	struct FLullabyKillerData
	{
	public:
		struct FGameplayTag                                        KillerPresenceTag;                                       // 0x0000(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        KillerLullabyActivationState;                            // 0x000C(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SurvivorLullabyActivationState;                          // 0x0018(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KillerLullabyDistance;                                   // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDGameplay.HideHeartIndicatorWithDelay
	 * Size -> 0x0010
	 */
	struct FHideHeartIndicatorWithDelay
	{
	public:
		struct FGameplayTag                                        HideTag;                                                 // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayWhenTagRemoved;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDGameplay.TerrorRadiusVisualIndicatorHeartStateRange
	 * Size -> 0x0010
	 */
	struct FTerrorRadiusVisualIndicatorHeartStateRange
	{
	public:
		float                                                      StartVolume;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        HeartTag;                                                // 0x0004(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDGameplay.AimDirection
	 * Size -> 0x0024
	 */
	struct FAimDirection
	{
	public:
		unsigned char                                              UnknownData_6JJL[0x24];                                  // 0x0000(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.DBDBidirectionalTimer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FDBDBidirectionalTimer : public FDBDTimer
	{	};

	/**
	 * ScriptStruct DBDGameplay.BlindTargetViewData
	 * Size -> 0x0040
	 */
	struct FBlindTargetViewData
	{
	public:
		unsigned char                                              UnknownData_JVMJ[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.FootstepSpawnParameters
	 * Size -> 0x0020
	 */
	struct FFootstepSpawnParameters
	{
	public:
		unsigned char                                              UnknownData_YTQ2[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         FadeCurve;                                               // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         VeinsCurve;                                              // 0x0018(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct DBDGameplay.ForAllSurvivorsStatusEffectImposer
	 * Size -> 0x0018
	 */
	struct FForAllSurvivorsStatusEffectImposer
	{
	public:
		class UClass*                                              _effectClass;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NTEY[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.TestableStatModifier
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FTestableStatModifier : public FStatModifier
	{	};

	/**
	 * ScriptStruct DBDGameplay.TestableStat
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	struct FTestableStat : public FTunableStat
	{
	public:
		unsigned char                                              UnknownData_U1XU[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
