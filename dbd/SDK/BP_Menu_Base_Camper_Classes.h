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
	 * BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C
	 * Size -> 0x004A (FullSize[0x069A] - InheritedSize[0x0650])
	 */
	class ABP_Menu_Base_Camper_C : public ADBDMenuPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0650(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULobbyDialogueComponent_C*                           LobbyDialogueComponent;                                  // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SurvivorRightFootGroundDetector_C*               RightFootGroundDetector;                                 // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SurvivorLeftFootGroundDetector_C*                LeftFootGroundDetector;                                  // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCharmSpawnerComponent*                              CharmSpawner;                                            // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCustomizedAudioComponent*                           CustomizedAudio;                                         // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak_Audio_Menu_Base_Camper;                               // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Dissolve_Dissolve_596272B14FBF23BFE861F687F86F9EB1;      // 0x0688(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Dissolve__Direction_596272B14FBF23BFE861F687F86F9EB1;    // 0x068C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L13F[0x3];                                   // 0x068D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Dissolve;                                                // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Destroying;                                              // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayLocalDialogueOnly;                                   // 0x0699(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsPlayingMenuInterrupt(bool IsPlayingAnimation);
		void SetHeight();
		class UCharmSpawnerComponent* GetCharmSpawnerComponent();
		void UserConstructionScript();
		void Dissolve__FinishedFunc();
		void Dissolve__UpdateFunc();
		void BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(const class FName& outfitAudioStateCollection);
		void ReceiveBeginPlay();
		void BeginDestroySequence_Internal();
		void BeginSmokeIn();
		void RestartInSequence_Internal();
		void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState);
		void OnLocalPlayerSpawned();
		void OnGuestPlayerSpawned(class ADBDMenuPlayer* Player);
		void OnLocalPlayerReadyChanged(bool IsReady);
		void OnGuestPlayerReadyChanged(class ADBDMenuPlayer* Player, bool IsReady);
		void OnAllPlayersReadyInOnlineLobby();
		void OnSkeletalMeshReady();
		void OnGuestPlayerDespawned(class ADBDMenuPlayer* Player);
		void ExecuteUbergraph_BP_Menu_Base_Camper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
