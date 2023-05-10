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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Archives.ECustomValueComparator
	 */
	enum class ECustomValueComparator : uint8_t
	{
		Equal          = 0,
		LessOrEqual    = 1,
		GreaterOrEqual = 2,
		MAX            = 3
	};

	/**
	 * Enum Archives.EEventSubject
	 */
	enum class EEventSubject : uint8_t
	{
		Instigator = 0,
		Target     = 1,
		Any        = 2,
		None       = 3,
		MAX        = 4
	};

	/**
	 * Enum Archives.EEventCountComparisonOperator
	 */
	enum class EEventCountComparisonOperator : uint8_t
	{
		EqualTo            = 0,
		GreaterThan        = 1,
		GreaterThanEqualTo = 2,
		LessThan           = 3,
		LessThanEqualTo    = 4,
		MAX                = 5
	};

	/**
	 * Enum Archives.ESubjectPerspective
	 */
	enum class ESubjectPerspective : uint8_t
	{
		Me    = 0,
		Other = 1,
		MAX   = 2
	};

	/**
	 * Enum Archives.EAllowedPlayerType
	 */
	enum class EAllowedPlayerType : uint8_t
	{
		All          = 0,
		KillerOnly   = 1,
		SurvivorOnly = 2,
		MAX          = 3
	};

	/**
	 * Enum Archives.EInChaseTargetLogic
	 */
	enum class EInChaseTargetLogic : uint8_t
	{
		AnyOf  = 0,
		AllOf  = 1,
		NoneOf = 2,
		MAX    = 3
	};

	/**
	 * Enum Archives.EInstigatorTargetDistanceComparator
	 */
	enum class EInstigatorTargetDistanceComparator : uint8_t
	{
		LessOrEqual    = 0,
		GreaterOrEqual = 1,
		MAX            = 2
	};

	/**
	 * Enum Archives.EAttackerSubject
	 */
	enum class EAttackerSubject : uint8_t
	{
		Instigator = 0,
		Target     = 1,
		MAX        = 2
	};

	/**
	 * Enum Archives.ENearGameObjectQuestObjectProperty
	 */
	enum class ENearGameObjectQuestObjectProperty : uint8_t
	{
		NotRepaired  = 0,
		NotSearched  = 1,
		NotCleansed  = 2,
		NotDestroyed = 3,
		Any          = 4,
		Count        = 5,
		MAX          = 6
	};

	/**
	 * Enum Archives.ENearGameObjectQuestObjectType
	 */
	enum class ENearGameObjectQuestObjectType : uint8_t
	{
		Generator = 0,
		Pallet    = 1,
		Chest     = 2,
		Totem     = 3,
		Count     = 4,
		MAX       = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Archives.EventOccurrenceConditionData
	 * Size -> 0x0060
	 */
	struct FEventOccurrenceConditionData
	{
	public:
		struct FGameplayTag                                        GameEventTag;                                            // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConditionSubject                                          PreviousConditionSubject;                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConditionSubject                                          CurrentConditionSubject;                                 // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GGP[0x52];                                  // 0x000E(0x0052) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Archives.AnyEventConditionData
	 * Size -> 0x0060
	 */
	struct FAnyEventConditionData
	{
	public:
		struct FGameplayTag                                        GameEventTag;                                            // 0x0000(0x000C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConditionSubject                                          PreviousConditionSubject;                                // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConditionSubject                                          CurrentConditionSubject;                                 // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17EC[0x52];                                  // 0x000E(0x0052) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
