// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6404D0
namespace gamemd {
int sub_6404D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6404D0()
{
  MEMORY[0xAC4E98] = 0; /*0x6404d2*/
  MEMORY[0xAC4E9C] = 0; /*0x6404d7*/
  MEMORY[0xAC4EA0] = 0; /*0x6404dc*/
  MEMORY[0xAC4EA4] = 0; /*0x6404e1*/
  return 0; /*0x6404e6*/
}
}
} // namespace gamemd

// 0x6404F0
namespace gamemd {
void sub_6404F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6404F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6404fc*/
  MEMORY[0xAC4EB0] = Math::Sqrt(v0 + v0); /*0x64050e*/
}
}
} // namespace gamemd

// 0x640520
namespace gamemd {
void sub_640520()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_640520()
{
  MEMORY[0xAC4F00] = MEMORY[0xAC4EB0] / 60.0; /*0x64052c*/
}
}
} // namespace gamemd

// 0x640540
namespace gamemd {
void sub_640540()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_640540()
{
  MEMORY[0xAC4EE8] = 1.0 / MEMORY[0xAC4F00]; /*0x64054c*/
}
}
} // namespace gamemd

// 0x640560
namespace gamemd {
void sub_640560()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_640560()
{
  MEMORY[0xAC4EE0] = 0.0174532925199433 * 45.0; /*0x64056c*/
}
}
} // namespace gamemd

// 0x640580
namespace gamemd {
void sub_640580()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_640580()
{
  MEMORY[0xAC4EB8] = 0.0174532925199433 * 60.0; /*0x64058c*/
}
}
} // namespace gamemd

// 0x6405A0
namespace gamemd {
void sub_6405A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6405A0()
{
  MEMORY[0xAC4E88] = 0.0174532925199433 * 90.0; /*0x6405ac*/
}
}
} // namespace gamemd

// 0x6405C0
namespace gamemd {
long long sub_6405C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_6405C0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC4E88] - MEMORY[0xAC4EB8]); /*0x6405d2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC4EB0] * 0.5); /*0x6405e6*/
  MEMORY[0xAC4F08] = result; /*0x6405eb*/
  return result; /*0x6405f0*/
}
}
} // namespace gamemd

// 0x640600
namespace gamemd {
void sub_640600()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_640600()
{
  MEMORY[0xAC4EC0] = Math::ArcTan((double)MEMORY[0xAC4F08] * 0.00390625); /*0x640617*/
}
}
} // namespace gamemd

// 0x640630
namespace gamemd {
void sub_640630()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_640630()
{
  MEMORY[0xAC4ED8] = Math::ArcTan((double)(2 * MEMORY[0xAC4F08]) / MEMORY[0xAC4EB0]); /*0x640652*/
}
}
} // namespace gamemd

// 0x640660
namespace gamemd {
long long sub_640660()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_640660()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC4F08]) + 0.5); /*0x64067b*/
  MEMORY[0xAC4EFC] = result; /*0x640680*/
  return result; /*0x640686*/
}
}
} // namespace gamemd

// 0x640690
namespace gamemd {
int sub_640690()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_640690()
{
  MEMORY[0xAC4EA8] = 0; /*0x640692*/
  MEMORY[0xAC4EAA] = 0; /*0x640698*/
  return 0; /*0x64069e*/
}
}
} // namespace gamemd

// 0x6406A0
namespace gamemd {
int sub_6406A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6406A0()
{
  MEMORY[0xAC4EC8] = 0; /*0x6406a2*/
  MEMORY[0xAC4ECC] = 0; /*0x6406a7*/
  MEMORY[0xAC4ED0] = 0; /*0x6406ac*/
  return 0; /*0x6406b1*/
}
}
} // namespace gamemd

// 0x6406C0
namespace gamemd {
int sub_6406C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_6406C0()
{
  MEMORY[0xAC4EF8] = 0; /*0x6406c5*/
  MEMORY[0xAC4EF0] = 128; /*0x6406cf*/
  MEMORY[0xAC4EF4] = 128; /*0x6406d4*/
  return 128; /*0x6406d9*/
}
}
} // namespace gamemd

// 0x6406E0
namespace gamemd {
int unknown_libname_27()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_27(_DWORD *this)
{
  *this = 0; /*0x6406e2*/
  return this; /*0x6406e8*/
}
}
} // namespace gamemd

// 0x642770
namespace gamemd {
int sub_642770()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_642770()
{
  MEMORY[0xAC4F18] = 0; /*0x642772*/
  MEMORY[0xAC4F1C] = 0; /*0x642777*/
  MEMORY[0xAC4F20] = 0; /*0x64277c*/
  MEMORY[0xAC4F24] = 0; /*0x642781*/
  return 0; /*0x642786*/
}
}
} // namespace gamemd

// 0x642790
namespace gamemd {
void sub_642790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_642790()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x64279c*/
  MEMORY[0xAC4F30] = Math::Sqrt(v0 + v0); /*0x6427ae*/
}
}
} // namespace gamemd

// 0x6427C0
namespace gamemd {
void sub_6427C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6427C0()
{
  MEMORY[0xAC5008] = MEMORY[0xAC4F30] / 60.0; /*0x6427cc*/
}
}
} // namespace gamemd

// 0x6427E0
namespace gamemd {
void sub_6427E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6427E0()
{
  MEMORY[0xAC4FF0] = 1.0 / MEMORY[0xAC5008]; /*0x6427ec*/
}
}
} // namespace gamemd

// 0x642800
namespace gamemd {
void sub_642800()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_642800()
{
  MEMORY[0xAC4FE8] = 0.0174532925199433 * 45.0; /*0x64280c*/
}
}
} // namespace gamemd

// 0x642820
namespace gamemd {
void sub_642820()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_642820()
{
  MEMORY[0xAC4F38] = 0.0174532925199433 * 60.0; /*0x64282c*/
}
}
} // namespace gamemd

// 0x642840
namespace gamemd {
void sub_642840()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_642840()
{
  MEMORY[0xAC4F10] = 0.0174532925199433 * 90.0; /*0x64284c*/
}
}
} // namespace gamemd

// 0x642860
namespace gamemd {
long long sub_642860()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_642860()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC4F10] - MEMORY[0xAC4F38]); /*0x642872*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC4F30] * 0.5); /*0x642886*/
  MEMORY[0xAC5010] = result; /*0x64288b*/
  return result; /*0x642890*/
}
}
} // namespace gamemd

// 0x6428A0
namespace gamemd {
void sub_6428A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6428A0()
{
  MEMORY[0xAC4F40] = Math::ArcTan((double)MEMORY[0xAC5010] * 0.00390625); /*0x6428b7*/
}
}
} // namespace gamemd

// 0x6428D0
namespace gamemd {
void sub_6428D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6428D0()
{
  MEMORY[0xAC4FE0] = Math::ArcTan((double)(2 * MEMORY[0xAC5010]) / MEMORY[0xAC4F30]); /*0x6428f2*/
}
}
} // namespace gamemd

// 0x642900
namespace gamemd {
long long sub_642900()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_642900()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC5010]) + 0.5); /*0x64291b*/
  MEMORY[0xAC5004] = result; /*0x642920*/
  return result; /*0x642926*/
}
}
} // namespace gamemd

// 0x642930
namespace gamemd {
int sub_642930()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_642930()
{
  MEMORY[0xAC4F28] = 0; /*0x642932*/
  MEMORY[0xAC4F2A] = 0; /*0x642938*/
  return 0; /*0x64293e*/
}
}
} // namespace gamemd

// 0x642940
namespace gamemd {
int sub_642940()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_642940()
{
  MEMORY[0xAC4F48] = 0; /*0x642942*/
  MEMORY[0xAC4F4C] = 0; /*0x642947*/
  MEMORY[0xAC4F50] = 0; /*0x64294c*/
  return 0; /*0x642951*/
}
}
} // namespace gamemd

// 0x642960
namespace gamemd {
int sub_642960()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_642960()
{
  MEMORY[0xAC5000] = 0; /*0x642965*/
  MEMORY[0xAC4FF8] = 128; /*0x64296f*/
  MEMORY[0xAC4FFC] = 128; /*0x642974*/
  return 128; /*0x642979*/
}
}
} // namespace gamemd

// 0x642980
namespace gamemd {
int sub_642980()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_642980()
{
  sub_6429E0(MEMORY[0xAC4F58]); /*0x642985*/
  return atexit(sub_6429A0); /*0x642995*/
}
}
} // namespace gamemd

// 0x6429A0
namespace gamemd {
void sub_6429A0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __cdecl sub_6429A0()
{
  MEMORY[0xAC4F58][0] = (int)&ProgressScreenClass::`vftable'; /*0x6429a5*/
  if ( MEMORY[0xAC4FB0] ) /*0x6429b1*/
  {
    __3_YAXPAX_Z(MEMORY[0xAC4FAC]); /*0x6429b9*/
    MEMORY[0xAC4FB0] = 0; /*0x6429c1*/
  }
  MEMORY[0xAC4FAC] = 0; /*0x6429c8*/
}
}
} // namespace gamemd

// 0x6429E0
namespace gamemd {
unsigned int * sub_6429E0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_6429E0(ProgressScreenClass *this)
{
  this->field_48 = 0; /*0x6429e8*/
  *(_DWORD *)this->__pad_4C = 0; /*0x6429eb*/
  *(_DWORD *)&this->__pad_4C[4] = 0; /*0x6429ee*/
  this->field_54 = 0; /*0x6429f1*/
  *((_BYTE *)this + 88) = 0; /*0x6429f4*/
  this->customSound_controller.AudioController_field_0C = 0; /*0x6429f7*/
  *((_BYTE *)this + 96) = 0; /*0x6429fa*/
  *((_BYTE *)this + 97) = 0; /*0x6429fd*/
  *((_BYTE *)this + 98) = 0; /*0x642a00*/
  this->customSound = 0; /*0x642a03*/
  *((_DWORD *)this + 26) = 0; /*0x642a06*/
  this->health = 0; /*0x642a09*/
  this->spawnStatus = -1; /*0x642a0c*/
  *((_DWORD *)this + 32) = -1; /*0x642a0f*/
  *((_BYTE *)this + 112) = 0; /*0x642a1d*/
  this->visibilityFlags = 0; /*0x642a20*/
  *(_DWORD *)this->__pad_0 = &ProgressScreenClass::`vftable'; /*0x642a23*/
  memset(&this->__pad_0[8], 0, 0x40u); /*0x642a29*/
  return this->__pad_0; /*0x642a2d*/
}
}
} // namespace gamemd

// 0x642FF0
namespace gamemd {
int sub_642FF0(int a1, int a2, char a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_642FF0(int a1, int a2, char a3)
{
  int v3; // ebx
  int Default; // eax
  int v5; // esi
  int Instance; // ebp
  _WORD *v7; // esi
  int v8; // edi
  int v9; // ebp
  int v11; // [esp+Ch] [ebp-34h]
  _DWORD v12[7]; // [esp+20h] [ebp-20h] BYREF
  __int16 v13; // [esp+3Eh] [ebp-2h]

  v3 = 0; /*0x643007*/
  v11 = Building::GetFoundationSize(v12, 0)[3] + 6; /*0x643021*/
  if ( a3 ) /*0x64302b*/
  {
    Default = BuildingType::FindDefault(0); /*0x64302f*/
    v5 = Default; /*0x643034*/
    if ( Default ) /*0x643038*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64303e*/
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 128))(v5); /*0x64304b*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643058*/
  v7 = v12; /*0x64305a*/
  v8 = 15; /*0x64305e*/
  do /*0x643077*/
  {
    *v7++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643070*/
    --v8; /*0x643076*/
  }
  while ( v8 ); /*0x643077*/
  v13 = 0; /*0x643082*/
  Text::MeasureWidth((int)v12, 0); /*0x643089*/
  v9 = *(_DWORD *)(Instance + 28); /*0x643092*/
  if ( v11 > v3 ) /*0x643098*/
    v3 = v11; /*0x64309a*/
  if ( v3 <= v9 ) /*0x64309e*/
    v3 = v9; /*0x6430a0*/
  return a1 + a2 * (v3 + 4); /*0x6430ae*/
}
}
} // namespace gamemd

// 0x6430C0
namespace gamemd {
int sub_6430C0(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_6430C0(char a1)
{
  int v1; // ebx
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  _WORD *v5; // esi
  int v6; // edi
  int v7; // esi
  int v8; // ebp
  int v10; // [esp+Ch] [ebp-38h]
  _DWORD v11[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v12; // [esp+42h] [ebp-2h]

  v1 = 0; /*0x6430db*/
  v10 = Building::GetFoundationSize(v11, 0)[3] + 6; /*0x6430f5*/
  if ( a1 ) /*0x6430ff*/
  {
    Default = BuildingType::FindDefault(0); /*0x643103*/
    v3 = Default; /*0x643108*/
    if ( Default ) /*0x64310c*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x643112*/
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x64311f*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x64312c*/
  v5 = v11; /*0x64312e*/
  v6 = 15; /*0x643132*/
  do /*0x64314b*/
  {
    *v5++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643144*/
    --v6; /*0x64314a*/
  }
  while ( v6 ); /*0x64314b*/
  v12 = 0; /*0x643156*/
  Text::MeasureWidth((int)v11, 0); /*0x64315d*/
  v7 = v10; /*0x643162*/
  v8 = *(_DWORD *)(Instance + 28); /*0x643166*/
  if ( v10 <= v1 ) /*0x64316c*/
    v7 = v1; /*0x64316e*/
  if ( v7 <= v8 ) /*0x643172*/
    v7 = v8; /*0x643174*/
  return (v7 - Building::GetFoundationSize(v11, 0)[3] - 2) / 2; /*0x6431a4*/
}
}
} // namespace gamemd

// 0x6431C0
namespace gamemd {
int sub_6431C0(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_6431C0(char a1)
{
  int v1; // edi
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  _WORD *v5; // esi
  int v6; // ebx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v11; // [esp+8h] [ebp-34h]
  _DWORD v12[7]; // [esp+1Ch] [ebp-20h] BYREF
  __int16 v13; // [esp+3Ah] [ebp-2h]

  v1 = 0; /*0x6431d6*/
  v11 = Building::GetFoundationSize(v12, 0)[3] + 6; /*0x6431f0*/
  if ( a1 ) /*0x6431fa*/
  {
    Default = BuildingType::FindDefault(0); /*0x6431fe*/
    v3 = Default; /*0x643203*/
    if ( Default ) /*0x643207*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64320d*/
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x64321a*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643228*/
  v5 = v12; /*0x64322a*/
  v6 = 15; /*0x64322e*/
  do /*0x643247*/
  {
    *v5++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643240*/
    --v6; /*0x643246*/
  }
  while ( v6 ); /*0x643247*/
  v13 = 0; /*0x643252*/
  Text::MeasureWidth((int)v12, 0); /*0x643259*/
  v7 = *(_DWORD *)(Instance + 28); /*0x643262*/
  if ( v11 > v1 ) /*0x643267*/
    v1 = v11; /*0x643269*/
  if ( v1 <= v7 ) /*0x64326d*/
    v1 = v7; /*0x64326f*/
  v8 = v1 + 4; /*0x643273*/
  v9 = BuildingType::FindDefault(0); /*0x64327b*/
  if ( !v9 ) /*0x643281*/
    return v8 / 2; /*0x64328e*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 124))(v9); /*0x64329a*/
  return (v8 - (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 128))(v9)) / 2; /*0x643289*/
}
}
} // namespace gamemd

// 0x6432C0
namespace gamemd {
int sub_6432C0(char a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall sub_6432C0(char a1)
{
  int v1; // ebx
  int Default; // eax
  int v3; // esi
  int Instance; // ebp
  _WORD *v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  int v9; // ebp
  int v10; // ebx
  _WORD *v11; // esi
  int v12; // edi
  int v14; // [esp+10h] [ebp-34h]
  _DWORD v15[7]; // [esp+24h] [ebp-20h] BYREF
  __int16 v16; // [esp+42h] [ebp-2h]

  v1 = 0; /*0x6432d8*/
  v14 = Building::GetFoundationSize(v15, 0)[3] + 6; /*0x6432f2*/
  if ( a1 ) /*0x6432fc*/
  {
    Default = BuildingType::FindDefault(0); /*0x643300*/
    v3 = Default; /*0x643305*/
    if ( Default ) /*0x643309*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x64330f*/
      v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 128))(v3); /*0x64331c*/
    }
  }
  Instance = TextRenderer::GetInstance(); /*0x643328*/
  v5 = v15; /*0x64332a*/
  v6 = 15; /*0x64332e*/
  do /*0x643347*/
  {
    *v5++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643340*/
    --v6; /*0x643346*/
  }
  while ( v6 ); /*0x643347*/
  v16 = 0; /*0x643352*/
  Text::MeasureWidth((int)v15, 0); /*0x643359*/
  v7 = *(_DWORD *)(Instance + 28); /*0x64335e*/
  v8 = v14; /*0x643361*/
  if ( v14 <= v1 ) /*0x643367*/
    v8 = v1; /*0x643369*/
  if ( v8 <= v7 ) /*0x64336d*/
    v8 = v7; /*0x64336f*/
  v9 = v8 + 4; /*0x643376*/
  v10 = TextRenderer::GetInstance(); /*0x64337e*/
  v11 = v15; /*0x643380*/
  v12 = 15; /*0x643384*/
  do /*0x64339d*/
  {
    *v11++ = *(_WORD *)CharToWideString(MEMORY[0x8258C0]); /*0x643396*/
    --v12; /*0x64339c*/
  }
  while ( v12 ); /*0x64339d*/
  v16 = 0; /*0x6433a8*/
  Text::MeasureWidth((int)v15, 0); /*0x6433af*/
  return (v9 - *(_DWORD *)(v10 + 28)) / 2; /*0x6433bb*/
}
}
} // namespace gamemd

// 0x6435B0
namespace gamemd {
char sub_6435B0(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __stdcall sub_6435B0(int a1, int a2, int a3)
{
  int Default; // eax
  int v4; // esi
  int v5; // edi
  char result; // al
  int v7; // esi
  int v8[4]; // [esp+8h] [ebp-10h] BYREF

  Default = BuildingType::FindDefault(0); /*0x6435b7*/
  v4 = Default; /*0x6435bc*/
  if ( Default ) /*0x6435c0*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)Default + 124))(Default); /*0x6435d1*/
    Default = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 128))(v4); /*0x6435d3*/
  }
  else
  {
    v5 = 0; /*0x6435c2*/
  }
  v8[0] = a1; /*0x6435e2*/
  v8[3] = Default; /*0x6435f8*/
  v8[1] = a2; /*0x6435fe*/
  v8[2] = v5; /*0x64360f*/
  result = 0; /*0x64361b*/
  v7 = (255 >> MEMORY[0x8A0DD4] << MEMORY[0x8A0DD0]) | (255 >> MEMORY[0x8A0DDC] << MEMORY[0x8A0DD8]); /*0x643635*/
  if ( MEMORY[0x88730C] ) /*0x643639*/
  {
    result = sub_4BAFE0((_DWORD *)MEMORY[0x88730C]); /*0x64363b*/
    if ( !result ) /*0x643642*/
      return Surface::BlitTransparent(v8, MEMORY[0x88730C], a3, v7); /*0x64365b*/
  }
  return result; /*0x643660*/
}
}
} // namespace gamemd

// 0x643EB0
namespace gamemd {
void sub_643EB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643EB0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x643ebc*/
  MEMORY[0xAC5028] = Math::Sqrt(v0 + v0); /*0x643ece*/
}
}
} // namespace gamemd

// 0x643EE0
namespace gamemd {
void sub_643EE0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643EE0()
{
  MEMORY[0xAC5078] = MEMORY[0xAC5028] / 60.0; /*0x643eec*/
}
}
} // namespace gamemd

// 0x643F00
namespace gamemd {
void sub_643F00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643F00()
{
  MEMORY[0xAC5060] = 1.0 / MEMORY[0xAC5078]; /*0x643f0c*/
}
}
} // namespace gamemd

// 0x643F20
namespace gamemd {
void sub_643F20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643F20()
{
  MEMORY[0xAC5058] = 0.0174532925199433 * 45.0; /*0x643f2c*/
}
}
} // namespace gamemd

// 0x643F40
namespace gamemd {
void sub_643F40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643F40()
{
  MEMORY[0xAC5030] = 0.0174532925199433 * 60.0; /*0x643f4c*/
}
}
} // namespace gamemd

// 0x643F60
namespace gamemd {
void sub_643F60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643F60()
{
  MEMORY[0xAC5018] = 0.0174532925199433 * 90.0; /*0x643f6c*/
}
}
} // namespace gamemd

// 0x643F80
namespace gamemd {
long long sub_643F80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_643F80()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC5018] - MEMORY[0xAC5030]); /*0x643f92*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC5028] * 0.5); /*0x643fa6*/
  MEMORY[0xAC5080] = result; /*0x643fab*/
  return result; /*0x643fb0*/
}
}
} // namespace gamemd

