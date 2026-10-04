// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/Carryall_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/Campaign_WorldDominationTour_24_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/Random_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoTypeClass_e4.hpp"  // G42.36 C2027 supply

// 0x4717D0
namespace gamemd {
CaptureManagerClass::CaptureManagerClass(int a2, int a3, char a4)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4717D0)
}
} // namespace ra2

// 0x471A50
namespace gamemd {
ScenarioClass * * CaptureManagerClass::HandleOverload()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x471A50)
}
} // namespace ra2

// 0x471C90
namespace gamemd {
bool CaptureManagerClass::CanCapture(unsigned int *a2)
{
    return false; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x471C90)
}
} // namespace ra2

// 0x471D40
namespace gamemd {
void CaptureManagerClass::CaptureUnit(int a1, int a2, int a3, int aP1, int aP0)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x471D40)
}
} // namespace ra2

// 0x471FF0
namespace gamemd {
char CaptureManagerClass::FreeUnit(int a2, int a3, unsigned int *a1, int aP1, unsigned int *aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x471FF0)
}
} // namespace ra2

// 0x472160
namespace gamemd {
int CaptureManagerClass::DrawLinks(int a1, ...)
{

  int v1; // ecx
  int v2; // edi
  int v3; // eax
  int v4; // ebp
  char v5; // bl
  int *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ebp
  int v11; // esi
  int v12; // eax
  unsigned int *v13; // ecx
  int *v14; // eax
  int v16; // [esp+0h] [ebp-30h]
  int v17; // [esp+4h] [ebp-2Ch]
  void *v18; // [esp+8h] [ebp-28h]
  int v19; // [esp+Ch] [ebp-24h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+28h] [ebp-8h]
  void *retaddr; // [esp+30h] [ebp+0h]
  va_list va; // [esp+38h] [ebp+8h] BYREF

  va_start(va, a1);
  v2 = v1; /*0x472167*/
  v3 = *(unsigned int *)(v1 + 72); /*0x47216e*/
  HIBYTE(v20) = *(unsigned char *)(v3 + 131) != 0; /*0x47217b*/
  v4 = *(unsigned int *)(v1 + 52) - 1; /*0x472183*/
  if ( v4 >= 0 ) /*0x472188*/
  {
    while ( 1 ) /*0x472191*/
    {
      v5 = 0; /*0x472191*/
      v6 = *(int **)(*(unsigned int *)(v2 + 40) + 4 * v4); /*0x472193*/
      v7 = *v6; /*0x472196*/
      v8 = v6[4]; /*0x472198*/
      v9 = v6[2]; /*0x47219b*/
      if ( v9 == -1 ) /*0x4721a1*/
        goto LABEL_5; /*0x4721a1*/
      if ( *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v9 < v8 ) /*0x4721ad*/
        break; /*0x4721ad*/
LABEL_7:
      if ( *(unsigned char *)(v7 + 131) ) /*0x4721b7*/
        v5 = 1; /*0x4721c1*/
      v3 = *(unsigned int *)(v2 + 72); /*0x4721c3*/
      if ( v3 ) /*0x4721c8*/
      {
        if ( v7 ) /*0x4721d0*/
        {
          LOBYTE(v3) = HIBYTE(v20); /*0x4721d6*/
          if ( HIBYTE(v20) || v5 ) /*0x4721e0*/
          {
            v10 = *(unsigned int *)(v7 + 156); /*0x4721ec*/
            v11 = *(unsigned int *)(v7 + 164); /*0x4721f9*/
            v12 = (*(int (**)(int, int, int, void *, int, int))(*(unsigned int *)v7 + 132))( /*0x4721fe*/
                    v7,
                    v16,
                    v17,
                    v18,
                    v19,
                    v20);
            v13 = *(unsigned int **)(v2 + 72); /*0x47220c*/
            HIBYTE(v20) = HIBYTE(v13); /*0x47220f*/
            LOWORD(v20) = *(unsigned short *)(v13[135] + 22265); /*0x472223*/
            BYTE2(v20) = *(unsigned char *)(v13[135] + 22267); /*0x47222e*/
            v17 = v10; /*0x47223a*/
            v4 = v21; /*0x47223c*/
            v18 = retaddr; /*0x472240*/
            v19 = *(unsigned int *)(v12 + 988) + v11; /*0x472245*/
            v16 = 0; /*0x472251*/
            v14 = (int *)(*(int (**)(unsigned int *))(*v13 + 176))(v13); /*0x472264*/
            LOBYTE(v3) = (unsigned char)(DrawTacticalLaserLine(*v14,(void *)(v14[1]),(void *)(v14[2]),(void *)((int)va),(void *)(-1 - v21 % 5), 0, 0)); /*0x472282*/
          }
        }
      }
      if ( --v4 < 0 ) /*0x47228c*/
        return v3; /*0x47228c*/
    }
    v8 -= *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416) - v9; /*0x4721af*/
LABEL_5:
    if ( v8 > 0 ) /*0x4721b3*/
      v5 = 1; /*0x4721b5*/
    goto LABEL_7; /*0x4721b5*/
  }
  return v3; /*0x472292*/

}
} // namespace ra2

// 0x4722A0
namespace gamemd {
int CaptureManagerClass::CannotControlAnyMore()
{

  return !this->CaptureManagerClass_field_40 && (int)this->originalOwner >= *(unsigned int *)this->__pad_3C; /*0x4722a7*/

}
} // namespace ra2

// 0x4723B0
namespace gamemd {
void CaptureManagerClass::DecideUnitFate(int aP1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4723B0)
}
} // namespace ra2

// 0x472640
namespace gamemd {
int CaptureManagerClass::NeedsToDrawLinks()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472640)
}
} // namespace ra2

