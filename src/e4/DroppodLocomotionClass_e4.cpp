// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DroppodLocomotionClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DropPodLocomotionClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/DynamicVectorClass_AnimType_e4.hpp"
#include "e4/classes/DynamicVectorClass_SubzoneConn_e4.hpp"
#include "e4/classes/Return_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/BulletClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DynamicVectorClass_PAD_e4.hpp"
#include "e4/classes/DynamicVectorClass_uint_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Byte_e4.hpp"

// 0x4B5B70
namespace gamemd {
int DroppodLocomotionClass::ILoco_Process(int a1)
{
  int *v2; // ecx
  int v3; // esi
  double v4; // st7
  int64_t v5; // rax
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int *v10; // esi
  int v11; // ebx
  unsigned int *v12; // ebp
  void **v13; // esi
  void *v14; // eax
  void **v16; // eax
  void **v17; // eax
  void **v18; // eax
  unsigned int *VeteranRatio_high; // esi
  void **v20; // ebp
  int Index; // eax
  unsigned int *v22; // eax
  int ClosestObjectCell; // eax
  int *v24; // eax
  void ** v25;
  unsigned int v26; // eax
  void **v27; // edi
  void *WarheadVersusMultiplier; // eax
  int64_t VeteranSpeed; // [esp-8h] [ebp-48h]
  void *v30; // [esp-8h] [ebp-48h]
  void *v31; // [esp-8h] [ebp-48h]
  double v32; // [esp+10h] [ebp-30h] BYREF
  int v33[2]; // [esp+1Ch] [ebp-24h] BYREF
  void ** v34;
  int v35; // [esp+28h] [ebp-18h] BYREF
  int v36; // [esp+2Ch] [ebp-14h]
  int v37; // [esp+30h] [ebp-10h]
  int v38[3]; // [esp+34h] [ebp-Ch] BYREF
  int VeteranCombat_high; // [esp+44h] [ebp+4h]

  v2 = *(int **)(a1 + 8); /*0x4b5b7b*/
  v35 = v2[39]; /*0x4b5b88*/
  v36 = v2[40]; /*0x4b5b8f*/
  v3 = v2[41]; /*0x4b5b93*/
  v38[0] = v35; /*0x4b5b96*/
  v37 = v3; /*0x4b5b9a*/
  v38[1] = v36; /*0x4b5b9e*/
  v38[2] = v3; /*0x4b5ba2*/
  VeteranCombat_high = (*(int (__thiscall **)(int *))(*v2 + 456))(v2) / 10 + 2; /*0x4b5bc9*/
  if ( IDA_SHIDWORD(g_RulesClass_Instance->VeteranCombat) > VeteranCombat_high ) /*0x4b5bd5*/
    VeteranCombat_high = IDA_HIDWORD(g_RulesClass_Instance->VeteranCombat); /*0x4b5bd7*/
  VeteranSpeed = g_RulesClass_Instance->VeteranSpeed; /*0x4b5bf3*/
  if ( *(unsigned char *)(a1 + 24) ) /*0x4b5bdb*/
  {
    v32 = (double)VeteranCombat_high; /*0x4b5bf4*/
    v4 = Math::ArcTan2(*(double *)&VeteranSpeed) * v32 + (double)v35; /*0x4b5c04*/
  }
  else
  {
    *(double *)v33 = (double)v35; /*0x4b5c1c*/
    v32 = (double)VeteranCombat_high; /*0x4b5c24*/
    v4 = *(double *)v33 - Math::ArcTan2(*(double *)&VeteranSpeed) * v32; /*0x4b5c34*/
  }
  v35 = Math::RoundToInt(v4); /*0x4b5c41*/
  v5 = g_RulesClass_Instance->VeteranSpeed; /*0x4b5c50*/
  *(double *)v33 = (double)v37; /*0x4b5c56*/
  v6 = Math::SinCos(*(double *)&v5); /*0x4b5c5c*/
  v7 = Math::RoundToInt(*(double *)v33 - v6 * v32); /*0x4b5c6c*/
  v8 = *(unsigned int *)(a1 + 8); /*0x4b5c71*/
  v37 = v7; /*0x4b5c74*/
  v9 = (*(int (__thiscall **)(int))(*(unsigned int *)v8 + 456))(v8); /*0x4b5c7a*/
  v10 = *(int **)(a1 + 8); /*0x4b5c80*/
  if ( v9 > 0 ) /*0x4b5c87*/
  {
    (*(void (__thiscall **)(int *, int *))(*v10 + 436))(v10, &v35); /*0x4b5eaa*/
    VeteranRatio_high = (unsigned int *)IDA_HIDWORD(g_RulesClass_Instance->VeteranRatio); /*0x4b5eb6*/
    if ( VeteranRatio_high ) /*0x4b5ebe*/
    {
      if ( !((int)g_CurrentFrame % 6) ) /*0x4b5ecf*/
      {
        v20 = (void *)operator new(0x1C8u); /*0x4b5edf*/
        if ( v20 ) /*0x4b5ee6*/
        {
          Index = AnimTypeClass::FindIndex(&unk_820320); /*0x4b5eed*/
          AnimClass::ctor(v20, *((void **)g_AnimTypeCount + Index), v38, 0, 1, (void *)0x600, 0, 0); /*0x4b5f0f*/
        }
      }
      if ( !((int)g_CurrentFrame % 3) ) /*0x4b5f1f*/
      {
        v32 = (unsigned int *)(0.0);
        v22 = (unsigned int *)(Coord::To_Cell(&MapClass_Instance, (unsigned int *)(a1 + 28)));
        ClosestObjectCell = Object::FindClosestObjectCell(v22, &v32, 0, 0); /*0x4b5f48*/
        if ( !Object::IsAlliedWithObjectHouse(*(unsigned int **)(*(unsigned int *)(a1 + 8) + 540), ClosestObjectCell) ) /*0x4b5f57*/
        {
          v24 = (int *)((void **)(RandomCoordScatter((int *)&v32, (int *)(a1 + 28), 85, 0)));
          v25 = (void **)((unsigned int)((void **)(VeteranRatio_high[51])));
          v33[0] = (int)((void **)(*v24));
          v33[1] = (int)((void **)(v24[1]));
          v34 = (void **)((int)((void **)(v24[2])));
          v26 = (void **)(Random::State(Randomizer_Global));
          StartAudioControllerAt(*(unsigned int *)(VeteranRatio_high[48] + 4 * (v26 % v25)), (int)&v35, 0); /*0x4b5fa8*/
          PlaySoundEffectAt(v33, 2 * VeteranRatio_high[41], *(unsigned int **)(a1 + 8), VeteranRatio_high[43], 1, 0); /*0x4b5fc7*/
          v27 = (void *)operator new(0x1C8u); /*0x4b5fd6*/
          if ( v27 ) /*0x4b5fdd*/
          {
            v31 = (void *)Return::HRESULT_Fail(v33[0], v33[1], v34); /*0x4b5ffe*/
            WarheadVersusMultiplier = (void *)GetWarheadVersusMultiplier( /*0x4b6020*/
                                                2 * VeteranRatio_high[41],
                                                VeteranRatio_high[43],
                                                0,
                                                v33);
            AnimClass::ctor(v27, WarheadVersusMultiplier, v33, 0, 1, (void *)0x2600, v31, 0); /*0x4b6028*/
          }
        }
      }
    }
    return 1; /*0x4b6030*/
  }
  else
  {
    (*(void (__thiscall **)(int *, unsigned int))(*v10 + 460))(v10, 0); /*0x4b5c92*/
    v35 = v10[39]; /*0x4b5ca4*/
    v36 = v10[40]; /*0x4b5cab*/
    v37 = v10[41]; /*0x4b5cb2*/
    (*(void (__thiscall **)(int *))(*v10 + 212))(v10); /*0x4b5cba*/
    v11 = a1 - 4; /*0x4b5cc3*/
    (*(void (__stdcall **)(int))(*(unsigned int *)(a1 - 4) + 4))(a1 - 4); /*0x4b5cc7*/
    v12 = (unsigned int *)(*(unsigned int *)(a1 + 8) + 1652); /*0x4b5ccd*/
    if ( *v12 ) /*0x4b5cd3*/
      (*(void (__stdcall **)(unsigned int))(*(unsigned int *)*v12 + 8))(*v12); /*0x4b5cdd*/
    *v12 = 0; /*0x4b5ce3*/
    (*(void (__stdcall **)(int, unsigned int *))(*(unsigned int *)(a1 + 20) + 16))(a1 + 20, v12); /*0x4b5cee*/
    if ( (*(uint8_t (__thiscall **)(int *, int *, unsigned int))(*v10 + 216))(v10, &v35, 0) ) /*0x4b5cfc*/
    {
      v16 = (void *)operator new(0x1C8u); /*0x4b5dae*/
      if ( v16 ) /*0x4b5db8*/
        AnimClass::ctor(v16, (void *)g_RulesClass_Instance->DropPodPuff, &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5dd8*/
      if ( *(unsigned char *)(a1 + 24) ) /*0x4b5ddd*/
      {
        v17 = (void *)operator new(0x1C8u); /*0x4b5de9*/
        if ( v17 ) /*0x4b5df3*/
          AnimClass::ctor(v17, *(void **)(g_RulesClass_Instance->DropPod[3] + 4), &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5e16*/
      }
      else
      {
        v18 = (void *)operator new(0x1C8u); /*0x4b5e18*/
        if ( v18 ) /*0x4b5e22*/
          AnimClass::ctor(v18, *(void **)g_RulesClass_Instance->DropPod[3], &v35, 0, 1, (void *)0x600, 0, 0); /*0x4b5e47*/
      }
      (*(void (__thiscall **)(int *, int))(*v10 + 292))(v10, 1); /*0x4b5e52*/
      (*(void (__thiscall **)(int *, unsigned int))(*v10 + 460))(v10, 0); /*0x4b5e5e*/
      (*(void (__thiscall **)(int *, unsigned int, int))(*v10 + 1156))(v10, 0, 1); /*0x4b5e6c*/
      (*(void (__thiscall **)(int *))(*v10 + 492))(v10); /*0x4b5e76*/
      (*(void (__thiscall **)(int *, int *, unsigned int, unsigned int))(*v10 + 372))(v10, &dword_8A0820, 0, 0); /*0x4b5e89*/
    }
    else
    {
      PlaySoundEffectAt(&v35, 100, *(unsigned int **)(a1 + 8), g_RulesClass_Instance->SilverCrate[5], 1, 0); /*0x4b5d28*/
      v13 = (void *)operator new(0x1C8u); /*0x4b5d37*/
      if ( v13 ) /*0x4b5d3e*/
      {
        v30 = (void *)Return::HRESULT_Fail(v35, v36, v37); /*0x4b5d64*/
        v14 = (void *)GetWarheadVersusMultiplier(100, g_RulesClass_Instance->SilverCrate[5], 0, &v35); /*0x4b5d8a*/
        AnimClass::ctor(v13, v14, &v35, 0, 1, (void *)0x2600, v30, 0); /*0x4b5d92*/
        (*(void (__stdcall **)(int))(*(unsigned int *)v11 + 8))(a1 - 4); /*0x4b5d9a*/
        return 1; /*0x4b5da6*/
      }
    }
    (*(void (__stdcall **)(int))(*(unsigned int *)v11 + 8))(a1 - 4); /*0x4b5e92*/
    return 1; /*0x4b5e95*/
  }
}
}
// 0x4B6200
int DropPodLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4b6206*/
    return -2147467261; /*0x4b6208*/
  *a2 = 1247291205; /*0x4b6216*/
  a2[1] = 298948665; /*0x4b621e*/
  a2[2] = -1610610249; /*0x4b6227*/
  a2[3] = -777003740; /*0x4b6230*/
  return 0; /*0x4b620d*/
}
// 0x4B6240
HRESULT DropPodLocomotionClass::BeginMove(int * a1, int * pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x4b6247*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x4b6252*/
  if ( v3 < 0 ) /*0x4b6256*/
    return v3; /*0x4b6256*/
  if ( a1 ) /*0x4b625a*/
  {
    a1[11] = 0; /*0x4b625c*/
    *a1 = (int)&DropPodLocomotionClass_vftable; /*0x4b6263*/
    a1[1] = (int)&DropPodLocomotionClass_vftable; /*0x4b6269*/
    a1[6] = (int)&DropPodLocomotionClass_vftable; /*0x4b6270*/
  }
  v2->lpVtbl->Read(v2, &pStm, 1, 0); /*0x4b6283*/
  if ( !(unsigned char)pStm ) /*0x4b628c*/
    return v3; /*0x4b62b8*/
  v4 = a1[11]; /*0x4b628e*/
  v5 = (LPVOID *)(a1 + 11); /*0x4b6291*/
  if ( v4 ) /*0x4b6296*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4b629b*/
  *v5 = 0; /*0x4b62a5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x4b62b1*/
}
// 0x4B62C0
HRESULT DropPodLocomotionClass::UpdateMovement(int * a1, int * pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  HRESULT result; // eax
  IStream v6; // ecx
  int (__stdcall ***v7)(unsigned int, void *, int **); // eax
  int v8; // edi
  IPersistStream *v9; // ebx
  HRESULT v10; // esi
  IStream v11; // edx

  v3 = (IStream *)pPStm; /*0x4b62c5*/
  v4 = a1; /*0x4b62ca*/
  result = LoadIPersistStream(a1, pPStm, a3); /*0x4b62d1*/
  if ( result >= 0 ) /*0x4b62d8*/
  {
    if ( v4[11] ) /*0x4b62de*/
    {
      v6.lpVtbl = v3->lpVtbl; /*0x4b62e9*/
      IDA_LOBYTE(a3) = 1; /*0x4b62f5*/
      v6.lpVtbl->Write(v3, &a3, 1, 0); /*0x4b62fa*/
      v7 = (int (__stdcall ***)(unsigned int, void *, int **))v4[11]; /*0x4b62fd*/
      pPStm = 0; /*0x4b6300*/
      if ( v7 ) /*0x4b630a*/
      {
        v8 = (**v7)(v7, &unk_820270, &a1); /*0x4b631b*/
        if ( v8 >= 0 ) /*0x4b631f*/
        {
          v9 = (IPersistStream *)a1; /*0x4b6339*/
          if ( pPStm ) /*0x4b633f*/
            (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4b6344*/
          pPStm = (int *)v9; /*0x4b6347*/
        }
        else
        {
          Function::4B4D60((int *)&pPStm); /*0x4b6325*/
          pPStm = 0; /*0x4b632a*/
        }
        if ( v8 < 0 && v8 != -2147467262 ) /*0x4b6356*/
          WinAPI::Wrapper(v8); /*0x4b6359*/
      }
      v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4b636a*/
      if ( pPStm ) /*0x4b6372*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4b6377*/
      return v10; /*0x4b637a*/
    }
    else
    {
      v11.lpVtbl = v3->lpVtbl; /*0x4b6381*/
      IDA_LOBYTE(a3) = 0; /*0x4b638d*/
      return v11.lpVtbl->Write(v3, &a3, 1, 0); /*0x4b6392*/
    }
  }
  return result; /*0x4b637c*/
}
// 0x4B66E0
int DropPodLocomotionClass::StubReturn48()
{
  return 48; /*0x4b66e5*/
}
// 0x4B66F0
DropPodLocomotionClass * DropPodLocomotionClass::ProcessMove(char a2)
{
  int v3; // eax

  v3 = *(&this->vtable21); /*0x4b6707*/
  if ( v3 ) /*0x4b670c*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v3 + 8))(v3); /*0x4b6711*/
  LocomotionClass::Construct(); /*0x4b6716*/
  if ( (a2 & 1) != 0 ) /*0x4b6720*/
    RA2_OPDEL(); /*0x4b6723*/
  return this; /*0x4b672d*/
}