// 0x643FC0
namespace gamemd {
void sub_643FC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643FC0()
{
  MEMORY[0xAC5038] = Math::ArcTan((double)MEMORY[0xAC5080] * 0.00390625); /*0x643fd7*/
}
}
} // namespace gamemd

// 0x643FF0
namespace gamemd {
void sub_643FF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_643FF0()
{
  MEMORY[0xAC5050] = Math::ArcTan((double)(2 * MEMORY[0xAC5080]) / MEMORY[0xAC5028]); /*0x644012*/
}
}
} // namespace gamemd

// 0x644020
namespace gamemd {
long long sub_644020()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_644020()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC5080]) + 0.5); /*0x64403b*/
  MEMORY[0xAC5074] = result; /*0x644040*/
  return result; /*0x644046*/
}
}
} // namespace gamemd

// 0x644050
namespace gamemd {
int sub_644050()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_644050()
{
  MEMORY[0xAC5020] = 0; /*0x644052*/
  MEMORY[0xAC5022] = 0; /*0x644058*/
  return 0; /*0x64405e*/
}
}
} // namespace gamemd

// 0x644060
namespace gamemd {
int sub_644060()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_644060()
{
  MEMORY[0xAC5040] = 0; /*0x644062*/
  MEMORY[0xAC5044] = 0; /*0x644067*/
  MEMORY[0xAC5048] = 0; /*0x64406c*/
  return 0; /*0x644071*/
}
}
} // namespace gamemd

// 0x644080
namespace gamemd {
int sub_644080()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_644080()
{
  MEMORY[0xAC5070] = 0; /*0x644085*/
  MEMORY[0xAC5068] = 128; /*0x64408f*/
  MEMORY[0xAC506C] = 128; /*0x644094*/
  return 128; /*0x644099*/
}
}
} // namespace gamemd

// 0x644850
namespace gamemd {
ObjectClass * sub_644850()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_644850(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x644855*/
  v3 = (const void **)&stru_830620.__pad_579C[4388]; /*0x644857*/
  while ( _strcmpi(this, *v3) ) /*0x64486a*/
  {
    ++v3; /*0x64486c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x64486f*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[4408] ) /*0x644876*/
      return (ObjectClass *)-1; /*0x64487e*/
  }
  return v2; /*0x644878*/
}
}
} // namespace gamemd

// 0x6449F0
namespace gamemd {
void sub_6449F0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_6449F0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x6449fc*/
  MEMORY[0xAC5098] = Math::Sqrt(v0 + v0); /*0x644a0e*/
}
}
} // namespace gamemd

// 0x644A20
namespace gamemd {
void sub_644A20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_644A20()
{
  MEMORY[0xAC50E8] = MEMORY[0xAC5098] / 60.0; /*0x644a2c*/
}
}
} // namespace gamemd

// 0x644A40
namespace gamemd {
void sub_644A40()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_644A40()
{
  MEMORY[0xAC50D0] = 1.0 / MEMORY[0xAC50E8]; /*0x644a4c*/
}
}
} // namespace gamemd

// 0x644A60
namespace gamemd {
void sub_644A60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_644A60()
{
  MEMORY[0xAC50C8] = 0.0174532925199433 * 45.0; /*0x644a6c*/
}
}
} // namespace gamemd

// 0x644A80
namespace gamemd {
void sub_644A80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_644A80()
{
  MEMORY[0xAC50A0] = 0.0174532925199433 * 60.0; /*0x644a8c*/
}
}
} // namespace gamemd

// 0x644AA0
namespace gamemd {
void sub_644AA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_644AA0()
{
  MEMORY[0xAC5088] = 0.0174532925199433 * 90.0; /*0x644aac*/
}
}
} // namespace gamemd

// 0x644AC0
namespace gamemd {
long long sub_644AC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_644AC0()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC5088] - MEMORY[0xAC50A0]); /*0x644ad2*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC5098] * 0.5); /*0x644ae6*/
  MEMORY[0xAC50F0] = result; /*0x644aeb*/
  return result; /*0x644af0*/
}
}
} // namespace gamemd

// 0x644B00
namespace gamemd {
void sub_644B00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_644B00()
{
  MEMORY[0xAC50A8] = Math::ArcTan((double)MEMORY[0xAC50F0] * 0.00390625); /*0x644b17*/
}
}
} // namespace gamemd

// 0x644B30
namespace gamemd {
void sub_644B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_644B30()
{
  MEMORY[0xAC50C0] = Math::ArcTan((double)(2 * MEMORY[0xAC50F0]) / MEMORY[0xAC5098]); /*0x644b52*/
}
}
} // namespace gamemd

// 0x644B60
namespace gamemd {
long long sub_644B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_644B60()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * MEMORY[0xAC50F0]) + 0.5); /*0x644b7b*/
  MEMORY[0xAC50E4] = result; /*0x644b80*/
  return result; /*0x644b86*/
}
}
} // namespace gamemd

// 0x644B90
namespace gamemd {
int sub_644B90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_644B90()
{
  MEMORY[0xAC5090] = 0; /*0x644b92*/
  MEMORY[0xAC5092] = 0; /*0x644b98*/
  return 0; /*0x644b9e*/
}
}
} // namespace gamemd

// 0x644BA0
namespace gamemd {
int sub_644BA0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_644BA0()
{
  MEMORY[0xAC50B0] = 0; /*0x644ba2*/
  MEMORY[0xAC50B4] = 0; /*0x644ba7*/
  MEMORY[0xAC50B8] = 0; /*0x644bac*/
  return 0; /*0x644bb1*/
}
}
} // namespace gamemd

// 0x644BC0
namespace gamemd {
int sub_644BC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_644BC0()
{
  MEMORY[0xAC50E0] = 0; /*0x644bc5*/
  MEMORY[0xAC50D8] = 128; /*0x644bcf*/
  MEMORY[0xAC50DC] = 128; /*0x644bd4*/
  return 128; /*0x644bd9*/
}
}
} // namespace gamemd

// 0x6458D0
namespace gamemd {
ObjectClass * sub_6458D0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_6458D0(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x6458d5*/
  v3 = (const void **)&stru_830620.__pad_579C[4864]; /*0x6458d7*/
  while ( _strcmpi(this, *v3) ) /*0x6458ea*/
  {
    ++v3; /*0x6458ec*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x6458ef*/
    if ( (int)v3 >= (int)&stru_830620.__pad_579C[4884] ) /*0x6458f6*/
      return (ObjectClass *)-1; /*0x6458fe*/
  }
  return v2; /*0x6458f8*/
}
}
} // namespace gamemd

// 0x645B60
namespace gamemd {
ObjectClass * sub_645B60()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
ObjectClass *__thiscall sub_645B60(void *this)
{
  ObjectClass *v2; // edi
  const void **v3; // esi

  v2 = 0; /*0x645b65*/
  v3 = (const void **)&off_7F0248; /*0x645b67*/
  while ( _strcmpi(this, *v3) ) /*0x645b7a*/
  {
    ++v3; /*0x645b7c*/
    v2 = (ObjectClass *)((char *)v2 + 1); /*0x645b7f*/
    if ( (int)v3 >= (int)&flt_7F0278 ) /*0x645b86*/
      return 0; /*0x645b8d*/
  }
  return v2; /*0x645b88*/
}
}
} // namespace gamemd

// 0x645BA0
namespace gamemd {
char * sub_645BA0(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall sub_645BA0(int a1)
{
  return off_7F0248[a1]; /*0x645ba7*/
}
}
} // namespace gamemd

// 0x645CD0
namespace gamemd {
void sub_645CD0(float a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __thiscall sub_645CD0(float *this, float a2)
{
  *this = a2 * *this; /*0x645cd6*/
  *(this + 1) = a2 * *(this + 1); /*0x645cdf*/
  *(this + 2) = a2 * *(this + 2); /*0x645ce9*/
  *(this + 3) = a2 * *(this + 3); /*0x645cf3*/
}
}
} // namespace gamemd

// 0x645D60
namespace gamemd {
float * sub_645D60(float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__thiscall sub_645D60(float *this, float *a2)
{
  float *v3; // eax
  float *v4; // eax
  double v5; // st7
  int v6; // edx
  int v7; // ecx
  double v8; // st7
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  int v12; // edx
  unsigned __int8 v14; // c0
  unsigned __int8 v15; // c3
  int v17; // [esp+0h] [ebp-78h]
  int v18; // [esp+4h] [ebp-74h]
  int v19; // [esp+8h] [ebp-70h]
  int v20; // [esp+Ch] [ebp-6Ch]
  float v21; // [esp+18h] [ebp-60h] BYREF
  int v22; // [esp+1Ch] [ebp-5Ch]
  int v23; // [esp+20h] [ebp-58h]
  int v24; // [esp+24h] [ebp-54h]
  int v25; // [esp+28h] [ebp-50h]
  int v26; // [esp+2Ch] [ebp-4Ch]
  int v27; // [esp+30h] [ebp-48h]
  int v28; // [esp+34h] [ebp-44h]
  float v29[4]; // [esp+38h] [ebp-40h] BYREF
  float v30[4]; // [esp+48h] [ebp-30h] BYREF
  float v31[4]; // [esp+58h] [ebp-20h] BYREF
  float v32[4]; // [esp+68h] [ebp-10h] BYREF

  v21 = *this; /*0x645d6f*/
  v22 = this->vtable1; /*0x645d76*/
  v23 = this->vtable2; /*0x645d7d*/
  v24 = this->vtable3; /*0x645d88*/
  v3 = sub_6460C0(v29, a2); /*0x645d8e*/
  v4 = QuaternionMathMultiply(v30, &v21, v3); /*0x645d9c*/
  v5 = *(this + 3); /*0x645da3*/
  v6 = *((_DWORD *)v4 + 1); /*0x645da6*/
  v25 = *(_DWORD *)v4; /*0x645da9*/
  v7 = *((_DWORD *)v4 + 2); /*0x645daf*/
  v26 = v6; /*0x645db2*/
  v27 = v7; /*0x645db7*/
  *(float *)&v20 = -v5; /*0x645dbe*/
  v8 = *(this + 2); /*0x645dc1*/
  v28 = *((_DWORD *)v4 + 3); /*0x645dc5*/
  *(float *)&v19 = -v8; /*0x645dcb*/
  *(float *)&v18 = -*(this + 1); /*0x645dd4*/
  *(float *)&v17 = -*this; /*0x645de0*/
  v9 = (float *)Int4::Set(v30, v17, v18, v19, v20); /*0x645de3*/
  v29[0] = *v9; /*0x645dea*/
  v29[1] = v9[1]; /*0x645df1*/
  v29[2] = v9[2]; /*0x645df8*/
  v29[3] = v9[3]; /*0x645e03*/
  v10 = sub_6460C0(v31, a2); /*0x645e09*/
  v11 = QuaternionMathMultiply(v32, v29, v10); /*0x645e17*/
  v21 = *v11; /*0x645e1e*/
  v22 = *((_DWORD *)v11 + 1); /*0x645e25*/
  v12 = *((_DWORD *)v11 + 3); /*0x645e30*/
  v23 = *((_DWORD *)v11 + 2); /*0x645e33*/
  v24 = v12; /*0x645e3b*/
  if ( !(v14 | v15) ) /*0x645e97*/
  {
    *this = -*this; /*0x645ea2*/
    *(this + 1) = -*(this + 1); /*0x645ea9*/
    *(this + 2) = -*(this + 2); /*0x645eb1*/
    *(this + 3) = -*(this + 3); /*0x645eb9*/
  }
  return this; /*0x645ebe*/
}
}
} // namespace gamemd

// 0x645ED0
namespace gamemd {
float * QuaternionMathMultiply(ObjectClass * aP0, float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall QuaternionMathMultiply(ObjectClass *aP0, float *a1, float *a2)
{
  double v4; // st6
  double v5; // st7
  float v7; // [esp+4h] [ebp-40h]
  float v8; // [esp+8h] [ebp-3Ch]
  float v9; // [esp+Ch] [ebp-38h]
  float v10; // [esp+10h] [ebp-34h]
  float v11; // [esp+14h] [ebp-30h]
  float v12; // [esp+14h] [ebp-30h]
  float v13; // [esp+18h] [ebp-2Ch]
  float v14; // [esp+18h] [ebp-2Ch]
  float v15; // [esp+1Ch] [ebp-28h]
  float v16; // [esp+1Ch] [ebp-28h]
  float v17; // [esp+28h] [ebp-1Ch]
  float v18; // [esp+2Ch] [ebp-18h]
  float v19; // [esp+38h] [ebp-Ch]
  float v20; // [esp+3Ch] [ebp-8h]
  float a2a; // [esp+48h] [ebp+4h]

  v11 = *a2; /*0x645eea*/
  v13 = a2[1]; /*0x645ef4*/
  v15 = a2[2]; /*0x645efb*/
  a2a = a2[3]; /*0x645eff*/
  v17 = a1[1] * a2a; /*0x645f0f*/
  v18 = a1[2] * a2a; /*0x645f1b*/
  v4 = a1[3]; /*0x645f1f*/
  v12 = v4 * v11; /*0x645f28*/
  v14 = v13 * v4; /*0x645f32*/
  v16 = v15 * v4; /*0x645f3c*/
  v19 = a1[2] * *a2 - a2[2] * *a1; /*0x645f5c*/
  v20 = a2[1] * *a1 - a1[1] * *a2; /*0x645f6c*/
  v7 = a1[1] * a2[2] - a1[2] * a2[1] + v12 + *a1 * a2a; /*0x645f76*/
  v8 = v17 + v14 + v19; /*0x645f88*/
  v9 = v18 + v16 + v20; /*0x645f98*/
  v10 = v4 * a2[3] - (a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2); /*0x645fb9*/
  v5 = v9 * v9 + v8 * v8 + v10 * v10 + v7 * v7; /*0x645fe1*/
  if ( 0.0 != v5 ) /*0x645ff0*/
  {
    v7 = v7 / v5; /*0x645ff8*/
    v8 = v8 / v5; /*0x646002*/
    v9 = v9 / v5; /*0x64600c*/
    v10 = v10 / v5; /*0x646016*/
  }
  *(float *)aP0->__pad_0 = v7; /*0x646022*/
  *(float *)&aP0->__pad_0[4] = v8; /*0x646028*/
  *(float *)&aP0->__pad_0[8] = v9; /*0x64602f*/
  *(float *)&aP0->__pad_0[12] = v10; /*0x646036*/
  return (float *)aP0->__pad_0; /*0x646039*/
}
}
} // namespace gamemd

// 0x646040
namespace gamemd {
unsigned int * sub_646040(ObjectClass * aP0, float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__fastcall sub_646040(ObjectClass *aP0, float *a1, float *a2)
{
  double v4; // st7
  float *v5; // eax
  float v7; // [esp+4h] [ebp-20h] BYREF
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  ObjectClass *v10; // [esp+10h] [ebp-14h]
  float v11[4]; // [esp+14h] [ebp-10h] BYREF

  v7 = -*a2; /*0x64604e*/
  v8 = -a2[1]; /*0x646057*/
  v9 = -a2[2]; /*0x646064*/
  v4 = a2[3]; /*0x646068*/
  v11[1] = v8; /*0x64606f*/
  v11[0] = v7; /*0x646073*/
  *(float *)&v10 = v4; /*0x64607b*/
  v11[2] = v9; /*0x646083*/
  LODWORD(v11[3]) = v10; /*0x64608b*/
  v5 = QuaternionMathMultiply((ObjectClass *)&v7, a1, v11); /*0x646094*/
  *(float *)aP0->__pad_0 = *v5; /*0x64609d*/
  *(float *)&aP0->__pad_0[4] = v5[1]; /*0x6460a2*/
  *(float *)&aP0->__pad_0[8] = v5[2]; /*0x6460a8*/
  *(float *)&aP0->__pad_0[12] = v5[3]; /*0x6460ae*/
  return aP0->__pad_0; /*0x6460b3*/
}
}
} // namespace gamemd

// 0x6460C0
namespace gamemd {
float * sub_6460C0(float * a0, ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall sub_6460C0(float *a0, ObjectClass *aP1)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v3 = -*(float *)aP1->__pad_0; /*0x6460c7*/
  v4 = -*(float *)&aP1->__pad_0[4]; /*0x6460d0*/
  v5 = -*(float *)&aP1->__pad_0[8]; /*0x6460d9*/
  v6 = *(float *)&aP1->__pad_0[12]; /*0x6460e6*/
  *a0 = v3; /*0x6460ea*/
  a0[1] = v4; /*0x6460f0*/
  a0[2] = v5; /*0x6460f7*/
  a0[3] = v6; /*0x6460fe*/
  return a0; /*0x646101*/
}
}
} // namespace gamemd

// 0x646110
namespace gamemd {
float * sub_646110(float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall sub_646110(float *a1, float *a2)
{
  float v3; // [esp+0h] [ebp-10h]
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v3 = -*a2; /*0x646117*/
  v4 = -a2[1]; /*0x646120*/
  v5 = -a2[2]; /*0x646129*/
  v6 = a2[3]; /*0x646136*/
  *a1 = v3; /*0x64613a*/
  a1[1] = v4; /*0x646140*/
  a1[2] = v5; /*0x646147*/
  a1[3] = v6; /*0x64614e*/
  return a1; /*0x646151*/
}
}
} // namespace gamemd

// 0x646464
namespace gamemd {
int sub_646464()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// positive sp value has been detected, the output may be wrong!
int __userpurge sub_646464@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<esi>, int a4, int a5, int a6, int a7, int a8)
{
  *(_DWORD *)(a2 + 12) = a1; /*0x646464*/
  return a3; /*0x64646e*/
}
}
} // namespace gamemd

// 0x646480
namespace gamemd {
float * Quaternion_FromAxisAngle(float * a1, float * a2, float a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall Quaternion_FromAxisAngle(float *a1, float *a2, float a3)
{
  float v3; // ebx
  float v4; // ebp
  float v5; // edi
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v11; // [esp+18h] [ebp-28h]
  float v12; // [esp+24h] [ebp-1Ch]
  float v13; // [esp+28h] [ebp-18h]
  float v14; // [esp+2Ch] [ebp-14h]
  float v15; // [esp+30h] [ebp-10h]
  float v16; // [esp+30h] [ebp-10h]
  float v17; // [esp+34h] [ebp-Ch]
  float v18; // [esp+34h] [ebp-Ch]
  float v19; // [esp+38h] [ebp-8h]
  float v20; // [esp+38h] [ebp-8h]
  float v21; // [esp+3Ch] [ebp-4h]

  v3 = a2[1]; /*0x646484*/
  v4 = a2[2]; /*0x646488*/
  v5 = *a2; /*0x6464a5*/
  v11 = *a2; /*0x6464ac*/
  v7 = Math::Sqrt(v4 * v4 + v3 * v3 + v11 * v11); /*0x6464bf*/
  if ( v7 == 0.0 ) /*0x6464d2*/
  {
    v12 = v5; /*0x64650c*/
    v13 = v3; /*0x646510*/
    v14 = v4; /*0x646514*/
  }
  else
  {
    v15 = v11 / v7; /*0x6464da*/
    v12 = v15; /*0x6464e8*/
    v17 = v3 / v7; /*0x6464ec*/
    v13 = v17; /*0x6464f8*/
    v19 = v4 / v7; /*0x6464fc*/
    v14 = v19; /*0x646504*/
  }
  v8 = Math::SinCos(a3 * 0.5); /*0x646530*/
  v16 = v12 * v8; /*0x64653d*/
  v18 = v13 * v8; /*0x646547*/
  v20 = v14 * v8; /*0x646551*/
  v9 = Math::ArcTan2(a3 * 0.5); /*0x646557*/
  v21 = v9; /*0x646569*/
  *a1 = v16; /*0x64656d*/
  a1[1] = v18; /*0x646575*/
  a1[2] = v20; /*0x64657e*/
  a1[3] = v21; /*0x646581*/
  return a1; /*0x64657c*/
}
}
} // namespace gamemd

