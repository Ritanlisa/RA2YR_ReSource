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

// 0x4AF780
namespace gamemd {
HRESULT DriveLocomotionClass::BeginMove(int * a1, int * pStm)
{

  IStream *v2; // edi
  int v3; // ebx
  int v4; // eax
  LPVOID *v5; // esi

  v2 = (IStream *)pStm; /*0x4af787*/
  v3 = SwizzleManager::SaveLoad(a1, pStm); /*0x4af792*/
  if ( v3 < 0 ) /*0x4af796*/
    return v3; /*0x4af796*/
  if ( a1 ) /*0x4af79a*/
  {
    a1[26] = 0; /*0x4af79c*/
    *a1 = (int)&vt_DriveLocomotionClass; /*0x4af7a3*/
    a1[1] = (int)&vt_DriveLocomotionClass; /*0x4af7a9*/
    a1[6] = (int)&off_7E7E8C; /*0x4af7b0*/
  }
  v2->__pad_0->Read(v2, &pStm, 1, 0); /*0x4af7c3*/
  if ( !(unsigned char)pStm ) /*0x4af7cc*/
    return v3; /*0x4af7f8*/
  v4 = a1[26]; /*0x4af7ce*/
  v5 = (LPVOID *)(a1 + 26); /*0x4af7d1*/
  if ( v4 ) /*0x4af7d6*/
    (*(void (**)(int))(*(unsigned int *)v4 + 8))(v4); /*0x4af7db*/
  *v5 = 0; /*0x4af7e5*/
  return OleLoadFromStream(v2, &IID_ILocomotion, v5); /*0x4af7f1*/

}
} // namespace gamemd
// 0x4AF800
namespace gamemd {
HRESULT DriveLocomotionClass::LoadFromStream(int * a1, int * pPStm, int a3)
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

  v3 = (IStream *)pPStm; /*0x4af806*/
  v4 = a1; /*0x4af80b*/
  IPersistStream = LoadIPersistStream(a1, pPStm, a3); /*0x4af817*/
  if ( IPersistStream < 0 ) /*0x4af81b*/
    return IPersistStream; /*0x4af81b*/
  if ( !v4[26] ) /*0x4af826*/
  {
    v12 = *(unsigned int *)v3->__pad_0; /*0x4af8c3*/
    IDA_LOBYTE(a3) = 0; /*0x4af8cf*/
    (*(void (**)(IStream *, int *, int, unsigned int))(v12 + 16))(v3, &a3, 1, 0); /*0x4af8d4*/
    return IPersistStream; /*0x4af8d8*/
  }
  v6 = *(unsigned int *)v3->__pad_0; /*0x4af82c*/
  IDA_LOBYTE(a3) = 1; /*0x4af838*/
  (*(void (**)(IStream *, int *, int, unsigned int))(v6 + 16))(v3, &a3, 1, 0); /*0x4af83d*/
  v7 = (int (***)(unsigned int, void *, int **))v4[26]; /*0x4af840*/
  pPStm = 0; /*0x4af843*/
  if ( v7 ) /*0x4af84d*/
  {
    v8 = (**v7)(v7, &unk_820270, &a1); /*0x4af85e*/
    if ( v8 >= 0 ) /*0x4af862*/
    {
      v9 = a1; /*0x4af87b*/
      if ( pPStm ) /*0x4af881*/
        (*(void (**)(int *))(*pPStm + 8))(pPStm); /*0x4af886*/
      pPStm = v9; /*0x4af889*/
    }
    else
    {
      Function::Method_4B4D60((int *)&pPStm); /*0x4af868*/
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
  a2[3] = -777003740; /*0x4b4860*/
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

  ILocomotion *v3; // eax

  *Block = (ILocomotion *)&vt_DriveLocomotionClass; /*0x4b4d03*/
  *(Block + 1) = (ILocomotion *)&vt_DriveLocomotionClass; /*0x4b4d09*/
  *(Block + 6) = (ILocomotion *)&off_7E7E8C; /*0x4b4d10*/
  v3 = *(Block + 26); /*0x4b4d17*/
  if ( v3 ) /*0x4b4d1c*/
    (*(void (**)(ILocomotion *))(*(unsigned int *)v3 + 8))(v3); /*0x4b4d21*/
  LocomotionClass::Construct(Block); /*0x4b4d26*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x4b4d30*/
    RA2_OPDEL(Block); /*0x4b4d33*/
  return (DriveLocomotionClass *)Block; /*0x4b4d3d*/

}
} // namespace gamemd