#pragma once

// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Advanced_Standing_Torch_01.BP_Advanced_Standing_Torch_01_C
// 0x0008 (0x0880 - 0x0878)
class ABP_Advanced_Standing_Torch_01_C : public AFireItem
{
public:
	class UPointLightComponent*                        PointLight;                                               // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Advanced_Standing_Torch_01.BP_Advanced_Standing_Torch_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
