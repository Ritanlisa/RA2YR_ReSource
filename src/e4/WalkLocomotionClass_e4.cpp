// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/WalkLocomotion_e4.hpp"
#include "e4/classes/WalkLocomotionClass_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x6A0310
namespace gamemd {
int WalkLocomotionClass::SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4)
{
  int v4; // eax
  int v5; // esi
  unsigned int *v6; // edi
  int v7; // ecx
  int64_t v8; // kr00_8
  unsigned int *v9; // eax
  int v11; // [esp-4h] [ebp-20h]

  *(unsigned int *)(a1 + 84) = a2; /*0x6a0323*/
  *(unsigned int *)(a1 + 88) = 0; /*0x6a0326*/
  v4 = g_OverlayTypeConfig; /*0x6a032d*/
  if ( a3 != g_OverlayTypeConfig || a4 != qword_B077FC ) /*0x6a0340*/
  {
    v5 = a1 - 4; /*0x6a0358*/
    a4 = a4; /*0x6a035b*/
    v6 = (unsigned int *)(a1 - 4 + 64); /*0x6a0363*/
    a3 = a3; /*0x6a036a*/
    if ( *v6 != g_OverlayTypeConfig || IDA___PAIR64__(*(unsigned int *)(a1 - 4 + 72), *(unsigned int *)(a1 + 64)) != qword_B077FC ) /*0x6a0375*/
    {
      *v6 = g_OverlayTypeConfig; /*0x6a0386*/
      *(unsigned int *)(a1 + 64) = qword_B077FC; /*0x6a038d*/
      v7 = IDA_HIDWORD(qword_B077FC); /*0x6a0390*/
      v5->u8_63 = 0; /*0x6a0396*/
      *(unsigned int *)(a1 - 4 + 72) = v7; /*0x6a039a*/
      v4 = g_OverlayTypeConfig; /*0x6a039d*/
    }
    if ( IDA___PAIR64__(a4, a3) != IDA___PAIR64__(qword_B077FC, v4) /*0x6a03be*/
      || (IDA_LOBYTE(v4) = IDA_BYTE4(qword_B077FC), IDA_HIDWORD(a4) != IDA_HIDWORD(qword_B077FC)) )
    {
      v8 = a4; /*0x6a03c4*/
      v5->u8_63 = 1; /*0x6a03ca*/
      *v6 = a3; /*0x6a03ce*/
      *(unsigned long long *)(a1 + 64) = v8; /*0x6a03d0*/
      v11 = v5->q00C; /*0x6a03dd*/
      v9 = Coord::To_Cell(&MapClass_Instance, &a3); /*0x6a03e4*/
      if ( !CrateClass::ProcessPickup(v9, v11) || v5->q00C->q204 ) /*0x6a03f7*/
      {
        IDA_LOBYTE(v4) = v5->q00C->q090; /*0x6a043d*/
        if ( (unsigned char)v4 ) /*0x6a0445*/
        {
          IDA_LOBYTE(v4) = g_OverlayTypeConfig; /*0x6a0447*/
          *v6 = g_OverlayTypeConfig; /*0x6a044c*/
          *(unsigned long long *)(a1 + 64) = qword_B077FC; /*0x6a0454*/
          v5->u8_63 = 0; /*0x6a0460*/
        }
      }
      else
      {
        WalkLocomotion::MoveTo(a1 - 4, &a3, 1); /*0x6a040a*/
        IDA_LOBYTE(v4) = a1 + 48; /*0x6a040f*/
        *(unsigned int *)(a1 + 48) = a3; /*0x6a041a*/
        *(unsigned long long *)(a1 + 52) = a4; /*0x6a041c*/
        *(unsigned int *)(a1 + 76) = 0; /*0x6a0422*/
        *(unsigned int *)(a1 + 80) = 1072693248; /*0x6a0429*/
      }
    }
  }
  return v4; /*0x6a0430*/
}
} // namespace gamemd
// 0x6A3F50
namespace gamemd {
int WalkLocomotionClass::IsAtDestination(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // edx
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  unsigned int *v18; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = a1; /*0x6a3f55*/
  v5 = (int *)(*(int (__stdcall **)(int, unsigned int *))(*(unsigned int *)a1 + 24))(a1, v21); /*0x6a3f62*/
  v6 = *v5; /*0x6a3f65*/
  v7 = v5[1]; /*0x6a3f67*/
  v8 = v5[2]; /*0x6a3f70*/
  v23 = v6; /*0x6a3f75*/
  v24 = v7; /*0x6a3f79*/
  v25 = v8; /*0x6a3f7d*/
  if ( v6 == g_OverlayTypeConfig && IDA___PAIR64__(v8, v7) == qword_B077FC ) /*0x6a3f89*/
    return 0; /*0x6a3f89*/
  if ( !*(unsigned char *)(v4 + 92) ) /*0x6a3f97*/
  {
    v9 = *(unsigned int *)(v4 + 84); /*0x6a3fa2*/
    if ( v9 != -1 ) /*0x6a3fa8*/
    {
      v10 = byte_7F2A40[12 * v9]; /*0x6a3fb1*/
      if ( v10 ) /*0x6a3fbb*/
      {
        v11 = 4 * v10; /*0x6a3fc1*/
        v12 = dword_7F296C[v11]; /*0x6a3fc4*/
        if ( v12 > -1 ) /*0x6a3fd3*/
        {
          v13 = (int *)(dword_7F2960[v11] + 12 * v12); /*0x6a3fdc*/
          a1 = v13[2]; /*0x6a3fe2*/
          if ( *(unsigned int *)(v4 + 88) < v12 ) /*0x6a3feb*/
          {
            v14 = v13[1]; /*0x6a3ff3*/
            v20[0] = *v13; /*0x6a3ff6*/
            v20[1] = v14; /*0x6a3fff*/
            v15 = WalkLocomotion::TransformCoords((unsigned int *)(v4 - 4), v21, v20, &a1); /*0x6a4011*/
            v16 = *v15; /*0x6a4016*/
            v17 = v15[1]; /*0x6a4018*/
            v18 = (unsigned int *)(*(unsigned int *)(v4 + 8) + 156); /*0x6a401e*/
            v21[0] = *v18; /*0x6a4025*/
            v21[1] = v18[1]; /*0x6a402c*/
            v22 = v18[2]; /*0x6a4033*/
            if ( (uint16_t)(v16 / 256) == (uint16_t)(a2 / 256) /*0x6a409b*/
              && (uint16_t)(v17 / 256) == (uint16_t)(a3 / 256)
              && (int)abs32(v22 - a4) <= dword_B07838 )
            {
              return 1; /*0x6a40a5*/
            }
          }
        }
      }
    }
  }
  return (uint16_t)(v23 / 256) == (uint16_t)(a2 / 256) /*0x6a411e*/
      && (uint16_t)(v24 / 256) == (uint16_t)(a3 / 256)
      && (int)abs32(v25 - a4) <= dword_B07838;
}
} // namespace gamemd
// 0x75C640
namespace gamemd {
int WalkLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x75c646*/
    return -2147467261; /*0x75c648*/
  *a2 = 1247291204; /*0x75c656*/
  a2[1] = 298948665; /*0x75c65e*/
  a2[2] = -1610610249; /*0x75c667*/
  a2[3] = -777003740; /*0x75c670*/
  return 0; /*0x75c64d*/
}
} // namespace gamemd
// 0x75C680
namespace gamemd {
HRESULT WalkLocomotionClass::BeginMove(int * a1, int * pStm)
{
  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x75c687*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x75c692*/
  if ( v3 < 0 ) /*0x75c696*/
    return v3; /*0x75c696*/
  if ( a1 ) /*0x75c69a*/
  {
    a1[14] = 0; /*0x75c69c*/
    *a1 = (int)&WalkLocomotionClass_vftable; /*0x75c6a3*/
    a1[1] = (int)&WalkLocomotionClass_vftable; /*0x75c6a9*/
    a1[6] = (int)&WalkLocomotionClass_vftable; /*0x75c6b0*/
  }
  v2->lpVtbl->Read(v2, &pStm, 1, 0); /*0x75c6c3*/
  if ( !(unsigned char)pStm ) /*0x75c6cc*/
    return v3; /*0x75c6f8*/
  v4 = a1[14]; /*0x75c6ce*/
  v5 = (LPVOID *)(a1 + 14); /*0x75c6d1*/
  if ( v4 ) /*0x75c6d6*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v4 + 8))(v4); /*0x75c6db*/
  *v5 = 0; /*0x75c6e5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x75c6f1*/
}
} // namespace gamemd
// 0x75C700
namespace gamemd {
HRESULT WalkLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
  IStream *v3; // esi
  int *v4; // edi
  int v5; // ebx
  struct IStreamVtbl *lpVtbl; // ecx
  int (__stdcall ***v7)(unsigned int, void *, int **); // eax
  int v8; // edi
  IPersistStream *v9; // ebx
  HRESULT v10; // esi
  IStream v12; // edx

