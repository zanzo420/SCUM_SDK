#pragma once

// SCUM (0.1.33.12968 by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.GetAmmoReloadCapacity
struct ABP_Weapon_98k_Karabiner_C_GetAmmoReloadCapacity_Params
{
	class AAmmunitionItem**                            ammo;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Weapon_98k_Karabiner.BP_Weapon_98k_Karabiner_C.UserConstructionScript
struct ABP_Weapon_98k_Karabiner_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
