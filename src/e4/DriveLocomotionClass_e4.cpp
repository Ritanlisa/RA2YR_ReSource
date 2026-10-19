// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/DriveLocomotionClass_e4.hpp"
#include "e4/classes/IStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/SwizzleManager_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Function_e4.hpp"  // G42.36 C2027 supply
// ==== G42.57w9 data-label supply (IDA truth; e4_globals pending) ====
extern const IID IID_ILocomotion;  // data: 0x7ed358 truth(IDA G42.57w9)


// 0x4AF780
namespace gamemd {  // G42.18 ns repair
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
{

  int *v2 = pStm; // edi /*0x4af787*/
  int v3; // ebx
  v3 = SwizzleManager::SaveLoad((int *)a1->0, pStm); /*0x4af792*/
  if ( v3 < 0 ) /*0x4af796*/
    return v3; /*0x4af796*/
  if ( a1 ) /*0x4af79a*/
  {
    a1->Piggybackee = 0; /*0x4af79c*/
    /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E7EB0) */  /*0x4af7a3*/
    /* X11: vtable install elided (X68 star-amp-named, RHS g_ptr_7E7EB0) */  /*0x4af7a9*/
    *(unsigned int *)a1->__pad_18 = &off_7E7E8C; /*0x4af7b0*/
  }
  (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x4af7c3*/
  if ( !(unsigned char)pStm ) /*0x4af7cc*/
    return v3; /*0x4af7f8*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = a1->Piggybackee; /*0x4af7ce*/
  LPVOID *p_Piggybackee; // esi
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x4af7d1*/
  if ( Piggybackee ) /*0x4af7d6*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x4af7db*/
  *p_Piggybackee = 0; /*0x4af7e5*/
  return OleLoadFromStream((LPSTREAM)v2,(&IID_ILocomotion), p_Piggybackee); /*0x4af7f1*/
}  // G42.18 ns repair
} // namespace gamemd
// 0x4AF800
namespace gamemd {
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{

  IStream *v3; // esi
  v3 = (IStream *)pPStm; /*0x4af806*/
  DriveLocomotionClass *v4; // edi
  v4 = (gamemd::DriveLocomotionClass *)(a1); /*0x4af80b*/
  int IPersistStream; // ebx
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x4af817*/
  if ( IPersistStream < 0 ) /*0x4af81b*/
    return IPersistStream; /*0x4af81b*/
  if ( !v4->Piggybackee ) /*0x4af826*/
  {
    int v12; // edx
    v12 = *(unsigned int *)v3->IStream_field_00; /*0x4af8c3*/
    (*((unsigned char *)&(a3))) = 0; /*0x4af8cf*/
    (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x4af8d4*/
    return IPersistStream; /*0x4af8d8*/
  }
  int v6; // ecx
  v6 = *(unsigned int *)v3->IStream_field_00; /*0x4af82c*/
  (*((unsigned char *)&(a3))) = 1; /*0x4af838*/
  (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x4af83d*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = v4->Piggybackee; /*0x4af840*/
  pPStm = 0; /*0x4af843*/
  if ( Piggybackee ) /*0x4af84d*/
  {
    int v8; // edi
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, DriveLocomotionClass **))Piggybackee)( /*0x4af85e*/
           Piggybackee,
           &unk_820270,
           &a1);
    if ( v8 >= 0 ) /*0x4af862*/
    {
      int *v9; // ebx
      v9 = (int *)a1; /*0x4af87b*/
      if ( pPStm ) /*0x4af881*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af886*/
      pPStm = v9; /*0x4af889*/
    }
    else
    {
      ((int *)&pPStm)->Method_4B4D60(); /*0x4af868*/
      pPStm = 0; /*0x4af86d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4af897*/
      sub_7DC720(v8); /*0x4af89a*/
  }
  HRESULT v10; // esi
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4af8ab*/
  if ( pPStm ) /*0x4af8b3*/
    (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x4af8b8*/
  return v10; /*0x4af8bd*/
}
} // namespace gamemd
// 0x4B4830
namespace gamemd {
int DriveLocomotionClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4b4836*/
    return -2147467261; /*0x4b4838*/
  *a2 = 1247291201; /*0x4b4846*/
  a2[1] = 298948665; /*0x4b484e*/
  a2[2] = -1610610249; /*0x4b4857*/
  a2[3] = unk_7E9A3C; /*0x4b4860*/
  return 0; /*0x4b483d*/
}
} // namespace gamemd
// 0x4B4CF0
namespace gamemd {
int DriveLocomotionClass::StubReturn112()
{
  return 112; /*0x4b4cf5*/
}
} // namespace gamemd
// 0x4B4D00
namespace gamemd {
DriveLocomotionClass * DriveLocomotionClass::ProcessMove(ILocomotion ** Block, char a2)
{

  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E7EB0) */  /*0x4b4d03*/
  /* X11: vtable install elided (X67 star-deref, RHS g_ptr_7E7EB0) */  /*0x4b4d09*/
  *(unsigned int *)Block->u32_18 = &off_7E7E8C; /*0x4b4d10*/
  ILocomotion *Piggybackee; // eax
  Piggybackee = Block->Piggybackee; /*0x4b4d17*/
  if ( Piggybackee ) /*0x4b4d1c*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x4b4d21*/
  ((LocomotionClass *)((LocomotionClass *)Block))->Construct(); /*0x4b4d26*/
  if ( (a2 & 1) != 0 ) /*0x4b4d30*/
    operator delete((Block)); /*0x4b4d33*/
  return Block->0; /*0x4b4d3d*/
}
} // namespace gamemd