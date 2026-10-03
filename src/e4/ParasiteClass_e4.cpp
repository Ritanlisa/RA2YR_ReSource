// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Random_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/E4Recv_69D870_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/MPCooperative_e4.hpp"
#include "e4/classes/SlaveManagerClass_e4.hpp"
#include "e4/classes/AnimTypeClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/ParticleSystemClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CellClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Coord3D_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Vector3_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BuildingPlacement_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Triple_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Matrix3x3_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/ObjectPtr_e4.hpp"  // G42.36 C2027 supply

// 0x629210
namespace gamemd {
int ParasiteClass::Constructor()
{

  int v2; // ecx
  int v3; // eax

  ((AbstractClass *)((AbstractClass *)this))->Constructor(); /*0x629213*/
  *(unsigned int *)&this->__pad_28[4] = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x62921f*/
  this->ParasiteClass_field_34 = 0; /*0x629222*/
  v2 = *(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 416); /*0x629225*/
  this->ParasiteClass_field_40 = 0; /*0x62922b*/
  this->ParasiteClass_field_38 = v2; /*0x62922e*/
  this->vtable1 = &vt_ParasiteClass; /*0x629231*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_ParasiteClass); /*0x629237*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_ParasiteClass); /*0x62923e*/
  ((unsigned int *)this)[0] = (unsigned int)(&vt_ParasiteClass); /*0x629245*/
  if ( dword_AC4920 < dword_AC4918 /*0x62927e*/
    || (byte_AC491D || !dword_AC4918)
    && dword_AC4924 > 0
    && (*(uint8_t (**)(int *, int, unsigned int))(dword_AC4910 + 8))(
         (int *)&dword_AC4910,
         dword_AC4918 + dword_AC4924,
         0) )
  {
    v3 = (unsigned int)(dword_AC4920++);
    *((unsigned int *)dword_AC4914 + v3) = (unsigned int)(this); /*0x62929a*/
  }
  return (int)this; /*0x62929f*/

}
} // namespace ra2

// 0x6292B0
namespace gamemd {
ParasiteClass::ParasiteClass(TechnoClass * aP1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6292B0)
}
} // namespace ra2

// 0x6294D0
namespace gamemd {
int ParasiteClass::Attach(int * a2)
{

  int v3; // eax
  int v4; // eax
  int v5; // edx

  ((AbstractClass *)(AbstractClass *)this)->ProcessPower(); /*0x6294d9*/
  v3 = *((unsigned int *)this + 17); /*0x6294de*/
  if ( v3 ) /*0x6294e3*/
  {
    v4 = (*(int (**)(int))(*(unsigned int *)(v3 + 4) + 16))(v3 + 4); /*0x6294ec*/
    Power::TimerProcess(v4); /*0x6294f2*/
  }
  Power::TimerProcess(*((unsigned int *)this + 18)); /*0x6294fd*/
  Power::TimerProcess(*((unsigned int *)this + 19)); /*0x629508*/
  Power::TimerProcess(*((unsigned int *)this + 20)); /*0x629513*/
  LOBYTE(v5) = *((unsigned char *)this + 84); /*0x629518*/
  return ((Power *)((Power *)a2))->FlagProcess(v5); /*0x629523*/

}
} // namespace ra2

// 0x6297F0
namespace gamemd {
void ParasiteClass::DeploySquad()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6297F0)
}
} // namespace ra2

// 0x629FD0
namespace gamemd {
void ParasiteClass::TickDamage()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x629FD0)
}
} // namespace ra2

// 0x62A980
namespace gamemd {
AbstractClass * * ParasiteClass::TryInfect(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62A980)
}
} // namespace ra2

