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
	 * ScriptStruct Customization.CharacterCustomization
	 * Size -> 0x0024
	 */
	struct FCharacterCustomization
	{
	public:
		class FName                                                Head;                                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TorsoOrBody;                                             // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LegsOrWeapon;                                            // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Customization.CharmIdSlot
	 * Size -> 0x0010
	 */
	struct FCharmIdSlot
	{
	public:
		int8_t                                                     slotIndex;                                               // 0x0000(0x0001) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQPK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CharmId;                                                 // 0x0004(0x000C) Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Customization.EquippedPlayerCustomization
	 * Size -> 0x0038
	 */
	struct FEquippedPlayerCustomization
	{
	public:
		struct FCharacterCustomization                             _equippedCustomization;                                  // 0x0000(0x0024) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6DS2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCharmIdSlot>                                _equippedCharms;                                         // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
