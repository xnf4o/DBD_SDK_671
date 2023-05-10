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
	 * BlueprintGeneratedClass LobbyDialogueComponent.LobbyDialogueComponent_C
	 * Size -> 0x01D8 (FullSize[0x0290] - InheritedSize[0x00B8])
	 */
	class ULobbyDialogueComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FAkEventWithSubtitle>                        C1_OnSpawnFallback;                                      // 0x00C0(0x0010) Edit, BlueprintVisible
		int32_t                                                    C1_PlayProbability;                                      // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_54II[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpecificReactionDialogue>                   C2_OnSpawnReactToSpecificCharacter;                      // 0x00D8(0x0010) Edit, BlueprintVisible
		int32_t                                                    C2_PlayProbability;                                      // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AZW6[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkEventWithSubtitle>                        C3_OnSpawnReactToCharacterGroup;                         // 0x00F0(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      C3_CharacterGroup;                                       // 0x0100(0x0010) Edit, BlueprintVisible
		int32_t                                                    C3_PlayProbability;                                      // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         C1_C2_C3_Delay;                                          // 0x0114(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0YDP[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSpecificReactionDialogue>                   C4_OnGuestJoinedReactToSpecificCharacter;                // 0x0128(0x0010) Edit, BlueprintVisible
		int32_t                                                    C4_PlayProbability;                                      // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NC9B[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkEventWithSubtitle>                        C5_OnGuestJoinedReactToCharacterGroup;                   // 0x0140(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      C5_CharacterGroup;                                       // 0x0150(0x0010) Edit, BlueprintVisible
		int32_t                                                    C5_PlayProbability;                                      // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         C4_C5_Delay;                                             // 0x0164(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F6MP[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkEventWithSubtitle>                        C6_OnReadiedButOthersNotReady;                           // 0x0178(0x0010) Edit, BlueprintVisible
		int32_t                                                    C6_PlayProbability;                                      // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         C6_Delay;                                                // 0x018C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NFY0[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkEventWithSubtitle>                        C7_OnPartyFilledWithCharacterGroup;                      // 0x01A0(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      C7_CharacterGroup;                                       // 0x01B0(0x0010) Edit, BlueprintVisible
		int32_t                                                    C7_PlayProbability;                                      // 0x01C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5N8U[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkEventWithSubtitle>                        C8_OnStayInLobby;                                        // 0x01C8(0x0010) Edit, BlueprintVisible
		int32_t                                                    C8_PlayProbability;                                      // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         C8_Delay;                                                // 0x01DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       C8_ShouldPlaySecondVoiceLine;                            // 0x01EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y5NW[0x3];                                   // 0x01ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    C9_10_PlayProbability;                                   // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatRange                                         C9_10_Delay;                                             // 0x01F4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HSV3[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle>    C9_10_DialogueMap;                                       // 0x0208(0x0050) Edit, BlueprintVisible
		class FString                                              C9_10_RespondingCharacterName;                           // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       AudioStopEvent;                                          // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsPlayingDialogue;                                       // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsPlayingC9_11;                                          // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMuted;                                                 // 0x0272(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ECG[0x5];                                   // 0x0273(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       LastPlayedAkEvent;                                       // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        LocalAudioTarget;                                        // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Menu_Base_Camper_C*                              Player;                                                  // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsSpecificCharacterInLobby(class FString* Character, bool* success);
		void GetPlayableEvents(TArray<struct FAkEventWithSubtitle>* AudioEvents, bool* ShouldPlay, TArray<struct FAkEventWithSubtitle>* PlayableEvents);
		void GetLocalCharacterName(class FString* characterName);
		void FindSpecificDialogueForCharacter(TArray<struct FSpecificReactionDialogue>* ReactionDialogues, const class FString& Character, TArray<struct FAkEventWithSubtitle>* Dialogue, bool* success);
		void ShouldPlayC10(TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle>* ResponseDialogue, bool* ShouldPlay);
		void ShouldPlayC9(TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle>* ResponseDialogue, bool* ShouldPlay);
		void ShouldPlayC8(bool* ShouldPlay);
		void ShouldPlayC7(bool* ShouldPlay);
		void ShouldPlayC6(bool* ShouldPlay);
		void ShouldPlayC5(bool* ShouldPlay);
		void ShouldPlayC4(TArray<struct FAkEventWithSubtitle>* FoundDialogue, bool* ShouldPlay);
		void ShouldPlayC3(bool* ShouldPlay);
		void ShouldPlayC2(TArray<struct FAkEventWithSubtitle>* FoundDialogue, bool* ShouldPlay);
		void ShouldPlayC1(bool* ShouldPlay);
		void OnCharacterRespond(class UAkComponent* AudioTarget, const class FString& PreviousContext);
		void OnLobbyWait(class UAkComponent* AudioTarget);
		void OnLocalReady(class UAkComponent* AudioTarget, bool IsReady);
		void OnGuestSpawn(class ADBDMenuPlayer* Guest, class UAkComponent* AudioTarget);
		void OnLocalSpawn(class UAkComponent* AudioTarget);
		void OnGuestPlayerSpawn(class ADBDMenuPlayer* Player, class UAkComponent* AudioTarget);
		void OnLocalPlayerReadyChanged(class ADBDMenuPlayer* Player, class UAkComponent* AudioTarget);
		void OnLocalPlayerSpawn(class UAkComponent* AudioTarget);
		void OnDialogueFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		void OnAllPlayersReadyInOnlineLobby();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnGuestPlayerDespawned(class ADBDMenuPlayer* Player);
		void OnBeginPlay(class UAkComponent* AudioTarget, class ABP_Menu_Base_Camper_C* Player);
		void OnDialogueFinishedC2(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		void OnDialogueFinishedC4(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
		void ExecuteUbergraph_LobbyDialogueComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
