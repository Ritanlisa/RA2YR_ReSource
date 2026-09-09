// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x47B3A0
long long Isometric::InitTables(IUnknown * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
__int64 __thiscall Isometric::InitTables(int this, IUnknown *aP1)
{
  char v2; // al
  __int64 result; // rax
  int v5; // ecx
  double v6; // st7

  v2 = MEMORY[0x89E770]; /*0x47b3a9*/
  if ( (MEMORY[0x89E770] & 1) == 0 ) /*0x47b3b3*/
  {
    v2 = MEMORY[0x89E770] | 1; /*0x47b3bb*/
    MEMORY[0x89E770] |= 1u; /*0x47b3bd*/
    *(double *)&MEMORY[0x89E720] = (double)MEMORY[0x89E7C0]; /*0x47b3c2*/
  }
  if ( (v2 & 2) == 0 ) /*0x47b3ca*/
  {
    v2 |= 2u; /*0x47b3d8*/
    MEMORY[0x89E770] = v2; /*0x47b3da*/
    MEMORY[0x89E740] = *(double *)&MEMORY[0x89E720] * 0.00390625; /*0x47b3df*/
  }
  if ( (v2 & 4) == 0 ) /*0x47b3e7*/
  {
    MEMORY[0x89E770] = v2 | 4; /*0x47b3f5*/
    MEMORY[0x81C918][0] = MEMORY[0x89E720]; /*0x47b3ff*/
    MEMORY[0x81C940] = MEMORY[0x89E720]; /*0x47b40e*/
    MEMORY[0x81C960] = MEMORY[0x89E720]; /*0x47b41d*/
    MEMORY[0x81C968] = MEMORY[0x89E720]; /*0x47b433*/
    MEMORY[0x81C988] = MEMORY[0x89E720]; /*0x47b442*/
    MEMORY[0x81C990] = MEMORY[0x89E720]; /*0x47b451*/
    qword_81C9B8 = MEMORY[0x89E720]; /*0x47b461*/
    qword_81C9E0 = MEMORY[0x89E720]; /*0x47b470*/
    dbl_81C9B0 = -*(double *)&MEMORY[0x89E720]; /*0x47b47a*/
    MEMORY[0x81C920] = 0; /*0x47b482*/
    MEMORY[0x81C924] = 0; /*0x47b48c*/
    MEMORY[0x81C928] = 0; /*0x47b496*/
    MEMORY[0x81C92C] = 0; /*0x47b4a0*/
    MEMORY[0x81C930] = 0; /*0x47b4aa*/
    MEMORY[0x81C934] = 1072693248; /*0x47b4b4*/
    MEMORY[0x81C938] = 0; /*0x47b4be*/
    MEMORY[0x81C93C] = 0; /*0x47b4c8*/
    MEMORY[0x81C948] = 0; /*0x47b4d2*/
    MEMORY[0x81C94C] = 0; /*0x47b4dc*/
    MEMORY[0x81C950] = 0; /*0x47b4e6*/
    MEMORY[0x81C954] = -1074790400; /*0x47b4f0*/
    MEMORY[0x81C958] = 0; /*0x47b4fa*/
    MEMORY[0x81C95C] = 0; /*0x47b504*/
    MEMORY[0x81C970] = 0; /*0x47b50e*/
    MEMORY[0x81C974] = 0; /*0x47b518*/
    MEMORY[0x81C978] = 0; /*0x47b522*/
    MEMORY[0x81C97C] = 0; /*0x47b52c*/
    MEMORY[0x81C980] = 0; /*0x47b536*/
    MEMORY[0x81C984] = -1074790400; /*0x47b540*/
    MEMORY[0x81C998] = 0; /*0x47b54a*/
    MEMORY[0x81C99C] = 0; /*0x47b554*/
    MEMORY[0x81C9A0] = 0; /*0x47b55e*/
    MEMORY[0x81C9A4] = 1072693248; /*0x47b568*/
    dword_81C9A8 = 0; /*0x47b572*/
    dword_81C9AC = 1072693248; /*0x47b57c*/
    dword_81C9C0 = 0; /*0x47b586*/
    dword_81C9C4 = 0; /*0x47b590*/
    dword_81C9C8 = 0; /*0x47b59a*/
    dword_81C9CC = -1074790400; /*0x47b5a4*/
    dword_81C9D0 = 0; /*0x47b5ae*/
    dword_81C9D4 = 1072693248; /*0x47b5b8*/
    dword_81C9D8 = 0; /*0x47b5c2*/
    dword_81C9DC = 0; /*0x47b5cc*/
    dword_81C9E8 = 0; /*0x47b5db*/
    dword_81C9EC = 0; /*0x47b5e5*/
    dword_81C9F0 = 0; /*0x47b5ef*/
    dword_81C9F4 = -1074790400; /*0x47b5f9*/
    dword_81C9F8 = 0; /*0x47b603*/
    dword_81C9FC = -1074790400; /*0x47b60d*/
    qword_81CA00 = MEMORY[0x89E720]; /*0x47b617*/
    qword_81CA08 = MEMORY[0x89E720]; /*0x47b627*/
    qword_81CA30 = MEMORY[0x89E720]; /*0x47b63c*/
    qword_81CA58 = MEMORY[0x89E720]; /*0x47b64b*/
    qword_81CA78 = MEMORY[0x89E720]; /*0x47b65b*/
    qword_81CA80 = MEMORY[0x89E720]; /*0x47b66a*/
    qword_81CAA8 = MEMORY[0x89E720]; /*0x47b67b*/
    qword_81CAC8 = MEMORY[0x89E720]; /*0x47b68b*/
    dbl_81CAA0 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b692*/
    dbl_81CAF8 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b698*/
    dword_81CA10 = 0; /*0x47b6a0*/
    dword_81CA14 = 0; /*0x47b6aa*/
    dword_81CA18 = 0; /*0x47b6b4*/
    dword_81CA1C = 1072693248; /*0x47b6be*/
    dword_81CA20 = 0; /*0x47b6c8*/
    dword_81CA24 = -1074790400; /*0x47b6d2*/
    dword_81CA28 = 0; /*0x47b6dc*/
    dword_81CA2C = 0; /*0x47b6e6*/
    dword_81CA38 = 0; /*0x47b6f0*/
    dword_81CA3C = 0; /*0x47b6fa*/
    dword_81CA40 = 0; /*0x47b704*/
    dword_81CA44 = 1072693248; /*0x47b70e*/
    dword_81CA48 = 0; /*0x47b718*/
    dword_81CA4C = 1072693248; /*0x47b722*/
    dword_81CA50 = 0; /*0x47b72c*/
    dword_81CA54 = 0; /*0x47b736*/
    dword_81CA60 = 0; /*0x47b740*/
    dword_81CA64 = 0; /*0x47b74a*/
    dword_81CA68 = 0; /*0x47b754*/
    dword_81CA6C = -1074790400; /*0x47b75e*/
    dword_81CA70 = 0; /*0x47b768*/
    dword_81CA74 = 1072693248; /*0x47b772*/
    dword_81CA88 = 0; /*0x47b77c*/
    dword_81CA8C = 0; /*0x47b786*/
    dword_81CA90 = 0; /*0x47b790*/
    dword_81CA94 = -1074790400; /*0x47b79a*/
    dword_81CA98 = 0; /*0x47b7a4*/
    dword_81CA9C = -1074790400; /*0x47b7ae*/
    dword_81CAB0 = 0; /*0x47b7b8*/
    dword_81CAB4 = 0; /*0x47b7c2*/
    dword_81CAB8 = 0; /*0x47b7cc*/
    dword_81CABC = 1072693248; /*0x47b7d6*/
    dword_81CAC0 = 0; /*0x47b7e0*/
    dword_81CAC4 = -1074790400; /*0x47b7ea*/
    qword_81CAD0 = MEMORY[0x89E720]; /*0x47b7fa*/
    dword_81CAD8 = 0; /*0x47b805*/
    dword_81CADC = 0; /*0x47b80f*/
    dword_81CAE0 = 0; /*0x47b819*/
    dword_81CAE4 = 1072693248; /*0x47b823*/
    dword_81CAE8 = 0; /*0x47b82d*/
    dword_81CAEC = 1072693248; /*0x47b837*/
    dword_81CAF0 = 0; /*0x47b841*/
    dword_81CAF4 = 0; /*0x47b84b*/
    dword_81CB00 = 0; /*0x47b855*/
    dword_81CB04 = 0; /*0x47b85f*/
    dword_81CB08 = 0; /*0x47b869*/
    dbl_81CB20 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b873*/
    dbl_81CB40 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b879*/
    dbl_81CB48 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b87f*/
    dbl_81CB70 = *(double *)&MEMORY[0x89E720] + *(double *)&MEMORY[0x89E720]; /*0x47b885*/
    qword_81CB18 = MEMORY[0x89E720]; /*0x47b89b*/
    dbl_81CB98 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b8ab*/
    dbl_81CBA0 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b8b1*/
    dbl_81CBC0 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b8b7*/
    qword_81CB68 = MEMORY[0x89E720]; /*0x47b8c9*/
    qword_81CBB8 = MEMORY[0x89E720]; /*0x47b8da*/
    dbl_81CBC8 = *(double *)&MEMORY[0x89E720] * -0.5; /*0x47b8e4*/
    qword_81CC08 = MEMORY[0x89E720]; /*0x47b8f5*/
    dword_81CB0C = -1074790400; /*0x47b8ff*/
    dbl_81CBE8 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b909*/
    dbl_81CBF0 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b90f*/
    dbl_81CC10 = *(double *)&MEMORY[0x89E720] * 0.5; /*0x47b915*/
    dword_81CB10 = 0; /*0x47b91b*/
    dword_81CB14 = 1072693248; /*0x47b925*/
    dword_81CB28 = 0; /*0x47b92f*/
    dword_81CB2C = 0; /*0x47b939*/
    dword_81CB30 = 0; /*0x47b943*/
    dword_81CB34 = -1074790400; /*0x47b94d*/
    dword_81CB38 = 0; /*0x47b957*/
    dword_81CB3C = -1074790400; /*0x47b961*/
    dword_81CB50 = 0; /*0x47b96b*/
    dword_81CB54 = 0; /*0x47b975*/
    dword_81CB58 = 0; /*0x47b97f*/
    dword_81CB5C = 1072693248; /*0x47b989*/
    dword_81CB60 = 0; /*0x47b993*/
    dword_81CB64 = -1074790400; /*0x47b99d*/
    dword_81CB78 = 0; /*0x47b9a7*/
    dword_81CB7C = 0; /*0x47b9b1*/
    dword_81CB80 = 0; /*0x47b9bb*/
    dword_81CB84 = 0; /*0x47b9c5*/
    dword_81CB88 = 0; /*0x47b9cf*/
    dword_81CB8C = 0; /*0x47b9d9*/
    dword_81CB90 = 0; /*0x47b9e3*/
    dword_81CB94 = 0; /*0x47b9ed*/
    dword_81CBA8 = 0; /*0x47b9f7*/
    dword_81CBAC = 0; /*0x47ba01*/
    dword_81CBB0 = 0; /*0x47ba0b*/
    dword_81CBB4 = 0; /*0x47ba15*/
    dword_81CBD0 = 0; /*0x47ba1f*/
    dword_81CBD4 = 0; /*0x47ba29*/
    dword_81CBD8 = 0; /*0x47ba33*/
    dword_81CBDC = 0; /*0x47ba3d*/
    dword_81CBE0 = 0; /*0x47ba47*/
    dword_81CBE4 = 0; /*0x47ba51*/
    dword_81CBF8 = 0; /*0x47ba5b*/
    dword_81CBFC = 0; /*0x47ba65*/
    dword_81CC00 = 0; /*0x47ba6f*/
    dword_81CC04 = 0; /*0x47ba79*/
    *(double *)&qword_81CC18 = *(double *)&MEMORY[0x89E720] * -0.5; /*0x47ba89*/
  }
  result = Math::RoundToInt((double)(MEMORY[0x89E7C0] * *(char *)(this + 283)) + 0.5); /*0x47bab0*/
  if ( *(_BYTE *)(this + 284) ) /*0x47bab5*/
  {
    v5 = 40 * (*(unsigned __int8 *)(this + 284) - 1); /*0x47baec*/
    v6 = (double)(unsigned __int8)aP1->field_4 * *(double *)(v5 + 8505608) * MEMORY[0x89E740] /*0x47bb17*/
       + (double)(unsigned __int8)aP1->field_0 * *(double *)(v5 + 8505600) * MEMORY[0x89E740]
       + *(double *)(v5 + 8505616)
       + *(double *)(v5 + 8505632);
    if ( v6 < 0.0 ) /*0x47bb28*/
      v6 = 0.0; /*0x47bb2c*/
    if ( v6 > *(double *)&MEMORY[0x81C918][5 * *(unsigned __int8 *)(this + 284) - 5] ) /*0x47bb3d*/
      v6 = *(double *)&MEMORY[0x81C918][5 * *(unsigned __int8 *)(this + 284) - 5]; /*0x47bb41*/
    return Math::RoundToInt(v6); /*0x47bb4d*/
  }
  return result; /*0x47bb54*/
}
}
