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
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CrateClass_e4.hpp"
#include "e4/classes/Function_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"  // G42.36 C2027 supply
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern const IID IID_ILocomotion;  // data: 0x7ed358 truth(IDA G42.57w9)


// 0x6A0310
namespace gamemd {  // G42.18 ns repair
int WalkLocomotionClass::SetWaypointTarget(int a1, int a2, unsigned int a3, long long a4)
{

  int v4; // eax
  char *v5; // esi
  int *v6; // edi
  int v7; // ecx
  __int64 v8; // kr08_8
  CellClass *v9; // eax
  int v11; // [esp-4h] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-Ch] BYREF
  __int64 v13; // [esp+14h] [ebp-8h]

  this->MovementSpeed[1] = a2; /*0x6a0323*/
  this->TrackNumber = 0; /*0x6a0326*/
  v4 = g_OverlayTypeConfig; /*0x6a032d*/
  if ( a3 != g_OverlayTypeConfig || a4 != qword_B077FC ) /*0x6a0340*/
  {
    v5 = (char *)this - 4; /*0x6a0358*/
    v13 = a4; /*0x6a035f*/
    v6 = &this->Dest[2]; /*0x6a0363*/
    v12 = a3; /*0x6a036a*/
    if ( *v6 != g_OverlayTypeConfig || (((this->HeadToCoord[1] & 0xFFFFFFFFull)) << 32 | (this->HeadToCoord[0] & 0xFFFFFFFFull)) != qword_B077FC ) /*0x6a0375*/
    {
      *v6 = g_OverlayTypeConfig; /*0x6a0386*/
      this->HeadToCoord[0] = qword_B077FC; /*0x6a038d*/
      v7 = (((qword_B077FC) >> 32) & 0xFFFFFFFFu); /*0x6a0390*/
      v5->u32_63 = 0; /*0x6a0396*/
      this->HeadToCoord[1] = v7; /*0x6a039a*/
      v4 = g_OverlayTypeConfig; /*0x6a039d*/
    }
    if ( (((a4 & 0xFFFFFFFFull)) << 32 | (a3 & 0xFFFFFFFFull)) != (((qword_B077FC & 0xFFFFFFFFull)) << 32 | (v4 & 0xFFFFFFFFull)) /*0x6a03be*/
      || ((v4) = ((v4) & ~0xFF) | (((((qword_B077FC) >> 32) & 0xFF)) & 0xFF), HIDWORD(a4) != (((qword_B077FC) >> 32) & 0xFFFFFFFFu)) )
    {
      v8 = v13; /*0x6a03c4*/
      v5->u32_63 = 1; /*0x6a03ca*/
      *v6 = a3; /*0x6a03ce*/
      *(unsigned long long *)this->HeadToCoord = v8; /*0x6a03d0*/
      v11 = v5->ptr_C; /*0x6a03dd*/
      v9 = Coord::To_Cell((Coord *)&DataGlobal_87F7E8, &v12); /*0x6a03e4*/
      if ( !(unsigned __int8)CrateClass::ProcessPickup((CrateClass *)v9, v11) || *(unsigned char *)(v5->ptr_C + 129) ) /*0x6a03f7*/
      {
        LOBYTE(v4) = *(unsigned char *)(v5->ptr_C + 144); /*0x6a043d*/
        if ( (unsigned char)v4 ) /*0x6a0445*/
        {
          LOBYTE(v4) = g_OverlayTypeConfig; /*0x6a0447*/
          *v6 = g_OverlayTypeConfig; /*0x6a044c*/
          *(unsigned long long *)this->HeadToCoord = qword_B077FC; /*0x6a0454*/
          v5->u32_63 = 0; /*0x6a0460*/
        }
      }
      else
      {
        WalkLocomotion::MoveTo((int)this - 4, &v12, 1); /*0x6a040a*/
        LOBYTE(v4) = (unsigned char)&this->ptr_30; /*0x6a040f*/
        this->SlopeTimer[3] = a3; /*0x6a041a*/
        *(unsigned long long *)this->Dest = a4; /*0x6a041c*/
        this->SpeedAccum = 0; /*0x6a0422*/
        this->MovementSpeed[0] = 1072693248; /*0x6a0429*/
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

  ShipLocomotionClass *v4; // esi
  v4 = (gamemd::ShipLocomotionClass *)(a1); /*0x6a3f55*/
  int *v5; // eax
  unsigned int v21[2]; // [esp+14h] [ebp-18h] BYREF
  v5 = (int *)(*(int (__stdcall **)(ShipLocomotionClass *, unsigned int *))(*(unsigned int *)a1->0 + 24))(a1, v21); /*0x6a3f62*/
  int v6 = *v5; // ecx /*0x6a3f65*/
  unsigned int v7; // edx
  v7 = v5[1]; /*0x6a3f67*/
  unsigned int v8; // eax
  v8 = v5[2]; /*0x6a3f70*/
  int v23; // [esp+20h] [ebp-Ch]
  v23 = v6; /*0x6a3f75*/
  int v24; // [esp+24h] [ebp-8h]
  v24 = v7; /*0x6a3f79*/
  unsigned int v25; // [esp+28h] [ebp-4h]
  v25 = v8; /*0x6a3f7d*/
  if ( v6 == g_OverlayTypeConfig && (((unsigned long)(unsigned int)(v7)) | ((unsigned long)(unsigned int)(v8) << 32)) == qword_B077FC ) /*0x6a3f89*/
    return 0; /*0x6a3f89*/
  if ( !(*((unsigned char *)&(v4->TrackIndex))) ) /*0x6a3f97*/
  {
    int v9; // eax
    v9 = v4->MovementSpeed[1]; /*0x6a3fa2*/
    if ( v9 != -1 ) /*0x6a3fa8*/
    {
      int v10; // eax
      v10 = byte_7F2A40[12 * v9]; /*0x6a3fb1*/
      if ( v10 ) /*0x6a3fbb*/
      {
        int v11 = 4 * v10; // eax /*0x6a3fc1*/
        int v12; // ecx
        v12 = dword_7F296C[v11]; /*0x6a3fc4*/
        if ( v12 > -1 ) /*0x6a3fd3*/
        {
          int v13; // eax
          v13 = dword_7F2960[v11] + 12 * v12; /*0x6a3fdc*/
          a1 = (int)(*(ShipLocomotionClass **)(v13 + 8)); /*0x6a3fe2*/
          if ( v4->TrackNumber < v12 ) /*0x6a3feb*/
          {
            int v14; // edx
            v14 = *(unsigned int *)(v13 + 4); /*0x6a3ff3*/
            int v20[2]; // [esp+Ch] [ebp-20h] BYREF
            v20[0] = *(unsigned int *)v13; /*0x6a3ff6*/
            v20[1] = v14; /*0x6a3fff*/
            int *v15; // eax
            v15 = (int *)(WalkLocomotion::TransformCoords((WalkLocomotion *)&v4[-1].Piggybackee, v21, v20, (int *)&a1)); /*0x6a4011*/
            int v16 = *v15; // ebx /*0x6a4016*/
            int v17; // ebp
            v17 = v15[1]; /*0x6a4018*/
            int *location; // eax
            location = v4->Owner->location; /*0x6a401e*/
            v21[0] = *location; /*0x6a4025*/
            v21[1] = location[1]; /*0x6a402c*/
            int v22; // [esp+1Ch] [ebp-10h]
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

  int *v2 = pStm; // edi /*0x75c687*/
  int v3; // ebx
  v3 = SwizzleManager::SaveLoad((int *)a1->0, pStm); /*0x75c692*/
  if ( v3 < 0 ) /*0x75c696*/
    return v3; /*0x75c696*/
  if ( a1 ) /*0x75c69a*/
  {
    a1->Piggybackee = 0; /*0x75c69c*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_WalkLocomotionClass) */  /*0x75c6a3*/
    /* X11: vtable install elided (X68 star-amp-named, RHS vt_WalkLocomotionClass) */  /*0x75c6a9*/
    /* X11: vtable install elided (X67 star-deref, RHS vt_WalkLocomotionClass) */  /*0x75c6b0*/
  }
  (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x75c6c3*/
  if ( !(unsigned char)pStm ) /*0x75c6cc*/
    return v3; /*0x75c6f8*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = a1->Piggybackee; /*0x75c6ce*/
  LPVOID *p_Piggybackee; // esi
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x75c6d1*/
  if ( Piggybackee ) /*0x75c6d6*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x75c6db*/
  *p_Piggybackee = 0; /*0x75c6e5*/
  return OleLoadFromStream((LPSTREAM)v2,(&IID_ILocomotion), p_Piggybackee); /*0x75c6f1*/
}
} // namespace gamemd
// 0x75C700
namespace gamemd {
HRESULT WalkLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{


  IStream *v3; // esi
  v3 = (IStream *)pPStm; /*0x75c706*/
  WalkLocomotionClass *v4; // edi
  v4 = (gamemd::WalkLocomotionClass *)(a1); /*0x75c70b*/
  int IPersistStream; // ebx
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x75c717*/
  if ( IPersistStream < 0 ) /*0x75c71b*/
    return IPersistStream; /*0x75c71b*/
  if ( !v4->Piggybackee ) /*0x75c726*/
  {
    int v12; // edx
    v12 = *(unsigned int *)v3->IStream_field_00; /*0x75c7c3*/
    LOBYTE(a3) = 0; /*0x75c7cf*/
    (*(void (**)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x75c7d4*/
    return IPersistStream; /*0x75c7d8*/
  }
  int v6; // ecx
  v6 = *(unsigned int *)v3->IStream_field_00; /*0x75c72c*/
  LOBYTE(a3) = 1; /*0x75c738*/
  (*(void (**)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x75c73d*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = v4->Piggybackee; /*0x75c740*/
  pPStm = 0; /*0x75c743*/
  if ( Piggybackee ) /*0x75c74d*/
  {
    int v8; // edi
    v8 = (**(int (***)(ILocomotion *, void *, WalkLocomotionClass **))Piggybackee)( /*0x75c75e*/
           Piggybackee,
           &unk_820270,
           &a1);
    if ( v8 >= 0 ) /*0x75c762*/
    {
      int *v9; // ebx
      v9 = (int *)a1; /*0x75c77b*/
      if ( pPStm ) /*0x75c781*/
        (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x75c786*/
      pPStm = v9; /*0x75c789*/
    }
    else
    {
      ((int *)&pPStm)->Method_4B4D60(); /*0x75c768*/
      pPStm = 0; /*0x75c76d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x75c797*/
      sub_7DC720(v8); /*0x75c79a*/
  }
  HRESULT v10; // esi
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x75c7ab*/
  if ( pPStm ) /*0x75c7b3*/
    (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x75c7b8*/
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


  /* X11: vtable install elided (X67 star-deref, RHS vt_WalkLocomotionClass) */  /*0x75cbe3*/
  /* X11: vtable install elided (implicit via WalkLocomotionClass virtuals 0x75cbe9) */
  /* X11: vtable install elided (implicit via WalkLocomotionClass virtuals 0x75cbf0) */
  ILocomotion *Piggybackee; // eax
  Piggybackee = this->Piggybackee; /*0x75cbf7*/
  if ( Piggybackee ) /*0x75cbfc*/
    (*(void (**)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x75cc01*/
  ((LocomotionClass *)this)->Construct(); /*0x75cc06*/
  if ( (a2 & 1) != 0 ) /*0x75cc10*/
    __3_YAXPAX_Z(this); /*0x75cc13*/
  return this->LocomotionClass; /*0x75cc1d*/

}
} // namespace gamemd