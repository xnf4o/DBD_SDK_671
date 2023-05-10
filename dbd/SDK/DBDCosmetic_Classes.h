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
	 * Class DBDCosmetic.DBDActorIndicator
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ADBDActorIndicator : public AActor
	{
	public:
		bool                                                       _isActivated;                                            // 0x0230(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LAIQ[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		void Cosmetic_UpdateIndicatorActivationStatus(bool IsActivated);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCosmetic.DBDCosmeticModuleUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDBDCosmeticModuleUtilities : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class ASurvivorCosmeticHelperActor*> STATIC_GetCosmeticHelperActorsOfSurvivorByClass(class ACamperPlayer* Survivor, class UClass* cosmeticHelperActorClassType);
		TArray<class ASurvivorCosmeticHelperActor*> STATIC_GetCosmeticHelperActorsOfSurvivor(class ACamperPlayer* Survivor);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCosmetic.SurvivorCosmeticHelperActor
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class ASurvivorCosmeticHelperActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_Z2ZK[0x38];                                  // 0x0230(0x0038) MISSED OFFSET (PADDING)

	public:
		bool IsLocallyObserved();
		class ACamperPlayer* GetSurvivor();
		class UMaterialHelper* GetMaterialHelper();
		class UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();
		class UAkComponent* GetAudioComponent();
		void Cosmetic_OnSurvivorLinked(class ACamperPlayer* survivorLinked);
		void Cosmetic_OnIsLocallyObservingSurvivorChanged(bool isLocallyObservingSurvivor);
		void Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class USurvivorCosmeticHelperSpawnerComponent : public UActorComponent
	{
	public:
		class UDataTable*                                          _survivorCosmeticActorHelperDB;                          // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ASurvivorCosmeticHelperActor*>                survivorCosmeticHelperActors;                            // 0x00C0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O64A[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		TArray<class ASurvivorCosmeticHelperActor*> GetCosmeticHelperActors();
		TArray<class ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorByClass(class UClass* cosmeticHelperActorClassType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