// 0x4726C0
namespace gamemd {
int CaptureManagerClass::IsOverloading(bool * a2)
{

  if ( !this->CaptureManagerClass_field_40 || this->originalOwner <= this->q03C ) /*0x4726cf*/
    return 0; /*0x4726e4*/
  *a2 = this->overloadLimit > 0; /*0x4726dd*/
  return 1; /*0x4726e1*/

}
} // namespace ra2

// 0x472720
namespace gamemd {
TechnoClass * * CaptureManagerClass::LoadFromStream(int a1, int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472720)
}
} // namespace ra2

// 0x4728E0
namespace gamemd {
int CaptureManagerClass::SaveToINI(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4728E0)
}
} // namespace ra2

// 0x472D70
namespace gamemd {
int CaptureManagerClass::Capture(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472D70)
}
} // namespace ra2

// 0x4722F0
namespace gamemd {
int CaptureManagerClass::GetOriginalOwner(int a2)
{

  int v2; // eax
  int controlNodeCount; // edx
  unsigned int **i; // ecx

  v2 = (int)&this->originalOwner[-1].HouseClass_field_160B4 + 3; /*0x4722f4*/
  if ( v2 < 0 ) /*0x4722f6*/
    return 0; /*0x472310*/
  controlNodeCount = this->controlNodeCount; /*0x4722f8*/
  for ( i = (unsigned int **)(controlNodeCount + 4 * v2); **i != a2; --i ) /*0x4722ff*/
  {
    if ( --v2 < 0 ) /*0x47230e*/
      return 0; /*0x47230e*/
  }
  return *(unsigned int *)(*(unsigned int *)(controlNodeCount + 4 * v2) + 4); /*0x472310*/

}
} // namespace gamemd

// 0x4726F0
namespace gamemd {
int CaptureManagerClass::PowerDrainUpdate(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4726F0)
}
} // namespace gamemd

// 0x472960
namespace gamemd {
int CaptureManagerClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x472966*/
    return -2147467261; /*0x472968*/
  *a2 = 108652930; /*0x472976*/
  a2[1] = 299085213; /*0x47297e*/
  a2[2] = 268441278; /*0x472987*/
  a2[3] = unk_7E988C; /*0x472990*/
  return 0; /*0x47296d*/

}
} // namespace gamemd

// 0x4729A0
namespace gamemd {
int CaptureManagerClass::GetObjectSize()
{

  return 80; /*0x4729a5*/

}
} // namespace gamemd

// 0x4729B0
namespace gamemd {
int CaptureManagerClass::GetTypeIdentifier()
{

  return 66; /*0x4729b5*/

}
} // namespace gamemd

// 0x4729C0
namespace gamemd {
CaptureManagerClass * CaptureManagerClass::ddtor(unsigned int * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4729C0)
}
} // namespace gamemd

// 0x472AB0
namespace gamemd {
unsigned int CaptureManagerClass::LoadTypeData(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472AB0)
}
} // namespace gamemd

// 0x472B40
namespace gamemd {
char CaptureManagerClass::AddRef(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472B40)
}
} // namespace gamemd

// 0x472B80
namespace gamemd {
char CaptureManagerClass::SetCapacity(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472B80)
}
} // namespace gamemd

// 0x472C30
namespace gamemd {
int CaptureManagerClass::Destroy(void *a1)
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472C30)
}
} // namespace gamemd

// 0x472C60
namespace gamemd {
int CaptureManagerClass::IndexOf(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472C60)
}
} // namespace gamemd

// 0x472CA0
namespace gamemd {
unsigned int CaptureManagerClass::PointerToIndex(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472CA0)
}
} // namespace gamemd

// 0x472CC0
namespace gamemd {
char CaptureManagerClass::Release(int a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x472CC0)
}
} // namespace gamemd

// 0x473000
namespace gamemd {
VectorClass_flat * CaptureManagerClass::Constructor_VectorClass_ControlNode___(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x473003*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x473006*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x473010*/
  {
    __3_YAXPAX_Z(v3); /*0x473018*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x473020*/
  }
  BYTE1(Block->m_C) = 0; /*0x47302b*/
  Block->m_8 = 0; /*0x473031*/
  if ( (a2 & 1) != 0 ) /*0x473038*/
    __3_YAXPAX_Z(Block); /*0x47303b*/
  return Block->__pad_0; /*0x473045*/

}
} // namespace gamemd

// 0x473050
namespace gamemd {
DynamicVector * CaptureManagerClass::QueryInterface(unsigned int * Block, char a2)
{

  void *v3; // eax

  v3 = *(void **)&Block->m_1[3]; /*0x473053*/
  *(unsigned int *)Block->__pad_0 = &vt_VectorClass; /*0x473056*/
  if ( v3 && BYTE1(Block->m_C) ) /*0x473060*/
  {
    __3_YAXPAX_Z(v3); /*0x473068*/
    *(unsigned int *)&Block->m_1[3] = 0; /*0x473070*/
  }
  BYTE1(Block->m_C) = 0; /*0x47307b*/
  Block->m_8 = 0; /*0x473081*/
  if ( (a2 & 1) != 0 ) /*0x473088*/
    __3_YAXPAX_Z(Block); /*0x47308b*/
  return Block->__pad_0; /*0x473095*/

}
} // namespace gamemd

// 0x473140
namespace gamemd {
unsigned int * CaptureManagerClass::Constructor_473140(int a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x473140)
}
} // namespace gamemd

// 0x6EA4F0
namespace gamemd {
char CaptureManagerClass::AddMember(TechnoClass * aP1, void *a2, void *a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6EA4F0)
}
} // namespace gamemd
