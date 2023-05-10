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
	 * BlueprintGeneratedClass LevelGenerator.LevelGenerator_C
	 * Size -> 0x0014 (FullSize[0x1024] - InheritedSize[0x1010])
	 */
	class ALevelGenerator_C : public AProceduralLevelBuilder
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1010(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x1018(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      initialMistDensity;                                      // 0x1020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveMist();
		void ApplyMist(float Modifier);
		void ExecuteUbergraph_LevelGenerator(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