// 0x646730
namespace gamemd {
float * ConvertMatrixToQuaternion(float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall ConvertMatrixToQuaternion(float *a1, float *a2)
{
  double v3; // st7
  float *v4; // edi
  int v5; // ebx
  double v6; // st7
  float v7; // edx
  float *result; // eax
  float v9; // ecx
  float v10; // edx
  double v11; // st7
  double v12; // st7
  int v13; // ebp
  int v14; // edi
  double v15; // st7
  double v16; // st7
  int v17; // eax
  int v18; // edx
  double v19; // st6
  int v20; // ecx
  int v21; // eax
  float v22; // eax
  float v23; // edx
  float v24; // eax
  _DWORD v26[3]; // [esp+1Ch] [ebp-4Ch]
  float v27; // [esp+28h] [ebp-40h]
  float v28; // [esp+2Ch] [ebp-3Ch]
  float v29; // [esp+30h] [ebp-38h]
  float v30; // [esp+34h] [ebp-34h]
  _DWORD v31[12]; // [esp+38h] [ebp-30h]

  v26[2] = 10; /*0x64673d*/
  v3 = a2[10] + a2[5]; /*0x646744*/
  v31[10] = 10; /*0x646747*/
  v4 = a1; /*0x64674b*/
  v5 = 0; /*0x64674d*/
  v6 = v3 + *a2; /*0x646754*/
  v27 = 0.0; /*0x64675a*/
  v28 = 0.0; /*0x646762*/
  v29 = 0.0; /*0x64676a*/
  v30 = 1.0; /*0x646778*/
  v26[0] = 0; /*0x646780*/
  v26[1] = 5; /*0x646784*/
  v31[0] = 0; /*0x646788*/
  v31[1] = 1; /*0x64678c*/
  v31[2] = 2; /*0x646794*/
  v31[3] = 3; /*0x64679e*/
  v31[4] = 4; /*0x6467a6*/
  v31[5] = 5; /*0x6467b1*/
  v31[6] = 6; /*0x6467b5*/
  v31[7] = 7; /*0x6467bd*/
  v31[8] = 8; /*0x6467c5*/
  v31[9] = 9; /*0x6467cd*/
  v31[11] = 11; /*0x6467d5*/
  if ( v6 == 0.0 ) /*0x6467dd*/
  {
    v7 = v28; /*0x6467e3*/
    result = a1; /*0x6467e7*/
    *a1 = v27; /*0x6467ec*/
    v9 = v29; /*0x6467ee*/
    v4[1] = v7; /*0x6467f4*/
    v10 = v30; /*0x6467f7*/
    v4[2] = v9; /*0x6467fb*/
    v4[3] = v10; /*0x6467fe*/
  }
  else
  {
    if ( v6 <= 0.0 ) /*0x646810*/
    {
      v13 = *a2 < (double)a2[5]; /*0x646876*/
      if ( a2[v26[v13]] < (double)a2[10] ) /*0x64688c*/
        v13 = 2; /*0x64688e*/
      if ( v13 == 1 ) /*0x646896*/
      {
        v14 = 2; /*0x6468b0*/
      }
      else if ( v13 == 2 ) /*0x646899*/
      {
        v14 = 0; /*0x6468a7*/
        v5 = 1; /*0x6468a9*/
      }
      else
      {
        v14 = 1; /*0x64689b*/
        v5 = 2; /*0x6468a0*/
      }
      v15 = Math::Sqrt(a2[v26[v13]] - (a2[v26[v5]] + a2[v26[v14]]) + 1.0); /*0x6468de*/
      *(&v27 + v13) = v15 * 0.5; /*0x6468eb*/
      v16 = 0.5 / v15; /*0x6468f5*/
      v17 = v31[4 * v14 + v13]; /*0x646913*/
      v18 = v31[4 * v13 + v14]; /*0x646917*/
      v30 = (a2[v31[4 * v5 + v14]] - a2[v31[4 * v14 + v5]]) * v16; /*0x64691d*/
      v19 = a2[v17] + a2[v18]; /*0x646924*/
      v20 = v31[4 * v5 + v13]; /*0x64692f*/
      v21 = v31[4 * v13 + v5]; /*0x646933*/
      *(&v27 + v14) = v19 * v16; /*0x646939*/
      v4 = a1; /*0x646943*/
      *(&v27 + v5) = (a2[v20] + a2[v21]) * v16; /*0x646949*/
    }
    else
    {
      v11 = Math::Sqrt(v6 + 1.0); /*0x64681e*/
      v30 = v11 * 0.5; /*0x64682b*/
      v12 = 0.5 / v11; /*0x646832*/
      v27 = (a2[9] - a2[6]) * v12; /*0x646840*/
      v28 = (a2[2] - a2[8]) * v12; /*0x64684c*/
      v29 = (a2[4] - a2[1]) * v12; /*0x646858*/
    }
    v22 = v28; /*0x646953*/
    *v4 = v27; /*0x646959*/
    v23 = v29; /*0x64695b*/
    v4[1] = v22; /*0x64695f*/
    v24 = v30; /*0x646962*/
    v4[2] = v23; /*0x646966*/
    v4[3] = v24; /*0x646969*/
    return v4; /*0x64696c*/
  }
  return result; /*0x646801*/
}
}
} // namespace gamemd

// 0x646980
namespace gamemd {
float * Quaternion_ToMatrix(float * a1, float * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
float *__fastcall Quaternion_ToMatrix(float *a1, float *a2)
{
  double v2; // st7
  double v4; // st6
  double v5; // st5
  double v6; // st4
  double v7; // st7
  double v8; // st6
  float v9; // [esp+8h] [ebp-40h]
  float v10; // [esp+Ch] [ebp-3Ch]
  float v11; // [esp+10h] [ebp-38h]
  float v12; // [esp+14h] [ebp-34h]
  float v13[12]; // [esp+18h] [ebp-30h] BYREF

  v2 = a2[2] * a2[2]; /*0x646988*/
  v12 = a2[1] * a2[1]; /*0x646995*/
  v13[0] = 1.0 - (v12 + v2 + v12 + v2); /*0x6469a9*/
  v4 = a2[1] * *a2; /*0x6469b0*/
  v5 = a2[3] * a2[2]; /*0x6469b5*/
  v13[1] = v4 - v5 + v4 - v5; /*0x6469be*/
  v10 = a2[3] * a2[1]; /*0x6469c8*/
  v6 = *a2 * a2[2]; /*0x6469ce*/
  v9 = v6; /*0x6469d1*/
  v13[2] = v6 + v10 + v6 + v10; /*0x6469db*/
  v13[4] = v5 + v4 + v5 + v4; /*0x6469e3*/
  v11 = *a2 * *a2; /*0x6469ef*/
  v13[5] = 1.0 - (v11 + v2 + v11 + v2); /*0x646a03*/
  v7 = a2[1] * a2[2]; /*0x646a0c*/
  v8 = a2[3] * *a2; /*0x646a12*/
  v13[6] = v7 - v8 + v7 - v8; /*0x646a1a*/
  v13[8] = v9 - v10 + v9 - v10; /*0x646a28*/
  v13[11] = 0.0; /*0x646a39*/
  v13[7] = 0.0; /*0x646a41*/
  v13[3] = 0.0; /*0x646a49*/
  v13[9] = v8 + v7 + v8 + v7; /*0x646a53*/
  v13[10] = 1.0 - (v11 + v12 + v11 + v12); /*0x646a69*/
  qmemcpy(a1, v13, 0x30u); /*0x646a6d*/
  return a1; /*0x646a6f*/
}
}
} // namespace gamemd

// 0x646A80
namespace gamemd {
void sub_646A80()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646A80()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x646a8c*/
  MEMORY[0xAC6650] = Math::Sqrt(v0 + v0); /*0x646a9e*/
}
}
} // namespace gamemd

// 0x646AB0
namespace gamemd {
void sub_646AB0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646AB0()
{
  dbl_AFA460 = MEMORY[0xAC6650] / 60.0; /*0x646abc*/
}
}
} // namespace gamemd

// 0x646AD0
namespace gamemd {
void sub_646AD0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646AD0()
{
  dbl_AFA410 = 1.0 / dbl_AFA460; /*0x646adc*/
}
}
} // namespace gamemd

// 0x646AF0
namespace gamemd {
void sub_646AF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646AF0()
{
  dbl_AFA408 = 0.0174532925199433 * 45.0; /*0x646afc*/
}
}
} // namespace gamemd

// 0x646B10
namespace gamemd {
void sub_646B10()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646B10()
{
  dbl_AFA260 = 0.0174532925199433 * 60.0; /*0x646b1c*/
}
}
} // namespace gamemd

// 0x646B30
namespace gamemd {
void sub_646B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646B30()
{
  MEMORY[0xAC5208] = 0.0174532925199433 * 90.0; /*0x646b3c*/
}
}
} // namespace gamemd

// 0x646B50
namespace gamemd {
long long sub_646B50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_646B50()
{
  double v0; // st7
  __int64 result; // rax

  v0 = Math::Sin(MEMORY[0xAC5208] - dbl_AFA260); /*0x646b62*/
  result = Math::RoundToInt(v0 * MEMORY[0xAC6650] * 0.5); /*0x646b76*/
  dword_B0446C = result; /*0x646b7b*/
  return result; /*0x646b80*/
}
}
} // namespace gamemd

// 0x646B90
namespace gamemd {
void sub_646B90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646B90()
{
  dbl_AFA270 = Math::ArcTan((double)dword_B0446C * 0.00390625); /*0x646ba7*/
}
}
} // namespace gamemd

// 0x646BC0
namespace gamemd {
void sub_646BC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_646BC0()
{
  dbl_AFA330 = Math::ArcTan((double)(2 * dword_B0446C) / MEMORY[0xAC6650]); /*0x646be2*/
}
}
} // namespace gamemd

// 0x646BF0
namespace gamemd {
long long sub_646BF0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 sub_646BF0()
{
  __int64 result; // rax

  result = Math::RoundToInt((double)(4 * dword_B0446C) + 0.5); /*0x646c0b*/
  dword_AFA45C = result; /*0x646c10*/
  return result; /*0x646c16*/
}
}
} // namespace gamemd

// 0x646C20
namespace gamemd {
int sub_646C20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_646C20()
{
  MEMORY[0xAC6640] = 0; /*0x646c22*/
  return 0; /*0x646c2e*/
}
}
} // namespace gamemd

// 0x646C30
namespace gamemd {
int sub_646C30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_646C30()
{
  dword_AFA320 = 0; /*0x646c32*/
  dword_AFA324 = 0; /*0x646c37*/
  dword_AFA328 = 0; /*0x646c3c*/
  return 0; /*0x646c41*/
}
}
} // namespace gamemd

// 0x646C50
namespace gamemd {
int sub_646C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_646C50()
{
  dword_AFA428 = 0; /*0x646c55*/
  dword_AFA420 = 128; /*0x646c5f*/
  dword_AFA424 = 128; /*0x646c64*/
  return 128; /*0x646c69*/
}
}
} // namespace gamemd

// 0x646C70
namespace gamemd {
int sub_646C70()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_646C70()
{
  MEMORY[0xAC6630] = 0; /*0x646c72*/
  MEMORY[0xAC6634] = 0; /*0x646c77*/
  MEMORY[0xAC6638] = 0; /*0x646c7c*/
  MEMORY[0xAC663C] = 0; /*0x646c81*/
  return 0; /*0x646c86*/
}
}
} // namespace gamemd

// 0x646D00
namespace gamemd {
unsigned int * sub_646D00()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall sub_646D00(_DWORD *this)
{
  *this = -1; /*0x646d04*/
  *(this + 1) = 0; /*0x646d0a*/
  *(this + 2) = 0; /*0x646d0d*/
  *(this + 3) = 0; /*0x646d10*/
  *(this + 4) = 0; /*0x646d13*/
  *(this + 5) = 0; /*0x646d16*/
  return this; /*0x646d19*/
}
}
} // namespace gamemd

// 0x646D20
namespace gamemd {
unsigned int * sub_646D20()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *sub_646D20()
{
  _DWORD *result; // eax
  int v1; // edx

  result = &unk_AFA280; /*0x646d20*/
  v1 = 7; /*0x646d25*/
  do /*0x646d45*/
  {
    *(result - 2) = -1; /*0x646d2c*/
    *(result - 1) = 0; /*0x646d33*/
    *result = 0; /*0x646d36*/
    result[1] = 0; /*0x646d38*/
    result[2] = 0; /*0x646d3b*/
    result[3] = 0; /*0x646d3e*/
    result += 6; /*0x646d41*/
    --v1; /*0x646d44*/
  }
  while ( v1 ); /*0x646d45*/
  return result; /*0x646d47*/
}
}
} // namespace gamemd

// 0x646D90
namespace gamemd {
int sub_646D90()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_646D90()
{
  MEMORY[0xAC6648] = Timer::GetTicks(); /*0x646d9f*/
  return atexit(nullsub_216); /*0x646daa*/
}
}
} // namespace gamemd

// 0x646DC0
namespace gamemd {
unsigned int * sub_646DC0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *sub_646DC0()
{
  _DWORD *result; // eax
  int v1; // edx

  result = &unk_AFA360; /*0x646dc0*/
  v1 = 7; /*0x646dc5*/
  do /*0x646de5*/
  {
    *(result - 2) = -1; /*0x646dcc*/
    *(result - 1) = 0; /*0x646dd3*/
    *result = 0; /*0x646dd6*/
    result[1] = 0; /*0x646dd8*/
    result[2] = 0; /*0x646ddb*/
    result[3] = 0; /*0x646dde*/
    result += 6; /*0x646de1*/
    --v1; /*0x646de4*/
  }
  while ( v1 ); /*0x646de5*/
  return result; /*0x646de7*/
}
}
} // namespace gamemd

// 0x646F70
namespace gamemd {
char sub_646F70(IUnknown * a1, int a2, int a3, char a4, int a5, int a6, int a7)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_646F70(IUnknown *a1, int a2, int a3, char a4, int a5, int a6, int a7)
{
  char *v7; // eax
  IUnknown *v9; // [esp-20h] [ebp-98h]
  char v10[112]; // [esp+8h] [ebp-70h] BYREF

  LOBYTE(v9) = a4; /*0x646fbd*/
  v7 = sub_4C68E0( /*0x646fcd*/
         (AnimClass *)v10,
         *(_DWORD *)&HouseClass_Player->__pad_28[8],
         a3,
         v9,
         a1,
         *(_DWORD *)a2,
         *(_BYTE *)(a2 + 4),
         *(_DWORD *)a5,
         *(_BYTE *)(a5 + 4),
         a6,
         a7);
  if ( Networking_LastEventIndex >= 128 ) /*0x646fdc*/
    return 0; /*0x647036*/
  qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v7, 0x6Fu); /*0x646ff8*/
  g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x647009*/
  ++Networking_LastEventIndex; /*0x647020*/
  Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x647025*/
  return 1; /*0x64702d*/
}
}
} // namespace gamemd

// 0x647260
namespace gamemd {
void ProcessNetworkEvents()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ProcessNetworkEvents()
{
  int v0; // ecx
  int v1; // ebx
  char *v2; // edi
  char *v3; // esi
  char *v4; // edi
  int Buffer; // [esp+10h] [ebp-74h] BYREF
  _BYTE v6[108]; // [esp+14h] [ebp-70h] BYREF
  __int16 v7; // [esp+80h] [ebp-4h]
  char v8; // [esp+82h] [ebp-2h]

  if ( (MEMORY[0xA8D5F8] & 2) != 0 ) /*0x64726e*/
  {
    v6[0] = 0; /*0x64727a*/
    if ( EventQueue::Process(MEMORY[0x87F770]) ) /*0x64727f*/
    {
      if ( EventQueue::Read(MEMORY[0x87F770]) == 27 || (MEMORY[0xA8D5F8] & 4) != 0 ) /*0x6472a5*/
      {
        MEMORY[0xA8E9A0] = 0; /*0x6472aa*/
        return; /*0x6472b5*/
      }
    }
    else if ( (MEMORY[0xA8D5F8] & 4) != 0 /*0x6472eb*/
           && (int)MEMORY[0xA8ED84] > 0
           && (MEMORY[0xAC50F8] != (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640])
            || MEMORY[0xAC5200] != (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640])) )
    {
      MEMORY[0xA8E9A0] = 0; /*0x6472f0*/
      return; /*0x6472fb*/
    }
    MEMORY[0xAC50F8] = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 44))(MEMORY[0x887640]); /*0x64730d*/
    MEMORY[0xAC5200] = (*(int (__thiscall **)(int))(*(_DWORD *)MEMORY[0x887640] + 48))(MEMORY[0x887640]); /*0x647317*/
    ComputeNetworkFrameCRC(); /*0x64731c*/
    v0 = (int)MEMORY[0xA8ED84]; /*0x647321*/
    dword_B04474[(unsigned __int8)MEMORY[0xA8ED84]] = *(_DWORD *)MEMORY[0xAC51FC]; /*0x647334*/
    if ( v0 >= MEMORY[0xA8E30C] ) /*0x647342*/
    {
      if ( byte_B04880 ) /*0x64734b*/
        LogMultiplayToSync_MPDEBUG(v0 % 256, 0); /*0x64735f*/
      else
        Multiplay::LogToSYNC_NOMPDEBUG(0); /*0x647368*/
      GameClass::Shutdown(); /*0x64736d*/
      ExitProgram(0); /*0x647374*/
    }
    if ( v0 ) /*0x647386*/
    {
      if ( MEMORY[0xA8B238][0] /*0x6473b7*/
        && MEMORY[0xA8B238][0] != 5
        && MEMORY[0xA8B24C] == 2
        && v0 != MEMORY[0xA8B554] * ((MEMORY[0xA8B554] + v0 - 1) / (unsigned int)MEMORY[0xA8B554]) )
      {
        return; /*0x6473b7*/
      }
    }
    else if ( MEMORY[0xA8B238][0] ) /*0x64738a*/
    {
      return; /*0x64738a*/
    }
    if ( CCFileClass::Read(MEMORY[0xA8D58C], &Buffer, 4) != 4 ) /*0x6473cf*/
      goto LABEL_30; /*0x6473cf*/
    v1 = 0; /*0x6473d9*/
    if ( Buffer > 0 ) /*0x6473dd*/
    {
      while ( CCFileClass::Read(MEMORY[0xA8D58C], v6, 111) == 111 ) /*0x6473fd*/
      {
        v6[1] &= ~1u; /*0x647414*/
        if ( unk_8B41F8 < 0x4000 ) /*0x647418*/
        {
          v2 = &unk_8B4204[111 * unk_8B4200]; /*0x64742e*/
          qmemcpy(v2, v6, 0x6Cu); /*0x647435*/
          v2 += 108; /*0x647435*/
          *(_WORD *)v2 = v7; /*0x647437*/
          v2[2] = v8; /*0x647439*/
          dword_A70204[unk_8B4200] = timeGetTime(); /*0x647442*/
          unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64745c*/
          ++unk_8B41F8; /*0x647462*/
        }
        if ( ++v1 >= Buffer ) /*0x64746e*/
          goto LABEL_29; /*0x64746e*/
      }
      goto LABEL_30; /*0x6473fd*/
    }
LABEL_29:
    if ( !Network::ProcessEventList(0, 0, 0) ) /*0x6474a0*/
    {
LABEL_30:
      MEMORY[0xA8E9A0] = 0; /*0x6474a9*/
      return; /*0x6474b7*/
    }
LABEL_31:
    Network_Process_64D990(0); /*0x6474b8*/
  }
  else
  {
    switch ( MEMORY[0xA8B238][0] ) /*0x6474d5*/
    {
      case 0: /*0x6474d5*/
      case 5: /*0x6474d5*/
        while ( Networking_LastEventIndex ) /*0x6474e3*/
        {
          byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x647504*/
          if ( unk_8B41F8 < 0x4000 ) /*0x647515*/
          {
            v3 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x647522*/
            v4 = &unk_8B4204[111 * unk_8B4200]; /*0x647539*/
            qmemcpy(v4, v3, 0x6Cu); /*0x647540*/
            v3 += 108; /*0x647540*/
            v4 += 108; /*0x647540*/
            *(_WORD *)v4 = *(_WORD *)v3; /*0x647542*/
            v4[2] = v3[2]; /*0x647544*/
            dword_A70204[unk_8B4200] = timeGetTime(); /*0x64754d*/
            unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64755f*/
            ++unk_8B41F8; /*0x64756a*/
          }
          Network_Process_652540(&Networking_LastEventIndex); /*0x647574*/
        }
        if ( (MEMORY[0xA8D5F8] & 1) != 0 ) /*0x64758d*/
          Network_Process_64D9E0(); /*0x64758f*/
        if ( Network::ProcessEventList(0, 0, 0) ) /*0x6475ae*/
          goto LABEL_31; /*0x6475b5*/
        MEMORY[0xA8E9A0] = 0; /*0x6475be*/
        break; /*0x6475c7*/
      case 1: /*0x6474d5*/
      case 2: /*0x6474d5*/
      case 3: /*0x6474d5*/
      case 4: /*0x6474d5*/
        Network::QueueProcessingLoop(); /*0x6475c8*/
        break; /*0x6475c8*/
      default:
        return;
    }
  }
}
}
} // namespace gamemd

