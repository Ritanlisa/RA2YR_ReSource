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

// 0x4AF780
namespace gamemd {
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
{

  int *v2; // edi
  int v3; // ebx
  ILocomotion *Piggybackee; // eax
  LPVOID *p_Piggybackee; // esi

  v2 = pStm; /*0x4af787*/
  v3 = SwizzleManager::SaveLoad((int *)a1->LocomotionClass, pStm); /*0x4af792*/
  if ( v3 < 0 ) /*0x4af796*/
    return v3; /*0x4af796*/
  if ( a1 ) /*0x4af79a*/
  {
    a1->Piggybackee = 0; /*0x4af79c*/
    *(unsigned int *)a1->LocomotionClass = &vt_DriveLocomotionClass; /*0x4af7a3*/
    *(unsigned int *)&a1->LocomotionClass[4] = &vt_DriveLocomotionClass; /*0x4af7a9*/
    *(unsigned int *)a1->__pad_18 = &off_7E7E8C; /*0x4af7b0*/
  }
  (*(void (**)(int *, int **, int, unsigned int))(*v2 + 12))(v2, &pStm, 1, 0); /*0x4af7c3*/
  if ( !(unsigned char)pStm ) /*0x4af7cc*/
    return v3; /*0x4af7f8*/
  Piggybackee = a1->Piggybackee; /*0x4af7ce*/
  p_Piggybackee = (LPVOID *)&a1->Piggybackee; /*0x4af7d1*/
  if ( Piggybackee ) /*0x4af7d6*/
    (*(void (**)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x4af7db*/
  *p_Piggybackee = 0; /*0x4af7e5*/
  return OleLoadFromStream((LPSTREAM)v2, &IID_ILocomotion, p_Piggybackee); /*0x4af7f1*/

}
} // namespace gamemd
// 0x4AF800
namespace gamemd {
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{

  IStream *v3; // esi
  DriveLocomotionClass *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  ILocomotion *Piggybackee; // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x4af806*/
  v4 =(gamemd::DriveLocomotionClass *)a1; /*0x4af80b*/
  IPersistStream = LoadIPersistStream((LocomotionClass *)a1, pPStm, a3); /*0x4af817*/
  if ( IPersistStream < 0 ) /*0x4af81b*/
    return IPersistStream; /*0x4af81b*/
  if ( !v4->Piggybackee ) /*0x4af826*/
  {
    v12 = *(unsigned int *)v3->__pad_0; /*0x4af8c3*/
    LOBYTE(a3) = 0; /*0x4af8cf*/
    (*(void (**)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x4af8d4*/
    return IPersistStream; /*0x4af8d8*/
  }
  v6 = *(unsigned int *)v3->__pad_0; /*0x4af82c*/
  LOBYTE(a3) = 1; /*0x4af838*/
  (*(void (**)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x4af83d*/
  Piggybackee =(gamemd::ILocomotion *)v4->Piggybackee; /*0x4af840*/
  pPStm = 0; /*0x4af843*/
  if ( Piggybackee ) /*0x4af84d*/
  {
    v8 = (**(int (***)(ILocomotion *, void *, DriveLocomotionClass **))Piggybackee)( /*0x4af85e*/
           Piggybackee,
           &unk_820270,
           (gamemd::DriveLocomotionClass **)&a1);
    if ( v8 >= 0 ) /*0x4af862*/
    {
      v9 = (int *)a1; /*0x4af87b*/
      if ( pPStm ) /*0x4af881*/
        (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x4af886*/
      pPStm = v9; /*0x4af889*/
    }
    else
    {
      ((Function *)((int *)&pPStm))->Method_4B4D60(); /*0x4af868*/
      pPStm = 0; /*0x4af86d*/
    }
    if ( v8 < 0 && v8 != -2147467262 ) /*0x4af897*/
      WinAPI::Wrapper(v8); /*0x4af89a*/
  }
  v10 = OleSaveToStream((LPPERSISTSTREAM)pPStm, v3); /*0x4af8ab*/
  if ( pPStm ) /*0x4af8b3*/
    (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x4af8b8*/
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

  ILocomotion *Piggybackee; // eax

  *(unsigned int *)Block->LocomotionClass = &vt_DriveLocomotionClass; /*0x4b4d03*/
  *(unsigned int *)&Block->LocomotionClass[4] = &vt_DriveLocomotionClass; /*0x4b4d09*/
  *(unsigned int *)Block->__pad_18 = &off_7E7E8C; /*0x4b4d10*/
  Piggybackee = Block->Piggybackee; /*0x4b4d17*/
  if ( Piggybackee ) /*0x4b4d1c*/
    (*(void (**)(ILocomotion *))(*(unsigned int *)Piggybackee + 8))(Piggybackee); /*0x4b4d21*/
  ((LocomotionClass*)(gamemd::LocomotionClass *)Block)->Construct(); /*0x4b4d26*/
  if ( (a2 & 1) != 0 ) /*0x4b4d30*/
    __3_YAXPAX_Z(Block); /*0x4b4d33*/
  return Block->LocomotionClass; /*0x4b4d3d*/

}
} // namespace gamemd