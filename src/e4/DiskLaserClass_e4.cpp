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

  AbstractClass::Constructor((AbstractClass *)this); /*0x4a7a33*/
  *(unsigned int *)this = &DiskLaserClass::`vftable'; /*0x4a7a3a*/
  *((unsigned int *)this + 1) = &DiskLaserClass::`vftable'; /*0x4a7a40*/
  *((unsigned int *)this + 2) = &DiskLaserClass::`vftable'; /*0x4a7a47*/
  *((unsigned int *)this + 3) = &vt_DiskLaserClass; /*0x4a7a4e*/
  *((unsigned int *)this + 9) = 0; /*0x4a7a55*/
  *((unsigned int *)this + 10) = 0; /*0x4a7a58*/
  *((unsigned int *)this + 11) = 0; /*0x4a7a5b*/
  *((unsigned int *)this + 12) = 0; /*0x4a7a5e*/
  *((unsigned int *)this + 13) = 0; /*0x4a7a61*/
  *((unsigned int *)this + 14) = 0; /*0x4a7a64*/
  *((unsigned int *)this + 15) = 0; /*0x4a7a67*/
  if ( MEMORY[0x8A0218] < MEMORY[0x8A0210] /*0x4a7a9e*/
    || (MEMORY[0x8A0215] || !MEMORY[0x8A0210])
    && MEMORY[0x8A021C] > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(MEMORY[0x8A0208] + 8))(
         &MEMORY[0x8A0208],
         MEMORY[0x8A0210] + MEMORY[0x8A021C],
         0) )
  {
    v2 = MEMORY[0x8A0218]++; /*0x4a7aab*/
    *((unsigned int *)MEMORY[0x8A020C] + v2) = this; /*0x4a7aba*/
  }
  return this; /*0x4a7abf*/

}
// 0x4A7C90
void * DiskLaserClass::CopyTo(char a2)
{

  int v3; // eax
  unsigned int *v5; // [esp+4h] [ebp-4h] BYREF

  *Block = &DiskLaserClass::`vftable'; /*0x4a7c9d*/
  *(Block + 1) = &DiskLaserClass::`vftable'; /*0x4a7ca3*/
  *(Block + 2) = &DiskLaserClass::`vftable'; /*0x4a7caa*/
  *(Block + 3) = &vt_DiskLaserClass; /*0x4a7cb1*/
  v5 = Block; /*0x4a7cbf*/
  v3 = (*(int (**)(int *, unsigned int **))(MEMORY[0x8A0208] + 16))(&MEMORY[0x8A0208], &v5); /*0x4a7cc3*/
  if ( v3 != -1 && v3 < MEMORY[0x8A0218] && v3 < --MEMORY[0x8A0218] ) /*0x4a7cde*/
  {
    do /*0x4a7cf6*/
    {
      ++v3; /*0x4a7ce6*/
      *((unsigned int *)MEMORY[0x8A020C] + v3 - 1) = *((unsigned int *)MEMORY[0x8A020C] + v3); /*0x4a7cea*/
    }
    while ( v3 < MEMORY[0x8A0218] ); /*0x4a7cf6*/
  }
  AbstractClass::DTOR(Block); /*0x4a7cfa*/
  if ( (a2 & 1) != 0 ) /*0x4a7d04*/
    __3_YAXPAX_Z(Block); /*0x4a7d07*/
  return (DiskLaserClass *)Block; /*0x4a7d11*/

}
// 0x4A7B90
int  DiskLaserClass::Write(int aP1)
{

  AbstractClass *Prefix_0; // edi

  Prefix_0 = (AbstractClass *)AbstractClass::SaveLoad_Prefix_0(aP1, (AbstractClass *)aP1); /*0x4a7ba1*/
  if ( (int)Prefix_0 >= 0 ) /*0x4a7ba5*/
  {
    if ( aP1 ) /*0x4a7ba9*/
    {
      AbstractClass::InitVtables(aP1, (IUnknown *)&aP1); /*0x4a7bb2*/
      *(unsigned int *)aP1->__pad_0 = &DiskLaserClass::`vftable'; /*0x4a7bb7*/
      *(unsigned int *)&aP1->__pad_0[4] = &DiskLaserClass::`vftable'; /*0x4a7bbd*/
      *(unsigned int *)&aP1->__pad_0[8] = &DiskLaserClass::`vftable'; /*0x4a7bc4*/
      *(unsigned int *)&aP1->__pad_0[12] = &vt_DiskLaserClass; /*0x4a7bcb*/
    }
    ObjectPtr::RegisterForTracking((SwizzleManagerClass *)&stru_B05488.__pad_579C[5356], (MouseClass *)&aP1[1]); /*0x4a7bdb*/
    ObjectPtr::RegisterForTracking( /*0x4a7be9*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].__pad_0[4]);
    ObjectPtr::RegisterForTracking( /*0x4a7bf7*/
      (SwizzleManagerClass *)&stru_B05488.__pad_579C[5356],
      (MouseClass *)&aP1[1].__pad_0[8]);
  }
  return (int)Prefix_0->__pad_0; /*0x4a7bfe*/

}
// 0x4A7C10
int DiskLaserClass::Seek(TechnoTypeClass * aP0, int * a1, int aP2)
{

  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x4a7c24*/

}
// 0x4A7C30
int DiskLaserClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x4a7c36*/
    return -2147467261; /*0x4a7c38*/
  *a2 = 1378929064; /*0x4a7c46*/
  a2[1] = 1206682730; /*0x4a7c4e*/
  a2[2] = -1786862915; /*0x4a7c57*/
  a2[3] = 1226661444; /*0x4a7c60*/
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