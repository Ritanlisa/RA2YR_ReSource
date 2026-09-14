// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6C0260
LONG TClassFactory_CampaignClass::GetClassName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __thiscall TClassFactory_CampaignClass::GetClassName(TClassFactory_VCampaignClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c0270*/
  if ( !v1 ) /*0x6c0274*/
    __3_YAXPAX_Z((void *)Block); /*0x6c0277*/
  return v1; /*0x6c0281*/
}
}

// 0x6C4D60
LONG TClassFactory_MechLocomotionClass::GetClassName()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __thiscall TClassFactory_MechLocomotionClass::GetClassName(TClassFactory_VMechLocomotionClass__ *this)
{
  LONG v1; // esi
  volatile LONG *Block; // [esp+Ch] [ebp+4h]

  v1 = InterlockedDecrement(Block + 1); /*0x6c4d70*/
  if ( !v1 ) /*0x6c4d74*/
    __3_YAXPAX_Z((void *)Block); /*0x6c4d77*/
  return v1; /*0x6c4d81*/
}
}

// 0x6C0290
int TClassFactory_CampaignClass::ddtor()
{
{
    int v2;
    CampaignClass *v6;
    CampaignClass *v7;
    int v5;
    int arg4;
    int arg8;
    int *v8;
    if ( !v8 )
    return -2147024809;
    *v8 = 0;
    if ( arg4 )
    return -2147221232;
    v2 = __2_YAPAXI_Z(0x3A0u);
    if ( !v2 )
    return -2147024882;
    v6 = (CampaignClass *)CampaignClass::CampaignClass(v2, 0);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v5 = (**(int (__stdcall ***)(CampaignClass *, int, int *))v6->__pad_0)(v6, arg8, v8);
    if ( v5 < 0 )
    (*(void (__thiscall **)(CampaignClass *, int))(*(int *)v7->__pad_0 + 32))(v7, 1);
    return v5;
}
}

// 0x6C0310
int TClassFactory_CampaignClass::GetSize()
{
{
    int v1;
    int v2;
    int v4;
    int v5;
    v1 = *(int *)(v4 + 4);
    if ( v5 )
    v2 = v1 + 1;
    else
    v2 = v1 - 1;
    *(int *)(v4 + 4) = v2;
    return 0;
}
}

// 0x6C4D40
LONG TClassFactory_MechLocomotionClass::AddRef()
{
{
    int v2;
    return InterlockedIncrement((volatile LONG *)(v2 + 4));
}
}

// 0x6C4D90
int TClassFactory_MechLocomotionClass::ddtor()
{
{
    int v2;
    MechLocomotionClass *v6;
    MechLocomotionClass *v7;
    int v5;
    int arg4;
    int arg8;
    int *v8;
    if ( !v8 )
    return -2147024809;
    *v8 = 0;
    if ( arg4 )
    return -2147221232;
    v2 = __2_YAPAXI_Z(0x34u);
    if ( !v2 )
    return -2147024882;
    v6 = (MechLocomotionClass *)SmallFunc_5AFEF0(v2);
    v7 = v6;
    if ( !v6 )
    return -2147024882;
    v5 = (**(int (__stdcall ***)(MechLocomotionClass *, int, int *))v6->__pad_0)(v6, arg8, v8);
    if ( v5 < 0 )
    (*(void (__thiscall **)(MechLocomotionClass *, int))(*(int *)v7->__pad_0 + 32))(v7, 1);
    return v5;
}
}

// 0x6C4E10
int TClassFactory_MechLocomotionClass::GetSize()
{
{
    int v1;
    int v2;
    int v4;
    int v5;
    v1 = *(int *)(v4 + 4);
    if ( v5 )
    v2 = v1 + 1;
    else
    v2 = v1 - 1;
    *(int *)(v4 + 4) = v2;
    return 0;
}
}