// 0x648350
namespace gamemd {
void RunNetworkGameLoop()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void RunNetworkGameLoop()
{
  int v0; // eax
  void *v1; // ebx
  int *v2; // esi
  int v3; // edi
  signed int v4; // eax
  int v5; // edi
  signed int v6; // eax
  int v7; // edi
  int v8; // ecx
  wchar_t *v9; // ebx
  int v10; // edi
  int *v11; // ebp
  void *v12; // [esp+10h] [ebp-60h]
  unsigned int v13; // [esp+18h] [ebp-58h] BYREF
  int v14; // [esp+1Ch] [ebp-54h] BYREF
  int v15; // [esp+20h] [ebp-50h] BYREF
  int v16; // [esp+24h] [ebp-4Ch] BYREF
  int v17; // [esp+28h] [ebp-48h] BYREF
  DWORD v18; // [esp+2Ch] [ebp-44h] BYREF
  DWORD TicksTimer; // [esp+34h] [ebp-3Ch]
  int v20; // [esp+38h] [ebp-38h]
  int v21; // [esp+3Ch] [ebp-34h]
  DWORD v22; // [esp+40h] [ebp-30h]
  int v23; // [esp+44h] [ebp-2Ch]
  int v24; // [esp+48h] [ebp-28h]
  DWORD v25; // [esp+4Ch] [ebp-24h]
  int v26; // [esp+50h] [ebp-20h]
  int v27; // [esp+54h] [ebp-1Ch]
  DWORD v28; // [esp+58h] [ebp-18h]
  int v29; // [esp+5Ch] [ebp-14h]
  int v30; // [esp+60h] [ebp-10h]
  DWORD v31; // [esp+64h] [ebp-Ch]
  int v32; // [esp+68h] [ebp-8h]
  int v33; // [esp+6Ch] [ebp-4h]

  Debug::Log(); /*0x64835c*/
  if ( MEMORY[0xA8B238][0] < 3 || MEMORY[0xA8B238][0] > 4 ) /*0x648371*/
  {
    v12 = (void *)MEMORY[0xA8EA74]; /*0x648393*/
    v2 = &MEMORY[0xA8EA70]; /*0x648397*/
    v1 = (void *)MEMORY[0xA8EA74]; /*0x64839c*/
    v0 = MEMORY[0xA8EA78] - 14; /*0x6483a0*/
  }
  else
  {
    v0 = MEMORY[0xA8DA40]; /*0x648373*/
    v1 = &MEMORY[0xA8D812]; /*0x648378*/
    v12 = &MEMORY[0xA8D812]; /*0x64837d*/
    v2 = MEMORY[0xA8E9C0]; /*0x648381*/
  }
  LOWORD(dword_AFA400) = BuildNetworkEventPacket((int)v2, (int)v1, v0, (int)MEMORY[0xA8B550], dword_AFA400) /*0x6483c1*/
                       + dword_AFA400;
  TicksTimer = Timer::GetTicks(); /*0x6483d5*/
  v21 = 15; /*0x6483d9*/
  v22 = Timer::GetTicks(); /*0x6483ea*/
  v24 = 600; /*0x6483ee*/
  v18 = Timer::GetTicks(); /*0x6483fb*/
  Debug::Log(); /*0x648404*/
  while ( 2 ) /*0x64840c*/
  {
    EventQueue::Process(MEMORY[0x87F770]); /*0x64840c*/
    v3 = v21; /*0x64841b*/
    if ( TicksTimer == -1 ) /*0x648424*/
    {
LABEL_9:
      if ( v3 ) /*0x64843b*/
        goto LABEL_11; /*0x64843b*/
      goto LABEL_10; /*0x64843b*/
    }
    v4 = Timer::GetTicks() - TicksTimer; /*0x64842f*/
    if ( v4 < v3 ) /*0x648435*/
    {
      v3 -= v4; /*0x648437*/
      goto LABEL_9; /*0x648437*/
    }
LABEL_10:
    v25 = Timer::GetTicks(); /*0x64843d*/
    v27 = 15; /*0x648458*/
    TicksTimer = v25; /*0x64845c*/
    v20 = v26; /*0x648460*/
    v21 = 15; /*0x648464*/
    Debug::Log(); /*0x648468*/
    SendNetworkFrameSync(v2, dword_AFA400); /*0x64847e*/
LABEL_11:
    (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648483*/
    v5 = v24; /*0x64848e*/
    if ( v22 != -1 ) /*0x648494*/
    {
      v6 = Timer::GetTicks() - v22; /*0x64849f*/
      if ( v6 >= v5 ) /*0x6484a5*/
      {
LABEL_33:
        Debug::Log(); /*0x648664*/
        return; /*0x648678*/
      }
      v5 -= v6; /*0x6484ab*/
    }
    if ( !v5 ) /*0x6484af*/
      goto LABEL_33; /*0x6484af*/
    v7 = 1; /*0x6484b5*/
    do /*0x64858f*/
    {
      if ( !(*(int (__thiscall **)(int *, void *, unsigned int *, int *))(*v2 + 12))(v2, v1, &v13, &v14) ) /*0x6484c9*/
        break; /*0x6484ce*/
      EventQueue::Process(MEMORY[0x87F770]); /*0x6484da*/
      if ( MEMORY[0xA8B238][0] == 1 || MEMORY[0xA8B238][0] == 2 ) /*0x6484ec*/
      {
        switch ( ProcessNetworkMessage((int)v1, 0) ) /*0x648528*/
        {
          case 0: /*0x648528*/
            goto LABEL_23;
          case 4: /*0x648528*/
            (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648533*/
            v28 = Timer::GetTicks(); /*0x648544*/
            TicksTimer = v28; /*0x648548*/
            v30 = 15; /*0x648550*/
            v21 = 15; /*0x648554*/
            v20 = v29; /*0x64855c*/
            v31 = Timer::GetTicks(); /*0x64856e*/
            v33 = 600; /*0x648572*/
            v22 = v31; /*0x648576*/
            v23 = v32; /*0x64857a*/
            v24 = 600; /*0x64857e*/
            goto LABEL_23; /*0x64857e*/
          default:
            return;
        }
        return;
      }
      if ( ProcessNetworkFrameSync((int)v2, (int)v1, v14, v13, (int)&dword_AFA358, &v18) == 3 ) /*0x64850e*/
        goto LABEL_33; /*0x64850e*/
LABEL_23:
      (*(void (__thiscall **)(int *))(*v2 + 4))(v2); /*0x648586*/
      v8 = v7++; /*0x648589*/
    }
    while ( v8 < 64 ); /*0x64858f*/
    Event::Dispatch(); /*0x648595*/
    if ( !MEMORY[0xA8EDA0] ) /*0x6485a1*/
    {
      InputManager_ProcessEvents::Vtable((int *)&MEMORY[0x87F7E8], &v15, &v17, &v16); /*0x6485b7*/
      SyncDelayClass::ProcessNetworkSync(&v15); /*0x6485c0*/
      ((void (__thiscall *)(LPPERSISTSTREAM))MEMORY[0x887324]->__tail_0[2].GetSizeMax)(MEMORY[0x887324]); /*0x6485cd*/
      TacticalMap::Redraw(&MEMORY[0x87F7E8]); /*0x6485d5*/
    }
    v9 = MEMORY[0xA8ED84] + 500; /*0x6485e7*/
    v10 = 0; /*0x6485ed*/
    if ( (*(int (__thiscall **)(int *))(*v2 + 16))(v2) > 0 ) /*0x6485f4*/
    {
      v11 = &dword_AFA358; /*0x6485f6*/
      do /*0x648615*/
      {
        if ( *v11 < (int)v9 ) /*0x648600*/
          v9 = (wchar_t *)*v11; /*0x648602*/
        ++v10; /*0x64860c*/
        v11 += 6; /*0x64860d*/
      }
      while ( v10 < (*(int (__thiscall **)(int *))(*v2 + 16))(v2) ); /*0x648615*/
    }
    if ( (int)((char *)v9 + MEMORY[0xA8B554]) < (int)MEMORY[0xA8ED84] ) /*0x64862a*/
    {
      Debug::Log(); /*0x64863e*/
      v1 = v12; /*0x648643*/
      continue; /*0x64864a*/
    }
    break;
  }
  Debug::Log(); /*0x64867f*/
  Debug::Log(); /*0x648689*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x64869f*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486b2*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486c5*/
  SendNetworkFrameSync(v2, dword_AFA400); /*0x6486d8*/
}
}
} // namespace gamemd

// 0x648710
namespace gamemd {
int QueueNetworkProcessor()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// int __fastcall QueueNetworkProcessor(
//         CellStruct *aP0,
//         int *a1,
//         int arg0,
//         int arg4,
//         ScenarioClass *a4,
//         int a6,
//         __int16 arg10,
//         int *a7)
// {
//   int *v8; // ebx
//   MSVQAnim *v9; // esi
//   ObjectClass *v10; // ebp
//   ObjectClass *Time; // edi
//   int *v12; // ebp
//   ObjectClass *v13; // edi
//   ObjectClass *v14; // esi
//   ObjectClass *v15; // eax
//   char *v16; // eax
//   IPXManagerClass *v17; // edx
//   int v18; // esi
//   int v19; // eax
//   _WORD *v20; // edi
//   int v21; // edx
//   int v22; // esi
//   signed int eax18; // eax
//   MSVQAnim *v23; // esi
//   signed int eax25; // eax
//   MSVQAnim *v25; // esi
//   int v27; // eax
//   int v28; // eax
//   BOOL v29; // edi
//   int v30; // esi
//   char *v31; // eax
//   int v32; // ebp
//   char *v33; // esi
//   char *v34; // edi
//   SkirmishDialog *Indirect; // eax
//   int RemainingMs; // kr04_4
//   HWND DlgItem; // esi
//   wchar_t *StringCSF; // eax
//   ObjectClass *v38; // esi
//   CellStruct *v40; // ebp
//   CellStruct *v41; // eax
//   int v42; ... [42436 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x649CA0
namespace gamemd {
int BuildNetworkEventPacket(int a1, int a2, int a3, int a4, short a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall BuildNetworkEventPacket(int a1, int a2, int a3, int a4, __int16 a5)
{
  int v6; // ecx
  int v8; // ecx
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // edx
  char *v13; // esi
  char *v14; // edi
  char *v15; // esi
  char v16; // al
  int v17; // edi
  int v18; // ebp
  char v19; // al
  int v20; // esi
  int v22; // [esp+10h] [ebp-1Ch]
  int v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  int v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h] BYREF
  int v28; // [esp+28h] [ebp-4h]

  v6 = Networking_LastEventIndex; /*0x649caf*/
  v26 = a1; /*0x649cc4*/
  v25 = 0; /*0x649cc8*/
  v22 = Networking_LastEventIndex; /*0x649ccc*/
  if ( Networking_LastEventIndex > 0x2000 - unk_8B41F8 ) /*0x649cd0*/
    v22 = 0x2000 - unk_8B41F8; /*0x649cd2*/
  v28 = Networking_LastEventIndex; /*0x649cd6*/
  while ( 1 )
  {
    if ( !v22 || !v6 || (v24 = 1, MEMORY[0xA8B54C] == 1) ) /*0x649cf9*/
      v24 = 0; /*0x649cfb*/
    *(_BYTE *)a2 = 28; /*0x649cff*/
    v27 = 0; /*0x649d0a*/
    v8 = a4; /*0x649d1b*/
    *(_DWORD *)(a2 + 3) = MEMORY[0xA8B24C] == 2
                        ? (wchar_t *)(MEMORY[0xA8B554]
                                    * (((unsigned int)MEMORY[0xA8ED84] + MEMORY[0xA8B554] + a4 - 1)
                                     / MEMORY[0xA8B554]))
                        : (wchar_t *)((char *)MEMORY[0xA8ED84] + a4);
    *(_BYTE *)(a2 + 2) = *((_BYTE *)HouseClass_Player + 48); /*0x649d49*/
    *(_DWORD *)(a2 + 7) = *(_DWORD *)MEMORY[0xAC51FC]; /*0x649d57*/
    *(_WORD *)(a2 + 11) = a5; /*0x649d5a*/
    *(_BYTE *)(a2 + 13) = a4; /*0x649d5e*/
    v9 = MEMORY[0xA8B24C] != 0 ? 14 : 111;
    if ( MEMORY[0xA8B24C] )
    {
      v9 = MEMORY[0xA8B24C] <= 0 || MEMORY[0xA8B24C] > 2
         ? 0
         : CompressNetworkMegaMission(a2, a3, a4, MEMORY[0xA8B24C] != 0 ? 14 : 111, v22, &v27);
    }
    else
    {
      v23 = 0; /*0x649da7*/
      if ( Networking_LastEventIndex )
      {
        v10 = g_NetworkEventIndex; /*0x649db7*/
        while ( v23 < v22 )
        {
          v11 = 37 * v10; /*0x649dcf*/
          v12 = g_NetworkPacketIndex[3 * v11] == 31 ? *(int *)((char *)&dword_A802DF + 3 * v11) + 111 : 111;
          if ( v9 + v12 > a3 ) /*0x649df5*/
            break; /*0x649df5*/
          *(int *)((char *)&dword_A802D7 + 3 * v11) = (int)MEMORY[0xA8ED84] + v8; /*0x649e03*/
          byte_A802D6[111 * g_NetworkEventIndex] = *((_BYTE *)HouseClass_Player + 48); /*0x649e1e*/
          byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x649e3a*/
          if ( unk_8B41F8 >= 0x4000 ) /*0x649e4b*/
            break; /*0x649e4b*/
          v13 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x649e61*/
          v14 = &unk_8B4204[111 * unk_8B4200]; /*0x649e73*/
          qmemcpy(v14, v13, 0x6Cu); /*0x649e7a*/
          v13 += 108; /*0x649e7a*/
          v14 += 108; /*0x649e7a*/
          *(_WORD *)v14 = *(_WORD *)v13; /*0x649e7c*/
          v14[2] = v13[2]; /*0x649e7e*/
          dword_A70204[unk_8B4200] = timeGetTime(); /*0x649e8e*/
          ++unk_8B41F8; /*0x649eae*/
          unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x649eb7*/
          v15 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x649ec5*/
          v16 = *v15; /*0x649ecc*/
          qmemcpy((void *)(a2 + v9), v15, 0x6Cu); /*0x649ed3*/
          v15 += 108; /*0x649ed3*/
          v17 = a2 + v9 + 108; /*0x649ed3*/
          *(_WORD *)v17 = *(_WORD *)v15; /*0x649ed5*/
          *(_BYTE *)(v17 + 2) = v15[2]; /*0x649ed9*/
          if ( v16 == 31 ) /*0x649eda*/
          {
            v18 = v9 + 111; /*0x649ee1*/
            qmemcpy( /*0x649f00*/
              (void *)(a2 + v18),
              *(const void **)((char *)&dword_A802DB + 111 * g_NetworkEventIndex),
              *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex));
            v19 = g_NetworkEventIndex; /*0x649f09*/
            v9 = *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex) + v18; /*0x649f14*/
          }
          else
          {
            v19 = g_NetworkEventIndex; /*0x649f1d*/
            v9 += 111; /*0x649f22*/
          }
          ++v23; /*0x649f32*/
          if ( !Networking_LastEventIndex /*0x649f48*/
            || (v10 = (v19 + 1) & 0x7F,
                g_NetworkEventIndex = v10,
                --Networking_LastEventIndex,
                !Networking_LastEventIndex) )
          {
            a1 = v26; /*0x649f57*/
            break; /*0x649f57*/
          }
          a1 = v26; /*0x649f4a*/
          v8 = a4; /*0x649f4e*/
        }
      }
    }
    v22 -= v27; /*0x649f5b*/
    v20 = v27 + v25; /*0x649f6d*/
    v25 += v27; /*0x649f71*/
    if ( v27 ) /*0x649f75*/
    {
      Debug::Log(); /*0x649f84*/
      v24 = 1; /*0x649f8c*/
    }
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a1 + 8))(a1, a2, v9, v24, -1); /*0x649fa1*/
    ++dword_B0487C; /*0x649fab*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x649fb5*/
    v6 = Networking_LastEventIndex; /*0x649fb8*/
    if ( !Networking_LastEventIndex || Networking_LastEventIndex > v28 ) /*0x649fc6*/
      break; /*0x649fc6*/
    if ( !v22 ) /*0x649fce*/
    {
      v20 = v25; /*0x649fd4*/
      break; /*0x649fd4*/
    }
  }
  if ( v20 ) /*0x649fda*/
    Debug::Log(); /*0x649fe8*/
  return v20; /*0x649ff2*/
}
}
} // namespace gamemd

// 0x64A000
namespace gamemd {
int Network_SendFrameSync(int * a1, short a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_SendFrameSync(int *a1, __int16 a2)
{
  char v3; // dl
  int v4; // edx
  _BYTE v6[108]; // [esp+Ch] [ebp-70h] BYREF
  __int16 v7; // [esp+78h] [ebp-4h]
  char v8; // [esp+7Ah] [ebp-2h]

  memset(v6, 0, sizeof(v6)); /*0x64a015*/
  v7 = 0; /*0x64a017*/
  v8 = 0; /*0x64a019*/
  v6[0] = 25; /*0x64a01f*/
  if ( MEMORY[0xA8B24C] == 2 ) /*0x64a027*/
    *(_DWORD *)&v6[3] = MEMORY[0xA8B554] /*0x64a04a*/
                      * (((unsigned int)MEMORY[0xA8ED84] + (int)MEMORY[0xA8B550] + MEMORY[0xA8B554] - 1)
                       / MEMORY[0xA8B554]);
  else
    *(_DWORD *)&v6[3] = (char *)MEMORY[0xA8ED84] + (_DWORD)MEMORY[0xA8B550]; /*0x64a05f*/
  v3 = *((_BYTE *)HouseClass_Player + 48); /*0x64a06e*/
  *(_DWORD *)&v6[7] = MEMORY[0xA8E7A8]; /*0x64a076*/
  v6[2] = v3; /*0x64a07a*/
  v4 = *a1; /*0x64a07e*/
  v6[13] = (_BYTE)MEMORY[0xA8B550]; /*0x64a084*/
  *(_WORD *)&v6[11] = a2; /*0x64a08b*/
  (*(void (__thiscall **)(int *, _BYTE *, int, _DWORD, int))(v4 + 8))(a1, v6, 14, 0, -1); /*0x64a090*/
  ((void (*)(const char *, ...))Debug::Log)(MEMORY[0x8377DC]); /*0x64a098*/
  return ++dword_B0487C; /*0x64a0a6*/
}
}
} // namespace gamemd

