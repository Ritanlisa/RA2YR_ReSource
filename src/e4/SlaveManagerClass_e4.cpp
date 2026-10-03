// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/SlaveManagerClass_25_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/SlaveControlVector_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoTypeClass_e4.hpp"  // G42.36 C2027 supply

// 0x522D00
namespace gamemd {
int SlaveManagerClass::Check()
{

  int result; // eax

  if ( *((unsigned int *)this + 43) != 10 ) /*0x522d07*/
    return (*((int (**)(SlaveManagerClass *, int, unsigned int))this->vtable1 + 122))(this, 10, 0); /*0x522d0f*/
  return result; /*0x522d15*/

}
} // namespace ra2

// 0x522D20
namespace gamemd {
int SlaveManagerClass::VtableDispatch()
{

  return (*((int (**)(SlaveManagerClass *, int, unsigned int))this->vtable1 + 122))(this, 5, 0); /*0x522d2c*/

}
} // namespace ra2

// 0x522D30
namespace gamemd {
int SlaveManagerClass::CheckIsOne()
{

  return ((double (*)(SlaveManagerClass *))*((unsigned int *)this->vtable1 + 173))(this) == 1.0; /*0x522d47*/

}
} // namespace ra2

// 0x522FC0
namespace gamemd {
int SlaveManagerClass::IsMasterHarvester()
{

  return (*((int (**)(SlaveManagerClass *))this->vtable1 + 97))(this) == 10; /*0x522fd2*/

}
} // namespace ra2

// 0x6AF1A0
namespace gamemd {
void* SlaveManagerClass::ctor(TechnoClass * aP1, int a3, int a4, int a5, int a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AF1A0)
}
} // namespace ra2

// 0x6AF360
namespace gamemd {
int SlaveManagerClass::Constructor()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AF360)
}
} // namespace ra2

// 0x6AF4A0
namespace gamemd {
void SlaveManagerClass::Constructor_SlaveManagerClass()
{

  int i; // esi
  int v3; // ebp
  int v4; // eax
  void *v5; // eax
  int v6; // [esp+8h] [ebp-4h] BYREF

  *(unsigned int *)this = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4a5*/
  *((unsigned int *)this + 1) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4ab*/
  *((unsigned int *)this + 2) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4b2*/
  *((unsigned int *)this + 3) = (unsigned int)(&vt_SlaveManagerClass); /*0x6af4b9*/
  for ( i = *((unsigned int *)this + 18) - 1; i >= 0; --i ) /*0x6af4c4*/
  {
    if ( *(unsigned int *)(*((unsigned int *)this + 15) + 4 * i) ) /*0x6af4c9*/
      __3_YAXPAX_Z(*(void **)(*((unsigned int *)this + 15) + 4 * i)); /*0x6af4d1*/
  }
  v3 = *((unsigned int *)this + 16); /*0x6af4e5*/
  (*(void (**)(int))(*((unsigned int *)this + 14) + 12))((int)(char *)this + 56); /*0x6af4e8*/
  (*(void (**)(int, int, unsigned int))(*((unsigned int *)this + 14) + 8))((int)(char *)this + 56, v3, 0); /*0x6af4f2*/
  v6 = (int)(this); /*0x6af505*/
  v4 = (*(int (**)(int *, int *))(SlaveManagerClass_Array + 16))(&SlaveManagerClass_Array, &v6); /*0x6af509*/
  if ( v4 != -1 && v4 < dword_B0B600 && v4 < --dword_B0B600 ) /*0x6af525*/
  {
    do /*0x6af53d*/
    {
      ++v4; /*0x6af52d*/
      *((unsigned int *)dword_B0B5F4 + v4 - 1) = *((unsigned int *)dword_B0B5F4 + v4); /*0x6af531*/
    }
    while ( v4 < dword_B0B600 ); /*0x6af53d*/
  }
  v5 = *(void **)((char *)this + 60); /*0x6af53f*/
  *((unsigned int *)this + 14) = (unsigned int)(&vt_VectorClass); /*0x6af542*/
  if ( v5 && *((unsigned char *)this + 69) ) /*0x6af54c*/
  {
    __3_YAXPAX_Z(v5); /*0x6af554*/
    *((unsigned int *)this + 15) = 0; /*0x6af55c*/
  }
  *((unsigned char *)this + 69) = 0; /*0x6af565*/
  *((unsigned int *)this + 16) = 0; /*0x6af569*/
  ((AbstractClass*)(AbstractClass *)this)->DTOR(); /*0x6af570*/

}
} // namespace ra2

