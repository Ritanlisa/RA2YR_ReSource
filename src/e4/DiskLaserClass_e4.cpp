// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/DiskLaserClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint____13_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Diplomacy_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Process_e4.hpp"

// 0x4A7A30
DiskLaserClass::DiskLaserClass()
{
  int v2; // eax

  AbstractClass::Constructor(); /*0x4a7a33*/
  *(unsigned int *)this->__pad_0 = (void*)&DiskLaserClass_vftable; /*0x4a7a3a*/
  this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass_vftable; /*0x4a7a40*/
  this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass_vftable; /*0x4a7a47*/
  this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass_vftable; /*0x4a7a4e*/
  this->DiskLaserClass_field_0x24 = 0; /*0x4a7a55*/
  this->DiskLaserClass_field_0x28 = 0; /*0x4a7a58*/
  this->u32_2C = 0; /*0x4a7a5b*/
  this->vtable4 = 0; /*0x4a7a5e*/
  this->u32_34 = 0; /*0x4a7a61*/
  this->u32_38 = 0; /*0x4a7a64*/
  this->u32_3C = 0; /*0x4a7a67*/
  if ( dword_8A0218 < dword_8A0210 /*0x4a7a9e*/
    || (byte_8A0215 || !dword_8A0210)
    && dword_8A021C > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_8A0208 + 8))(
         &dword_8A0208,
         dword_8A0210 + dword_8A021C,
         0) )
  {
    v2 = dword_8A0218++; /*0x4a7aab*/
    *((unsigned int *)dword_8A020C + v2) = this; /*0x4a7aba*/
  }
  return (int)this->__pad_0; /*0x4a7abf*/
}
// 0x4A7C90
void * DiskLaserClass::CopyTo(char a2)
{
    unsigned int v5 = 0;  /* G37 hoist */
  int v3; // eax
  (unsigned int)(DiskLaserClass)*v5; // [esp+4h] [ebp-4h] BYREF

  *(unsigned int *)this->__pad_0 = (void*)&DiskLaserClass_vftable; /*0x4a7c9d*/
  this->DiskLaserClass_field_0x04 = (int)&DiskLaserClass_vftable; /*0x4a7ca3*/
  this->DiskLaserClass_field_0x08 = (int)&DiskLaserClass_vftable; /*0x4a7caa*/
  this->DiskLaserClass_field_0x0C = (int)&DiskLaserClass_vftable; /*0x4a7cb1*/
  v5 = this; /*0x4a7cbf*/
  v3 = (*(int (**)(int *, DiskLaserClass **))(dword_8A0208 + 16))(&dword_8A0208, &v5); /*0x4a7cc3*/
  if ( v3 != -1 && v3 < dword_8A0218 && v3 < --dword_8A0218 ) /*0x4a7cde*/
  {
    do /*0x4a7cf6*/
    {
      ++v3; /*0x4a7ce6*/
      *((unsigned int *)dword_8A020C + v3 - 1) = *((unsigned int *)dword_8A020C + v3); /*0x4a7cea*/
    }
    while ( v3 < dword_8A0218 ); /*0x4a7cf6*/
  }
  AbstractClass::DTOR(); /*0x4a7cfa*/
  if ( (a2 & 1) != 0 ) /*0x4a7d04*/
    RA2_OPDEL(); /*0x4a7d07*/
  return this; /*0x4a7d11*/
}
// 0x4A7B90
int DiskLaserClass::Write(AbstractClass * aP0, int aP1)
{
  int Prefix_0; // edi

  Prefix_0 = AbstractClass::SaveLoad_Prefix_0(aP0, aP1); /*0x4a7ba1*/
  if ( Prefix_0 >= 0 ) /*0x4a7ba5*/
  {
    if ( aP0 ) /*0x4a7ba9*/
    {
      AbstractClass::InitVtables((AbstractClass *)aP0, (int)&aP1); /*0x4a7bb2*/
      *(unsigned int *)aP0->__pad_0 = (void*)&DiskLaserClass_vftable; /*0x4a7bb7*/
      aP0->DiskLaserClass_field_0x04 = (int)&DiskLaserClass_vftable; /*0x4a7bbd*/
      aP0->DiskLaserClass_field_0x08 = (int)&DiskLaserClass_vftable; /*0x4a7bc4*/
      aP0->DiskLaserClass_field_0x0C = (int)&DiskLaserClass_vftable; /*0x4a7bcb*/
    }
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->DiskLaserClass_field_0x24); /*0x4a7bdb*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, &aP0->DiskLaserClass_field_0x28); /*0x4a7be9*/
    ObjectPtr::RegisterForTracking((int)&SwizzleManagerClass_Instance, (int *)aP0 + 11); /*0x4a7bf7*/
  }
  return Prefix_0; /*0x4a7bfe*/
}
// 0x4A7C10
int DiskLaserClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((int *)aP0->__pad_0, a1, aP2); /*0x4a7c24*/
}
// 0x4A7C30
int DiskLaserClass::ddtor(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x4a7c36*/
    return -2147467261; /*0x4a7c38*/
  *a2 = 1378929064; /*0x4a7c46*/
  a2[1] = 1206682730; /*0x4a7c4e*/
  a2[2] = -1786862915; /*0x4a7c57*/
  a2[3] = unk_7E989C; /*0x4a7c60*/
  return 0; /*0x4a7c3d*/
}
// 0x4A7C70
int DiskLaserClass::StubReturn64()
{
  return 64; /*0x4a7c75*/
}
// 0x4A7C80
int DiskLaserClass::StubReturn73()
{
  return 73; /*0x4a7c85*/
}