// 0x64A0C0
namespace gamemd {
int Network_ProcessFrameSync(int a1, int a2, int a3, unsigned int a4, int a5, unsigned int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_ProcessFrameSync(int a1, int a2, int a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  char v9; // al
  int v10; // esi
  bool v11; // cc
  char *v12; // ebx
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  int *v16; // esi
  char *v17; // eax
  int v18; // eax
  char *Class; // eax
  int v20; // eax
  unsigned int v21; // ecx
  char *v22; // eax
  _DWORD *v24; // ebp
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  char v28; // al
  _BYTE *v29; // ebp
  void *v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned __int16 v33; // si
  unsigned int v34; // [esp+10h] [ebp-88h]
  unsigned int v35; // [esp+10h] [ebp-88h]
  int v37; // [esp+14h] [ebp-84h]
  int v38; // [esp+18h] [ebp-80h]
  _DWORD *v39; // [esp+18h] [ebp-80h]
  int v41; // [esp+20h] [ebp-78h]
  int v42; // [esp+24h] [ebp-74h]
  char v43[112]; // [esp+28h] [ebp-70h] BYREF

  v6 = a2; /*0x64a0cc*/
  v7 = 0; /*0x64a0d5*/
  v41 = 0; /*0x64a0e0*/
  v8 = (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 24))(a3); /*0x64a0e7*/
  if ( MEMORY[0xA8DBA0] ) /*0x64a0f0*/
  {
    v9 = *(_BYTE *)v6; /*0x64a0f6*/
    if ( *(_BYTE *)v6 == 37 || v9 == 38 ) /*0x64a0fe*/
    {
      v10 = *(char *)(v6 + 2); /*0x64a104*/
      v42 = v10; /*0x64a10a*/
      v34 = 0; /*0x64a10e*/
      if ( v9 == 38 || v9 == 37 ) /*0x64a11d*/
        Debug::Log(); /*0x64a124*/
      v11 = v10 <= 0; /*0x64a12c*/
      if ( !v10 ) /*0x64a12e*/
      {
        Debug::Log(); /*0x64a135*/
        v11 = 1; /*0x64a13d*/
      }
      if ( !v11 ) /*0x64a13f*/
      {
        v12 = (char *)(v6 + 7); /*0x64a145*/
        v38 = v10; /*0x64a148*/
        v13 = v6 + 7; /*0x64a14c*/
        do /*0x64a372*/
        {
          if ( *(_BYTE *)v6 == 37 ) /*0x64a151*/
          {
            v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *(char *)(v13 + 11)); /*0x64a162*/
            if ( v14 != -1 ) /*0x64a168*/
            {
              v15 = *(_DWORD *)v13 - *(unsigned __int8 *)(v13 + 10); /*0x64a17d*/
              v16 = (int *)(a5 + 24 * v14); /*0x64a182*/
              if ( *v16 >= v15 ) /*0x64a187*/
              {
                if ( Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)) ) /*0x64a1fd*/
                {
                  Class = (char *)Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)); /*0x64a213*/
                  ToWideStringChar(Class); /*0x64a21a*/
                  Debug::Log(); /*0x64a225*/
                }
              }
              else
              {
                *v16 = v15; /*0x64a189*/
                Network_Process_652110(a5, v14); /*0x64a194*/
                if ( Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)) ) /*0x64a1a3*/
                {
                  v17 = (char *)Network::GetClass(MEMORY[0xA8E9C0], *(char *)(v13 + 11)); /*0x64a1b9*/
                  ToWideStringChar(v17); /*0x64a1c0*/
                  Debug::Log(); /*0x64a1cb*/
                }
                v18 = *(unsigned __int16 *)(v13 + 8); /*0x64a1d8*/
                if ( v16[1] < (unsigned int)(unsigned __int16)v18 ) /*0x64a1de*/
                {
                  v16[1] = v18; /*0x64a1e6*/
                  Debug::Log(); /*0x64a1e9*/
                }
              }
              if ( (*(_BYTE *)(v13 + 12) & 1) == 0 ) /*0x64a231*/
                v16[3] = Timer::GetTicks() - *a6; /*0x64a24f*/
            }
          }
          else if ( *v12 == *((_DWORD *)HouseClass_Player + 12) ) /*0x64a263*/
          {
            MEMORY[0xA8E2D4] = *(_DWORD *)(v12 + 2); /*0x64a268*/
            Debug::Log(); /*0x64a289*/
          }
          else
          {
            v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 24))(a1, *v12); /*0x64a29d*/
            if ( v20 != -1 ) /*0x64a2a3*/
            {
              v21 = *(_DWORD *)(v12 + 2); /*0x64a2b0*/
              *(_DWORD *)(a5 + 24 * v20 + 16) = v21; /*0x64a2b6*/
              MEMORY[0xAC5210][v20] = v21; /*0x64a2ba*/
              if ( v34 <= v21 ) /*0x64a2c5*/
                v34 = v21; /*0x64a2c7*/
              if ( v12[1] ) /*0x64a2cb*/
              {
                if ( SessionClass::IsValidHouse((int)MEMORY[0xA8B238], 0) ) /*0x64a2dd*/
                {
                  if ( MEMORY[0xA8E2CC] != *v12 ) /*0x64a2ef*/
                  {
                    v22 = EventClass::Add2(v43, *((_DWORD *)HouseClass_Player + 12), 0x28u, *v12); /*0x64a301*/
                    if ( Networking_LastEventIndex < 128 ) /*0x64a310*/
                    {
                      qmemcpy(&g_NetworkPacketIndex[111 * Networking_NextPacketIndex], v22, 0x6Fu); /*0x64a32c*/
                      v6 = a2; /*0x64a33d*/
                      g_CrateSystemState[Networking_NextPacketIndex] = timeGetTime(); /*0x64a341*/
                      Networking_NextPacketIndex = ((_BYTE)Networking_NextPacketIndex + 1) & 0x7F; /*0x64a358*/
                      ++Networking_LastEventIndex; /*0x64a35e*/
                    }
                  }
                }
              }
            }
          }
          v13 += 13; /*0x64a367*/
          v12 += 8; /*0x64a36a*/
          --v38; /*0x64a36e*/
        }
        while ( v38 ); /*0x64a372*/
        v10 = v42; /*0x64a378*/
        v7 = v34; /*0x64a37c*/
      }
      if ( v10 && v7 ) /*0x64a38a*/
      {
        MEMORY[0xA8E2C4] = v7; /*0x64a396*/
        return 0; /*0x64a3a4*/
      }
      return v41; /*0x64a610*/
    }
  }
  v24 = (_DWORD *)(a5 + 24 * v8); /*0x64a3b9*/
  v39 = v24; /*0x64a3be*/
  if ( *v24 < *(_DWORD *)(v6 + 3) - *(unsigned __int8 *)(v6 + 13) ) /*0x64a3c7*/
  {
    if ( *v24 == -1 ) /*0x64a3cc*/
    {
      v41 = 1; /*0x64a3d3*/
      Debug::Log(); /*0x64a3db*/
    }
    *v24 = *(_DWORD *)(v6 + 3) - *(unsigned __int8 *)(v6 + 13); /*0x64a3ef*/
    Network_Process_652110(a5, v8); /*0x64a3f4*/
  }
  v25 = *(unsigned __int16 *)(v6 + 11); /*0x64a3fe*/
  if ( (unsigned int)(unsigned __int16)v25 > v24[1] ) /*0x64a404*/
    v24[1] = v25; /*0x64a406*/
  if ( *(_BYTE *)v6 == 25 ) /*0x64a40c*/
  {
    if ( MEMORY[0xA8B238][0] == 4 || MEMORY[0xA8B238][0] == 3 ) /*0x64a5b0*/
    {
      Network::GetClass(MEMORY[0xA8E9C0], a3); /*0x64a5ca*/
      Debug::Log(); /*0x64a5d5*/
    }
    if ( *(_DWORD *)(v6 + 7) != MEMORY[0xA8E7A8] ) /*0x64a5e8*/
      return 2; /*0x64a5f9*/
    v24[3] = Timer::GetTicks() - *a6; /*0x64a60d*/
    return v41; /*0x64a60d*/
  }
  v26 = 0; /*0x64a417*/
  if ( MEMORY[0xA8B24C] ) /*0x64a41b*/
  {
    v27 = DecodeNetworkEvents((char *)v6, a4); /*0x64a426*/
    goto LABEL_59; /*0x64a42b*/
  }
  v37 = 0; /*0x64a437*/
  v35 = a4; /*0x64a43e*/
  if ( a4 < 0x6F ) /*0x64a442*/
  {
LABEL_58:
    v27 = v37; /*0x64a539*/
    goto LABEL_59; /*0x64a539*/
  }
  while ( 1 ) /*0x64a448*/
  {
    v28 = *(_BYTE *)(v26 + v6); /*0x64a448*/
    v29 = (_BYTE *)(v26 + v6); /*0x64a44b*/
    if ( v28 != 25 ) /*0x64a450*/
      break; /*0x64a450*/
LABEL_52:
    v26 += 111; /*0x64a502*/
    v35 -= 111; /*0x64a50f*/
    if ( v35 < 0x6F ) /*0x64a513*/
    {
      v24 = v39; /*0x64a535*/
      goto LABEL_58; /*0x64a535*/
    }
  }
  v29[1] &= ~1u; /*0x64a45e*/
  if ( v28 == 31 ) /*0x64a461*/
  {
    v30 = __2_YAPAXI_Z(*(_DWORD *)(v29 + 11)); /*0x64a467*/
    v31 = *(_DWORD *)(v29 + 11); /*0x64a46c*/
    *(_DWORD *)(v29 + 7) = v30; /*0x64a472*/
    qmemcpy(v30, (const void *)(v6 + 111), v31); /*0x64a47f*/
    v32 = *(_DWORD *)(v29 + 11); /*0x64a488*/
    v6 = a2; /*0x64a48f*/
    v26 += v32; /*0x64a493*/
    v35 -= v32; /*0x64a497*/
  }
  if ( unk_8B41F8 < 0x4000 ) /*0x64a4a5*/
  {
    qmemcpy(&unk_8B4204[111 * unk_8B4200], v29, 0x6Fu); /*0x64a4c0*/
    v6 = a2; /*0x64a4d1*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64a4d5*/
    unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64a4ee*/
    ++unk_8B41F8; /*0x64a4f8*/
    ++v37; /*0x64a4fe*/
    goto LABEL_52; /*0x64a4fe*/
  }
  if ( *v29 == 31 ) /*0x64a51e*/
    __3_YAXPAX_Z(*(void **)(v29 + 7)); /*0x64a524*/
  v24 = v39; /*0x64a52c*/
  v27 = -1; /*0x64a530*/
LABEL_59:
  v33 = v27; /*0x64a53d*/
  if ( v27 == -1 ) /*0x64a542*/
  {
    Debug::Log(); /*0x64a549*/
    return 3; /*0x64a551*/
  }
  else
  {
    if ( *(_BYTE *)v6 == 28 && v27 > 0 ) /*0x64a56a*/
      v33 = v27 - 1; /*0x64a56c*/
    Debug::Log(); /*0x64a57c*/
    v24[2] += v33; /*0x64a590*/
    return v41; /*0x64a593*/
  }
}
}
} // namespace gamemd

// 0x64A630
namespace gamemd {
int Network_ProcessMessage(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_ProcessMessage(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  char *v5; // ebp
  wchar_t *v6; // edi
  int v7; // eax
  char *v8; // ebx
  int v9; // esi
  int v10; // eax
  int v11; // eax

  v2 = a1; /*0x64a631*/
  v3 = *(_DWORD *)a1; /*0x64a635*/
  if ( a2 ) /*0x64a638*/
  {
    if ( v3 == 102 ) /*0x64a63d*/
    {
LABEL_7:
      HandlePlayerDisconnection(*(char *)(a1 + 29), 0); /*0x64a650*/
      return 5; /*0x64a662*/
    }
  }
  else if ( v3 == 102 || v3 == 105 || v3 == 106 ) /*0x64a64e*/
  {
    goto LABEL_7; /*0x64a64e*/
  }
  if ( v3 == 104 ) /*0x64a666*/
  {
    v5 = CharToWideString((_BYTE *)(a1 + 4)); /*0x64a678*/
    v6 = (wchar_t *)(v2 + 25); /*0x64a67f*/
    v7 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].__pad_A0 * 900.0); /*0x64a68e*/
    if ( !((int (__stdcall *)(wchar_t *, int, wchar_t *, int))ScrollingText::AddLine)( /*0x64a6a1*/
            (wchar_t *)v5,
            *(unsigned __int8 *)(v2 + 24),
            (wchar_t *)(v2 + 25),
            v7) )
    {
      v8 = CharToWideString((_BYTE *)(v2 + 4)); /*0x64a6b1*/
      v9 = *(unsigned __int8 *)(v2 + 24); /*0x64a6cb*/
      v10 = Math::RoundToInt(*(double *)&MEMORY[0x8871E0][1].__pad_A0 * 900.0); /*0x64a6cd*/
      MessageListClass::AddMessage(MEMORY[0xA8BC60], (wchar_t *)v8, v9, v6, v9, 16454, v10, 0); /*0x64a6e1*/
      PlayVocClass(MEMORY[0x8871E0]->MovieOn, 0x2000, 1.0, 0); /*0x64a6fe*/
    }
    if ( wcslen(v6) ) /*0x64a704*/
      wcscpy((wchar_t *)&MEMORY[0xA8D110] + 1, v6); /*0x64a718*/
    MapClass::MarkForRedraw(&MEMORY[0x87F7E8], 2); /*0x64a727*/
    return 4; /*0x64a727*/
  }
  if ( v3 == 120 ) /*0x64a737*/
  {
    if ( (_BYTE)MEMORY[0xA8D110] && MEMORY[0xA8B238][0] == 3 || BYTE1(MEMORY[0xA8D110]) && MEMORY[0xA8B238][0] == 4 ) /*0x64a759*/
    {
      LOBYTE(a1) = *(_BYTE *)(a1 + 25); /*0x64a75b*/
      ((void (__thiscall *)(int))PlayTauntClass)(a1); /*0x64a75e*/
      return 4; /*0x64a76a*/
    }
    return 4; /*0x64a733*/
  }
  if ( v3 >= 100 && v3 < 109 /*0x64a790*/
    || v3 >= 110 && v3 <= 116
    || MEMORY[0xA8B54C] == 1
    || !*(_BYTE *)a1
    || *(_BYTE *)a1 >= 0x2Fu )
  {
    return 4; /*0x64a790*/
  }
  v11 = -(*((_DWORD *)HouseClass_Player + 12) != *(char *)(a1 + 2)); /*0x64a7a4*/
  LOBYTE(v11) = v11 & 0xFA; /*0x64a7a7*/
  return v11 + 6; /*0x64a660*/
}
}
} // namespace gamemd

// 0x64AAA0
namespace gamemd {
LRESULT sub_64AAA0(HWND hWnd)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LRESULT __thiscall sub_64AAA0(HWND hWnd)
{
  LRESULT v2; // esi

  v2 = SendMessageA(hWnd, 0x18Bu, 0, 0); /*0x64aab7*/
  if ( v2 > 50 ) /*0x64aabc*/
  {
    SendMessageA(hWnd, 0x182u, 0, 0); /*0x64aac8*/
    --v2; /*0x64aaca*/
  }
  return SendMessageA(hWnd, 0x197u, v2 - 1, 0); /*0x64aad7*/
}
}
} // namespace gamemd

// 0x64AAE0
namespace gamemd {
void KickNetworkPlayer(HWND hDlg, LPARAM lParam)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall KickNetworkPlayer(HWND hDlg, LPARAM lParam)
{
  HWND DlgItem; // eax
  HWND v5; // esi
  wchar_t *StringCSF; // eax
  void (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // ebx
  LRESULT v8; // edi
  wchar_t *v9; // eax
  char *v10; // eax
  int v11; // eax
  int v12; // esi
  HWND v13; // [esp-4h] [ebp-1D8h]
  int v14; // [esp+Ch] [ebp-1C8h] BYREF
  char Destination[43]; // [esp+10h] [ebp-1C4h] BYREF
  int i; // [esp+3Bh] [ebp-199h]
  int v17; // [esp+3Fh] [ebp-195h]

  if ( lParam >= 0 && lParam < MEMORY[0xA8DA84] ) /*0x64aafb*/
  {
    Debug::Log(); /*0x64ab16*/
    DlgItem = GetDlgItem(hDlg, 1617); /*0x64ab24*/
    v5 = DlgItem; /*0x64ab2c*/
    if ( !lParam ) /*0x64ab2e*/
    {
      v13 = DlgItem; /*0x64ab30*/
      StringCSF = GetStringCSF(MEMORY[0x8379E8], 0, MEMORY[0x8374A0], 3375); /*0x64ab42*/
      DrawDialogText(-1, StringCSF, v13); /*0x64ab4c*/
      v7 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x64ab51*/
      v8 = SendMessageA(v5, 0x18Bu, 0, 0); /*0x64ab61*/
      if ( v8 > 50 ) /*0x64ab66*/
        goto LABEL_9; /*0x64ab66*/
      goto LABEL_10; /*0x64ab66*/
    }
    if ( MEMORY[0xA8B238][0] == 4 && *(_DWORD *)dword_B779C4 ) /*0x64ab7a*/
    {
      v9 = GetStringCSF(MEMORY[0x8379D8], 0, MEMORY[0x8374A0], 3385); /*0x64ab8e*/
      DrawDialogText(-1, v9, v5); /*0x64ab98*/
      v7 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x64ab9d*/
      v8 = SendMessageA(v5, 0x18Bu, 0, 0); /*0x64abaf*/
      if ( v8 > 50 ) /*0x64abb4*/
      {
LABEL_9:
        v7(v5, 0x182u, 0, 0); /*0x64abb6*/
        --v8; /*0x64abc2*/
      }
LABEL_10:
      v7(v5, 0x197u, v8 - 1, 0); /*0x64abc3*/
      return; /*0x64abd8*/
    }
    v14 = 28; /*0x64abdf*/
    v10 = ToWideStringChar(*(char **)MEMORY[0xA8DA78]); /*0x64abeb*/
    strncpy(Destination, v10, 0x14u); /*0x64abf6*/
    v11 = MEMORY[0xA8DA78]; /*0x64abfb*/
    v12 = 1; /*0x64ac00*/
    v17 = *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111); /*0x64ac0d*/
    for ( i = *(_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * lParam) + 111); v12 < MEMORY[0xA8DA84]; v11 = MEMORY[0xA8DA78] ) /*0x64ac23*/
    {
      Debug::Log(); /*0x64ac2e*/
      Network::SendMessage( /*0x64ac58*/
        (int)MEMORY[0xA8E9C0],
        (int)&v14,
        455,
        1,
        *(_DWORD *)(MEMORY[0xA8DA78] + 4 * v12++) + 40,
        0,
        0);
    }
    Network_Process_64AD10(*(_DWORD *)(*(_DWORD *)v11 + 111), *(_DWORD *)(*(_DWORD *)(v11 + 4 * lParam) + 111)); /*0x64ac77*/
  }
}
}
} // namespace gamemd

// 0x64AE30
namespace gamemd {
int sub_64AE30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_64AE30()
{
  dword_B04884 = 0; /*0x64ae32*/
  dword_B04888 = 0; /*0x64ae37*/
  byte_B0488C = 0; /*0x64ae3c*/
  byte_B0488D = 0; /*0x64ae41*/
  byte_B04878 = 0; /*0x64ae46*/
  return 0; /*0x64ae4b*/
}
}
} // namespace gamemd

// 0x64B240
namespace gamemd {
void Network_KickPlayerNow(int a1, int a2, int a3, unsigned signed char a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall Network_KickPlayerNow(int a1, int a2, int a3, unsigned __int8 a4)
{
  int v6; // edi
  int i; // ecx
  _BYTE *v8; // eax
  int v9; // eax
  int *v10; // ebx
  int v11; // ebp
  _DWORD *v12; // eax
  bool v13; // [esp+13h] [ebp-Dh]
  int v14; // [esp+14h] [ebp-Ch]
  _DWORD *v16; // [esp+24h] [ebp+4h]

  v13 = time(0) - dword_B0489C < 60; /*0x64b270*/
  dword_B0489C = time(0); /*0x64b27e*/
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 20))(a1, a2); /*0x64b292*/
  Debug::Log(); /*0x64b29f*/
  if ( v6 == -1 ) /*0x64b2aa*/
  {
    Debug::Log(); /*0x64b2b1*/
  }
  else
  {
    *(_BYTE *)(*((_DWORD *)HouseClass_Array + v6) + 520) = 1; /*0x64b2cc*/
    if ( Network::CountDisconnectedHouses(*((_DWORD *)HouseClass_Array + v6)) == 1 /*0x64b2f4*/
      && MEMORY[0xA8B238][0] == 4
      && !MEMORY[0xA8F900] )
    {
      Timer::UpdateDelta(); /*0x64b2f6*/
      MEMORY[0xB0BD78] = 1; /*0x64b2ff*/
      if ( !v13 ) /*0x64b307*/
        MEMORY[0xA8B8C1] = 1; /*0x64b309*/
      for ( i = 0; i < HouseClass_Count; ++i ) /*0x64b318*/
      {
        v8 = (_BYTE *)*((_DWORD *)HouseClass_Array + i); /*0x64b320*/
        if ( v8 && !v8[501] && v8[492] ) /*0x64b331*/
          v8[520] = 1; /*0x64b33b*/
      }
      ProcessGameResults(0); /*0x64b34d*/
    }
    if ( Network::CountDisconnectedHouses(*((_DWORD *)HouseClass_Array + v6)) > 1 && !v13 ) /*0x64b369*/
      *(_BYTE *)(*((_DWORD *)HouseClass_Array + v6) + 583) = 1; /*0x64b374*/
    v14 = a2; /*0x64b37f*/
    if ( a2 < (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b389*/
    {
      v9 = 4 * a2 + 11057984; /*0x64b394*/
      v10 = &MEMORY[0xA8BB60][8 * a2]; /*0x64b39e*/
      v11 = a3 + 24 * a2; /*0x64b3a4*/
      while ( 1 ) /*0x64b3b7*/
      {
        v12 = (_DWORD *)(v9 + 4); /*0x64b3b7*/
        qmemcpy((void *)v11, (const void *)(v11 + 24), 0x18u); /*0x64b3ba*/
        *(v12 - 1) = *v12; /*0x64b3c1*/
        v11 += 24; /*0x64b3cb*/
        qmemcpy(v10, v10 + 8, 0x20u); /*0x64b3ce*/
        v16 = v12; /*0x64b3d9*/
        ++v14; /*0x64b3df*/
        v10 += 8; /*0x64b3e3*/
        if ( v14 >= (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 16))(a1) - 1 ) /*0x64b3ec*/
          break; /*0x64b3ec*/
        v9 = (int)v16; /*0x64b3a9*/
      }
    }
    HandleNetworkPlayerDisconnect(v6, a4); /*0x64b3fe*/
  }
}
}
} // namespace gamemd

