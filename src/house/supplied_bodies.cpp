// G42.32 P: tree-universe marker -- e4 tree-owned decls suppressed
#define GAMEMD_TREE_UNIVERSE 1
// GENERATED supplied bodies (supply_missing_bodies.py) -- no-body
// no-file FAIL family; bodies are cache-verbatim transforms.
#include "core/utility_ext.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "core/vector.hpp"
#include "house/house.hpp"
#include "misc/audio.hpp"
#include "misc/misc_ext.hpp"
#include "misc/super_weapon.hpp"
#include "object/abstract.hpp"
#include "structure/building.hpp"
#include "team/team.hpp"
#include "ui/message_list.hpp"
#include "e4/classes/Network_e4.hpp"
#include "core/init_stubs.hpp"  // G42.32 S R3: TimerGetTicks (init_stubs carrier)

// 0x42F490
namespace gamemd {
char BaseClass::AddRef(int a2)
{
    int m_8; // edi
    int v3; // esi
    int v4; // edx
    int v5; // eax
    unsigned short *v6; // ecx
    int v7; // edx

    m_8 = this->m_8; /*0x42f49b*/
    if ( m_8 == *(unsigned int *)(a2 + 8) ) /*0x42f4a0*/
    {
      v3 = 0; /*0x42f4a2*/
      if ( m_8 <= 0 ) /*0x42f4a6*/
        return 1; /*0x42f4e0*/
      v4 = *(unsigned int *)(a2 + 4); /*0x42f4a8*/
      v5 = *(unsigned int *)&this->m_1[3]; /*0x42f4ab*/
      v6 = (unsigned short *)(v4 + 4); /*0x42f4ae*/
      v7 = v4 - v5; /*0x42f4b1*/
      while ( *(unsigned int *)v5 == *(unsigned int *)(v7 + v5) && *(unsigned short *)(v5 + 4) == *v6 && *(unsigned short *)(v5 + 6) == v6[1] ) /*0x42f4cd*/
      {
        ++v3; /*0x42f4cf*/
        v6 += 8; /*0x42f4d0*/
        v5 += 16; /*0x42f4d3*/
        if ( v3 >= m_8 ) /*0x42f4d8*/
          return 1; /*0x42f4d8*/
      }
    }
    return 0; /*0x42f4da*/
}
} // namespace gamemd

// 0x42F3F0
namespace gamemd {
int BaseClass::Seek(int a2, int a3)
{
    int v3; // edx

    v3 = *(unsigned int *)&this->m_1[3] + 16 * a3; /*0x42f3fa*/
    *(unsigned int *)a2 = *(unsigned int *)v3; /*0x42f402*/
    *(unsigned int *)(a2 + 4) = *(unsigned int *)(v3 + 4); /*0x42f407*/
    *(unsigned char *)(a2 + 8) = *(unsigned char *)(v3 + 8); /*0x42f40d*/
    *(unsigned int *)(a2 + 12) = *(unsigned int *)(v3 + 12); /*0x42f413*/
    return a2; /*0x42f416*/
}
} // namespace gamemd

// 0x431410
namespace gamemd {
int HouseClass::createStartingUnits(int a2)
{
    int result; // eax
    int v4; // esi
    void **v5; // edi

    result = this->grindersCount; /*0x431413*/
    if ( result ) /*0x431418*/
    {
      result = 3 * a2; /*0x431421*/
      v4 = 0; /*0x431424*/
      v5 = &this->AbstractClass + 3 * a2; /*0x431426*/
      do /*0x43143f*/
      {
        if ( *v5 ) /*0x43142a*/
          result = Network::SendBeaconDelete((Network *)this, a2, v4); /*0x431433*/
        ++v4; /*0x431438*/
        ++v5; /*0x431439*/
      }
      while ( v4 < 3 ); /*0x43143f*/
    }
    return result; /*0x431444*/
}
} // namespace gamemd

// 0x4F83C0
namespace gamemd {
int HouseClass::GetFactoryProducing(int a2)
{
    int v2; // esi
    int v4; // eax
    int v5; // ecx
    int Type; // eax

    v2 = 0; /*0x4f83ca*/
    if ( *(int *)&stru_A83D50.__pad_C8[40] <= 0 ) /*0x4f83d1*/
      return 0; /*0x4f841f*/
    v4 = *(unsigned int *)&stru_A83D50.__pad_C8[28]; /*0x4f83d7*/
    while ( 1 ) /*0x4f83dc*/
    {
      v5 = *(unsigned int *)(v4 + 4 * v2); /*0x4f83dc*/
      if ( *(HouseClass **)(v5 + 108) == this ) /*0x4f83e2*/
        break; /*0x4f83e2*/
  LABEL_7:
      if ( ++v2 >= *(int *)&stru_A83D50.__pad_C8[40] ) /*0x4f8417*/
        return 0; /*0x4f8417*/
    }
    if ( !AbstractClass::GetType((AbstractClass *)v5) /*0x4f8407*/
      || (Type = AbstractClass::GetType(*(AbstractClass **)(*(unsigned int *)&stru_A83D50.__pad_C8[28] + 4 * v2)),
          (*(int (__thiscall **)(int))(*(unsigned int *)Type + 132))(Type) != a2) )
    {
      v4 = *(unsigned int *)&stru_A83D50.__pad_C8[28]; /*0x4f8409*/
      goto LABEL_7; /*0x4f8409*/
    }
    return *(unsigned int *)(*(unsigned int *)&stru_A83D50.__pad_C8[28] + 4 * v2); /*0x4f8419*/
}
} // namespace gamemd

// 0x4F8440
namespace gamemd {
void HouseClass::Update_TogglePower(double a2)
{
    (void)a2;
}
} // namespace gamemd

