// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/ShipLocomotionClass_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/Session_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Function_e4.hpp"  // G42.36 C2027 supply
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern const IID IID_ILocomotion;  // data: 0x7ed358 truth(IDA G42.57w9)


// 0x69EE90
namespace gamemd {  // G42.18 ns repair
HRESULT ShipLocomotionClass::BeginMove(int * a1, int * pStm)
{

  int *v2 = pStm; // edi /*0x69ee97*/
  int v3; // ebx
  v3 = SwizzleManager::SaveLoad((int *)a1->0, pStm); /*0x69eea2*/
  if ( v3 < 0 ) /*0x69eea6*/
    return v3; /*0x69eea6*/
  if ( a1 ) /*0x69eeaa*/
  {
    a1->Piggybackee = 0; /*0x69eeac*/
    /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7F2D8C) */  /*0x69eeb3*/
    /* X11: vtable install elided (X68 star-amp-named, RHS g_ptr_7F2D8C) */  /*0x69eeb9*/
    *(unsigned int *)a1->__pad_18 = &off_7F2D68; /*0x69eec0*/
  }
  (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x69eed3*/
  if ( !(unsigned char)pStm ) /*0x69eedc*/
    return v3; /*0x69ef08*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = a1->Piggybackee; /*0x69eede*/
  LPVOID *p_Piggybackee; // esi
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x69eee1*/
  if ( Piggybackee ) /*0x69eee6*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x69eeeb*/
  *p_Piggybackee = 0; /*0x69eef5*/
  return OleLoadFromStream((LPSTREAM)v2,(&IID_ILocomotion), p_Piggybackee); /*0x69ef01*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x69EF10
namespace gamemd {
HRESULT ShipLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{

  IStream *v3; // esi
  v3 = (IStream *)pPStm; /*0x69ef16*/
  ShipLocomotionClass *v4; // edi
  v4 = (gamemd::ShipLocomotionClass *)(a1); /*0x69ef1b*/
  int IPersistStream; // ebx
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x69ef27*/
  if ( IPersistStream < 0 ) /*0x69ef2b*/
    return IPersistStream; /*0x69ef2b*/
  if ( !v4->Piggybackee ) /*0x69ef36*/
  {
    int v12; // edx
    v12 = *(unsigned int *)v3->IStream_field_00; /*0x69efd3*/
    (*((unsigned char *)&(a3))) = 0; /*0x69efdf*/
    (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x69efe4*/
    return IPersistStream; /*0x69efe8*/
  }
  int v6; // ecx
  v6 = *(unsigned int *)v3->IStream_field_00; /*0x69ef3c*/
  (*((unsigned char *)&(a3))) = 1; /*0x69ef48*/
  (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x69ef4d*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = v4->Piggybackee; /*0x69ef50*/
  pPStm = 0; /*0x69ef53*/
  if ( Piggybackee ) /*0x69ef5d*/
  {
    int v8; // edi
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, ShipLocomotionClass **))Piggybackee)( /*0x69ef6e*/
           Piggybackee,
           &unk_820270,
           &a1);
    if ( v8 >= 0 ) /*0x69ef72*/
    {
      int *v9; // ebx
      v9 = (int *)a1; /*0x69ef8b*/
      if ( pPStm ) /*0x69ef91*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69ef96*/
      pPStm = v9; /*0x69ef99*/
    }
    else
    {
      ((int *)&pPStm)->Method_4B4D60(); /*0x69ef78*/
      pPStm = 0; /*0x69ef7d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x69efa7*/
      sub_7DC720(v8); /*0x69efaa*/
  }
  HRESULT v10; // esi
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x69efbb*/
  if ( pPStm ) /*0x69efc3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69efc8*/
  return v10; /*0x69efcd*/
}
} // namespace gamemd
// 0x6A3E60
namespace gamemd {
int ShipLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x6a3e66*/
    return -2147467261; /*0x6a3e68*/
  *(IID *)a2 = g_CLSID_DriveLocomotion2; /*0x6a3e76*/
  a2[3] = unk_7E9ABC; /*0x6a3e90*/
  return 0; /*0x6a3e6d*/
}
} // namespace gamemd
// 0x6A42A0
namespace gamemd {
int ShipLocomotionClass::StubReturn112()
{
  return 112; /*0x6a42a5*/
}
} // namespace gamemd
// 0x6A42B0
namespace gamemd {
ShipLocomotionClass * ShipLocomotionClass::ProcessMove(ILocomotion ** Block, char a2)
{

  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7F2D8C) */  /*0x6a42b3*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7F2D8C) */  /*0x6a42b9*/
  *(unsigned int *)Block->u32_18 = &off_7F2D68; /*0x6a42c0*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = Block->Piggybackee; /*0x6a42c7*/
  if ( Piggybackee ) /*0x6a42cc*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x6a42d1*/
  ((LocomotionClass *)((LocomotionClass *)Block))->Construct(); /*0x6a42d6*/
  if ( (a2 & 1) != 0 ) /*0x6a42e0*/
    operator delete((Block)); /*0x6a42e3*/
  return Block->0; /*0x6a42ed*/
}
} // namespace gamemd