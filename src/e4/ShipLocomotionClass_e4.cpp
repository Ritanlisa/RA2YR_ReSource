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

  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x69ee97*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x69eea2*/
  if ( v3 < 0 ) /*0x69eea6*/
    return v3; /*0x69eea6*/
  if ( a1 ) /*0x69eeaa*/
  {
    a1[26] = 0; /*0x69eeac*/
    *a1 = (int)&ShipLocomotionClass::`vftable'; /*0x69eeb3*/
    a1[1] = (int)&vt_ShipLocomotionClass; /*0x69eeb9*/
    a1[6] = (int)&off_7F2D68; /*0x69eec0*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x69eed3*/
  if ( !(unsigned char)pStm ) /*0x69eedc*/
    return v3; /*0x69ef08*/
  v4 = a1[26]; /*0x69eede*/
  v5 = (LPVOID *)(a1 + 26); /*0x69eee1*/
  if ( v4 ) /*0x69eee6*/
    (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x69eeeb*/
  *v5 = 0; /*0x69eef5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x69ef01*/

}
} // namespace gamemd
// 0x69EF10
namespace gamemd {
HRESULT ShipLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
{

  IStream *v3; // esi
  int *v4; // edi
  int IPersistStream; // ebx
  int v6; // ecx
  int (***v7)(unsigned int, void *, int **); // eax
  int v8; // edi
  int *v9; // ebx
  HRESULT v10; // esi
  int v12; // edx

  v3 = (IStream *)pPStm; /*0x69ef16*/
  v4 = a1; /*0x69ef1b*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x69ef27*/
  if ( IPersistStream < 0 ) /*0x69ef2b*/
    return IPersistStream; /*0x69ef2b*/
  if ( !v4[26] ) /*0x69ef36*/
  {
    v12 = *(unsigned int *)v3->__pad_0; /*0x69efd3*/
    LOBYTE(a3) = 0; /*0x69efdf*/
    (*(void (**)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x69efe4*/
    return IPersistStream; /*0x69efe8*/
  }
  v6 = *(unsigned int *)v3->__pad_0; /*0x69ef3c*/
  LOBYTE(a3) = 1; /*0x69ef48*/
  (*(void (**)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x69ef4d*/
  v7 = (int (***)(unsigned int, void *, int **))v4[26]; /*0x69ef50*/
  pPStm = 0; /*0x69ef53*/
  if ( v7 ) /*0x69ef5d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x69ef6e*/
    if ( v8 >= 0 ) /*0x69ef72*/
    {
      v9 = a1; /*0x69ef8b*/
      if ( pPStm ) /*0x69ef91*/
        (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x69ef96*/
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
    (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x69efc8*/
  return v10; /*0x69efcd*/

}
} // namespace gamemd
// 0x6A3E60
namespace gamemd {
int ShipLocomotionClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6a3e66*/
    return -2147467261; /*0x6a3e68*/
  *a2 = 736785633; /*0x6a3e76*/
  a2[1] = 299072714; /*0x6a3e7e*/
  a2[2] = 268440766; /*0x6a3e87*/
  a2[3] = 1822515787; /*0x6a3e90*/
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

  ILocomotion *v3; // eax

  *Block = (ILocomotion *)&ShipLocomotionClass::`vftable'; /*0x6a42b3*/
  *(Block + 1) = (ILocomotion *)&vt_ShipLocomotionClass; /*0x6a42b9*/
  *(Block + 6) = (ILocomotion *)&off_7F2D68; /*0x6a42c0*/
  v3 = *(Block + 26); /*0x6a42c7*/
  if ( v3 ) /*0x6a42cc*/
    (*(void (**)(ILocomotion *))(*(unsigned int *)v3 + 8))(v3); /*0x6a42d1*/
  LocomotionClass::Construct(Block); /*0x6a42d6*/
  if ( (a2 & 1) != 0 ) /*0x6a42e0*/
    __3_YAXPAX_Z(Block); /*0x6a42e3*/
  return (ShipLocomotionClass *)Block; /*0x6a42ed*/

}
} // namespace gamemd