#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bear_Skinned.Bear_Skinned_C
// 0x0000 (0x0760 - 0x0760)
class ABear_Skinned_C : public AEquipmentItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bear_Skinned.Bear_Skinned_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
