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

// 0x69EE90
namespace gamemd {
HRESULT ShipLocomotionClass::BeginMove(int * a1, int * pStm)
{
  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = (int)(pStm);
  v3 = (int)(SwizzleManager::SaveLoad((int *)a1->LocomotionClass, pStm));
  if ( v3 < 0 ) /*0x69eea6*/
    return v3; /*0x69eea6*/
  if ( a1 ) /*0x69eeaa*/
  {
    a1->Piggybackee = 0; /*0x69eeac*/
    *(unsigned int *)a1->LocomotionClass = (void*)&ShipLocomotionClass_vftable; /*0x69eeb3*/
    *(unsigned int *)&a1->LocomotionClass[4] = (void*)&ShipLocomotionClass_vftable; /*0x69eeb9*/
    *(unsigned int *)a1->__pad_18 = &off_7F2D68; /*0x69eec0*/
  }
  (*(void (__stdcall **)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x69eed3*/
  if ( !(unsigned char)pStm ) /*0x69eedc*/
    return v3; /*0x69ef08*/
  Piggybackee = a1->Piggybackee; /*0x69eede*/
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x69eee1*/
  if ( Piggybackee ) /*0x69eee6*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x69eeeb*/
  *p_Piggybackee = 0; /*0x69eef5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x69ef01*/
}
} // namespace gamemd
// 0x69EF10
namespace gamemd {
HRESULT ShipLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{
  IStream *v3; // esi
  ShipLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  ILocomotion * v6;
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (gamemd::IStream *)((gamemd::ShipLocomotionClass *)((IStream *)pPStm));
  v4 = (gamemd::ShipLocomotionClass *)(a1);
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x69ef27*/
  if ( IPersistStream < 0 ) /*0x69ef2b*/
    return IPersistStream; /*0x69ef2b*/
  if ( !v4->Piggybackee ) /*0x69ef36*/
  {
    v12 = *(unsigned int *)v3->__pad_0; /*0x69efd3*/
    IDA_LOBYTE(a3) = 0; /*0x69efdf*/
    (*(void (__stdcall **)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x69efe4*/
    return IPersistStream; /*0x69efe8*/
  }
  v6 = (gamemd::ILocomotion *)((int)((gamemd::ILocomotion *)(*(unsigned int *)v3->__pad_0)));
  IDA_LOBYTE(a3) = 1; /*0x69ef48*/
  (*(void (__stdcall **)(IStream *, int *, int, unsigned int))((unsigned int)(v6)+ 16))(v3, &a3, 1, 0); /*0x69ef4d*/
  Piggybackee = v4->Piggybackee; /*0x69ef50*/
  pPStm = 0; /*0x69ef53*/
  if ( Piggybackee ) /*0x69ef5d*/
  {
    v8 = (**(int (__stdcall ***)(ILocomotion *, void *, ShipLocomotionClass **))Piggybackee)( /*0x69ef6e*/
           Piggybackee,
           &unk_820270,
           &a1);
    if ( v8 >= 0 ) /*0x69ef72*/
    {
      v9 = (int *)a1; /*0x69ef8b*/
      if ( pPStm ) /*0x69ef91*/
        (*(void (__stdcall **)(int *))(*pPStm + 8))(pPStm); /*0x69ef96*/
      pPStm = v9; /*0x69ef99*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x69ef78*/
      pPStm = 0; /*0x69ef7d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x69efa7*/
      WinAPI::Wrapper(v8); /*0x69efaa*/
  }
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
ShipLocomotionClass * ShipLocomotionClass::ProcessMove(char a2)
{
  ILocomotion *Piggybackee; // eax

  *(unsigned int *)this->LocomotionClass = (void*)&ShipLocomotionClass_vftable; /*0x6a42b3*/
  *(unsigned int *)&this-((unsigned int *)(>LocomotionClass))[4] = (void*)&ShipLocomotionClass_vftable; /*0x6a42b9*/
    *(Block + 6) = (ILocomotion *)&off_7F2D68;
    v3 = *(Block + 26);
  if ( Piggybackee ) /*0x6a42cc*/
    (*(void (__stdcall **)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x6a42d1*/
  LocomotionClass::Construct(); /*0x6a42d6*/
  if ( (a2 & 1) != 0 ) /*0x6a42e0*/
    RA2_OPDEL(); /*0x6a42e3*/
    return (ShipLocomotionClass *)Block;
}
} // namespace gamemd