// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MIXFile_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"

// 0x530460
namespace gamemd {
bool MixFile::LoadAll()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
// (v3 export truncated pseudocode — commented out; live version via get_context)
// bool MixFile::LoadAll()
// {
//   CCFileClass *v0; // eax
//   char v1; // bl
//   _DWORD *v2; // eax
//   _DWORD *v4; // eax
//   _DWORD *v5; // eax
//   _DWORD *v6; // eax
//   _DWORD *v7; // eax
//   _DWORD *v8; // eax
//   _DWORD *v9; // eax
//   CCFileClass *v10; // eax
//   char v11; // bl
//   _DWORD *eax28; // eax
//   CCFileClass *v13; // eax
//   char bl33; // bl
//   _DWORD *v15; // eax
//   CCFileClass *v16; // eax
//   char v17; // bl
//   _DWORD *v18; // eax
//   ObjectClass *v19; // esi
//   _DWORD *v20; // eax
//   _DWORD *v21; // eax
//   ObjectClass *v12; // esi
//   int v23; // eax
//   _DWORD *v24; // eax
//   _DWORD *v25; // eax
//   ObjectClass *v14; // esi
//   int v27; // eax
//   CCFileClass *v28; // eax
//   char v29; // bl
//   _DWORD *v30; // eax
//   CCFileClass *v31; // eax
//   char v32; // bl
//   _DWORD *v33; // eax
//   CCFileClass *v34; // eax
//   char v35; // bl
//   _DWORD *v36; // eax
//   CCFileClass *v37; // eax
//   char bl93; // bl
//   _DWORD *v39; // eax
//   CCFileClass *eax96; // eax
//   char v41; // bl
//   _DWORD *eax97; // eax
//   _DWORD *v43; // eax
//   char v44; /... [24838 chars total]
// end truncated pseudocode
}
} // namespace gamemd

