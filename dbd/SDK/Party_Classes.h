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
	 * Class Party.Chatroom
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UChatroom : public UObject
	{
	public:
		class FString                                              CurrentChatRoomId;                                       // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxChatRoomRetries;                                      // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumChatRoomRetries;                                      // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7PS7[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialManager
	 * Size -> 0x0180 (FullSize[0x01B0] - InheritedSize[0x0030])
	 */
	class USocialManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_HVDX[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USocialToolkit*>                              SocialToolkits;                                          // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class USocialDebugTools*                                   SocialDebugTools;                                        // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UU1I[0x140];                                 // 0x0070(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialParty
	 * Size -> 0x02A0 (FullSize[0x02D0] - InheritedSize[0x0030])
	 */
	class USocialParty : public UObject
	{
	public:
		unsigned char                                              UnknownData_L0KN[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ReservationBeaconClientClass;                            // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SpectatorBeaconClientClass;                              // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TG3Z[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUniqueNetIdRepl                                    OwningLocalUserId;                                       // 0x0080(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUniqueNetIdRepl                                    CurrentLeaderId;                                         // 0x00A8(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<struct FUniqueNetIdRepl, class UPartyMember*>         PartyMembersById;                                        // 0x00D0(0x0050) NativeAccessSpecifierPrivate
		bool                                                       bEnableAutomaticPartyRejoin;                             // 0x0120(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J5BS[0x7F];                                  // 0x0121(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APartyBeaconClient*                                  ReservationBeaconClient;                                 // 0x01A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5VR6[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpectatorBeaconClient*                              SpectatorBeaconClient;                                   // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DZIU[0x110];                                 // 0x01C0(0x0110) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.PartyMember
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	class UPartyMember : public UObject
	{
	public:
		unsigned char                                              UnknownData_54SI[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USocialUser*                                         SocialUser;                                              // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z0F8[0x80];                                  // 0x0078(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialToolkit
	 * Size -> 0x01D0 (FullSize[0x0200] - InheritedSize[0x0030])
	 */
	class USocialToolkit : public UObject
	{
	public:
		unsigned char                                              UnknownData_OKM8[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USocialUser*                                         LocalUser;                                               // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class USocialUser*>                                 AllUsers;                                                // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FD12[0x50];                                  // 0x0088(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocalPlayer*                                        LocalPlayerOwner;                                        // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USocialChatManager*                                  SocialChatManager;                                       // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0WM4[0x118];                                 // 0x00E8(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatManager
	 * Size -> 0x01F8 (FullSize[0x0228] - InheritedSize[0x0030])
	 */
	class USocialChatManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_TEVZ[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                              // 0x0080(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class USocialChatRoom*>                ChatRoomsById;                                           // 0x00D0(0x0050) NativeAccessSpecifierPrivate
		TMap<class FString, class USocialReadOnlyChatChannel*>     ReadOnlyChannelsByDisplayName;                           // 0x0120(0x0050) NativeAccessSpecifierPrivate
		bool                                                       bEnableChatSlashCommands;                                // 0x0170(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SVSS[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*>  GroupChannels;                                           // 0x0178(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VX6P[0x60];                                  // 0x01C8(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatChannel
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class USocialChatChannel : public UObject
	{
	public:
		unsigned char                                              UnknownData_079L[0xC0];                                  // 0x0030(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialChatRoom
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class USocialChatRoom : public USocialChatChannel
	{
	public:
		unsigned char                                              UnknownData_CLG0[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialDebugTools
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class USocialDebugTools : public UObject
	{
	public:
		unsigned char                                              UnknownData_OPO9[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialGroupChannel
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class USocialGroupChannel : public UObject
	{
	public:
		class USocialUser*                                         SocialUser;                                              // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FUniqueNetIdRepl                                    GroupID;                                                 // 0x0038(0x0028) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FText                                                DisplayName;                                             // 0x0060(0x0018) NativeAccessSpecifierPrivate
		TArray<class USocialUser*>                                 Members;                                                 // 0x0078(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1Z3M[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialPartyChatRoom
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class USocialPartyChatRoom : public USocialChatRoom
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialPrivateMessageChannel
	 * Size -> 0x0008 (FullSize[0x00F8] - InheritedSize[0x00F0])
	 */
	class USocialPrivateMessageChannel : public USocialChatChannel
	{
	public:
		class USocialUser*                                         TargetUser;                                              // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialReadOnlyChatChannel
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class USocialReadOnlyChatChannel : public USocialChatChannel
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialSettings
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USocialSettings : public UObject
	{
	public:
		TArray<class FName>                                        OssNamesWithEnvironmentIdPrefix;                         // 0x0030(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		int32_t                                                    DefaultMaxPartySize;                                     // 0x0040(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bPreferPlatformInvites;                                  // 0x0044(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bMustSendPrimaryInvites;                                 // 0x0045(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLeavePartyOnDisconnect;                                 // 0x0046(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSetDesiredPrivacyOnLocalPlayerBecomesLeader;            // 0x0047(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UserListAutoUpdateRate;                                  // 0x0048(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MinNicknameLength;                                       // 0x004C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    MaxNicknameLength;                                       // 0x0050(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RLPW[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSocialPlatformDescription>                  SocialPlatformDescriptions;                              // 0x0058(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Party.SocialUser
	 * Size -> 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
	 */
	class USocialUser : public UObject
	{
	public:
		unsigned char                                              UnknownData_E2R6[0x140];                                 // 0x0030(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
