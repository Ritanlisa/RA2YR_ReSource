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
#include "e4/classes/WWMouseClass_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

// 0x6A0310
namespace gamemd {
int WalkLocomotionClass::SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4)
{
  int v4; // eax
  char *v5; // esi
  int *v6; // edi
  int v7; // ecx
  CellClass * v8;
  CellClass *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  int64_t v13; // [esp+14h] [ebp-8h]

    *(unsigned int *)(a1 + 84) = a2;
    *(unsigned int *)(a1 + 88) = 0;
  v4 = g_OverlayTypeConfig; /*0x6a032d*/
  if ( a3 != g_OverlayTypeConfig || a4 != qword_B077FC ) /*0x6a0340*/
  {
    v5 = (char *)a1 - 4; /*0x6a0358*/
    v13 = a4; /*0x6a035f*/
    v6 = &a1->Dest[2]; /*0x6a0363*/
    v12 = a3; /*0x6a036a*/
        if ( *v6 != MEMORY[0xB077F8] || __PAIR64__(*(unsigned int *)(a1 - 4 + 72), *(unsigned int *)(a1 + 64)) != MEMORY[0xB077FC] )
    {
      *v6 = g_OverlayTypeConfig; /*0x6a0386*/
            *(unsigned int *)(a1 + 64) = MEMORY[0xB077FC];
      v7 = IDA_HIDWORD(qword_B077FC); /*0x6a0390*/
      v5[99] = 0; /*0x6a0396*/
      a1->HeadToCoord[1] = v7; /*0x6a039a*/
      v4 = g_OverlayTypeConfig; /*0x6a039d*/
    }
    if ( IDA___PAIR64__(a4, a3) != IDA___PAIR64__(qword_B077FC, v4) /*0x6a03be*/
      || (IDA_LOBYTE(v4) = IDA_BYTE4(qword_B077FC), IDA_HIDWORD(a4) != IDA_HIDWORD(qword_B077FC)) )
    {
      v8 = (gamemd::CellClass *)((char)((gamemd::CellClass *)(v13)));
      v5[99] = (int)((gamemd::CellClass *)(1));
      *v6 = (int)((gamemd::CellClass *)(a3));
            *(unsigned long long *)(a1 + 64) = v8;
      v11 = *((unsigned int *)v5 + 3); /*0x6a03dd*/
      v9 = Coord::To_Cell((Coord *)&stru_87F5F0.__pad_58[416], &v12); /*0x6a03e4*/
      if ( !(uint8_t)CrateClass::ProcessPickup((CrateClass *)v9, v11) || *(unsigned char *)(*((unsigned int *)v5 + 3) + 129) ) /*0x6a03f7*/
      {
        IDA_LOBYTE(v4) = *(unsigned char *)(*((unsigned int *)v5 + 3) + 144); /*0x6a043d*/
        if ( (unsigned char)v4 ) /*0x6a0445*/
        {
          IDA_LOBYTE(v4) = g_OverlayTypeConfig; /*0x6a0447*/
          *v6 = g_OverlayTypeConfig; /*0x6a044c*/
          *(unsigned long long *)a1->HeadToCoord = qword_B077FC; /*0x6a0454*/
          v5[99] = 0; /*0x6a0460*/
        }
      }
      else
      {
        WalkLocomotion::MoveTo((int)a1 - 4, &v12, 1); /*0x6a040a*/
        IDA_LOBYTE(v4) = (unsigned char)a1 + 48; /*0x6a040f*/
        a1->SlopeTimer[3] = a3; /*0x6a041a*/
        *(unsigned long long *)a1->Dest = a4; /*0x6a041c*/
        a1->SpeedAccum = 0; /*0x6a0422*/
        a1->MovementSpeed[0] = 1072693248; /*0x6a0429*/
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
  unsigned int v4;
  int *v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  ShipLocomotionClass * v13;
  int * v14;
  int *v15; // eax
  int v16; // ebx
  int v17; // ebp
  int *location; // eax
  int v20[2]; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v21[2]; // [esp+14h] [ebp-18h] BYREF
  int v22; // [esp+1Ch] [ebp-10h]
  int v23; // [esp+20h] [ebp-Ch]
  int v24; // [esp+24h] [ebp-8h]
  unsigned int v25; // [esp+28h] [ebp-4h]

  v4 = a1; /*0x6a3f55*/
    v5 = (int *)(*(int (__stdcall **)(int, unsigned int *))(*(unsigned int *)a1 + 24))(a1, v21);
  v6 = *v5; /*0x6a3f65*/
  v7 = v5[1]; /*0x6a3f67*/
  v8 = v5[2]; /*0x6a3f70*/
  v23 = v6; /*0x6a3f75*/
  v24 = v7; /*0x6a3f79*/
  v25 = v8; /*0x6a3f7d*/
  if ( v6 == g_OverlayTypeConfig && IDA___PAIR64__(v8, v7) == qword_B077FC ) /*0x6a3f89*/
    return 0; /*0x6a3f89*/
  if ( !IDA_LOBYTE(v4->TrackIndex) ) /*0x6a3f97*/
  {
    v9 = v4->MovementSpeed[1]; /*0x6a3fa2*/
    if ( v9 != -1 ) /*0x6a3fa8*/
    {
      v10 = byte_7F2A40[12 * v9]; /*0x6a3fb1*/
      if ( v10 ) /*0x6a3fbb*/
      {
        v11 = 4 * v10; /*0x6a3fc1*/
        v12 = ((unsigned int *)(dword_7F296C))[v11]; /*0x6a3fc4*/
        if ( v12 > -1 ) /*0x6a3fd3*/
        {
          v13 = (gamemd::ShipLocomotionClass *)((int)(((unsigned int *)(dword_7F2960))[v11] + (unsigned int)(12)* v12));
          a1 = (int)(*(ShipLocomotionClass **)((unsigned int)(v13)+ 8));
          if ( v4->TrackNumber < v12 ) /*0x6a3feb*/
          {
            v14 = (int *)(*(unsigned int *)((unsigned int)(v13)+ 4));
            v20[0] = (int *)(*(unsigned int *)v13);
            v20[1] = (int *)(v14);
            v15 = (int *)(WalkLocomotion::TransformCoords((WalkLocomotion *)&((unsigned int *)(v4))[-1].Piggybackee, v21, v20, (int *)&a1));
            v16 = *v15; /*0x6a4016*/
            v17 = v15[1]; /*0x6a4018*/
            location = v4->?->?; /*0x6a401e*/
            v21[0] = *location; /*0x6a4025*/
            v21[1] = location[1]; /*0x6a402c*/
            v22 = location[2]; /*0x6a4033*/
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
  *(IID *)a2 = g_CLSID_WalkLocomotion; /*0x75c656*/
  a2[3] = unk_7E9A6C; /*0x75c670*/
  return 0; /*0x75c64d*/
}
} // namespace gamemd
// 0x75C680
namespace gamemd {
HRESULT WalkLocomotionClass::BeginMove(int * a1, int * pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = (int)(pStm);
  v3 = (int)(SwizzleManager::SaveLoad((int *)a1->LocomotionClass, pStm));
  if ( v3 < 0 ) /*0x75c696*/
    return v3; /*0x75c696*/
  if ( a1 ) /*0x75c69a*/
  {
    a1->Piggybackee = 0; /*0x75c69c*/
    *(unsigned int *)a1->LocomotionClass = (void*)&WalkLocomotionClass_vftable; /*0x75c6a3*/
    *(unsigned int *)&a1->LocomotionClass[4] = (void*)&WalkLocomotionClass_vftable; /*0x75c6a9*/
    *(unsigned int *)a1->__pad_18 = (void*)&WalkLocomotionClass_vftable; /*0x75c6b0*/
  }
  (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x75c6c3*/
  if ( !(unsigned char)pStm ) /*0x75c6cc*/
    return v3; /*0x75c6f8*/
  Piggybackee = a1->Piggybackee; /*0x75c6ce*/
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x75c6d1*/
  if ( Piggybackee ) /*0x75c6d6*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x75c6db*/
  *p_Piggybackee = 0; /*0x75c6e5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x75c6f1*/
}
} // namespace gamemd
// 0x75C700
namespace gamemd {
HRESULT WalkLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
  IStream *v3; // esi
  WalkLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  ILocomotion * v6;
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx
v3 = (gamemd::IStream *)((gamemd::WalkLocomotionClass *)((gamemd::IStream *)((gamemd::WalkLocomotionClass *)((IStream *)pPStm))));
  v4 = (gamemd::WalkLocomotionClass *)(a1);
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x75c717*/
  if ( IPersistStream < 0 ) /*0x75c71b*/
    return IPersistStream; /*0x75c71b*/
  if ( !v4->Piggybackee ) /*0x75c726*/
  {
    v12 = (int)(*(unsigned int *)v3->__pad_0);
    IDA_LOBYTE(a3) = 0; /*0x75c7cf*/
    (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x75c7d4*/
    return IPersistStream; /*0x75c7d8*/
  }
  v6 = (gamemd::ILocomotion *)(*(unsigned int *)v3->__pad_0);
  IDA_LOBYTE(a3) = 1; /*0x75c738*/
  (*(void (__stdcall **)(IStream *, int *, int, unsigned int))((unsigned int)(v6)+ 16))(v3, &a3, 1, 0); /*0x75c73d*/
  Piggybackee = v4->Piggybackee; /*0x75c740*/
  pPStm = 0; /*0x75c743*/
  if ( Piggybackee ) /*0x75c74d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, WalkLocomotionClass **))Piggybackee)( /*0x75c75e*/
           Piggybackee,
           &unk_820270,
           &a1);
    if ( v8 >= 0 ) /*0x75c762*/
    {
      v9 = (int *)a1; /*0x75c77b*/
      if ( pPStm ) /*0x75c781*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x75c786*/
      pPStm = v9; /*0x75c789*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x75c768*/
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
  ILocomotion *Piggybackee; // eax

  *(unsigned int *)this->LocomotionClass = (void*)&WalkLocomotionClass_vftable; /*0x75cbe3*/
  *(unsigned int *)&this-((unsigned int *)(>LocomotionClass))[4] = (void*)&WalkLocomotionClass_vftable; /*0x75cbe9*/
    *(Block + 6) = (ILocomotion *)&vt_WalkLocomotionClass;
    v3 = *(Block + 14);
  if ( Piggybackee ) /*0x75cbfc*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x75cc01*/
  LocomotionClass::Construct(); /*0x75cc06*/
  if ( (a2 & 1) != 0 ) /*0x75cc10*/
    RA2_OPDEL(); /*0x75cc13*/
    return (WalkLocomotionClass *)Block;
}
} // namespace gamemd