// 0x64B4D0
namespace gamemd {
char Compress_DictionaryLookup(unsigned signed char * a1, unsigned int * a2, unsigned char * a3, const void * a4, char a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall Compress_DictionaryLookup(unsigned __int8 *a1, _DWORD *a2, _BYTE *a3, const void *a4, char a5)
{
  unsigned __int8 v5; // dl
  int v6; // ecx
  char *v7; // ebx
  int *v8; // eax
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  int *v12; // esi
  int v13; // ecx
  char result; // al
  char *v15; // ecx
  char v16; // [esp+10h] [ebp-14h]
  int v18; // [esp+18h] [ebp-Ch]
  unsigned __int8 v19; // [esp+1Ch] [ebp-8h]

  v5 = *a1; /*0x64b4d8*/
  v19 = *a1; /*0x64b4e4*/
  if ( *a1 > 1u ) /*0x64b4e8*/
  {
    v16 = 0; /*0x64b4ec*/
    v6 = v5; /*0x64b4f4*/
    v7 = (char *)&MEMORY[0xAC5235]; /*0x64b4fa*/
    v18 = v5; /*0x64b4ff*/
    v8 = dword_AFA338; /*0x64b503*/
    do /*0x64b508*/
    {
      if ( v6 == *v8 ) /*0x64b50c*/
      {
        if ( !memcmp(v7 - 5, a3, 5u) && !memcmp(v7, a4, 5 * *v8 - 5) ) /*0x64b52e*/
        {
          if ( a5 ) /*0x64b59c*/
            *a2 += 5 - 5 * v18; /*0x64b5b0*/
          result = 1; /*0x64b5b4*/
          if ( a5 ) /*0x64b5b6*/
          {
            *a1 = 0; /*0x64b5c6*/
            a3[6] = v16; /*0x64b5cf*/
          }
          return result; /*0x64b5d5*/
        }
        v6 = v18; /*0x64b530*/
        v5 = v19; /*0x64b534*/
      }
      ++v8; /*0x64b53c*/
      v7 += 640; /*0x64b540*/
      ++v16; /*0x64b54b*/
    }
    while ( (int)v8 < (int)&dword_AFA358 ); /*0x64b508*/
  }
  if ( a5 && v5 > 1u ) /*0x64b560*/
  {
    v9 = -1; /*0x64b566*/
    v10 = -1; /*0x64b569*/
    v11 = 0; /*0x64b56c*/
    v12 = dword_AFA42C; /*0x64b56e*/
    while ( 1 ) /*0x64b573*/
    {
      v13 = *v12; /*0x64b573*/
      if ( !*v12 ) /*0x64b573*/
        break; /*0x64b573*/
      if ( (int)MEMORY[0xA8ED84] - v13 > v10 ) /*0x64b582*/
      {
        v10 = (int)MEMORY[0xA8ED84] - v13; /*0x64b584*/
        v9 = v11; /*0x64b586*/
      }
      ++v12; /*0x64b588*/
      ++v11; /*0x64b58b*/
      if ( (int)v12 >= (int)&dword_AFA44C ) /*0x64b592*/
        goto LABEL_21; /*0x64b592*/
    }
    v9 = v11; /*0x64b5d8*/
LABEL_21:
    if ( v9 == -1 ) /*0x64b5dd*/
      v9 = 0; /*0x64b5df*/
    Debug::Log(); /*0x64b5ee*/
    dword_AFA42C[v9] = (int)MEMORY[0xA8ED84]; /*0x64b600*/
    v15 = (char *)&MEMORY[0xAC5230] + 640 * v9; /*0x64b60f*/
    *(_DWORD *)v15 = *(_DWORD *)a3; /*0x64b61d*/
    v15[4] = a3[4]; /*0x64b626*/
    qmemcpy((char *)&MEMORY[0xAC5235] + 640 * v9, a4, 5 * *a1 - 5); /*0x64b63a*/
    dword_AFA338[v9] = *a1; /*0x64b647*/
    a3[6] = v9; /*0x64b64e*/
  }
  return 0; /*0x64b5c4*/
}
}
} // namespace gamemd