// 0x534FA0
namespace gamemd {
char MixFile::LoadSide()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall MixFile_LoadSide(int this)
{
  unsigned int v2; // ebx
  unsigned int YR; // eax
  unsigned int v5; // esi
  _DWORD *v6; // eax
  char v7; // bl
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  char v10; // bl
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  char v14; // bl
  _DWORD *v15; // eax
  char v16; // al
  unsigned int v17; // [esp+1Ch] [ebp-11Ch]
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  _DWORD v19[22]; // [esp+60h] [ebp-D8h] BYREF
  _BYTE v20[12]; // [esp+B8h] [ebp-80h] BYREF
  int v21; // [esp+C4h] [ebp-74h]
  _DWORD v22[22]; // [esp+CCh] [ebp-6Ch] BYREF
  _BYTE v23[12]; // [esp+124h] [ebp-14h] BYREF
  int v24; // [esp+130h] [ebp-8h]

  VoxClass::SetEVAIndex(); /*0x534fac*/
  if ( this == 2 ) /*0x534fb4*/
    this = 1; /*0x534fb6*/
  v2 = this; /*0x534fbb*/
  v17 = this; /*0x534fc0*/
  if ( this == -1 ) /*0x534fc4*/
  {
    YR = AlwaysFindYRCD(MEMORY[0x89E414], 60); /*0x534fd1*/
    if ( YR >= 2 ) /*0x534fda*/
    {
      Debug::Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v17 = YR; /*0x534ffb*/
    v2 = YR; /*0x534fff*/
  }
  Debug::Log(); /*0x53500b*/
  if ( MEMORY[0x884E68] ) /*0x53501a*/
  {
    Debug::Log(); /*0x535025*/
    if ( MEMORY[0x884E68] ) /*0x535035*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E68])(MEMORY[0x884E68], 1); /*0x53503b*/
    MEMORY[0x884E68] = 0; /*0x53503d*/
  }
  if ( MEMORY[0x884E74] ) /*0x53504a*/
  {
    Debug::Log(); /*0x535055*/
    if ( MEMORY[0x884E74] ) /*0x535065*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E74])(MEMORY[0x884E74], 1); /*0x53506b*/
    MEMORY[0x884E74] = 0; /*0x53506d*/
  }
  if ( MEMORY[0x884E70] ) /*0x53507a*/
  {
    Debug::Log(); /*0x535085*/
    if ( MEMORY[0x884E70] ) /*0x535095*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E70])(MEMORY[0x884E70], 1); /*0x53509b*/
    MEMORY[0x884E70] = 0; /*0x53509d*/
  }
  if ( MEMORY[0x884E78] ) /*0x5350aa*/
  {
    Debug::Log(); /*0x5350b5*/
    if ( MEMORY[0x884E78] ) /*0x5350c5*/
      (**(void (__thiscall ***)(int, int))MEMORY[0x884E78])(MEMORY[0x884E78], 1); /*0x5350cb*/
    MEMORY[0x884E78] = 0; /*0x5350cd*/
  }
  v5 = v2 + 1; /*0x5350d3*/
  sprintf(Buffer, MEMORY[0x827E0C], v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  v6 = CCFileClass::Construct(v19, Buffer); /*0x535101*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 20))(v6, 0); /*0x535115*/
  v19[0] = &CCFileClass::`vftable'; /*0x535117*/
  v21 = 0; /*0x53511f*/
  Vector::Clear((int)v20); /*0x535126*/
  v19[0] = &off_7E1668; /*0x535134*/
  BufferIOFileClass::Dtor(v19); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    v8 = __2_YAPAXI_Z(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      MEMORY[0x884E70] = (int)MixFileClass::FromFile(v8, Buffer, (int)&MEMORY[0x886980]); /*0x535160*/
    else
      MEMORY[0x884E70] = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, MEMORY[0x827DE4], v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  v9 = CCFileClass::Construct(v19, Buffer); /*0x5351a4*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v19[0] = &CCFileClass::`vftable'; /*0x5351ba*/
  v21 = 0; /*0x5351c2*/
  Vector::Clear((int)v20); /*0x5351c9*/
  v19[0] = &off_7E1668; /*0x5351d2*/
  BufferIOFileClass::Dtor(v19); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    v11 = __2_YAPAXI_Z(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      MEMORY[0x884E74] = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = MixFileClass::FromFile(v11, Buffer, (int)&MEMORY[0x886980]); /*0x5351f9*/
    MEMORY[0x884E74] = (int)v12; /*0x5351fe*/
  }
  else
  {
    v12 = (_DWORD *)MEMORY[0x884E74]; /*0x535225*/
  }
  if ( v12 ) /*0x53522c*/
  {
    ReturnTrue(0); /*0x53524b*/
    sprintf(Buffer, stru_827DD4, v5); /*0x53525b*/
    Debug::Log(); /*0x53526a*/
    v13 = CCFileClass::Construct(v19, Buffer); /*0x53527b*/
    v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x535294*/
    v19[0] = &CCFileClass::`vftable'; /*0x535296*/
    v21 = 0; /*0x53529a*/
    Vector::Clear((int)v20); /*0x5352a1*/
    v19[0] = &off_7E1668; /*0x5352aa*/
    BufferIOFileClass::Dtor(v19); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      v15 = __2_YAPAXI_Z(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        MEMORY[0x884E78] = (int)MixFileClass::FromFile(v15, Buffer, (int)&MEMORY[0x886980]); /*0x5352d6*/
      else
        MEMORY[0x884E78] = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    Game::InitializeToolTipColor(v17); /*0x5352ec*/
    CCFileClass::Construct(v22, unk_827DC8); /*0x5352fd*/
    if ( CCINIClass::Load(&MEMORY[0x887208], (int)v22, 0, 0) ) /*0x535311*/
    {
      v16 = MEMORY[0xA8B238][0] && MEMORY[0xA8B238][0] != 5; /*0x53532f*/
      SidebarClass::ReadButtonList(&MEMORY[0x887208], v16); /*0x53533d*/
      SidebarClass::LoadButtonSHPs(&MEMORY[0x87F7E8]); /*0x535347*/
      v22[0] = &CCFileClass::`vftable'; /*0x535353*/
      v24 = 0; /*0x53535a*/
      Vector::Clear((int)v23); /*0x535361*/
      v22[0] = &off_7E1668; /*0x53536d*/
      BufferIOFileClass::Dtor(v22); /*0x535374*/
      return 1; /*0x535379*/
    }
    else
    {
      Debug::Log(); /*0x53538b*/
      v22[0] = &CCFileClass::`vftable'; /*0x53539a*/
      v24 = 0; /*0x5353a1*/
      Vector::Clear((int)v23); /*0x5353a8*/
      v22[0] = &off_7E1668; /*0x5353b4*/
      BufferIOFileClass::Dtor(v22); /*0x5353bb*/
      return 0; /*0x5353c0*/
    }
  }
  else
  {
    Debug::Log(); /*0x535233*/
    return 0; /*0x53523b*/
  }
}
}
} // namespace gamemd

// 0x627590
namespace gamemd {
unsigned int * MIXFile::Load(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
_DWORD *__thiscall MIXFile::Load(_DWORD *this, ObjectClass *aP1)
{
  _DWORD *v2; // ebp
  ObjectClass *v3; // edx
  _BYTE *v5; // esi
  int v6; // edi
  const void *v7; // eax
  int v8; // ebx
  int i; // esi
  _BYTE *v10; // eax
  char v11; // cl
  ObjectClass *v12; // edi
  int v13; // eax
  _DWORD *v14; // esi
  char *v15; // ebp
  int v16; // edx
  char *eax15; // eax
  ObjectClass *v17; // edi
  int v19; // ebx
  int v20; // eax
  int ecx21; // ecx
  ObjectClass *v21; // eax
  ObjectClass *v22; // edx
  char *v24; // eax
  ObjectClass *v23; // edi
  int eax27; // eax
  int ecx30; // ecx
  ObjectClass *v26; // eax
  ObjectClass *v27; // edx
  bool v30; // cc
  __int16 v31; // [esp+10h] [ebp-414h]
  int v32; // [esp+10h] [ebp-414h]
  ObjectClass aP2; // [esp+14h] [ebp-410h] BYREF
  _BYTE aP3[768]; // [esp+124h] [ebp-300h] BYREF

  v2 = this; /*0x627598*/
  *(_DWORD *)&aP2.__pad_0[8] = this; /*0x62759c*/
  v3 = (ObjectClass *)*this; /*0x6275a0*/
  if ( *this == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  strcpy((char *)&aP2.uniqueId, aP1->__pad_0); /*0x6275d6*/
  strcat((char *)&aP2.uniqueId, (const char *)&off_7E1BC6 + 112 * (_DWORD)v3); /*0x627611*/
  strcat((char *)&aP2.uniqueId, stru_826598.__pad_0); /*0x62763d*/
  strcat((char *)&aP2.uniqueId, *(const char **)&stru_830620.__pad_579C[1704]); /*0x62766a*/
  _strupr((char *)&aP2.uniqueId); /*0x627678*/
  v5 = aP3; /*0x627680*/
  v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    Struct::Zero3(v5); /*0x62768e*/
    v5 += 3; /*0x627693*/
    --v6; /*0x627696*/
  }
  while ( v6 ); /*0x627697*/
  v7 = (const void *)SearchMIXFile((char *)&aP2.uniqueId, 0); /*0x62769f*/
  v8 = 0; /*0x6276a4*/
  if ( !v7 ) /*0x6276a8*/
    return 0; /*0x6276ad*/
  qmemcpy(aP3, v7, sizeof(aP3)); /*0x6276c7*/
  for ( i = 0; i < 256; ++i ) /*0x6276c9*/
  {
    v10 = &aP3[2 * (i % 256) + i % 256]; /*0x6276e2*/
    v31 = *(_WORD *)v10; /*0x6276ea*/
    v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(_WORD *)v10; /*0x6276f9*/
    v10[1] = 4 * HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(ObjectClass **)(v2[2] + 16); /*0x627719*/
  *(_DWORD *)&aP2.__pad_0[12] = v12; /*0x62771c*/
  v13 = __2_YAPAXI_Z(0x18u); /*0x627720*/
  v14 = (_DWORD *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(_DWORD *)(v13 + 4) = 0; /*0x627730*/
    *(_DWORD *)(v13 + 8) = 20; /*0x627733*/
    *(_BYTE *)(v13 + 12) = 1; /*0x62773a*/
    *(_BYTE *)(v13 + 13) = 0; /*0x62773e*/
    *(_DWORD *)v13 = &VectorClass<ColorScheme *>::`vftable'; /*0x627742*/
    *(_DWORD *)(v13 + 4) = __2_YAPAXI_Z(0x50u); /*0x627750*/
    *((_BYTE *)v14 + 13) = 1; /*0x627753*/
    *v14 = &DynamicVectorClass<ColorScheme *>::`vftable'; /*0x627757*/
    v14[5] = 10; /*0x62775d*/
    v14[4] = 0; /*0x627764*/
  }
  else
  {
    v14 = 0; /*0x627769*/
  }
  *(_DWORD *)&aP2.__pad_0[4] = 0; /*0x62776d*/
  if ( (int)v12 > 0 ) /*0x627771*/
  {
    v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
      v15 = *(char **)(*(_DWORD *)(v2[1] + 4) + 4 * v8); /*0x62779b*/
      v16 = v32 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&aP2.__pad_0[8] + 8) + 4); /*0x6277a1*/
      *(_WORD *)aP2.__pad_0 = *(_WORD *)v16; /*0x6277a6*/
      aP2.__pad_0[2] = *(_BYTE *)(v16 + 2); /*0x6277ae*/
      eax15 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x6277b2*/
      if ( eax15 ) /*0x6277bc*/
        v17 = (ObjectClass *)FontClass::InitMetrics( /*0x6277dc*/
                               eax15,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&MEMORY[0x87F8E4].__pad_5568[2356],
                               1,
                               0);
      else
        v17 = 0; /*0x6277e0*/
      v19 = 2 * v8; /*0x6277e2*/
      *(_DWORD *)v17->__pad_0 = v19; /*0x6277e4*/
      v20 = v14[2]; /*0x6277e6*/
      if ( v14[4] < v20 /*0x627809*/
        || (*((_BYTE *)v14 + 13) || !v20)
        && (ecx21 = v14[5], ecx21 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, v20 + ecx21, 0) )
      {
        v21 = (ObjectClass *)v14[4]; /*0x627810*/
        v22 = (ObjectClass *)v14[1]; /*0x627813*/
        v14[4] = &v21->__pad_0[1]; /*0x627819*/
        *(_DWORD *)&v22->__pad_0[4 * (_DWORD)v21] = v17; /*0x62781c*/
      }
      v24 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x627824*/
      if ( v24 ) /*0x62782e*/
        v23 = (ObjectClass *)FontClass::InitMetrics( /*0x62784e*/
                               v24,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&MEMORY[0x87F8E4].__pad_5568[2356],
                               53,
                               0);
      else
        v23 = 0; /*0x627852*/
      *(_DWORD *)v23->__pad_0 = v19 + 1; /*0x627855*/
      eax27 = v14[2]; /*0x627857*/
      if ( v14[4] < eax27 /*0x62787a*/
        || (*((_BYTE *)v14 + 13) || !eax27)
        && (ecx30 = v14[5], ecx30 > 0)
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v14 + 8))(v14, eax27 + ecx30, 0) )
      {
        v26 = (ObjectClass *)v14[4]; /*0x627881*/
        v27 = (ObjectClass *)v14[1]; /*0x627884*/
        v14[4] = &v26->__pad_0[1]; /*0x62788a*/
        *(_DWORD *)&v27->__pad_0[4 * (_DWORD)v26] = v23; /*0x62788d*/
      }
      v30 = ++*(_DWORD *)&aP2.__pad_0[4] < *(_DWORD *)&aP2.__pad_0[12]; /*0x6278a0*/
      v32 += 3; /*0x6278a6*/
      if ( !v30 ) /*0x6278aa*/
        break; /*0x6278aa*/
      v8 = *(_DWORD *)&aP2.__pad_0[4]; /*0x62777d*/
      v2 = *(_DWORD **)&aP2.__pad_0[8]; /*0x627781*/
    }
  }
  return v14; /*0x6275a8*/
}
}
} // namespace gamemd
