// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Init_e4.hpp"

// 0x410800
namespace gamemd {
int AbstractTypeClass::Constructor( AbstractClass * aP1)
{

  RandomStruct *v3; // ebx
  int v4; // eax
  char Buffer[16]; // [esp+10h] [ebp-44h] BYREF
  char Destination[48]; // [esp+20h] [ebp-34h] BYREF
  char v8; // [esp+50h] [ebp-4h]

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x410809*/
  v3 = (RandomStruct *)(this + 36); /*0x410812*/
  *(unsigned char *)(this + 36) = 0; /*0x410817*/
  *(unsigned char *)(this + 61) = 0; /*0x41081a*/
  *(unsigned char *)(this + 100) = 0; /*0x41081e*/
  *(unsigned int *)this = &vt_AbstractTypeClass; /*0x410822*/
  *(unsigned int *)(this + 4) = &vt_AbstractTypeClass; /*0x410829*/
  *(unsigned int *)(this + 8) = &vt_AbstractTypeClass; /*0x410830*/
  *(unsigned int *)(this + 12) = &vt_AbstractTypeClass; /*0x410837*/
  if ( aP1 ) /*0x41083e*/
  {
    strncpy(Destination, aP1->__pad_0, (IUnknown *)0x18); /*0x410895*/
    Destination[24] = 0; /*0x4108a3*/
    if ( Destination == (char *)v3 ) /*0x4108a8*/
      goto LABEL_9; /*0x4108a8*/
    goto LABEL_8; /*0x4108a8*/
  }
  sprintf(Buffer, &stru_817828, (INIClass *)this); /*0x41084b*/
  if ( Buffer ) /*0x410859*/
  {
    strncpy(Destination, Buffer, (IUnknown *)0x18); /*0x41086d*/
    Destination[24] = 0; /*0x410875*/
  }
  else
  {
    Destination[0] = 0; /*0x41085b*/
  }
  if ( Destination != (char *)v3 ) /*0x410880*/
  {
LABEL_8:
    qmemcpy(v3, Destination, 0x18u); /*0x4108b5*/
    *(unsigned char *)(this + 60) = Destination[24]; /*0x4108b7*/
  }
LABEL_9:
  if ( this == (gamemd::AbstractTypeClass *)(-36) ) /*0x4108ba*/
  {
    Destination[0] = 0; /*0x4108bc*/
  }
  else
  {
    strncpy(Destination, (const char *)(this + 36), (IUnknown *)0x30); /*0x4108ca*/
    v8 = 0; /*0x4108d2*/
  }
  if ( Destination != (char *)(this + 100) ) /*0x4108e0*/
  {
    qmemcpy((void *)(this + 100), Destination, 0x30u); /*0x4108eb*/
    *(unsigned char *)(this + 148) = v8; /*0x4108ed*/
  }
  *(unsigned int *)(this + 96) = &stru_87C374.__pad_579C[23588]; /*0x4108ee*/
  if ( *(int *)&HouseClass_Player.__pad_5568[22212] < *(int *)&HouseClass_Player.__pad_5568[22204] /*0x410929*/
    || (HouseClass_Player.__pad_5568[22209] || !*(unsigned int *)&HouseClass_Player.__pad_5568[22204])
    && *(int *)&HouseClass_Player.__pad_5568[22216] > 0
    && (*(uint8_t (**)(char *, int, unsigned int))(*(unsigned int *)&HouseClass_Player.__pad_5568[22196] + 8))(
         &HouseClass_Player.__pad_5568[22196],
         *(unsigned int *)&HouseClass_Player.__pad_5568[22204] + *(unsigned int *)&HouseClass_Player.__pad_5568[22216],
         0) )
  {
    v4 = (*(unsigned int *)&HouseClass_Player.__pad_5568[22212])++; /*0x410936*/
    *(unsigned int *)(*(unsigned int *)&HouseClass_Player.__pad_5568[22200] + 4 * v4) = this; /*0x410945*/
  }
  return (int)(this);

}
} // namespace gamemd
// 0x4109C0
namespace gamemd {
int AbstractTypeClass::Dtor()
{

  int v2; // eax
  unsigned int *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &vt_AbstractTypeClass; /*0x4109cd*/
  *(this + 1) = &vt_AbstractTypeClass; /*0x4109d3*/
  *(this + 2) = &vt_AbstractTypeClass; /*0x4109da*/
  *(this + 3) = &vt_AbstractTypeClass; /*0x4109e1*/
  v4 = this; /*0x4109ef*/
  v2 = (*(int (**)(int *, unsigned int **))(g_abs_A8E968 + 16))(&g_abs_A8E968, &v4); /*0x4109f3*/
  if ( v2 != -1 && v2 < (int)((int))((int))(g_abs_A8E978) && v2 < --g_abs_A8E978 ) /*0x410a0e*/
  {
    do /*0x410a26*/
    {
      ++v2; /*0x410a16*/
      *((unsigned int *)g_abs_A8E96C + v2 - 1) = *((unsigned int *)g_abs_A8E96C + v2); /*0x410a1a*/
    }
    while ( v2 < (int)((int))((int))(g_abs_A8E978) ); /*0x410a26*/
  }
  return AbstractClass::DTOR(this); /*0x410a2f*/

}
} // namespace gamemd
// 0x410A60
namespace gamemd {
int AbstractTypeClass::LoadFromINI(AbstractTypeClass * aP1)
{

  CCINIClass *v3; // edi
  char *v4; // ebp
  char Destination[48]; // [esp+Ch] [ebp-434h] BYREF
  char v7; // [esp+3Ch] [ebp-404h]
  INIClass Source[16]; // [esp+40h] [ebp-400h] BYREF

  INIClass::ResetSection(aP1); /*0x410a74*/
  if ( !INIClass::BinarySearchSection((int)aP1, (INIClass *)((char *)this + 36)) ) /*0x410a7f*/
    return 0; /*0x410b7f*/
  v3 = (CCINIClass *)((char *)this + 100); /*0x410a91*/
  INIClass::GetString( /*0x410aa0*/
    (uint8_t ***)aP1,
    (INIClass *)((char *)this + 36),
    (uint8_t *)&g_abs_81784C,
    (INIClass *)((char *)this + 100),
    Source,
    49);
  if ( Source ) /*0x410aab*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x30u); /*0x410abf*/
    v7 = 0; /*0x410ac7*/
  }
  else
  {
    Destination[0] = (uint8_t)Source; /*0x410aad*/
  }
  if ( Destination != (char *)v3 ) /*0x410ad2*/
  {
    qmemcpy(v3, Destination, 0x30u); /*0x410add*/
    *((unsigned char *)this + 148) = v7; /*0x410adf*/
  }
  v4 = (char *)((char *)this + 61); /*0x410aeb*/
  INIClass::GetString( /*0x410afb*/
    (uint8_t ***)aP1,
    (INIClass *)((char *)this + 36),
    (uint8_t *)&g_abs_81784C,
    (INIClass *)((char *)this + 61),
    Source,
    32);
  if ( Source ) /*0x410b06*/
  {
    strncpy(Destination, Source[0].__pad_0, 0x1Fu); /*0x410b1a*/
    Destination[31] = 0; /*0x410b22*/
  }
  else
  {
    Destination[0] = (uint8_t)Source; /*0x410b08*/
  }
  if ( Destination != v4 ) /*0x410b2d*/
    qmemcpy(v4, Destination, 0x20u); /*0x410b3a*/
  if ( *v4 ) /*0x410b3c*/
    *((unsigned int *)this + 24) = GetStringCSF((wchar_t *)((char *)this + 61), 0, g_abs_817830, 215); /*0x410b58*/
  else
    *((unsigned int *)this + 24) = &g_abs_87F8E4; /*0x410b69*/
  return 1; /*0x410b57*/

}
} // namespace gamemd
// 0x410C30
namespace gamemd {
AbstractTypeClass * AbstractTypeClass::ddtor(unsigned int * Block, char a2)
{

  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = (unsigned int)(&vt_AbstractTypeClass);
  *(Block + 1) = &vt_AbstractTypeClass; /*0x410c43*/
  *(Block + 2) = &vt_AbstractTypeClass; /*0x410c4a*/
  *(Block + 3) = &vt_AbstractTypeClass; /*0x410c51*/
  v5 = Block; /*0x410c5f*/
  v3 = (*(int (**)(int *, unsigned int **))(g_abs_A8E968 + 16))(&g_abs_A8E968, &v5); /*0x410c63*/
  if ( v3 != -1 && v3 < (int)((int))((int))(g_abs_A8E978) && v3 < --g_abs_A8E978 ) /*0x410c7e*/
  {
    do /*0x410c96*/
    {
      ++v3; /*0x410c86*/
      *((unsigned int *)g_abs_A8E96C + v3 - 1) = *((unsigned int *)g_abs_A8E96C + v3); /*0x410c8a*/
    }
    while ( v3 < (int)((int))((int))(g_abs_A8E978) ); /*0x410c96*/
  }
  AbstractClass::DTOR(Block); /*0x410c9a*/
  if ( ((unsigned int)(Block)& 1) != 0 ) /*0x410ca4*/
    OperatorDelete(Block); /*0x410ca7*/
  return (AbstractTypeClass *)Block; /*0x410cb1*/

}
} // namespace gamemd
// 0x410960
namespace gamemd {
int AbstractTypeClass::Init( AbstractTypeClass * aP1)
{

  char v3; // al

  AbstractClass::InitVtables((unsigned int *)this, (int)aP1); /*0x410968*/
  v3 = *(unsigned char *)(this + 61); /*0x41096d*/
  *(unsigned int *)this = &vt_AbstractTypeClass; /*0x410975*/
  *(unsigned int *)(this + 4) = &vt_AbstractTypeClass; /*0x41097b*/
  *(unsigned int *)(this + 8) = &vt_AbstractTypeClass; /*0x410982*/
  *(unsigned int *)(this + 12) = &vt_AbstractTypeClass; /*0x410989*/
  if ( v3 ) /*0x410990*/
    *(unsigned int *)(this + 96) = GetStringCSF((wchar_t *)(this + 61), 0, g_abs_817830, 127); /*0x4109a0*/
  else
    *(unsigned int *)(this + 96) = &g_abs_87F8E4; /*0x4109a9*/
  return this; /*0x4109a5*/

}
} // namespace gamemd
// 0x410A40
namespace gamemd {
BOOL AbstractTypeClass::NameEquals(void * a2)
{

  return _strcmpi(a2, (const void *)((char *)this + 36)) == 0; /*0x410a56*/

}
} // namespace gamemd
// 0x410B90
namespace gamemd {
char AbstractTypeClass::WriteINI(CCINIClass * aP1)
{

  INIClass *v3; // edi

  v3 = (INIClass *)((unsigned char *)this + 36); /*0x410b9b*/
  INIClass::ClearSection((int)aP1, (INIClass *)((unsigned char *)this + 36), 0); /*0x410ba1*/
  INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&stru_817828.fallRate, (INIClass *)((unsigned char *)this + 100)); /*0x410bb2*/
  if ( *((unsigned char *)this + 61) ) /*0x410bb7*/
    INIClass::SetString(aP1->__pad_0, v3, (INIClass *)&stru_817828.objectTypeFlags, (INIClass *)((unsigned char *)this + 61)); /*0x410bca*/
  return 1; /*0x410bcf*/

}
} // namespace gamemd
// 0x410BE0
namespace gamemd {
int AbstractTypeClass::ProcessPower( AbstractClass * aP1)
{

  AbstractClass::ProcessPower((void *)this); /*0x410be9*/
  Checksum::AddString((unsigned int *)aP1, (AbstractClass *)this + 1); /*0x410bf4*/
  Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 100)); /*0x410bff*/
  return Checksum::AddString((unsigned int *)aP1, (AbstractClass *)(this + 61)); /*0x410c0f*/

}
} // namespace gamemd
// 0x410C20
namespace gamemd {
int AbstractTypeClass::StubReturnFalse()
{

  int result; // eax

  return result; /*0x410c20*/

}
} // namespace gamemd
// 0x5F75B0
namespace gamemd {
int AbstractTypeClass::GetData()
{

  return 0; /*0x5f75b2*/

}
} // namespace gamemd
// 0x5F7610
namespace gamemd {
int AbstractTypeClass::GetType(int a1)
{

  return 0; /*0x5f7612*/

}
} // namespace gamemd
// 0x5F7620
namespace gamemd {
int AbstractTypeClass::SetType()
{

  return 0; /*0x5f7622*/

}
} // namespace gamemd
// 0x5F7630
namespace gamemd {
int AbstractTypeClass::Validate()
{

  return 0; /*0x5f7632*/

}
} // namespace gamemd