// 0x64B660
namespace gamemd {
int Network_CompressMegaMission(int a1, int a2, int a3, int a4, int a5, unsigned int * a6)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_CompressMegaMission(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // ecx
  unsigned __int8 v8; // al
  unsigned int v9; // ebp
  int v10; // edi
  _BYTE *v11; // ecx
  unsigned int v12; // eax
  #375 *v13; // edx
  int v14; // eax
  char *v15; // esi
  char *v16; // edi
  int v17; // eax
  _BYTE *v18; // edx
  char *v19; // esi
  int v20; // eax
  int result; // eax
  char v22; // [esp+13h] [ebp-91h]
  int v23; // [esp+14h] [ebp-90h] BYREF
  char v24; // [esp+1Bh] [ebp-89h]
  _BYTE *v25; // [esp+1Ch] [ebp-88h]
  _BYTE *v26; // [esp+20h] [ebp-84h]
  _BYTE *v27; // [esp+24h] [ebp-80h]
  int v28; // [esp+28h] [ebp-7Ch]
  int v29; // [esp+2Ch] [ebp-78h]
  int v30; // [esp+30h] [ebp-74h]
  _WORD v31[54]; // [esp+34h] [ebp-70h] BYREF
  __int16 v32; // [esp+A0h] [ebp-4h]
  char v33; // [esp+A2h] [ebp-2h]

  memset(v31, 0, sizeof(v31)); /*0x64b67e*/
  v32 = 0; /*0x64b680*/
  v33 = 0; /*0x64b682*/
  v30 = a2; /*0x64b688*/
  v28 = 0; /*0x64b68e*/
  v25 = 0; /*0x64b692*/
  LOBYTE(v23) = 0; /*0x64b696*/
  v22 = 0; /*0x64b69b*/
  v24 = 0; /*0x64b6a0*/
  v26 = 0; /*0x64b6a5*/
  v27 = 0; /*0x64b6a9*/
  if ( MEMORY[0xA8ED74] ) /*0x64b6ad*/
    Debug::Log(); /*0x64b6ba*/
  if ( Networking_LastEventIndex ) /*0x64b6c8*/
  {
    v7 = g_NetworkEventIndex; /*0x64b6ce*/
    while ( v28 < a5 ) /*0x64b6d4*/
    {
      v8 = g_NetworkPacketIndex[111 * v7]; /*0x64b6ef*/
      LOBYTE(v29) = v8; /*0x64b6f6*/
      v9 = (unsigned __int8)byte_8208EC[v8]; /*0x64b70c*/
      if ( v8 == 31 ) /*0x64b70e*/
        v10 = *(int *)((char *)&dword_A802DF + 111 * v7) + v9 + 1; /*0x64b717*/
      else
        v10 = v9 + 1; /*0x64b71d*/
      if ( LOBYTE(v31[0]) == 4 ) /*0x64b725*/
      {
        if ( v8 == 4 ) /*0x64b72d*/
        {
          if ( !v24 /*0x64b798*/
            && (v24 = *((_BYTE *)&dword_A802DF + 111 * v7 + 1), v24 == LOBYTE(v31[6]))
            && byte_A802E6[111 * v7] == LOBYTE(v31[9])
            && *(int *)((char *)&dword_A802DF + 111 * v7 + 3) == *(_DWORD *)&v31[7]
            && byte_A802EB[111 * v7] == HIBYTE(v31[11])
            && *(_DWORD *)((char *)&unk_A802E7 + 111 * v7) == *(_DWORD *)((char *)&v31[9] + 1) )
          {
            if ( MEMORY[0xA8ED74] ) /*0x64b7a5*/
            {
              FromNameIndex(v24); /*0x64b821*/
              Debug::Log(); /*0x64b82d*/
              v7 = g_NetworkEventIndex; /*0x64b832*/
            }
            v9 = 5; /*0x64b83f*/
            v10 = 5; /*0x64b846*/
            LOBYTE(v23) = v23 + 1; /*0x64b848*/
            v22 = 1; /*0x64b84c*/
          }
          else
          {
            if ( MEMORY[0xA8ED74] ) /*0x64b85d*/
              Debug::Log(); /*0x64b864*/
            Debug::Log(); /*0x64b87c*/
            DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b89b*/
            ++v10; /*0x64b8a0*/
            v22 = 0; /*0x64b8a9*/
            *v25 = v23; /*0x64b8ae*/
            LOBYTE(v23) = 1; /*0x64b8b7*/
            v7 = g_NetworkEventIndex; /*0x64b8c0*/
            v25 = (_BYTE *)(a1 + a4 + 1); /*0x64b8c6*/
          }
        }
        else
        {
          Debug::Log(); /*0x64b8de*/
          DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64b8fd*/
          v11 = v25; /*0x64b902*/
          v25 = 0; /*0x64b90a*/
          v22 = 0; /*0x64b912*/
          *v11 = v23; /*0x64b917*/
          v7 = g_NetworkEventIndex; /*0x64b919*/
          LOBYTE(v23) = 0; /*0x64b91f*/
        }
      }
      else if ( v8 == 4 ) /*0x64b928*/
      {
        if ( MEMORY[0xA8ED74] ) /*0x64b931*/
        {
          Debug::Log(); /*0x64b938*/
          v7 = g_NetworkEventIndex; /*0x64b93d*/
        }
        ++v10; /*0x64b94d*/
        LOBYTE(v23) = 1; /*0x64b94e*/
        v22 = 0; /*0x64b953*/
        v25 = (_BYTE *)(a1 + a4 + 1); /*0x64b95c*/
      }
      v24 = 0; /*0x64b96d*/
      if ( a4 + v10 > v30 ) /*0x64b974*/
      {
        if ( (_BYTE)v29 == 4 && v22 ) /*0x64bd5d*/
        {
          LOBYTE(v23) = v23 - 1; /*0x64bd65*/
          Debug::Log(); /*0x64bd79*/
          DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64bd98*/
          *v25 = v23; /*0x64bda5*/
        }
        break; /*0x64bda5*/
      }
      if ( MEMORY[0xA8B24C] == 2 ) /*0x64b981*/
        v12 = MEMORY[0xA8B554] * (((unsigned int)MEMORY[0xA8ED84] + MEMORY[0xA8B554] + a3 - 1) / MEMORY[0xA8B554]); /*0x64b9a0*/
      else
        v12 = (unsigned int)MEMORY[0xA8ED84] + a3; /*0x64b9b1*/
      v13 = HouseClass_Player; /*0x64b9b9*/
      *(int *)((char *)&dword_A802D7 + 111 * v7) = v12; /*0x64b9bf*/
      byte_A802D6[111 * g_NetworkEventIndex] = *((_BYTE *)v13 + 48); /*0x64b9d4*/
      byte_A802D5[111 * g_NetworkEventIndex] &= ~1u; /*0x64b9f0*/
      if ( unk_8B41F8 >= 0x4000 ) /*0x64ba01*/
        break; /*0x64ba01*/
      v14 = g_CrateSystemState[g_NetworkEventIndex]; /*0x64ba12*/
      v15 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x64ba19*/
      v16 = &unk_8B4204[111 * unk_8B4200]; /*0x64ba2c*/
      qmemcpy(v16, v15, 0x6Cu); /*0x64ba38*/
      v15 += 108; /*0x64ba38*/
      v16 += 108; /*0x64ba38*/
      *(_WORD *)v16 = *(_WORD *)v15; /*0x64ba3a*/
      v16[2] = v15[2]; /*0x64ba3c*/
      dword_A70204[unk_8B4200] = v14; /*0x64ba43*/
      unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64ba5b*/
      ++unk_8B41F8; /*0x64ba6a*/
      switch ( (_BYTE)v29 ) /*0x64ba70*/
      {
        case 4: /*0x64ba70*/
          *v25 = v23; /*0x64bbc1*/
          if ( v22 ) /*0x64bbc3*/
          {
            qmemcpy((void *)(a1 + a4), (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bbec*/
            a4 += v9; /*0x64bc06*/
            if ( Networking_LastEventIndex == 1 || v28 == a5 - 1 ) /*0x64bc1d*/
            {
              Debug::Log(); /*0x64bc7d*/
              DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 1); /*0x64bc9c*/
              *v25 = v23; /*0x64bca9*/
            }
            else if ( DictionaryCompressLookup((unsigned __int8 *)&v23, &a4, v27, v26, 0) ) /*0x64bc36*/
            {
              Debug::Log(); /*0x64bc52*/
              v24 = 1; /*0x64bc62*/
              *v25 = v23; /*0x64bc67*/
            }
            goto LABEL_47; /*0x64bc69*/
          }
          *(_BYTE *)(a1 + a4) = 4; /*0x64bcb4*/
          v18 = (_BYTE *)(a1 + a4 + 2); /*0x64bcc9*/
          v27 = v18; /*0x64bcd2*/
          qmemcpy(v18, (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bce2*/
          v26 = &v18[v9]; /*0x64bcf5*/
          v17 = a4 + v9 + 2; /*0x64bcf9*/
          break;
        case 0x1B: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 27; /*0x64bb6d*/
          qmemcpy((void *)(a1 + a4 + 1), (const void *)(111 * g_NetworkEventIndex + 11010785), v9); /*0x64bb93*/
          a4 += v9 + 1; /*0x64bba7*/
          goto LABEL_47; /*0x64bbae*/
        case 0x1F: /*0x64ba70*/
          *(_BYTE *)(a1 + a4) = 31; /*0x64bad9*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DF + 111 * g_NetworkEventIndex, v9); /*0x64baff*/
          a4 += v9 + 1; /*0x64bb18*/
          qmemcpy( /*0x64bb3b*/
            (void *)(a1 + a4),
            *(const void **)((char *)&dword_A802DB + 111 * g_NetworkEventIndex),
            *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex));
          v17 = *(int *)((char *)&dword_A802DF + 111 * g_NetworkEventIndex) + a4; /*0x64bb5d*/
          break;
        default:
          *(_BYTE *)(a1 + a4) = v29; /*0x64ba89*/
          qmemcpy((void *)(a1 + a4 + 1), (char *)&dword_A802DB + 111 * g_NetworkEventIndex, v9); /*0x64bab0*/
          a4 += v9 + 1; /*0x64bac4*/
          goto LABEL_47; /*0x64bacb*/
      }
      a4 = v17; /*0x64bcfd*/
LABEL_47:
      ++v28; /*0x64bd04*/
      v19 = &g_NetworkPacketIndex[111 * g_NetworkEventIndex]; /*0x64bd22*/
      v20 = Networking_LastEventIndex; /*0x64bd29*/
      qmemcpy(v31, v19, sizeof(v31)); /*0x64bd2e*/
      v19 += 108; /*0x64bd2e*/
      v32 = *(_WORD *)v19; /*0x64bd30*/
      v33 = v19[2]; /*0x64bd34*/
      if ( Networking_LastEventIndex ) /*0x64bd35*/
      {
        v7 = ((_BYTE)g_NetworkEventIndex + 1) & 0x7F; /*0x64bd3a*/
        g_NetworkEventIndex = v7; /*0x64bd3e*/
        --Networking_LastEventIndex; /*0x64bd44*/
        if ( v20 != 1 ) /*0x64bd49*/
          continue; /*0x64bd49*/
      }
      break; /*0x64bd49*/
    }
  }
  result = a4; /*0x64bda7*/
  *a6 = v28; /*0x64bdbc*/
  return result; /*0x64bdb9*/
}
}
} // namespace gamemd

// 0x64BDD0
namespace gamemd {
int Network_DecodeEvents(char * a1, unsigned int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Network_DecodeEvents(char *a1, unsigned int a2)
{
  char *v2; // esi
  int v3; // ebx
  int v4; // ebp
  char *v5; // edi
  int v6; // edx
  unsigned __int8 v7; // al
  int v8; // ecx
  unsigned int v9; // eax
  unsigned __int8 v10; // cl
  unsigned int v11; // ecx
  char *v12; // esi
  char *v13; // edi
  char *v14; // ebp
  unsigned int v15; // esi
  char v16; // cl
  int v17; // esi
  char *v18; // eax
  char *v19; // edi
  char v20; // cl
  unsigned __int8 v21; // dl
  int v22; // esi
  char *v23; // ecx
  void **v24; // ebp
  char *v25; // edi
  void **v26; // esi
  char v27; // al
  char v28; // cl
  bool v29; // zf
  char *v30; // edi
  unsigned int v31; // ecx
  unsigned __int8 v33; // [esp+13h] [ebp-99h]
  unsigned int v34; // [esp+14h] [ebp-98h]
  int v35; // [esp+18h] [ebp-94h]
  char *v36; // [esp+1Ch] [ebp-90h]
  int v37; // [esp+1Ch] [ebp-90h]
  int v38; // [esp+20h] [ebp-8Ch]
  int v40; // [esp+28h] [ebp-84h]
  void **v41; // [esp+2Ch] [ebp-80h]
  char *v42; // [esp+30h] [ebp-7Ch]
  int v43; // [esp+34h] [ebp-78h]
  unsigned __int8 v44; // [esp+38h] [ebp-74h]
  _DWORD v45[28]; // [esp+3Ch] [ebp-70h] BYREF

  v2 = a1; /*0x64bdd9*/
  v3 = 0; /*0x64bddc*/
  memset(v45, 0, 111); /*0x64bded*/
  v34 = a2; /*0x64bdfd*/
  v35 = 0; /*0x64be01*/
  v33 = 0; /*0x64be05*/
  v4 = 13; /*0x64be09*/
  v5 = a1; /*0x64be0e*/
  v40 = a1[2]; /*0x64be10*/
  if ( a2 < 0xE ) /*0x64be14*/
    return v35; /*0x64c370*/
  v6 = unk_8B4200; /*0x64be1a*/
  while ( 1 ) /*0x64be20*/
  {
    v7 = *v5; /*0x64be20*/
    v44 = *v5; /*0x64be24*/
    if ( *v5 == 25 ) /*0x64be28*/
    {
      v3 += v4 + 1; /*0x64c33e*/
      v31 = -1 - v4 + v34; /*0x64c342*/
      v4 = 13; /*0x64c344*/
      v34 = v31; /*0x64c349*/
      v5 = &v2[v3]; /*0x64c34d*/
      goto LABEL_48; /*0x64c350*/
    }
    if ( v7 == 28 ) /*0x64be30*/
    {
      v8 = *(_DWORD *)(v5 + 3); /*0x64be35*/
      BYTE2(v45[0]) = v5[2]; /*0x64be38*/
      v3 += 6; /*0x64be40*/
      *(_DWORD *)((char *)v45 + 3) = v8; /*0x64be43*/
      v9 = v34 - 6; /*0x64be47*/
    }
    else
    {
      if ( v7 != 4 ) /*0x64be4e*/
        goto LABEL_9; /*0x64be4e*/
      v10 = v2[++v3]; /*0x64be50*/
      v33 = v10; /*0x64be59*/
      v9 = v34 - 1; /*0x64be5d*/
    }
    v34 = v9; /*0x64be5e*/
LABEL_9:
    memset((char *)&v45[1] + 3, 0, 0x68u); /*0x64be6d*/
    LOBYTE(v45[0]) = v44; /*0x64be75*/
    v11 = (unsigned __int8)byte_8208EC[v44]; /*0x64be85*/
    v38 = v11; /*0x64be8d*/
    if ( v44 != 4 ) /*0x64be91*/
    {
      if ( v44 == 27 ) /*0x64be99*/
      {
        v12 = &v2[v3 + 1]; /*0x64bf10*/
        v13 = (char *)&v45[3] + 1; /*0x64bf14*/
      }
      else
      {
        v12 = &v2[v3 + 1]; /*0x64be9d*/
        if ( v44 == 31 ) /*0x64bea1*/
        {
          qmemcpy((char *)&v45[2] + 3, v12, v11); /*0x64bec7*/
          v15 = *(_DWORD *)((char *)&v45[2] + 3); /*0x64bed0*/
          v14 = (char *)__2_YAPAXI_Z(*(_DWORD *)((char *)&v45[2] + 3)); /*0x64bede*/
          *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64beed*/
          qmemcpy(v14, &a1[v3 + 1 + v38], v15); /*0x64befa*/
          v3 += v15; /*0x64befe*/
          v34 -= v15; /*0x64bf05*/
LABEL_39:
          v6 = unk_8B4200; /*0x64c250*/
          goto LABEL_40; /*0x64c250*/
        }
        v13 = (char *)&v45[1] + 3; /*0x64bea3*/
      }
      qmemcpy(v13, v12, v11); /*0x64beac*/
      goto LABEL_14; /*0x64beac*/
    }
    qmemcpy((char *)&v45[1] + 3, &v2[v3 + 1], v11); /*0x64bf29*/
    if ( v33 > 1u ) /*0x64bf38*/
    {
      v3 += v11 + 1; /*0x64bf41*/
      v34 += -1 - v11; /*0x64bf52*/
      v38 = 5; /*0x64bf56*/
      Debug::Log(); /*0x64bf5e*/
      v16 = HIBYTE(v45[2]); /*0x64bf70*/
      v17 = SBYTE1(v45[3]) + 8 * v40; /*0x64bf77*/
      v18 = (char *)&unk_AFA468 + 640 * v17; /*0x64bf84*/
      *(_DWORD *)v18 = *(_DWORD *)((char *)&v45[1] + 3); /*0x64bf89*/
      v18[4] = v16; /*0x64bf8b*/
      v43 = 1; /*0x64bf93*/
      MEMORY[0xAC50FC][v17] = 1; /*0x64bf97*/
      if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64bfac*/
        Debug::Log(); /*0x64bfba*/
      v36 = &a1[v3]; /*0x64bfe0*/
      v42 = (char *)&unk_AFA46D + 640 * v17; /*0x64bfe4*/
      while ( unk_8B41F8 < 0x4000 ) /*0x64bff2*/
      {
        v19 = &unk_8B4204[111 * unk_8B4200]; /*0x64c00c*/
        qmemcpy(v19, v45, 0x6Cu); /*0x64c013*/
        v19 += 108; /*0x64c013*/
        *(_WORD *)v19 = v45[27]; /*0x64c015*/
        v19[2] = BYTE2(v45[27]); /*0x64c017*/
        dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c028*/
        unk_8B4200 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c047*/
        ++unk_8B41F8; /*0x64c051*/
        v14 = *(char **)v36; /*0x64c057*/
        v20 = v36[4]; /*0x64c05e*/
        ++v35; /*0x64c063*/
        *(_DWORD *)v42 = *(_DWORD *)v36; /*0x64c06b*/
        HIBYTE(v45[2]) = v20; /*0x64c06d*/
        v42[4] = v20; /*0x64c071*/
        v21 = v33 - 1; /*0x64c078*/
        v33 = v21; /*0x64c081*/
        *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64c085*/
        ++v43; /*0x64c089*/
        v42 += 5; /*0x64c08d*/
        MEMORY[0xAC50FC][v17] = v43; /*0x64c091*/
        if ( v21 == 1 ) /*0x64c098*/
        {
          v38 = 4; /*0x64c0d3*/
          Debug::Log(); /*0x64c0db*/
          goto LABEL_39; /*0x64c0e3*/
        }
        v3 += 5; /*0x64c0a7*/
        v36 += 5; /*0x64c0ad*/
        v34 -= 5; /*0x64c0b3*/
        if ( !v21 ) /*0x64c0b7*/
          goto LABEL_39; /*0x64c0b7*/
      }
      return -1; /*0x64bff2*/
    }
    if ( !v33 ) /*0x64c0ea*/
      break; /*0x64c0ea*/
LABEL_14:
    v14 = *(char **)((char *)&v45[1] + 3); /*0x64beb5*/
LABEL_40:
    if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c264*/
    {
      Debug::Log(); /*0x64c271*/
      v6 = unk_8B4200; /*0x64c276*/
    }
    if ( unk_8B41F8 >= 0x4000 ) /*0x64c289*/
    {
      if ( LOBYTE(v45[0]) == 31 ) /*0x64c357*/
        __3_YAXPAX_Z(v14); /*0x64c35a*/
      return -1; /*0x64c35a*/
    }
    v30 = &unk_8B4204[111 * v6]; /*0x64c29e*/
    qmemcpy(v30, v45, 0x6Cu); /*0x64c2a5*/
    v30 += 108; /*0x64c2a5*/
    *(_WORD *)v30 = v45[27]; /*0x64c2a7*/
    v30[2] = BYTE2(v45[27]); /*0x64c2a9*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c2bd*/
    v6 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c2d6*/
    v3 += v38 + 1; /*0x64c2de*/
    v29 = -1 - v38 + v34 == 0; /*0x64c2e8*/
    unk_8B4200 = v6; /*0x64c2ea*/
    ++unk_8B41F8; /*0x64c2f0*/
    ++v35; /*0x64c2f6*/
    v34 += -1 - v38; /*0x64c2fa*/
    if ( v29 ) /*0x64c2fe*/
      return v35; /*0x64c2fe*/
    v5 = &a1[v3]; /*0x64c306*/
    v4 = (unsigned __int8)byte_8208EC[(unsigned __int8)a1[v3]]; /*0x64c31c*/
    if ( a1[v3] == 4 ) /*0x64c31e*/
      ++v4; /*0x64c320*/
    v2 = a1; /*0x64c321*/
LABEL_48:
    if ( v34 < v4 + 1 ) /*0x64c32e*/
      return v35; /*0x64c32e*/
  }
  v3 += v11 + 1; /*0x64c0f9*/
  v38 = 5; /*0x64c0fd*/
  v37 = 1; /*0x64c105*/
  v22 = SBYTE1(v45[3]) + 8 * v40; /*0x64c10d*/
  v33 = MEMORY[0xAC50FC][v22]; /*0x64c11c*/
  v34 += -1 - v11; /*0x64c126*/
  v23 = (char *)&unk_AFA468 + 640 * v22; /*0x64c130*/
  v14 = *(char **)v23; /*0x64c136*/
  *(_DWORD *)((char *)&v45[1] + 3) = *(_DWORD *)v23; /*0x64c138*/
  HIBYTE(v45[2]) = v23[4]; /*0x64c13f*/
  if ( !*(_DWORD *)((char *)v45 + 3) || !LOBYTE(v45[0]) ) /*0x64c151*/
  {
    Debug::Log(); /*0x64c165*/
    v6 = unk_8B4200; /*0x64c16a*/
  }
  if ( !v33 ) /*0x64c179*/
    goto LABEL_40; /*0x64c179*/
  v24 = (void **)((char *)&unk_AFA46D + 640 * v22); /*0x64c185*/
  while ( unk_8B41F8 < 0x4000 ) /*0x64c19b*/
  {
    v25 = &unk_8B4204[111 * v6]; /*0x64c1b0*/
    qmemcpy(v25, v45, 0x6Cu); /*0x64c1b7*/
    v25 += 108; /*0x64c1b7*/
    *(_WORD *)v25 = v45[27]; /*0x64c1b9*/
    v25[2] = BYTE2(v45[27]); /*0x64c1bb*/
    v26 = v24; /*0x64c1cc*/
    dword_A70204[unk_8B4200] = timeGetTime(); /*0x64c1d1*/
    v41 = (void **)((char *)v24 + 5); /*0x64c1e8*/
    v6 = ((_WORD)unk_8B4200 + 1) & 0x3FFF; /*0x64c1ec*/
    ++unk_8B41F8; /*0x64c1f3*/
    v27 = v33 - 1; /*0x64c1fd*/
    unk_8B4200 = v6; /*0x64c200*/
    v14 = (char *)*v24; /*0x64c206*/
    ++v37; /*0x64c208*/
    v28 = *((_BYTE *)v26 + 4); /*0x64c20c*/
    v29 = v33 == 2; /*0x64c20f*/
    ++v35; /*0x64c211*/
    --v33; /*0x64c215*/
    *(_DWORD *)((char *)&v45[1] + 3) = v14; /*0x64c219*/
    HIBYTE(v45[2]) = v28; /*0x64c21d*/
    if ( v29 ) /*0x64c221*/
    {
      v38 = -1; /*0x64c231*/
      Debug::Log(); /*0x64c248*/
      goto LABEL_39; /*0x64c248*/
    }
    if ( !v27 ) /*0x64c225*/
      goto LABEL_40; /*0x64c225*/
    v24 = v41; /*0x64c18d*/
  }
  return -1; /*0x64c362*/
}
}
} // namespace gamemd

// 0x64CD30
namespace gamemd {
void sub_64CD30(int a1, int a2, int a3, char a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall sub_64CD30(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // edi
  char *v6; // edx

  v5 = a1 + a2; /*0x64cd34*/
  if ( a1 <= a1 + a2 ) /*0x64cd39*/
  {
    while ( a4 != MEMORY[0xA83EE7][111 * (unsigned __int8)(MEMORY[0xA83ED4] + a1)] /*0x64cd67*/
         || a3 != *(int *)((char *)&MEMORY[0xA83EE3] + 111 * (unsigned __int8)(MEMORY[0xA83ED4] + a1)) )
    {
      if ( ++a1 > v5 ) /*0x64cd6c*/
        return; /*0x64cd6c*/
    }
    v6 = (char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(MEMORY[0xA83ED4] + a1); /*0x64cd7e*/
    *(_DWORD *)v6 = *(_DWORD *)a5; /*0x64cd8b*/
    v6[4] = *(_BYTE *)(a5 + 4); /*0x64cd90*/
  }
}
}
} // namespace gamemd

// 0x64CDA0
namespace gamemd {
void Network_ProcessMapEvent(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall Network_ProcessMapEvent(int a1, int a2)
{
  int v2; // ebx
  _DWORD *v4; // eax
  int v5; // ebp
  int v6; // edi
  _BYTE *v7; // eax
  _BYTE *v8; // esi
  int v9; // eax
  int v10; // esi
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // edi
  int v14; // ebp
  int v15; // ebx
  _DWORD *v16; // eax
  float *v17; // eax
  int v18; // eax
  _DWORD *v19; // ebx
  int v20; // edi
  int v21; // eax
  signed int v22; // ebp
  size_t v23; // eax
  _DWORD *v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ebp
  _DWORD *v30; // eax
  int v31; // ecx
  _DWORD *v32; // eax
  int v33; // esi
  int v34; // edi
  int v35; // ebx
  int v36; // ebx
  double v37; // st7
  float v38; // eax
  float v39; // ecx
  float v40; // edx
  int v41; // edx
  _DWORD *v42; // esi
  int v43; // edi
  int v44; // ecx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  _DWORD *v48; // eax
  signed int v49; // ecx
  signed int v50; // eax
  int v51; // ecx
  int v52; // eax
  _DWORD *v53; // eax
  _BYTE *v54; // eax
  int v55; // ecx
  char v56; // dl
  char *v57; // eax
  _DWORD *v58; // eax
  int v59; // ecx
  int v60; // eax
  _WORD *v61; // edi
  _WORD *v62; // eax
  _DWORD *v63; // eax
  _BYTE *WaypointCoords; // eax
  int v65; // ecx
  char v66; // dl
  char *v67; // eax
  int k; // esi
  _DWORD *v69; // eax
  int v70; // edx
  int v71; // [esp+30h] [ebp-138h]
  char v72; // [esp+4Bh] [ebp-11Dh]
  _DWORD *v73; // [esp+4Ch] [ebp-11Ch] BYREF
  int v74; // [esp+50h] [ebp-118h]
  _DWORD *v75; // [esp+54h] [ebp-114h] BYREF
  _DWORD *v76; // [esp+58h] [ebp-110h] BYREF
  void **v77; // [esp+5Ch] [ebp-10Ch] BYREF
  void *Block; // [esp+60h] [ebp-108h]
  int v79; // [esp+64h] [ebp-104h]
  char v80; // [esp+69h] [ebp-FFh]
  int v81; // [esp+6Ch] [ebp-FCh]
  int v82; // [esp+70h] [ebp-F8h]
  int TileIndex; // [esp+74h] [ebp-F4h] BYREF
  int v84; // [esp+78h] [ebp-F0h]
  float v85; // [esp+7Ch] [ebp-ECh]
  float v86; // [esp+80h] [ebp-E8h]
  float v87; // [esp+84h] [ebp-E4h]
  int i; // [esp+88h] [ebp-E0h]
  void *Base; // [esp+8Ch] [ebp-DCh]
  size_t NumOfElements; // [esp+90h] [ebp-D8h]
  signed int v91; // [esp+94h] [ebp-D4h]
  int v92; // [esp+98h] [ebp-D0h]
  float v93; // [esp+9Ch] [ebp-CCh]
  void **v94; // [esp+A0h] [ebp-C8h] BYREF
  void *v95; // [esp+A4h] [ebp-C4h]
  int v96; // [esp+A8h] [ebp-C0h]
  int v97; // [esp+ACh] [ebp-BCh]
  int j; // [esp+B0h] [ebp-B8h]
  int v99; // [esp+B4h] [ebp-B4h]
  void **v100; // [esp+B8h] [ebp-B0h] BYREF
  void *v101; // [esp+BCh] [ebp-ACh]
  int v102; // [esp+C0h] [ebp-A8h]
  int v103; // [esp+C4h] [ebp-A4h]
  int v104; // [esp+C8h] [ebp-A0h]
  int v105; // [esp+CCh] [ebp-9Ch]
  float v106; // [esp+D0h] [ebp-98h] BYREF
  float v107; // [esp+D4h] [ebp-94h]
  float v108; // [esp+D8h] [ebp-90h]
  float v109; // [esp+DCh] [ebp-8Ch]
  float v110; // [esp+E0h] [ebp-88h]
  float v111; // [esp+E4h] [ebp-84h]
  float v112; // [esp+E8h] [ebp-80h] BYREF
  float v113; // [esp+ECh] [ebp-7Ch]
  float v114; // [esp+F0h] [ebp-78h]
  float v115; // [esp+F4h] [ebp-74h] BYREF
  float v116; // [esp+F8h] [ebp-70h]
  float v117; // [esp+FCh] [ebp-6Ch]
  _WORD v118[2]; // [esp+100h] [ebp-68h] BYREF
  int v119; // [esp+104h] [ebp-64h]
  int v120; // [esp+108h] [ebp-60h]
  _DWORD *v121; // [esp+10Ch] [ebp-5Ch]
  _DWORD *v122; // [esp+110h] [ebp-58h] BYREF
  int v123; // [esp+114h] [ebp-54h] BYREF
  char v124; // [esp+118h] [ebp-50h]
  int v125; // [esp+11Ch] [ebp-4Ch] BYREF
  char v126; // [esp+120h] [ebp-48h]
  int v127; // [esp+124h] [ebp-44h]
  int v128; // [esp+128h] [ebp-40h]
  int v129; // [esp+130h] [ebp-38h]
  _DWORD v130[3]; // [esp+138h] [ebp-30h] BYREF
  char v131[4]; // [esp+144h] [ebp-24h] BYREF
  char v132[4]; // [esp+148h] [ebp-20h] BYREF
  char v133[8]; // [esp+14Ch] [ebp-1Ch] BYREF
  char v134[8]; // [esp+154h] [ebp-14h] BYREF
  char v135[12]; // [esp+15Ch] [ebp-Ch] BYREF

  v2 = a1; /*0x64cdb2*/
  v84 = a1; /*0x64cdc0*/
  if ( MEMORY[0xA83EF3][111 * (unsigned __int8)(a1 + MEMORY[0xA83ED4])] == 11 ) /*0x64cdd3*/
  {
    v4 = (_DWORD *)Network_Process_6E7C20((char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(a1 + MEMORY[0xA83ED4])); /*0x64cde9*/
    if ( v4 ) /*0x64cdf0*/
    {
      if ( v4 != g_CellClassArray ) /*0x64cdfb*/
      {
        v73 = (_DWORD *)v4[9]; /*0x64ce0b*/
        if ( v73 != (_DWORD *)MEMORY[0xAC6640] ) /*0x64ce0f*/
        {
          ObjectVector::Construct(&v77, 0, 0); /*0x64ce2b*/
          v5 = v2 + a2; /*0x64ce30*/
          v77 = &DynamicVectorClass<ObjectClass *>::`vftable'; /*0x64ce33*/
          v82 = 10; /*0x64ce3d*/
          v81 = 0; /*0x64ce45*/
          v6 = v2; /*0x64ce4d*/
          for ( i = v2 + a2; v6 < v5; ++v6 ) /*0x64ce53*/
          {
            v7 = BuildingLoadQueue::Find((_BYTE *)&MEMORY[0xA83EE3] + 111 * (unsigned __int8)(v6 + MEMORY[0xA83ED4])); /*0x64ce72*/
            v8 = v7; /*0x64ce77*/
            if ( v7 /*0x64cec3*/
              && (v7[20] & 4) != 0
              && (char)v7[1668] < 0
              && (v81 < v79
               || (v80 || !v79)
               && v82 > 0
               && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v82 + v79, 0)) )
            {
              v9 = v81++; /*0x64cece*/
              *((_DWORD *)Block + v9) = v8; /*0x64ced9*/
            }
          }
          v10 = 0; /*0x64cee9*/
          if ( v81 > 0 ) /*0x64ceed*/
          {
            v11 = (_DWORD *)Network_Process_5F6790(&v106, &v77); /*0x64cefe*/
            v130[0] = *v11; /*0x64cf05*/
            v130[1] = v11[1]; /*0x64cf0f*/
            v130[2] = v11[2]; /*0x64cf1d*/
            v12 = Network_Process_5F6810(&v77, v130); /*0x64cf30*/
            v76 = (_DWORD *)v12; /*0x64cf38*/
            Base = 0; /*0x64cf3c*/
            NumOfElements = 0; /*0x64cf40*/
            v91 = 0; /*0x64cf44*/
            LOBYTE(v92) = 0; /*0x64cf48*/
            v93 = 0.0; /*0x64cf4d*/
            if ( v81 > 0 ) /*0x64cf51*/
            {
              do /*0x64d029*/
              {
                v13 = v76[39]; /*0x64cf67*/
                v14 = v76[40]; /*0x64cf6b*/
                v15 = v76[41]; /*0x64cf6e*/
                v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD, float *))(**((_DWORD **)Block + v10) + 72))( /*0x64cf79*/
                                  *((_DWORD *)Block + v10),
                                  &v112);
                v17 = (float *)Coord::Subtract(&v115, *v16 - v13, v16[1] - v14, v16[2] - v15); /*0x64cf94*/
                v106 = *v17; /*0x64cf9b*/
                v107 = v17[1]; /*0x64cfac*/
                v108 = v17[2]; /*0x64cfb6*/
                v18 = Coord::Length((int *)&v106); /*0x64cfbd*/
                v19 = (char *)Block + 4 * v10; /*0x64cfcc*/
                v20 = v10 + 1000 * v18; /*0x64cfd6*/
                v21 = v91; /*0x64cfdc*/
                if ( (int)(NumOfElements + 1) <= v91 ) /*0x64cfe2*/
                  goto LABEL_22; /*0x64cfe2*/
                if ( !v91 ) /*0x64cfe6*/
                  v21 = 10; /*0x64cfe8*/
                if ( (unsigned __int8)Network_Process_6525A0(v21) ) /*0x64cff2*/
                {
LABEL_22:
                  *((_DWORD *)Base + 2 * NumOfElements) = v20; /*0x64d003*/
                  *((_DWORD *)Base + 2 * NumOfElements + 1) = *v19; /*0x64d010*/
                  LOBYTE(v92) = 0; /*0x64d019*/
                  ++NumOfElements; /*0x64d01e*/
                }
                ++v10; /*0x64d026*/
              }
              while ( v10 < v81 ); /*0x64d029*/
              v2 = v84; /*0x64d02f*/
              v12 = (int)v76; /*0x64d033*/
            }
            v81 = 0; /*0x64d03f*/
            if ( Block && v80 ) /*0x64d04b*/
            {
              __3_YAXPAX_Z(Block); /*0x64d04e*/
              Block = 0; /*0x64d056*/
            }
            v80 = 0; /*0x64d063*/
            v79 = 0; /*0x64d068*/
            VectorClass::CellConstructor(&v100, 0, 0); /*0x64d06c*/
            v100 = &DynamicVectorClass<Cell>::`vftable'; /*0x64d07c*/
            v105 = 10; /*0x64d087*/
            v104 = 0; /*0x64d08e*/
            BoolVector::Construct(0, 0); /*0x64d095*/
            v99 = 10; /*0x64d09a*/
            v22 = 0; /*0x64d09e*/
            v23 = NumOfElements; /*0x64d0a0*/
            v94 = &DynamicVectorClass<bool>::`vftable'; /*0x64d0a4*/
            for ( j = 0; v22 < (int)NumOfElements; ++v22 ) /*0x64d0b2*/
            {
              if ( !(_BYTE)v92 ) /*0x64d0c2*/
              {
                qsort(Base, v23, 8u, sub_652630); /*0x64d0d1*/
                v93 = 0.0; /*0x64d0d9*/
                LOBYTE(v92) = 1; /*0x64d0dd*/
              }
              v24 = (char *)Base + 8 * v22 + 4; /*0x64d0f0*/
              if ( v81 < v79 /*0x64d117*/
                || (v80 || !v79)
                && v82 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v77[2])(&v77, v82 + v79, 0) )
              {
                v25 = v81++; /*0x64d126*/
                *((_DWORD *)Block + v25) = *v24; /*0x64d12f*/
              }
              if ( v104 < v102 /*0x64d171*/
                || (BYTE1(v103) || !v102)
                && v105 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v100[2])(&v100, v105 + v102, 0) )
              {
                v26 = v104++; /*0x64d186*/
                *((_DWORD *)v101 + v26) = v73; /*0x64d194*/
              }
              if ( j < v96 /*0x64d1c4*/
                || (BYTE1(v97) || !v96)
                && v99 > 0
                && ((unsigned __int8 (__thiscall *)(void ***, int, _DWORD))v94[2])(&v94, v99 + v96, 0) )
              {
                v27 = j++; /*0x64d1cf*/
                *((_BYTE *)v95 + v27) = 0; /*0x64d1da*/
              }
              v23 = NumOfElements; /*0x64d1de*/
            }
            v28 = 0; /*0x64d1fc*/
            v120 = *(_DWORD *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v12 + 440))(v12, &TileIndex); /*0x64d202*/
            v119 = 0; /*0x64d20b*/
            if ( v81 > 0 ) /*0x64d212*/
            {
              while ( 1 ) /*0x64d222*/
              {
                v29 = (_DWORD *)*((_DWORD *)Block + v28); /*0x64d222*/
                v76 = v73; /*0x64d225*/
                if ( !v28 ) /*0x64d229*/
                {
                  v30 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73); /*0x64d235*/
                  v31 = v30[80]; /*0x64d23a*/
                  BYTE1(v31) |= 0x80u; /*0x64d245*/
                  v30[80] = v31; /*0x64d248*/
                  *(_BYTE *)v95 = 1; /*0x64d24e*/
                  goto LABEL_84; /*0x64d251*/
                }
                if ( !*((_BYTE *)v95 + v28) ) /*0x64d25a*/
                  break; /*0x64d25a*/
LABEL_84:
                v60 = v81; /*0x64d76b*/
                TileIndex = ++v28; /*0x64d772*/
                if ( v28 < v81 ) /*0x64d776*/
                {
                  do /*0x64d889*/
                  {
                    if ( !*((_BYTE *)v95 + v28) ) /*0x64d780*/
                    {
                      v61 = (_WORD *)(*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)Block + v28) + 440))( /*0x64d7a4*/
                                       *((_DWORD *)Block + v28),
                                       v131);
                      v62 = (_WORD *)(*(int (__thiscall **)(_DWORD *, char *))(*v29 + 440))(v29, v132); /*0x64d7b0*/
                      if ( *v62 == *v61 && v62[1] == v61[1] ) /*0x64d7ca*/
                      {
                        v63 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x64d7da*/
                        ScriptAction::GetWaypointCoords(&v125, v63); /*0x64d7e7*/
                        WaypointCoords = ScriptAction::GetWaypointCoords(v134, *((_DWORD **)Block + v28)); /*0x64d7fb*/
                        v128 = *(_DWORD *)WaypointCoords; /*0x64d802*/
                        v65 = v2; /*0x64d809*/
                        if ( v2 <= i ) /*0x64d814*/
                        {
                          while ( WaypointCoords[4] != MEMORY[0xA83EE7][111 * (unsigned __int8)(v65 + MEMORY[0xA83ED4])] /*0x64d841*/
                               || v128 != *(int *)((char *)&MEMORY[0xA83EE3]
                                                 + 111 * (unsigned __int8)(v65 + MEMORY[0xA83ED4])) )
                          {
                            if ( ++v65 > i ) /*0x64d84a*/
                              goto LABEL_94; /*0x64d84a*/
                          }
                          v66 = v126; /*0x64d863*/
                          v67 = (char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(v65 + MEMORY[0xA83ED4]); /*0x64d86a*/
                          *(_DWORD *)v67 = v125; /*0x64d871*/
                          v67[4] = v66; /*0x64d873*/
LABEL_94:
                          v2 = v84; /*0x64d876*/
                        }
                        *((_BYTE *)v95 + v28) = 1; /*0x64d87e*/
                      }
                    }
                    v60 = v81; /*0x64d882*/
                    ++v28; /*0x64d886*/
                  }
                  while ( v28 < v81 ); /*0x64d889*/
                  v28 = TileIndex; /*0x64d88f*/
                }
                v119 = v28; /*0x64d895*/
                if ( v28 >= v60 ) /*0x64d89c*/
                  goto LABEL_99; /*0x64d89c*/
              }
              v122 = v73; /*0x64d26b*/
              v32 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, char *, _DWORD))(*v29 + 76))(v29, v135, 0); /*0x64d27a*/
              v33 = *v32 / 256; /*0x64d2a4*/
              v34 = v32[1] / 256; /*0x64d2a7*/
              v35 = (*((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73) + 80) >> 8) & 1; /*0x64d2c2*/
              v36 = *((char *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73) + 283) + 4 * v35; /*0x64d2df*/
              v112 = (double)(__int16)v73 + 0.5; /*0x64d2fe*/
              v114 = 0.0; /*0x64d30b*/
              v74 = (__int16)v33 - (__int16)v120; /*0x64d316*/
              v87 = 0.0; /*0x64d31a*/
              v113 = (double)SHIWORD(v73) + 0.5; /*0x64d330*/
              v85 = (float)v74; /*0x64d33e*/
              v74 = (__int16)v34 - SHIWORD(v120); /*0x64d344*/
              v86 = (float)v74; /*0x64d34c*/
              v37 = Math::Sqrt(v86 * v86 + v85 * v85); /*0x64d365*/
              if ( v37 == 0.0 ) /*0x64d378*/
              {
                v38 = v85; /*0x64d3c6*/
                v39 = v86; /*0x64d3ca*/
                v40 = v87; /*0x64d3ce*/
                v115 = v85; /*0x64d3d2*/
                v116 = v86; /*0x64d3db*/
              }
              else
              {
                v106 = v85 / v37; /*0x64d380*/
                v38 = v106; /*0x64d38d*/
                v115 = v106; /*0x64d394*/
                v107 = v86 / v37; /*0x64d39b*/
                v39 = v107; /*0x64d3a2*/
                v116 = v107; /*0x64d3af*/
                v108 = 0.0 / v37; /*0x64d3b6*/
                v40 = v108; /*0x64d3bd*/
              }
              v117 = v40; /*0x64d3e2*/
              v87 = v40; /*0x64d3e9*/
              v41 = *v29; /*0x64d3ed*/
              v86 = v39; /*0x64d3f0*/
              v85 = v38; /*0x64d3f6*/
              v74 = 0; /*0x64d3fa*/
              v72 = 0; /*0x64d402*/
              v127 = (*(int (__thiscall **)(_DWORD *))(v41 + 132))(v29); /*0x64d40d*/
              TileIndex = MapClass::GetTileIndex(&MEMORY[0x87F7E8], (__int16 *)&v73, *(_DWORD *)(v127 + 1460), 1); /*0x64d42c*/
              while ( 1 ) /*0x64d43e*/
              {
                v109 = v115 + v112; /*0x64d43e*/
                v112 = v109; /*0x64d45a*/
                v110 = v116 + v113; /*0x64d461*/
                v113 = v110; /*0x64d47d*/
                v111 = v117 + v114; /*0x64d484*/
                v114 = v111; /*0x64d499*/
                LOWORD(v121) = Math::RoundToInt(v109); /*0x64d4ac*/
                HIWORD(v121) = Math::RoundToInt(v110); /*0x64d4b9*/
                v75 = v121; /*0x64d4d2*/
                v42 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v75); /*0x64d4df*/
                if ( !LayerClass::IsWithinUsableArea(&MEMORY[0x87F7E8], (__int16 *)&v75, 1) ) /*0x64d4f0*/
                  goto LABEL_75; /*0x64d4f0*/
                v43 = MapClass::GetTileIndex( /*0x64d520*/
                        &MEMORY[0x87F7E8],
                        (__int16 *)&v75,
                        *(_DWORD *)(v127 + 1460),
                        BYTE1(v42[80]) & 1);
                v44 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int, int, _DWORD, int))(*v29 + 428))( /*0x64d535*/
                        v29,
                        v42,
                        -1,
                        v36,
                        0,
                        1);
                if ( v43 != TileIndex ) /*0x64d53b*/
                  goto LABEL_68; /*0x64d53b*/
                v45 = v42[80]; /*0x64d53d*/
                if ( (v45 & 0x8000) == 0 ) /*0x64d546*/
                  break; /*0x64d546*/
                v122 = v75; /*0x64d54c*/
LABEL_69:
                if ( ++v74 >= 6 ) /*0x64d5b3*/
                {
                  v48 = &v122; /*0x64d5b9*/
                  goto LABEL_77; /*0x64d5c0*/
                }
              }
              if ( (v45 & 0x100) != 0 ) /*0x64d55d*/
              {
                v46 = v36 - *((char *)v42 + 283) - 4; /*0x64d56d*/
                if ( (int)((HIDWORD(v46) ^ v46) - HIDWORD(v46)) > 2 ) /*0x64d575*/
                  goto LABEL_75; /*0x64d575*/
              }
              if ( (v42[80] & 0x100) == 0 ) /*0x64d57d*/
              {
                v47 = v36 - *((char *)v42 + 283); /*0x64d58a*/
                if ( (int)((HIDWORD(v47) ^ v47) - HIDWORD(v47)) > 2 ) /*0x64d592*/
                  goto LABEL_75; /*0x64d592*/
              }
              if ( v44 < 4 || v44 == 6 ) /*0x64d5a0*/
              {
                if ( v72 ) /*0x64d5cb*/
                {
                  v49 = abs32((__int16)v75 - (__int16)v73); /*0x64d5e7*/
                  v50 = abs32(SHIWORD(v75) - SHIWORD(v73)); /*0x64d5f3*/
                  if ( v49 > v50 ) /*0x64d5f7*/
                    v50 = v49; /*0x64d5f9*/
                  TileIndex = v50 + 3; /*0x64d600*/
                  v51 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v73) + 80) >> 8; /*0x64d61d*/
                  LOBYTE(v51) = v51 & 1; /*0x64d620*/
                  v71 = v51; /*0x64d623*/
                  v52 = *((_DWORD *)CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v75) + 80) >> 8; /*0x64d639*/
                  LOBYTE(v52) = v52 & 1; /*0x64d63c*/
                  Pathfinding::CalcDistance( /*0x64d64b*/
                    (int)MEMORY[0x87E8B8],
                    (__int16 *)&v75,
                    (__int16 *)&v73,
                    (int)v29,
                    v52,
                    v71,
                    -1);
LABEL_75:
                  v48 = &v122; /*0x64d650*/
                  goto LABEL_77; /*0x64d657*/
                }
                v118[0] = Math::RoundToInt(v109); /*0x64d66c*/
                v118[1] = Math::RoundToInt(v110); /*0x64d679*/
                v48 = v118; /*0x64d681*/
LABEL_77:
                v28 = v119; /*0x64d688*/
                v76 = (_DWORD *)*v48; /*0x64d698*/
                *((_DWORD *)v101 + v119) = v76; /*0x64d6a0*/
                v53 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x64d6a9*/
                ScriptAction::GetWaypointCoords(&v123, v53); /*0x64d6b6*/
                v54 = ScriptAction::GetWaypointCoords(v133, v29); /*0x64d6c3*/
                v129 = *(_DWORD *)v54; /*0x64d6ca*/
                v55 = v84; /*0x64d6d1*/
                if ( v84 <= i ) /*0x64d6de*/
                {
                  while ( v54[4] != MEMORY[0xA83EE7][111 * (unsigned __int8)(v55 + MEMORY[0xA83ED4])] /*0x64d70b*/
                       || v129 != *(int *)((char *)&MEMORY[0xA83EE3] + 111 * (unsigned __int8)(v55 + MEMORY[0xA83ED4])) )
                  {
                    if ( ++v55 > i ) /*0x64d714*/
                      goto LABEL_83; /*0x64d714*/
                  }
                  v56 = v124; /*0x64d72d*/
                  v57 = (char *)&MEMORY[0xA83EEF] + 111 * (unsigned __int8)(v55 + MEMORY[0xA83ED4]); /*0x64d734*/
                  *(_DWORD *)v57 = v123; /*0x64d73b*/
                  v57[4] = v56; /*0x64d73d*/
                }
LABEL_83:
                v58 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v76); /*0x64d740*/
                v59 = v58[80]; /*0x64d74f*/
                v2 = v84; /*0x64d75a*/
                BYTE1(v59) |= 0x80u; /*0x64d75e*/
                v58[80] = v59; /*0x64d761*/
                *((_BYTE *)v95 + v28) = 1; /*0x64d767*/
                goto LABEL_84; /*0x64d767*/
              }
LABEL_68:
              v72 = 1; /*0x64d5a2*/
              goto LABEL_69; /*0x64d5a2*/
            }
LABEL_99:
            for ( k = 0; k < v104; v69[80] = v70 ) /*0x64d8af*/
            {
              v69 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)v101 + 2 * k); /*0x64d8c1*/
              v70 = v69[80]; /*0x64d8c6*/
              BYTE1(v70) &= ~0x80u; /*0x64d8d1*/
              ++k; /*0x64d8d4*/
            }
            v94 = &VectorClass<bool>::`vftable'; /*0x64d8e6*/
            if ( v95 && BYTE1(v97) ) /*0x64d8f8*/
            {
              __3_YAXPAX_Z(v95); /*0x64d8fb*/
              v95 = 0; /*0x64d903*/
            }
            BYTE1(v97) = 0; /*0x64d90e*/
            v96 = 0; /*0x64d915*/
            v100 = &VectorClass<Cell>::`vftable'; /*0x64d919*/
            if ( v101 && BYTE1(v103) ) /*0x64d92f*/
            {
              __3_YAXPAX_Z(v101); /*0x64d932*/
              v101 = 0; /*0x64d93a*/
            }
            BYTE1(v103) = 0; /*0x64d945*/
            v102 = 0; /*0x64d94e*/
            __3_YAXPAX_Z(Base); /*0x64d955*/
          }
          v77 = &VectorClass<ObjectClass *>::`vftable'; /*0x64d963*/
          if ( Block ) /*0x64d96d*/
          {
            if ( v80 ) /*0x64d975*/
              __3_YAXPAX_Z(Block); /*0x64d978*/
          }
        }
      }
    }
  }
}
}
} // namespace gamemd

// 0x64DAB0
namespace gamemd {
int ComputeNetworkFrameCRC()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ComputeNetworkFrameCRC()
{
  unsigned int v0; // eax
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int i; // ebx
  int v6; // edi
  int v7; // ebp
  int v8; // esi
  _DWORD *Value; // eax
  int j; // esi
  int v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // edi
  HouseClass *v15; // edx
  int v16; // ecx
  int *v17; // ebp
  int v18; // edi
  bool v19; // cc
  _DWORD *v20; // esi
  int v21; // edi
  int v22; // ebx
  int v23; // edx
  int v24; // eax
  int k; // ebp
  _DWORD *v26; // esi
  int v27; // edi
  int v28; // ebx
  int v29; // edx
  int v31; // [esp+10h] [ebp-14h] BYREF
  _DWORD v32[2]; // [esp+14h] [ebp-10h] BYREF
  int v33; // [esp+1Ch] [ebp-8h]
  int v34; // [esp+20h] [ebp-4h]

  v0 = 0; /*0x64dab9*/
  v1 = 0; /*0x64dabe*/
  for ( *(_DWORD *)MEMORY[0xAC51FC] = 0; v1 < MEMORY[0xA83DF8]; *(_DWORD *)MEMORY[0xAC51FC] = v0 ) /*0x64dac8*/
  {
    v2 = *((_DWORD *)MEMORY[0xA83DEC] + v1); /*0x64dad3*/
    v3 = *(_DWORD *)(v2 + 156); /*0x64dadc*/
    v4 = *(_DWORD *)(v2 + 160); /*0x64dae2*/
    v34 = *(_DWORD *)(v2 + 164); /*0x64daf3*/
    v0 = v3 / 10 /*0x64db41*/
       + ((v4 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v2 + 904), &v31) >> 7) + 1) >> 1)
       + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
       + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    ++v1; /*0x64db49*/
  }
  for ( i = 0; i < MEMORY[0x8B4118]; *(_DWORD *)MEMORY[0xAC51FC] = v0 ) /*0x64db61*/
  {
    v6 = *((_DWORD *)MEMORY[0x8B410C] + i); /*0x64db6d*/
    v7 = *(_DWORD *)(v6 + 156); /*0x64db76*/
    v33 = *(_DWORD *)(v6 + 160); /*0x64db7f*/
    v34 = *(_DWORD *)(v6 + 164); /*0x64db8a*/
    v8 = (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v6 + 904), &v31) >> 7) + 1) >> 1); /*0x64dbad*/
    Value = ProgressTimer::GetValue((_WORD *)(v6 + 928), v32); /*0x64dbb3*/
    v0 = (unsigned __int8)((unsigned int)((*Value >> 7) + 1) >> 1) /*0x64dc09*/
       + v8
       + ((v33 / 10) << 16)
       + v7 / 10
       + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
       + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    ++i; /*0x64dc0b*/
  }
  for ( j = 0; j < MEMORY[0xA8EB50]; *(_DWORD *)MEMORY[0xAC51FC] = v0 ) /*0x64dc23*/
  {
    v11 = *((_DWORD *)MEMORY[0xA8EB44] + j); /*0x64dc2f*/
    v12 = *(_DWORD *)(v11 + 156); /*0x64dc38*/
    v13 = *(_DWORD *)(v11 + 160); /*0x64dc3e*/
    v34 = *(_DWORD *)(v11 + 164); /*0x64dc48*/
    v0 = v12 / 10 /*0x64dc9d*/
       + ((v13 / 10) << 16)
       + (unsigned __int8)((unsigned int)((*ProgressTimer::GetValue((_WORD *)(v11 + 904), v32) >> 7) + 1) >> 1)
       + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
       + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    ++j; /*0x64dca5*/
  }
  v14 = HouseClass_Count; /*0x64dcb3*/
  if ( HouseClass_Count > 0 ) /*0x64dcbb*/
  {
    v15 = HouseClass_Array; /*0x64dcbd*/
    do /*0x64dce2*/
    {
      v16 = *(_DWORD *)v15->__pad_0; /*0x64dcc3*/
      v15 = (HouseClass *)((char *)v15 + 4); /*0x64dcc7*/
      v0 = *(unsigned __int8 *)(v16 + 577) + (v0 >> 31) + 2 * v0; /*0x64dcda*/
      --v14; /*0x64dcdc*/
      *(_DWORD *)MEMORY[0xAC51FC] = v0; /*0x64dcdd*/
    }
    while ( v14 ); /*0x64dce2*/
  }
  v17 = MEMORY[0x8A0370]; /*0x64dce4*/
  do /*0x64dd92*/
  {
    v18 = 0; /*0x64dcec*/
    v19 = *v17 <= 0; /*0x64dcee*/
    v31 = 0; /*0x64dcf0*/
    if ( !v19 ) /*0x64dcf4*/
    {
      do /*0x64dd83*/
      {
        v20 = *(_DWORD **)(*(v17 - 3) + 4 * v18); /*0x64dcfd*/
        if ( (*(int (__thiscall **)(_DWORD *))(*v20 + 44))(v20) != 4 /*0x64dd19*/
          || (*(int (__stdcall **)(_DWORD *))(v20[1] + 16))(v20 + 1) != -2 )
        {
          v21 = v20[39]; /*0x64dd23*/
          v22 = v20[40]; /*0x64dd25*/
          v23 = *v20; /*0x64dd2b*/
          v34 = v20[41]; /*0x64dd2d*/
          v24 = v21 / 10 + ((v22 / 10) << 16) + (*(int (__thiscall **)(_DWORD *))(v23 + 44))(v20); /*0x64dd5d*/
          v18 = v31; /*0x64dd67*/
          *(_DWORD *)MEMORY[0xAC51FC] = v24 + (*(_DWORD *)MEMORY[0xAC51FC] >> 31) + 2 * *(_DWORD *)MEMORY[0xAC51FC]; /*0x64dd73*/
        }
        v19 = ++v18 < *v17; /*0x64dd7d*/
        v31 = v18; /*0x64dd7f*/
      }
      while ( v19 ); /*0x64dd83*/
    }
    v17 += 6; /*0x64dd89*/
  }
  while ( (int)v17 < (int)&MEMORY[0x8A03E8] ); /*0x64dd92*/
  for ( k = 0; k < MEMORY[0x87F788]; ++k ) /*0x64dda1*/
  {
    v26 = (_DWORD *)*((_DWORD *)MEMORY[0x87F77C] + k); /*0x64ddad*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v26 + 44))(v26) != 4 /*0x64ddc9*/
      || (*(int (__stdcall **)(_DWORD *))(v26[1] + 16))(v26 + 1) != -2 )
    {
      v27 = v26[39]; /*0x64ddd3*/
      v28 = v26[40]; /*0x64ddd5*/
      v29 = *v26; /*0x64dddb*/
      v34 = v26[41]; /*0x64dddd*/
      *(_DWORD *)MEMORY[0xAC51FC] = v27 / 10 /*0x64de1f*/
                                  + ((v28 / 10) << 16)
                                  + (*(int (__thiscall **)(_DWORD *))(v29 + 44))(v26)
                                  + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
                                  + 2 * *(_DWORD *)MEMORY[0xAC51FC];
    }
  }
  *(_DWORD *)MEMORY[0xAC51FC] = Random::State((_DWORD *)MEMORY[0xA8B230] + 134) /*0x64de54*/
                              + (*(_DWORD *)MEMORY[0xAC51FC] >> 31)
                              + 2 * *(_DWORD *)MEMORY[0xAC51FC];
  return AllocateTriggerLog((int)MEMORY[0xA8ED84] % 256); /*0x64de75*/
}
}
} // namespace gamemd

// 0x646DB0
namespace gamemd {
void nullsub_216()
{
  ;
}
} // namespace gamemd

// 0x648340
namespace gamemd {
void nullsub_32()
{
  ;
}
} // namespace gamemd

// 0x64DE80
namespace gamemd {
int Hash_Compute(unsigned int * a1, int a2)
{
  result = a2 + (*a1 >> 31) + 2 * *a1;
  *a1 = result;
}
} // namespace gamemd