  v3 = (IStream *)pPStm; /*0x75c706*/
  v4 = a1; /*0x75c70b*/
  v5 = LoadIPersistStream(a1, pPStm, a3); /*0x75c717*/
  if ( v5 < 0 ) /*0x75c71b*/
    return v5; /*0x75c71b*/
  if ( !v4[14] ) /*0x75c726*/
  {
    v12.lpVtbl = v3->lpVtbl; /*0x75c7c3*/
    IDA_LOBYTE(a3) = 0; /*0x75c7cf*/
    v12.lpVtbl->Write(v3, &a3, 1, 0); /*0x75c7d4*/
    return v5; /*0x75c7d8*/
  }
  lpVtbl = v3->lpVtbl; /*0x75c72c*/
  IDA_LOBYTE(a3) = 1; /*0x75c738*/
  lpVtbl->Write(v3, &a3, 1, 0); /*0x75c73d*/
  v7 = (int (__stdcall ***)(unsigned int, void *, int **))v4[14]; /*0x75c740*/
  pPStm = 0; /*0x75c743*/
  if ( v7 ) /*0x75c74d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x75c75e*/
    if ( v8 >= 0 ) /*0x75c762*/
    {
      v9 = (IPersistStream *)a1; /*0x75c77b*/
      if ( pPStm ) /*0x75c781*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x75c786*/
      pPStm = (int *)v9; /*0x75c789*/
    }
    else
    {
      Function::4B4D60((int *)&pPStm); /*0x75c768*/
      pPStm = 0; /*0x75c76d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x75c797*/
      WinAPI::Wrapper(v8); /*0x75c79a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x75c7ab*/
  if ( pPStm ) /*0x75c7b3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x75c7b8*/
  return v10; /*0x75c7bd*/
}
} // namespace gamemd
// 0x75CBD0
namespace gamemd {
int WalkLocomotionClass::StubReturn60()
{
  return 60; /*0x75cbd5*/
}
} // namespace gamemd
// 0x75CBE0
namespace gamemd {
WalkLocomotionClass * WalkLocomotionClass::ProcessMove(char a2)
{
  int v3; // eax

  v3 = *(unsigned int *)&this->ptr_38; /*0x75cbf7*/
  if ( v3 ) /*0x75cbfc*/
    (*(void (__stdcall **)(int))(*(unsigned int *)v3 + 8))(v3); /*0x75cc01*/
  LocomotionClass::Construct(); /*0x75cc06*/
  if ( (a2 & 1) != 0 ) /*0x75cc10*/
    RA2_OPDEL(); /*0x75cc13*/
  return this; /*0x75cc1d*/
}
} // namespace gamemd