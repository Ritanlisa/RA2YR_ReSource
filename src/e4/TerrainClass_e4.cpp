// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x6DD8B0
namespace gamemd {
int TerrainClass_ProcessUpdate()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// char __userpurge TerrainClass::ProcessUpdate@<al>(
//         int a1@<ecx>,
//         _DWORD *a2@<edi>,
//         AbstractClass *aP1,
//         _UNKNOWN **a4,
//         IUnknown *a5,
//         AbstractClass *aP4)
// {
//   char result; // al
//   _UNKNOWN **v9; // ecx
//   int v10; // ebp
//   _DWORD *v11; // eax
//   _DWORD *v12; // eax
//   int v13; // esi
//   char v14; // bl
//   int n; // edi
//   int v16; // esi
//   _DWORD *v17; // ecx
//   int v18; // edi
//   int v19; // esi
//   int v20; // edi
//   int v21; // esi
//   int ebx47; // ebx
//   _DWORD *v23; // edi
//   IUnknown *v22; // ecx
//   int v25; // edi
//   int *WorldCoords; // eax
//   int v27; // edi
//   int *v28; // eax
//   int v29; // edi
//   int *v30; // eax
//   char v31; // bl
//   int j; // edi
//   int v33; // esi
//   _DWORD *v34; // ecx
//   char bl75; // bl
//   int k; // edi
//   BuildingClass *v35; // esi
//   _DWORD *attachedTag; // ecx
//   char bl85; // bl
//   int m; // edi
//   BuildingClass *v39; // esi
//   _DWORD *v42; // ecx
//   int v43; // eax
//   wchar_t *v44; // esi
//   int v45; // eax
//   unsigned int PlayerColorSch... [55012 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x71CDA0
namespace gamemd {
int TerrainClass::LoadFromStream(unsigned int * a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TerrainClass::LoadFromStream(_DWORD *a1, int a2)
{
  _DWORD *v2; // ebp
  _DWORD *v3; // esi
  int v4; // eax
  #374 *v5; // ecx
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  signed int v10; // ecx
  size_t i; // eax
  _DWORD *v12; // eax
  int Register; // edi
  int v14; // esi
  int v15; // eax
  int v17; // [esp+Ch] [ebp-8h] BYREF

  v2 = a1; /*0x71cda4*/
  v3 = a1 + 1; /*0x71cdad*/
  v4 = (*(int (__stdcall **)(_DWORD *))(a1[1] + 16))(a1 + 1); /*0x71cdb1*/
  v6 = MEMORY[0xB0E844]; /*0x71cdb4*/
  v7 = v4; /*0x71cdba*/
  if ( MEMORY[0xB0E844] ) /*0x71cdbe*/
  {
    if ( !MEMORY[0xB0E84C] ) /*0x71cdcb*/
    {
      qsort(MEMORY[0xB0E840], MEMORY[0xB0E844], 8u, CompareFunction); /*0x71cddc*/
      v6 = MEMORY[0xB0E844]; /*0x71cde1*/
      MEMORY[0xB0E850] = 0; /*0x71cdea*/
      MEMORY[0xB0E84C] = 1; /*0x71cdf4*/
    }
    v17 = v7; /*0x71ce06*/
    v8 = BinaryArraySearch((int)MEMORY[0xB0E840], v6, &v17); /*0x71ce0a*/
    if ( v8 ) /*0x71ce11*/
    {
      v9 = (v8 - (int)MEMORY[0xB0E840]) >> 3; /*0x71ce19*/
      if ( v9 != -1 ) /*0x71ce1f*/
      {
        v10 = v9 + 1; /*0x71ce21*/
        for ( i = MEMORY[0xB0E844]; v10 < (int)MEMORY[0xB0E844]; i = MEMORY[0xB0E844] ) /*0x71ce2b*/
        {
          v12 = (_DWORD *)((char *)MEMORY[0xB0E840] + 8 * v10++); /*0x71ce33*/
          *(v12 - 2) = *v12; /*0x71ce39*/
          *(v12 - 1) = v12[1]; /*0x71ce3f*/
        }
        MEMORY[0xB0E844] = i - 1; /*0x71ce54*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = 0; /*0x71ce59*/
        v5 = MEMORY[0xB0E840]; /*0x71ce61*/
        *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = 0; /*0x71ce69*/
        MEMORY[0xB0E850] = 0; /*0x71ce6d*/
      }
    }
  }
  Register = BuildingClass::SaveLoad_Register(v5); /*0x71ce7e*/
  if ( Register >= 0 ) /*0x71ce82*/
  {
    if ( v2 ) /*0x71ce8a*/
    {
      ObjectClass::Init(v2, (int)&a1); /*0x71ce93*/
      *v2 = &TerrainClass::`vftable'; /*0x71ce98*/
      *v3 = &off_7F5200; /*0x71ce9f*/
      v2[2] = &TerrainClass::`vftable'; /*0x71cea5*/
      v2[3] = &TerrainClass::`vftable'; /*0x71ceac*/
    }
    v14 = (*(int (__stdcall **)(_DWORD *))(*v3 + 16))(v3); /*0x71cebf*/
    v15 = MEMORY[0xB0E848]; /*0x71cec1*/
    if ( (int)(MEMORY[0xB0E844] + 1) <= MEMORY[0xB0E848] ) /*0x71cec9*/
      goto LABEL_16; /*0x71cec9*/
    if ( !MEMORY[0xB0E848] ) /*0x71cecd*/
      v15 = 10; /*0x71cecf*/
    if ( BuildingTypeClass::Enqueue((int)&MEMORY[0xB0E840], v15) ) /*0x71ceda*/
    {
LABEL_16:
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844]) = v14; /*0x71ceee*/
      *((_DWORD *)MEMORY[0xB0E840] + 2 * MEMORY[0xB0E844] + 1) = v2; /*0x71cefc*/
      MEMORY[0xB0E84C] = 0; /*0x71cf06*/
      ++MEMORY[0xB0E844]; /*0x71cf0d*/
    }
    ObjectPtr::RegisterForTracking((int)&MEMORY[0xB0C110], v2 + 50); /*0x71cf1e*/
  }
  return Register; /*0x71cf25*/
}
}
} // namespace gamemd

// 0x71CF30
namespace gamemd {
int TerrainClass::CheckFrameUpdate(TechnoTypeClass * aP0, int * a1, int aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TerrainClass::CheckFrameUpdate(TechnoTypeClass *aP0, int *a1, int aP2)
{
  return AbstractClass::SaveLoad_Prefix((ObjectTypeClass *)aP0, (ObjectTypeClass *)a1, (ObjectTypeClass *)aP2); /*0x71cf44*/
}
}
} // namespace gamemd

// 0x71D000
namespace gamemd {
char TerrainClass::ProcessSpawnAnim(unsigned int * a1, AbstractClass * aP2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall TerrainClass::ProcessSpawnAnim(int this, _DWORD *a1, AbstractClass *aP2)
{
  IUnknown *v3; // ebp
  IUnknown *v4; // edi
  IUnknown *v5; // ebx
  IUnknown *i; // esi
  int v7; // ecx
  __int16 v8; // ax
  _BYTE *v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  char v14[12]; // [esp+8h] [ebp-Ch] BYREF

  v3 = (IUnknown *)a1; /*0x71d008*/
  if ( !(unsigned __int8)ObjectClass::Deploy((#374 *)this) ) /*0x71d012*/
    return 0; /*0x71d13e*/
  v4 = (IUnknown *)(v3->field_0 / 256); /*0x71d03e*/
  v5 = (IUnknown *)(v3->field_4 / 256); /*0x71d041*/
  for ( i = 0; (int)i < 8; i = (IUnknown *)((char *)i + 1) ) /*0x71d044*/
  {
    v7 = (unsigned __int8)i & 7; /*0x71d048*/
    v8 = *((_WORD *)&MEMORY[0x89F68A] + 2 * v7); /*0x71d05d*/
    LOWORD(aP2) = (_WORD)v4 + *((_WORD *)&MEMORY[0x89F688].field_0 + 2 * v7); /*0x71d061*/
    HIWORD(aP2) = (_WORD)v5 + v8; /*0x71d06d*/
    a1 = aP2->__pad_0; /*0x71d076*/
    v9 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&a1); /*0x71d080*/
    ++v9[290]; /*0x71d091*/
  }
  v10 = (_DWORD *)(*(int (__stdcall **)(char *))(*(_DWORD *)this + 172))(v14); /*0x71d0ab*/
  Coord::To_Screen(*(_DWORD **)&MEMORY[0x87F8E4].__pad_5568[9432], v10, (IUnknown *)(this + 216)); /*0x71d0b8*/
  v11 = *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 180) + *(_DWORD *)(this + 220); /*0x71d0d6*/
  *(_DWORD *)(this + 216) += *(_DWORD *)(*(_DWORD *)&MEMORY[0x87F8E4].__pad_5568[9432] + 176); /*0x71d0dd*/
  *(_DWORD *)(this + 220) = v11; /*0x71d0df*/
  if ( *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17) != -1 ) /*0x71d0ef*/
  {
    if ( *(_BYTE *)(*(_DWORD *)&MEMORY[0xA83D84]->__pad_0[4 * *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17)] /*0x71d108*/
                  + 681) )
    {
      *((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 17) = -1; /*0x71d123*/
      *((_BYTE *)Coord::To_Cell(&MEMORY[0x87F7E8], v3) + 286) = 0; /*0x71d12b*/
    }
  }
  return 1; /*0x71d137*/
}
}
} // namespace gamemd

// 0x71D2F0
namespace gamemd {
int TerrainClass::MissionStubReturnZero()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int TerrainClass::_vt12()
{
  return 224; /*0x71d2f5*/
}
}
} // namespace gamemd

// 0x71D300
namespace gamemd {
int TerrainClass::MissionStubReturnZero2()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int TerrainClass::_vt11()
{
  return 36; /*0x71d305*/
}
}
} // namespace gamemd

// 0x71D310
namespace gamemd {
int TerrainClass::MissionStubReturnZero3(int a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall TerrainClass::_vt03(int a1, _DWORD *a2)
{
  if ( !a2 ) /*0x71d316*/
    return -2147467261; /*0x71d318*/
  *a2 = 237448654; /*0x71d326*/
  a2[1] = 298949647; /*0x71d32e*/
  a2[2] = -1610610249; /*0x71d337*/
  a2[3] = -777003740; /*0x71d340*/
  return 0; /*0x71d31d*/
}
}
} // namespace gamemd