// 0x6AF580
namespace gamemd {
int SlaveManagerClass::SetOwner(TechnoClass * aP1)
{

  TechnoClass *master; // eax
  TechnoClass *v4; // ecx
  int v5; // ecx
  int i; // ecx

  master = (gamemd::TechnoClass *)(this->master); /*0x6af588*/
  master->slaveManager = 0; /*0x6af58b*/
  this->master = (unsigned int)((TechnoClass *)aP1); /*0x6af595*/
  v4 = *(TechnoClass **)(aP1 + 728); /*0x6af598*/
  if ( v4 ) /*0x6af5a0*/
  {
    LOBYTE(master) = TechnoClass::MutateAll(v4, 0, 0); /*0x6af5a6*/
    v5 = *(unsigned int *)(aP1 + 728); /*0x6af5ab*/
    if ( v5 ) /*0x6af5b3*/
      LOBYTE(master) = (*(int (**)(int, int))(*(unsigned int *)v5 + 32))(v5, 1); /*0x6af5b9*/
  }
  *(unsigned int *)(aP1 + 728) = (unsigned int)(this); /*0x6af5bc*/
  for ( i = *(unsigned int *)this->__pad_48 - 1; i >= 0; --i ) /*0x6af5c6*/
  {
    master = **(TechnoClass ***)(this->slaveVectorCount + 4 * i); /*0x6af5ce*/
    if ( master ) /*0x6af5d2*/
      master->slaveOwner = (gamemd::AnimClass *)(this->master); /*0x6af5d7*/
  }
  return (char)master; /*0x6af5e0*/

}
} // namespace ra2

// 0x6AF5F0
namespace gamemd {
char SlaveManagerClass::UpdateSlaves()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AF5F0)
}
} // namespace ra2

// 0x6AF6C0
namespace gamemd {
TechnoClass * * SlaveManagerClass_ProcessSlaves(void * a1, void * a2, void * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AF6C0)
}
}
// 0x6B0A20
namespace gamemd {
int SlaveManagerClass::LostSlave(int aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B0A20)
}
} // namespace ra2

// 0x6B1020
namespace gamemd {
int SlaveManagerClass::ShouldWakeUpNow()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1020)
}
} // namespace ra2

// 0x6B10F0
namespace gamemd {
int SlaveManagerClass::AssignTask(AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B10F0)
}
} // namespace ra2

// 0x6B1170
namespace gamemd {
AbstractClass * * SlaveManagerClass::LoadManager(unsigned int * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1170)
}
} // namespace ra2

// 0x6B1A70
namespace gamemd {
long long SlaveManagerClass::Calc2DDistance()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1A70)
}
} // namespace ra2

// 0x6AF650
namespace gamemd {
wchar_t * SlaveManagerClass::CreateSlave(wchar_t ** a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6AF650)
}
} // namespace gamemd

// 0x6B1130
namespace gamemd {
int SlaveManagerClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6b1136*/
    return -2147467261; /*0x6b1138*/
  *a2 = 861581284; /*0x6b1146*/
  a2[1] = 299183526; /*0x6b114e*/
  a2[2] = 268444350; /*0x6b1157*/
  a2[3] = unk_7E987C; /*0x6b1160*/
  return 0; /*0x6b113d*/

}
} // namespace gamemd

// 0x6B1300
namespace gamemd {
int SlaveManagerClass::SaveManager(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1300)
}
} // namespace gamemd

// 0x6B1370
namespace gamemd {
int SlaveManagerClass::StubReturn100()
{

  return 100; /*0x6b1375*/

}
} // namespace gamemd

// 0x6B1380
namespace gamemd {
int SlaveManagerClass::StubReturn72()
{

  return 72; /*0x6b1385*/

}
} // namespace gamemd

// 0x6B1390
namespace gamemd {
SlaveManagerClass * SlaveManagerClass::ProcessOrders(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1390)
}
} // namespace gamemd

// 0x6B13B0
namespace gamemd {
void SlaveManagerClass_25::ddtor(void *a1_1, void *a2_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B13B0)
}
} // namespace gamemd

// 0x6B13E0
namespace gamemd {
unsigned int SlaveManagerClass_25::Write(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B13E0)
}
} // namespace gamemd

// 0x6B1400
namespace gamemd {
int SlaveManagerClass_25::Seek(int a2, void *a2_2, void *a3_1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1400)
}
} // namespace gamemd

// 0x6B1470
namespace gamemd {
char SlaveManagerClass_25::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B1470)
}
} // namespace gamemd

// 0x6B15F0
namespace gamemd {
char SlaveManagerClass_25::Release(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B15F0)
}
} // namespace gamemd

// 0x6B16A0
namespace gamemd {
int SlaveManagerClass_25::Read(unsigned int * a2, void *a2_2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6B16A0)
}
}
// 0x6B1980
namespace gamemd {
DynamicVector * SlaveManagerClass_25::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x6b1983*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x6b1986*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x6b1990*/
  {
    __3_YAXPAX_Z(v3); /*0x6b1998*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x6b19a0*/
  }
  BYTE1(Block->m_C) = 0; /*0x6b19ab*/
  Block->m_8 = 0; /*0x6b19b1*/
  if ( (a2 & 1) != 0 ) /*0x6b19b8*/
    __3_YAXPAX_Z(Block); /*0x6b19bb*/
  return Block->__pad_0; /*0x6b19c5*/

}
} // namespace gamemd
