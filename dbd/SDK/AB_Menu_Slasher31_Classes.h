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
	 * AnimBlueprintGeneratedClass AB_Menu_Slasher31.AB_Menu_Slasher31_C
	 * Size -> 0x0388 (FullSize[0x0698] - InheritedSize[0x0310])
	 */
	class UAB_Menu_Slasher31_C : public UK31MenuAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0318(0x0038)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x0350(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x0378(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x03F8(0x0038)
		struct FAnimNode_LinkedAnimGraph                           AnimGraphNode_LinkedAnimGraph;                           // 0x0430(0x00A8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x04D8(0x0038)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x0510(0x00B0)
		bool                                                       RoleSelected;                                            // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnline;                                                // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EORE[0x2];                                   // 0x05C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomInterupt;                                          // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EGameFlowStep                                              CurrentMenu;                                             // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M7Y1[0x7];                                   // 0x05C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Menu_Slasher31_C*                                KillerBP;                                                // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAset_Slasher_Menu                                  MenuAnimSet_01;                                          // 0x05D8(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAset_Slasher_Menu                                  MenuAnimSet_02;                                          // 0x0608(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAset_Slasher_Menu                                  MenuAnimSet_03;                                          // 0x0638(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAset_Slasher_Menu                                  MenuAnimSet;                                             // 0x0668(0x0030) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void OnNotifyEnd_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName);
		void OnNotifyBegin_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName);
		void OnInterrupted_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName);
		void OnBlendOut_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName);
		void OnCompleted_FF79019945E856B21A4DD7B9040097DE(const class FName& NotifyName);
		void OnNotifyEnd_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName);
		void OnNotifyBegin_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName);
		void OnInterrupted_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName);
		void OnBlendOut_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName);
		void OnCompleted_0A05E92D4B4424ABA1D3BABD878923E8(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher31_AnimGraphNode_TransitionResult_4D69DF7844ADC3C46C7608990975E05A();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void OnCustoChange(int32_t animationMappingIndex);
		void BlueprintInitializeAnimation();
		void BlueprintLinkedAnimationLayersInitialized();
		void OnMenuAnimationStateChange_Event(Enum_MenuAnimationState State);
		void OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex);
		void ExecuteUbergraph_AB_Menu_Slasher31(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
