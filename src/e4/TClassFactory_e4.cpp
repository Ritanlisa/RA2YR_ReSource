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

// 0x6C0290
int TClassFactory_CampaignClass::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TClassFactory_CampaignClass::ddtor(TClassFactory_VCampaignClass__ *this)
{
  int v2; // eax
  CampaignClass *v6; // eax
  CampaignClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c0298*/
    return -2147024809; /*0x6c029b*/
  *v8 = 0; /*0x6c02a8*/
  if ( arg4 ) /*0x6c02b0*/
    return -2147221232; /*0x6c02b3*/
  v2 = __2_YAPAXI_Z(0x3A0u); /*0x6c02c1*/
  if ( !v2 ) /*0x6c02cb*/
    return -2147024882; /*0x6c02cb*/
  v6 = (CampaignClass *)CampaignClass::CampaignClass(v2, 0); /*0x6c02d1*/
  v7 = v6; /*0x6c02d6*/
  if ( !v6 ) /*0x6c02da*/
    return -2147024882; /*0x6c02dd*/
  v5 = (**(int (__stdcall ***)(CampaignClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c02f1*/
  if ( v5 < 0 ) /*0x6c02f5*/
    (*(void (__thiscall **)(CampaignClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c02fd*/
  return v5; /*0x6c029a*/
}
}

// 0x6C0310
int TClassFactory_CampaignClass::GetSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TClassFactory_CampaignClass::GetSize(TClassFactory_VCampaignClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c031a*/
  if ( v5 ) /*0x6c031d*/
    v2 = v1 + 1; /*0x6c031f*/
  else
    v2 = v1 - 1; /*0x6c0328*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c0320*/
  return 0; /*0x6c0325*/
}
}

// 0x6C4D40
LONG TClassFactory_MechLocomotionClass::AddRef()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LONG __thiscall TClassFactory_MechLocomotionClass::AddRef(TClassFactory_VMechLocomotionClass__ *this)
{
  int v2; // [esp+4h] [ebp+4h]

  return InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x6c4d4e*/
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

// 0x6C4D90
int TClassFactory_MechLocomotionClass::ddtor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TClassFactory_MechLocomotionClass::ddtor(TClassFactory_VMechLocomotionClass__ *this)
{
  int v2; // eax
  MechLocomotionClass *v6; // eax
  MechLocomotionClass *v7; // esi
  int v5; // edi
  int arg4; // [esp+10h] [ebp+8h]
  int arg8; // [esp+14h] [ebp+Ch]
  _DWORD *v8; // [esp+18h] [ebp+10h]

  if ( !v8 ) /*0x6c4d98*/
    return -2147024809; /*0x6c4d9b*/
  *v8 = 0; /*0x6c4da8*/
  if ( arg4 ) /*0x6c4db0*/
    return -2147221232; /*0x6c4db3*/
  v2 = __2_YAPAXI_Z(0x34u); /*0x6c4dbe*/
  if ( !v2 ) /*0x6c4dc8*/
    return -2147024882; /*0x6c4dc8*/
  v6 = (MechLocomotionClass *)SmallFunc_5AFEF0(v2); /*0x6c4dcc*/
  v7 = v6; /*0x6c4dd1*/
  if ( !v6 ) /*0x6c4dd5*/
    return -2147024882; /*0x6c4dd8*/
  v5 = (**(int (__stdcall ***)(MechLocomotionClass *, int, _DWORD *))v6->__pad_0)(v6, arg8, v8); /*0x6c4dec*/
  if ( v5 < 0 ) /*0x6c4df0*/
    (*(void (__thiscall **)(MechLocomotionClass *, int))(*(_DWORD *)v7->__pad_0 + 32))(v7, 1); /*0x6c4df8*/
  return v5; /*0x6c4d9a*/
}
}

// 0x6C4E10
int TClassFactory_MechLocomotionClass::GetSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall TClassFactory_MechLocomotionClass::GetSize(TClassFactory_VMechLocomotionClass__ *this)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // [esp+4h] [ebp+4h]
  int v5; // [esp+8h] [ebp+8h]

  v1 = *(_DWORD *)(v4 + 4); /*0x6c4e1a*/
  if ( v5 ) /*0x6c4e1d*/
    v2 = v1 + 1; /*0x6c4e1f*/
  else
    v2 = v1 - 1; /*0x6c4e28*/
  *(_DWORD *)(v4 + 4) = v2; /*0x6c4e20*/
  return 0; /*0x6c4e25*/
}
}
