// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Text_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/Delegate_e4.hpp"
#include "e4/classes/TriggerTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"

// 0x5BD0D0
namespace gamemd {
void Debug::ScrollText(CellStruct * aP1)
{

  char result; // al
  int v4; // eax
  int v5; // ebp
  int v6; // edx
  int v7; // edi
  int v8; // ebx
  const char *v9; // eax
  int v10; // eax
  unsigned int *v11; // [esp+4h] [ebp-10h]
  char *v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  const char *i; // [esp+10h] [ebp-4h]
  char v15; // [esp+18h] [ebp+4h]

  result = BYTE2(g_MissionQueueFrame.localVariables[493]); /*0x5bd0d0*/
  if ( BYTE2(g_MissionQueueFrame.localVariables[493]) ) /*0x5bd0dd*/
  {
    v4 = *((unsigned int *)this + 2505); /*0x5bd0ef*/
    v5 = *((unsigned int *)this + 2503) + v4; /*0x5bd108*/
    v13 = *((unsigned int *)this + 2504) + *((unsigned int *)this + 2506); /*0x5bd10e*/
    v6 = v4 + *((unsigned int *)this + 2507); /*0x5bd112*/
    *((unsigned char *)this + 10036) = 0; /*0x5bd119*/
    v7 = v5 + strlen((const char *)(aP1)); /*0x5bd127*/
    if ( v7 > v6 ) /*0x5bd12b*/
      v7 = v6; /*0x5bd12d*/
    v8 = v5; /*0x5bd131*/
    if ( v5 < v7 ) /*0x5bd133*/
    {
      v12 = (char *)(this + v13 + 20 * v5 + 5 * v5); /*0x5bd148*/
      v9 = (const char *)(&aP1[-v5]); /*0x5bd15c*/
      v11 = (unsigned int *)((char *)this + 4 * (v13 + 4 * (5 * v5 + 100) + 5 * v5 + 100)); /*0x5bd15e*/
      for ( i = &aP1[-v5]; ; v9 = i ) /*0x5bd162*/
      {
        v15 = v9[v8]; /*0x5bd16f*/
        *v12 = Debug_Helper((gamemd::ObjectClass *)(v15)); /*0x5bd187*/
        *v11 = *((unsigned int *)this + 2500); /*0x5bd18f*/
        if ( v15 == 10 ) /*0x5bd197*/
        {
          v10 = *((unsigned int *)this + 2504); /*0x5bd199*/
          *((unsigned int *)this + 2503) = 0; /*0x5bd19f*/
          *((unsigned int *)this + 2504) = v10 + 1; /*0x5bd1aa*/
        }
        else
        {
          ++*((unsigned int *)this + 2503); /*0x5bd1b2*/
        }
        ++v8; /*0x5bd1c0*/
        v11 += 25; /*0x5bd1c9*/
        v12 += 25; /*0x5bd1cd*/
        if ( v8 >= v7 ) /*0x5bd1d1*/
          break; /*0x5bd1d1*/
      }
    }
    return Text::DrawRepeated((Text *)this, v5, v13, v7 - v5, 1); /*0x5bd1e0*/
  }
  return result; /*0x5bd1e8*/

}
}
// 0x6E61F0
namespace gamemd {
int Debug::AccumFlags(void *a1_1)
{

  TriggerTypeClass *Debug_field_0xA0; // esi
  int i; // edi
  int Flags; // eax

  Debug_field_0xA0 = (TriggerTypeClass *)this->Debug_field_0xA0; /*0x6e61f1*/
  for ( i = 0; Debug_field_0xA0; i |= Flags ) /*0x6e61fc*/
  {
    Flags = TriggerTypeClass::GetFlags(Debug_field_0xA0); /*0x6e6200*/
    Debug_field_0xA0 = Debug_field_0xA0->NextTrigger; /*0x6e6205*/
  }
  return i; /*0x6e6213*/

}
}
// 0x4068E0
namespace gamemd {
int Debug::Log(void *a1_1, void *a2_1, void *a3_1, void *a4_1, void *a5_1, void *a6_1, void *a7_1)
{

  int result; // eax

  return result; /*0x4068e0*/

}
} // namespace gamemd

// 0x4A4AC0
namespace gamemd {
void Debug::Log_0(void *a1_1, void *a2_1)
{

  ; /*0x4a4ac0*/

}
} // namespace gamemd

// 0x5BD1F0
namespace gamemd {
char Debug::Printf()
{

  char result; // al
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF
  va_list va; // [esp+10Ch] [ebp+Ch] BYREF

  va_start(va, Format);
  result = byte_ABF23A; /*0x5bd1f0*/
  if ( byte_ABF23A ) /*0x5bd1fd*/
  {
    vsprintf(Buffer, Format, va); /*0x5bd214*/
    Buffer[255] = 0; /*0x5bd227*/
    return Debug::ScrollText((int)(Buffer)); /*0x5bd230*/
  }
  return result; /*0x5bd235*/

}
} // namespace gamemd

// 0x5BD360
namespace gamemd {
char Debug_Helper(ObjectClass * aP0)
{
  ObjectClass * result;

  result = (gamemd::ObjectClass *)((char)(aP0));
  switch ( aP0 ) /*0x5bd366*/
  {
    case 10: /*0x5bd366*/
      return 32; /*0x5bd368*/
    case -77: /*0x5bd366*/
      return 124; /*0x5bd371*/
    case -60: /*0x5bd366*/
      return 45; /*0x5bd37a*/
    case -51: /*0x5bd366*/
      return 61; /*0x5bd383*/
    case -38: /*0x5bd366*/
    case -62: /*0x5bd366*/
    case -65: /*0x5bd366*/
    case -58: /*0x5bd366*/
    case -61: /*0x5bd366*/
    case -47: /*0x5bd366*/
    case -59: /*0x5bd366*/
    case -40: /*0x5bd366*/
    case -75: /*0x5bd366*/
    case -64: /*0x5bd366*/
    case -63: /*0x5bd366*/
    case -39: /*0x5bd366*/
    case -43: /*0x5bd366*/
    case -76: /*0x5bd366*/
      return 43; /*0x5bd3c0*/
  }
  return (char)(result);
}
} // namespace gamemd
