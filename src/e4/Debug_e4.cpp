// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Debug_e4.hpp"

// 0x5BD0D0
namespace gamemd {
char Debug::ScrollText(CellStruct * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall Debug::ScrollText(int this, CellStruct *aP1)
{
  char result; // al
  int v4; // eax
  IUnknown *v5; // ebp
  IUnknown *v6; // edx
  IUnknown *v7; // edi
  IUnknown *v8; // ebx
  char *v9; // eax
  int v10; // eax
  _DWORD *v11; // [esp+4h] [ebp-10h]
  char *v12; // [esp+8h] [ebp-Ch]
  IUnknown *aP2; // [esp+Ch] [ebp-8h]
  char *i; // [esp+10h] [ebp-4h]
  char aP1a; // [esp+18h] [ebp+4h]

  result = *((_BYTE *)&(&g_MatrixTransformState)[22] + 10); /*0x5bd0d0*/
  if ( *((_BYTE *)&(&g_MatrixTransformState)[22] + 10) ) /*0x5bd0dd*/
  {
    v4 = *(_DWORD *)(this + 10020); /*0x5bd0ef*/
    v5 = (IUnknown *)(*(_DWORD *)(this + 10012) + v4); /*0x5bd108*/
    aP2 = (IUnknown *)(*(_DWORD *)(this + 10016) + *(_DWORD *)(this + 10024)); /*0x5bd10e*/
    v6 = (IUnknown *)(v4 + *(_DWORD *)(this + 10028)); /*0x5bd112*/
    *(_BYTE *)(this + 10036) = 0; /*0x5bd119*/
    v7 = (IUnknown *)((char *)v5 + strlen((const char *)aP1)); /*0x5bd127*/
    if ( (int)v7 > (int)v6 ) /*0x5bd12b*/
      v7 = v6; /*0x5bd12d*/
    v8 = v5; /*0x5bd131*/
    if ( (int)v5 < (int)v7 ) /*0x5bd133*/
    {
      v12 = (char *)aP2 + 20 * (_DWORD)v5 + 5 * (_DWORD)v5 + this; /*0x5bd148*/
      v9 = (char *)((char *)aP1 - (char *)v5); /*0x5bd15c*/
      v11 = (_DWORD *)(this + 4 * (_DWORD)&aP2->__pad_1D8[20 * (_DWORD)v5 + 28 + 5 * (_DWORD)v5]); /*0x5bd15e*/
      for ( i = (char *)((char *)aP1 - (char *)v5); ; v9 = i ) /*0x5bd162*/
      {
        aP1a = *((_BYTE *)&v8->field_0 + (_DWORD)v9); /*0x5bd16f*/
        *v12 = Debug_Helper(aP1a); /*0x5bd187*/
        *v11 = *(_DWORD *)(this + 10000); /*0x5bd18f*/
        if ( aP1a == 10 ) /*0x5bd197*/
        {
          v10 = *(_DWORD *)(this + 10016); /*0x5bd199*/
          *(_DWORD *)(this + 10012) = 0; /*0x5bd19f*/
          *(_DWORD *)(this + 10016) = v10 + 1; /*0x5bd1aa*/
        }
        else
        {
          ++*(_DWORD *)(this + 10012); /*0x5bd1b2*/
        }
        v8 = (IUnknown *)((char *)v8 + 1); /*0x5bd1c0*/
        v11 += 25; /*0x5bd1c9*/
        v12 += 25; /*0x5bd1cd*/
        if ( (int)v8 >= (int)v7 ) /*0x5bd1d1*/
          break; /*0x5bd1d1*/
      }
    }
    return Text::DrawRepeated((void *)this, v5, aP2, (char *)v7 - (char *)v5, 1); /*0x5bd1e0*/
  }
  return result; /*0x5bd1e8*/
}
}
} // namespace gamemd

// 0x6E61F0
namespace gamemd {
int Debug::AccumFlags()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall Debug_AccumFlags(_DWORD *this)
{
  int v1; // esi
  int i; // edi
  int v3; // eax

  v1 = this->q0A0; /*0x6e61f1*/
  for ( i = 0; v1; i |= v3 ) /*0x6e61fc*/
  {
    v3 = TriggerTypeClass::GetFlags(v1); /*0x6e6200*/
    v1 = *(_DWORD *)(v1 + 168); /*0x6e6205*/
  }
  return i; /*0x6e6213*/
}
}
} // namespace gamemd

// 0x4068E0
namespace gamemd {
void Debug::Log()
{
  ;
}
} // namespace gamemd

// 0x4A4AC0
namespace gamemd {
void Debug::Log_0()
{
  ;
}
} // namespace gamemd

// 0x5BD1F0
namespace gamemd {
char Debug::Printf()
{
{
    char result;
    char Buffer[256];
    int v3;
    char *Format;
    char ArgList;
    result = g_MiscFlag;
    if ( g_MiscFlag )
  {
    vsprintf(Buffer, Format, &ArgList);
    Buffer[255] = 0;
    return Debug::ScrollText(v3, Buffer);
  }
    return result;
}
}
} // namespace gamemd

// 0x5BD360
namespace gamemd {
char Debug_Helper(ObjectClass * aP0)
{
{
    char result;
    result = (char)aP0;
    switch ( (char)aP0 )
  {
    case 0xA: return 32;
    case 0xB3: return 124;
    case 0xC4: return 45;
    case 0xCD: return 61;
    case 0xDA: case 0xC2: case 0xBF: case 0xC6: case 0xC3: case 0xD1: case 0xC5: case 0xD8: case 0xB5: case 0xC0: case 0xC1: case 0xD9: case 0xD5: case 0xB4: return 43;
  }
    return result;
}
}
} // namespace gamemd
