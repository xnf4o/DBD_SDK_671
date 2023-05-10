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
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.IsSpecificCharacterInLobby
	 */
	struct ULobbyDialogueComponent_C_IsSpecificCharacterInLobby_Params
	{
	public:
		class FString                                              Character;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetPlayableEvents
	 */
	struct ULobbyDialogueComponent_C_GetPlayableEvents_Params
	{
	public:
		TArray<struct FAkEventWithSubtitle>                        AudioEvents;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldPlay;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYO9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FAkEventWithSubtitle>                        PlayableEvents;                                          // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.GetLocalCharacterName
	 */
	struct ULobbyDialogueComponent_C_GetLocalCharacterName_Params
	{
	public:
		class FString                                              characterName;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.FindSpecificDialogueForCharacter
	 */
	struct ULobbyDialogueComponent_C_FindSpecificDialogueForCharacter_Params
	{
	public:
		TArray<struct FSpecificReactionDialogue>                   ReactionDialogues;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              Character;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FAkEventWithSubtitle>                        Dialogue;                                                // 0x0020(0x0010)  (Parm, OutParm)
		bool                                                       success;                                                 // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC10
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC10_Params
	{
	public:
		TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle>    ResponseDialogue;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldPlay;                                              // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FTX6[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC9
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC9_Params
	{
	public:
		TMap<class UAkAudioEvent*, struct FAkEventWithSubtitle>    ResponseDialogue;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldPlay;                                              // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GKP9[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC8
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC8_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JSGL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC7
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC7_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IM70[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC6
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC6_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N6CO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC5
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC5_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_12NJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC4
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC4_Params
	{
	public:
		TArray<struct FAkEventWithSubtitle>                        FoundDialogue;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldPlay;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HJ6Y[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC3
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC3_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VV2C[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC2
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC2_Params
	{
	public:
		TArray<struct FAkEventWithSubtitle>                        FoundDialogue;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ShouldPlay;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VR6M[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC1
	 */
	struct ULobbyDialogueComponent_C_ShouldPlayC1_Params
	{
	public:
		bool                                                       ShouldPlay;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S3RJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnCharacterRespond
	 */
	struct ULobbyDialogueComponent_C_OnCharacterRespond_Params
	{
	public:
		class UAkComponent*                                        AudioTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PreviousContext;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLobbyWait
	 */
	struct ULobbyDialogueComponent_C_OnLobbyWait_Params
	{
	public:
		class UAkComponent*                                        AudioTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalReady
	 */
	struct ULobbyDialogueComponent_C_OnLocalReady_Params
	{
	public:
		class UAkComponent*                                        AudioTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsReady;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1O9Z[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestSpawn
	 */
	struct ULobbyDialogueComponent_C_OnGuestSpawn_Params
	{
	public:
		class ADBDMenuPlayer*                                      Guest;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkComponent*                                        AudioTarget;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalSpawn
	 */
	struct ULobbyDialogueComponent_C_OnLocalSpawn_Params
	{
	public:
		class UAkComponent*                                        AudioTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerSpawn
	 */
	struct ULobbyDialogueComponent_C_OnGuestPlayerSpawn_Params
	{
	public:
		class ADBDMenuPlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkComponent*                                        AudioTarget;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerReadyChanged
	 */
	struct ULobbyDialogueComponent_C_OnLocalPlayerReadyChanged_Params
	{
	public:
		class ADBDMenuPlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAkComponent*                                        AudioTarget;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerSpawn
	 */
	struct ULobbyDialogueComponent_C_OnLocalPlayerSpawn_Params
	{
	public:
		class UAkComponent*                                        AudioTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinished
	 */
	struct ULobbyDialogueComponent_C_OnDialogueFinished_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3P3T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnAllPlayersReadyInOnlineLobby
	 */
	struct ULobbyDialogueComponent_C_OnAllPlayersReadyInOnlineLobby_Params
	{	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ReceiveEndPlay
	 */
	struct ULobbyDialogueComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerDespawned
	 */
	struct ULobbyDialogueComponent_C_OnGuestPlayerDespawned_Params
	{
	public:
		class ADBDMenuPlayer*                                      Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnBeginPlay
	 */
	struct ULobbyDialogueComponent_C_OnBeginPlay_Params
	{
	public:
		class UAkComponent*                                        AudioTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_Menu_Base_Camper_C*                              Player;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC2
	 */
	struct ULobbyDialogueComponent_C_OnDialogueFinishedC2_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8QL0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC4
	 */
	struct ULobbyDialogueComponent_C_OnDialogueFinishedC4_Params
	{
	public:
		EAkCallbackType                                            CallbackType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GI4F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAkCallbackInfo*                                     CallbackInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LobbyDialogueComponent.LobbyDialogueComponent_C.ExecuteUbergraph_LobbyDialogueComponent
	 */
	struct ULobbyDialogueComponent_C_ExecuteUbergraph_LobbyDialogueComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