// 0x62AB40
namespace gamemd {  // G42.18c ns repair
int ParasiteClass::CanExistOnVictimCell()
{

  int v2; // ecx
  int creationFrame; // ecx
  CellClass *v5; // eax
  int v6; // eax
  bool v7; // bl
  int v8; // eax
  Cell *v9; // eax

  v2 = *(unsigned int *)this->__pad_28; /*0x62ab44*/
  if ( !v2 ) /*0x62ab49*/
    return 0; /*0x62ab4f*/
  if ( (*(uint8_t (**)(int))(*(unsigned int *)v2 + 84))(v2) ) /*0x62ab52*/
    return 0; /*0x62ab5d*/
  if ( *(unsigned char *)((*(int (**)(int))(*(unsigned int *)this->creationFrame + 132))(this->creationFrame) + 3278) ) /*0x62ab69*/
    goto LABEL_20; /*0x62ab69*/
  creationFrame = this->creationFrame; /*0x62ab77*/
  if ( creationFrame ) /*0x62ab7c*/
  {
    if ( (*(int (**)(int))(*(unsigned int *)creationFrame + 44))(creationFrame) == 1 ) /*0x62ab86*/
    {
      v5 = (CellClass *)(*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 444))(*(unsigned int *)this->__pad_28); /*0x62ab8f*/
      if ( ((CellClass *)(v5))->FindInfantry(0) ) /*0x62ab97*/
        return 0; /*0x62aba4*/
    }
  }
  v6 = *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 444))(*(unsigned int *)this->__pad_28) + 236); /*0x62abb0*/
  if ( v6 == 2 || v6 == 6 || v6 == 3 ) /*0x62abc3*/
  {
    v7 = (*(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 444))(*(unsigned int *)this->__pad_28) /*0x62abdc*/
                    + 320)
        & 0x100) == 0;
    v8 = *(unsigned int *)((*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 444))(*(unsigned int *)this->__pad_28) + 68); /*0x62abe9*/
    if ( v8 >= 74 && v8 <= 99 ) /*0x62abf4*/
      v7 = 0; /*0x62abf6*/
    if ( (v8 < 205 || v8 > 230) && v7 ) /*0x62ac08*/
      return 0; /*0x62ac0b*/
  }
LABEL_20:
  v9 = (Cell *)(*(int (**)(unsigned int))(**(unsigned int **)this->__pad_28 + 444))(*(unsigned int *)this->__pad_28); /*0x62ac14*/
  return ((Cell *)(v9))->IsBridge() == 0; /*0x62ab4b*/

}
} // namespace ra2

// 0x62AF70
namespace gamemd {
void * ParasiteClass::UpdateParasite(ParasiteClass * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62AF70)
}
} // namespace ra2

// 0x62BD50
namespace gamemd {
Coord * * ParasiteClass::Update(void *a1, void *a2, void *a3, void *a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x62BD50)
}
} // namespace ra2

// 0x6295B0
namespace gamemd {
int ParasiteClass::LoadParasite(int * a0, AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6295B0)
}
} // namespace gamemd

// 0x6296B0
namespace gamemd {
int ParasiteClass::SaveParasite(TechnoTypeClass * aP0, int * a1, int aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6296B0)
}
} // namespace gamemd

// 0x6296D0
namespace gamemd {
int ParasiteClass::ddtor(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x6296d6*/
    return -2147467261; /*0x6296d8*/
  *a2 = 486632321; /*0x6296e6*/
  a2[1] = 299086411; /*0x6296ee*/
  a2[2] = 268441278; /*0x6296f7*/
  a2[3] = unk_7E98AC; /*0x629700*/
  return 0; /*0x6296dd*/

}
} // namespace gamemd

// 0x62A8E0
namespace gamemd {
bool ParasiteClass::CanInfect(unsigned int *a2)
{

  int creationFrame; // ecx
  Cell *v4; // eax
  bool result; // al

  result = 0; /*0x62a977*/
  if ( a2 ) /*0x62a8ea*/
  {
    if ( !*((unsigned char *)a2 + 129) ) /*0x62a8f0*/
    {
      if ( *((unsigned char *)a2 + 144) ) /*0x62a8fa*/
      {
        if ( a2[27] ) /*0x62a904*/
        {
          if ( !a2[421] ) /*0x62a90b*/
          {
            if ( *(unsigned char *)((*(int (**)(unsigned int *))(*a2 + 132))(a2) + 3384) ) /*0x62a91f*/
            {
              if ( !a2[185] ) /*0x62a929*/
              {
                creationFrame = this->creationFrame; /*0x62a933*/
                if ( !creationFrame ) /*0x62a938*/
                  return 1; /*0x62a938*/
                if ( !*(unsigned char *)((*(int (**)(int))(*(unsigned int *)creationFrame + 132))(creationFrame) + 3278) ) /*0x62a942*/
                  return 1; /*0x62a942*/
                if ( !(*(int (**)(unsigned int *))(*a2 + 444))(a2) ) /*0x62a950*/
                  return 1; /*0x62a950*/
                v4 = (Cell *)(*(int (**)(unsigned int *))(*a2 + 444))(a2); /*0x62a95e*/
                if ( (uint8_t)((Cell*)v4)->IsValidHeight() ) /*0x62a966*/
                  return 1; /*0x62a8ea*/
              }
            }
          }
        }
      }
    }
  }
  return result; /*0x62a96f*/

}
} // namespace gamemd
