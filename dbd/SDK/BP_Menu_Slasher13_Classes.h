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
	 * BlueprintGeneratedClass BP_Menu_Slasher13.BP_Menu_Slasher13_C
	 * Size -> 0x008D (FullSize[0x0779] - InheritedSize[0x06EC])
	 */
	class ABP_Menu_Slasher13_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		unsigned char                                              UnknownData_PHI3[0x4];                                   // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_13_C*                                  BP_Audio_KLR_14;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_RedStainComponent_C*                             RedStainComponent;                                       // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Show_Sword_WPO_964716F24F8255A0C9F98FA0967E8ECF;         // 0x0708(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Show_Sword_Shard_Disappear_964716F24F8255A0C9F98FA0967E8ECF; // 0x070C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Show_Sword_Sword_Appear_964716F24F8255A0C9F98FA0967E8ECF; // 0x0710(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Show_Sword__Direction_964716F24F8255A0C9F98FA0967E8ECF;  // 0x0714(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V36V[0x3];                                   // 0x0715(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  ShowSword;                                               // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_2_Size_548F5340441650D05914669F2F45DC7E;        // 0x0720(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Timeline_2_Particle_Location_548F5340441650D05914669F2F45DC7E; // 0x072C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_548F5340441650D05914669F2F45DC7E;  // 0x0738(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YBRL[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Make_Sword_Disappear_Shard_Size_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0748(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Make_Sword_Disappear_Particle_Position_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0754(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Make_Sword_Disappear_WPO_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0760(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Make_Sword_Disappear_Shard_Appear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0764(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Make_Sword_Disappear_Weapon_Disappear_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x0768(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Make_Sword_Disappear__Direction_E08D4B9E409A9213BEBDBD84EE0E3709; // 0x076C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JD4K[0x3];                                   // 0x076D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  MakeSwordDisappear;                                      // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SwordShouldBeVisible;                                    // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetShard(class USkeletalMeshComponent** Shard);
		void GetSword(class USkeletalMeshComponent** Sword);
		void MakeSwordDisappear__FinishedFunc();
		void MakeSwordDisappear__UpdateFunc();
		void ShowSword__FinishedFunc();
		void ShowSword__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void ReceiveBeginPlay();
		void OnCustomizationUpdated();
		void OnAttack_StopTimeline();
		void K13_FX_MakeSwordInvisible();
		void K13_FX_MakeSwordVisible();
		void K13_FX_MakeSwordDisappear();
		void K13_FX_MakeSwordAppear();
		void K13_FX_ModifyFace(float SadFaceCurveValue, float MadFaceCurveValue);
		void ExecuteUbergraph_BP_Menu_Slasher13(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
