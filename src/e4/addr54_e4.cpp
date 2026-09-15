// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5408F0_e4.hpp"
#include "e4/classes/E4Recv_540C50_e4.hpp"
#include "e4/classes/E4Recv_541170_e4.hpp"
#include "e4/classes/E4Recv_5422C0_e4.hpp"
#include "e4/classes/E4Recv_542F30_e4.hpp"
#include "e4/classes/E4Recv_543AF0_e4.hpp"
#include "e4/classes/E4Recv_549830_e4.hpp"
#include "e4/classes/E4Recv_54A990_e4.hpp"
#include "e4/classes/E4Recv_54A9E0_e4.hpp"
#include "e4/classes/E4Recv_54BA30_e4.hpp"
#include "e4/classes/E4Recv_54E360_e4.hpp"
#include "e4/classes/E4Recv_54E690_e4.hpp"
#include "e4/classes/E4Recv_54EBF0_e4.hpp"
#include "e4/classes/E4Recv_54F6D0_e4.hpp"

// 0x540C50
namespace gamemd {
int E4Recv_540C50::sub_540C50()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_540C50(unsigned __int8 *this)
{
  return *(this + 4); /*0x540c55*/
}
}
} // namespace gamemd

// 0x541170
namespace gamemd {
int E4Recv_541170::sub_541170(int a2, int a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_541170(int this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // eax
  int i; // edx
  _DWORD *v10; // ecx
  char v11; // al
  int v12; // edi
  int v13; // edi
  int v14; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD v15[3]; // [esp+10h] [ebp-Ch] BYREF

  HIWORD(v5) = HIWORD(a5); /*0x541174*/
  if ( MEMORY[0xA8DA84] && *(_DWORD *)(*(_DWORD *)MEMORY[0xA8DA78] + 111) == a5 ) /*0x541192*/
    return 0; /*0x541192*/
  v7 = 1; /*0x541194*/
  if ( MEMORY[0xA8DA84] <= 1 ) /*0x54119b*/
    return 0; /*0x54119b*/
  for ( i = MEMORY[0xA8DA78] + 4; *(_DWORD *)(*(_DWORD *)i + 111) != a5; i += 4 ) /*0x54119d*/
  {
    if ( ++v7 >= MEMORY[0xA8DA84] ) /*0x5411ad*/
      return 0; /*0x5411ad*/
  }
  LOWORD(v5) = *((_WORD *)&MEMORY[0xA8E2B2] + v7); /*0x5411be*/
  v10 = (_DWORD *)(*(_DWORD *)(MEMORY[0xA8DA78] + 4 * v7) + 40); /*0x5411c6*/
  v11 = (unsigned char)this->M4; /*0x5411c9*/
  v12 = a4; /*0x5411cc*/
  v15[0] = *v10; /*0x5411d2*/
  v15[1] = v10[1]; /*0x5411d9*/
  v15[2] = v10[2]; /*0x5411e2*/
  if ( !v11 || !(unsigned char)this->M5 ) /*0x5411e8*/
    return 0; /*0x5411af*/
  if ( a4 && (&v14 == (int *)-16 || Network::IsBroadcastAddr(v15)) ) /*0x5411ff*/
    v12 = 0; /*0x541208*/
  v13 = (*(int (__thiscall **)(_DWORD, int, int, _DWORD *, int, int, _DWORD))(**(_DWORD **)(this + 72) + 44))( /*0x541225*/
          this->M72,
          a2,
          a3,
          v15,
          v12,
          v5,
          0);
  if ( !v13 ) /*0x541229*/
  {
    ++this->M160; /*0x541232*/
    Debug::Log(); /*0x541240*/
  }
  return v13; /*0x5411af*/
}
}
} // namespace gamemd

// 0x542F30
namespace gamemd {
int E4Recv_542F30::sub_542F30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall sub_542F30(_DWORD *this)
{
  unsigned int v1; // ebx
  int result; // eax
  int v3; // ebp
  _DWORD *i; // edi
  int v5; // esi
  _DWORD *v6; // ecx
  int TileIndex; // eax
  int v8; // [esp+8h] [ebp-8h]

  v1 = -1; /*0x542f38*/
  result = 0; /*0x542f3b*/
  v3 = 0; /*0x542f3d*/
  v8 = 0; /*0x542f45*/
  if ( (int)*(this + 17) > 0 ) /*0x542f49*/
  {
    for ( i = this + 10; ; ++i ) /*0x542f4d*/
    {
      v5 = 0; /*0x542f52*/
      v6 = *(_DWORD **)(*i + 4); /*0x542f54*/
      if ( (int)v6[10] <= 0 ) /*0x542f5c*/
        goto LABEL_12; /*0x542f5c*/
      while ( 1 ) /*0x542f5f*/
      {
        TileIndex = Terrain::GetTileIndex(v6, v5); /*0x542f5f*/
        if ( TileIndex ) /*0x542f66*/
          break; /*0x542f66*/
LABEL_8:
        ++v5; /*0x542f79*/
        v6 = *(_DWORD **)(*i + 4); /*0x542f7c*/
        if ( v5 >= v6[10] ) /*0x542f82*/
          goto LABEL_9; /*0x542f82*/
      }
      if ( *(_BYTE *)(*(_DWORD *)(TileIndex + 20) + 2) || (*(_BYTE *)TileIndex & 2) != 0 ) /*0x542f75*/
        break; /*0x542f75*/
LABEL_9:
      if ( TileIndex ) /*0x542f86*/
      {
        if ( *(_DWORD *)(TileIndex + 4) < v1 ) /*0x542f8d*/
        {
          v1 = *(_DWORD *)(TileIndex + 4); /*0x542f92*/
          v8 = *(_DWORD *)(TileIndex + 20); /*0x542f94*/
        }
      }
LABEL_12:
      if ( ++v3 >= *(this + 17) ) /*0x542fa3*/
        return v8; /*0x542fa5*/
    }
    TileIndex = 0; /*0x542f77*/
    goto LABEL_8; /*0x542f77*/
  }
  return result; /*0x542fab*/
}
}
} // namespace gamemd

// 0x543E00
namespace gamemd {
int sub_543E00()
{
{
    DataGlobal_AA105C[0] = 0;
    return 0;
}
}
} // namespace gamemd

// 0x544E70
namespace gamemd {
int SurfaceClass_CreatePrimary(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall SurfaceClass_CreatePrimary(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  char *v5; // edx
  int v6; // esi
  int v7; // esi
  int v8; // eax

  if ( !MEMORY[0x887308] ) /*0x544e86*/
    return 0; /*0x544e8b*/
  if ( a1 == 1000 && a2 == 1000 && a3 == 1000 && MEMORY[0x87F6A8] ) /*0x544ead*/
    return *(_DWORD *)MEMORY[0x87F69C]; /*0x544eb7*/
  QuantizeColorRGB(&a3); /*0x544ecd*/
  v4 = 1; /*0x544ee4*/
  if ( MEMORY[0x87F6A8] <= 1 ) /*0x544eeb*/
  {
LABEL_14:
    v6 = 53; /*0x544f1c*/
    if ( a3 + a2 + a1 < 2000 ) /*0x544f2b*/
      v6 = 27; /*0x544f2d*/
    if ( __2_YAPAXI_Z(0x1B4u) ) /*0x544f37*/
      v7 = LightConvertClass::Constructor( /*0x544f79*/
             &stru_ABBED0,
             &MEMORY[0x885780],
             MEMORY[0x887308],
             a1,
             a2,
             a3,
             MEMORY[0x87F6A8] != 0,
             0,
             v6);
    else
      v7 = 0; /*0x544f7d*/
    if ( MEMORY[0x87F6A8] < MEMORY[0x87F6A0] /*0x544fb6*/
      || (MEMORY[0x87F6A5] || !MEMORY[0x87F6A0])
      && MEMORY[0x87F6AC] > 0
      && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(MEMORY[0x87F698] + 8))(
           &MEMORY[0x87F698],
           MEMORY[0x87F6A0] + MEMORY[0x87F6AC],
           0) )
    {
      v8 = MEMORY[0x87F6A8]++; /*0x544fc3*/
      *((_DWORD *)MEMORY[0x87F69C] + v8) = v7; /*0x544fd2*/
    }
    return v7; /*0x544fd5*/
  }
  else
  {
    v5 = (char *)MEMORY[0x87F69C] + 4; /*0x544ef3*/
    while ( 1 ) /*0x544ef6*/
    {
      result = *(_DWORD *)v5; /*0x544ef6*/
      if ( *(_DWORD *)(*(_DWORD *)v5 + 408) == a1 && *(_DWORD *)(result + 412) == a2 && *(_DWORD *)(result + 416) == a3 ) /*0x544f0e*/
        break; /*0x544f0e*/
      ++v4; /*0x544f14*/
      v5 += 4; /*0x544f15*/
      if ( v4 >= MEMORY[0x87F6A8] ) /*0x544f1a*/
        goto LABEL_14; /*0x544f1a*/
    }
  }
  return result; /*0x544e88*/
}
}
} // namespace gamemd

// 0x545150
namespace gamemd {
char * LoadTerrainTypeClassTheatre(AbstractClass * a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__fastcall LoadTerrainTypeClassTheatre(AbstractClass *a1, char a2)
{
  _DWORD *v3; // ebp
  size_t Size; // eax
  signed int v5; // eax
  int i; // esi
  int v7; // eax
  void **v8; // esi
  int v9; // esi
  size_t v10; // eax
  signed int v11; // eax
  size_t v12; // eax
  signed int v13; // eax
  size_t v14; // eax
  signed int v15; // eax
  size_t v16; // eax
  signed int v17; // eax
  CampaignScore *v18; // eax
  int v19; // ecx
  INIClass *v20; // edi
  CCINIClass *v21; // ebx
  AbstractClass *v22; // eax
  int v23; // ecx
  signed int v24; // eax
  int v25; // eax
  AbstractClass *v26; // eax
  AbstractClass *v27; // ebx
  MapClass *v28; // eax
  int v29; // edx
  int v30; // eax
  CCINIClass *v31; // eax
  char v32; // al
  INIClass *v33; // ecx
  int v34; // eax
  INIClass *v35; // ebx
  _DWORD *v36; // eax
  MapClass *v37; // edx
  INIClass *v38; // ecx
  AbstractClass *ecx147a; // ecx
  INIClass *v39; // edx
  int v41; // edx
  AnimTypeClass *v42; // eax
  int v43; // esi
  unsigned __int8 *v44; // ebx
  _DWORD *eax193; // eax
  CCINIClass *v46; // edx
  MapClass *v45; // ecx
  int v48; // edx
  unsigned int *ecx209; // ecx
  unsigned int v50; // eax
  MapClass *v49; // eax
  int v52; // ecx
  int v53; // edx
  int j; // edi
  _DWORD *v55; // eax
  int v56; // ecx
  int v57; // edx
  int v58; // edx
  char v60; // [esp+11h] [ebp-9FFh]
  char v62; // [esp+13h] [ebp-9FDh]
  char v63; // [esp+14h] [ebp-9FCh]
  char v64; // [esp+15h] [ebp-9FBh]
  char var9FC_2; // [esp+16h] [ebp-9FAh]
  char v66; // [esp+17h] [ebp-9F9h]
  MapClass *v65; // [esp+18h] [ebp-9F8h]
  char Bool_Overwrite; // [esp+1Ch] [ebp-9F4h]
  bool var9F4_1; // [esp+1Dh] [ebp-9F3h]
  __int16 var9F4_2; // [esp+1Eh] [ebp-9F2h] BYREF
  MapClass *v69; // [esp+20h] [ebp-9F0h]
  MapClass *v70; // [esp+24h] [ebp-9ECh]
  ObjectClass *v71; // [esp+28h] [ebp-9E8h]
  CCINIClass *v72; // [esp+2Ch] [ebp-9E4h]
  CCINIClass *v75; // [esp+30h] [ebp-9E0h]
  MapClass *v76; // [esp+34h] [ebp-9DCh]
  unsigned __int8 **v77[4]; // [esp+38h] [ebp-9D8h] BYREF
  _DWORD v78[3]; // [esp+48h] [ebp-9C8h] BYREF
  _DWORD v79[6]; // [esp+54h] [ebp-9BCh] BYREF
  char var9A4; // [esp+6Ch] [ebp-9A4h]
  int v81; // [esp+70h] [ebp-9A0h]
  AbstractClass *v80; // [esp+74h] [ebp-99Ch]
  char var998; // [esp+78h] [ebp-998h]
  INIClass *Ticks; // [esp+90h] [ebp-980h]
  MapClass *v83; // [esp+94h] [ebp-97Ch]
  int var978; // [esp+98h] [ebp-978h]
  MapClass *var974; // [esp+9Ch] [ebp-974h]
  INIClass *v86; // [esp+A0h] [ebp-970h]
  AbstractClass *v87; // [esp+A4h] [ebp-96Ch]
  AbstractClass *v88; // [esp+A8h] [ebp-968h]
  AbstractClass *v89; // [esp+ACh] [ebp-964h]
  AbstractClass *v90; // [esp+B0h] [ebp-960h]
  AbstractClass *v91; // [esp+B4h] [ebp-95Ch]
  AbstractClass *v92; // [esp+B8h] [ebp-958h]
  AbstractClass *v93; // [esp+BCh] [ebp-954h]
  AbstractClass *v94; // [esp+C0h] [ebp-950h]
  AbstractClass *v95; // [esp+C4h] [ebp-94Ch]
  AbstractClass *v96; // [esp+C8h] [ebp-948h]
  AbstractClass *v97; // [esp+CCh] [ebp-944h]
  AbstractClass *v98; // [esp+D0h] [ebp-940h]
  AbstractClass *v99; // [esp+D4h] [ebp-93Ch]
  AbstractClass *v100; // [esp+D8h] [ebp-938h]
  AbstractClass *v101; // [esp+DCh] [ebp-934h]
  INIClass *var930; // [esp+E0h] [ebp-930h]
  AbstractClass *v103; // [esp+E4h] [ebp-92Ch]
  INIClass *v104; // [esp+E8h] [ebp-928h]
  AbstractClass *v105; // [esp+ECh] [ebp-924h]
  INIClass *v108; // [esp+F0h] [ebp-920h]
  AbstractClass *v107; // [esp+F4h] [ebp-91Ch]
  INIClass *var918; // [esp+F8h] [ebp-918h]
  AbstractClass *v109; // [esp+FCh] [ebp-914h]
  AbstractClass *v110; // [esp+100h] [ebp-910h]
  AbstractClass *v111; // [esp+104h] [ebp-90Ch]
  AbstractClass *v112; // [esp+108h] [ebp-908h]
  int var904; // [esp+10Ch] [ebp-904h]
  AbstractClass *v114; // [esp+110h] [ebp-900h]
  AbstractClass *v115; // [esp+114h] [ebp-8FCh]
  AbstractClass *v116; // [esp+118h] [ebp-8F8h]
  AbstractClass *v117; // [esp+11Ch] [ebp-8F4h]
  AbstractClass *v118; // [esp+120h] [ebp-8F0h]
  AbstractClass *v119; // [esp+124h] [ebp-8ECh]
  AbstractClass *v120; // [esp+128h] [ebp-8E8h]
  AbstractClass *v121; // [esp+12Ch] [ebp-8E4h]
  AbstractClass *v122; // [esp+130h] [ebp-8E0h]
  AbstractClass *v123; // [esp+134h] [ebp-8DCh]
  AbstractClass *v124; // [esp+138h] [ebp-8D8h]
  AbstractClass *v125; // [esp+13Ch] [ebp-8D4h]
  AbstractClass *v126; // [esp+140h] [ebp-8D0h]
  INIClass *var8CC; // [esp+144h] [ebp-8CCh]
  AbstractClass *v128; // [esp+148h] [ebp-8C8h]
  AbstractClass *v129; // [esp+14Ch] [ebp-8C4h]
  AbstractClass *v130; // [esp+150h] [ebp-8C0h]
  AbstractClass *v131; // [esp+154h] [ebp-8BCh]
  AbstractClass *v132; // [esp+158h] [ebp-8B8h]
  AbstractClass *v133; // [esp+15Ch] [ebp-8B4h]
  AbstractClass *Int_Overwrite; // [esp+160h] [ebp-8B0h]
  INIClass *v137; // [esp+164h] [ebp-8ACh]
  INIClass *v138; // [esp+168h] [ebp-8A8h]
  AbstractClass *v139; // [esp+16Ch] [ebp-8A4h]
  INIClass *var8A0; // [esp+170h] [ebp-8A0h]
  INIClass *v141; // [esp+174h] [ebp-89Ch]
  AbstractClass *v140; // [esp+178h] [ebp-898h]
  MapClass *v143; // [esp+17Ch] [ebp-894h]
  int v144; // [esp+180h] [ebp-890h]
  INIClass *v145; // [esp+184h] [ebp-88Ch]
  CCINIClass aP2; // [esp+188h] [ebp-888h] BYREF
  char Buffer[5]; // [esp+1F4h] [ebp-81Ch] BYREF
  char v148; // [esp+1F9h] [ebp-817h]
  int v149[22]; // [esp+214h] [ebp-7FCh] BYREF
  char v150[12]; // [esp+26Ch] [ebp-7A4h] BYREF
  int v151; // [esp+278h] [ebp-798h]
  INIClass aP4; // [esp+280h] [ebp-790h] BYREF
  char Destination[48]; // [esp+2C0h] [ebp-750h] BYREF
  char v154; // [esp+2F0h] [ebp-720h]
  char v155[48]; // [esp+2F4h] [ebp-71Ch] BYREF
  char v156; // [esp+324h] [ebp-6ECh]
  char v157[20]; // [esp+328h] [ebp-6E8h] BYREF
  int v158[22]; // [esp+33Ch] [ebp-6D4h] BYREF
  char v159[12]; // [esp+394h] [ebp-67Ch] BYREF
  int v160; // [esp+3A0h] [ebp-670h]
  _DWORD v161[22]; // [esp+3A8h] [ebp-668h] BYREF
  char v162[12]; // [esp+400h] [ebp-610h] BYREF
  int v163; // [esp+40Ch] [ebp-604h]
  char Filename[128]; // [esp+414h] [ebp-5FCh] BYREF
  _DWORD v165[22]; // [esp+494h] [ebp-57Ch] BYREF
  char v166[12]; // [esp+4ECh] [ebp-524h] BYREF
  int v167; // [esp+4F8h] [ebp-518h]
  MultiplayerGameMode aP1; // [esp+500h] [ebp-510h] BYREF
  char v169[12]; // [esp+558h] [ebp-4B8h] BYREF
  int v170; // [esp+564h] [ebp-4ACh]
  _DWORD v171[22]; // [esp+56Ch] [ebp-4A4h] BYREF
  char v172[12]; // [esp+5C4h] [ebp-44Ch] BYREF
  int v173; // [esp+5D0h] [ebp-440h]
  _DWORD v174[22]; // [esp+5D8h] [ebp-438h] BYREF
  char v175[12]; // [esp+630h] [ebp-3E0h] BYREF
  int v176; // [esp+63Ch] [ebp-3D4h]
  _DWORD v177[22]; // [esp+644h] [ebp-3CCh] BYREF
  char v178[12]; // [esp+69Ch] [ebp-374h] BYREF
  int v179; // [esp+6A8h] [ebp-368h]
  char v180[32]; // [esp+6B0h] [ebp-360h] BYREF
  char Source[128]; // [esp+6D0h] [ebp-340h] BYREF
  char v182[512]; // [esp+750h] [ebp-2C0h] BYREF
  INIClass v183; // [esp+950h] [ebp-C0h] BYREF
  INIClass v184; // [esp+990h] [ebp-80h] BYREF

  v3 = 0;
  v91 = a1;
  v77[1] = 0;
  v77[2] = 0;
  GenericNode::Constructor(v78);
  GenericNode::Constructor(v79);
  LinkedList::Prepend(v78, (int)v79);
  v77[3] = (unsigned __int8 **)&vt_List_INIClass_INISection;
  memset(&v79[3], 0, 12);
  var9A4 = 0;
  v81 = 0;
  v80 = 0;
  var998 = 0;
  v77[0] = (unsigned __int8 **)&CCINIClass_Vtable;
  Ticks = (INIClass *)Timer::GetTicks();
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57940] = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57944] = 0;
  var978 = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57948] = 0;
  v89 = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57952] = 0;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57956] = 0;
  CCFileClass::Construct(v158, MEMORY[0x82960C]);
  if ( lpBuffer )
  {
    __3_YAXPAX_Z(lpBuffer);
    lpBuffer = 0;
  }
  Size = CCFileClass::GetSize(v158);
  lpBuffer = (MapClass *)__2_YAPAXI_Z(Size);
  v5 = CCFileClass::GetSize(v158);
  CCFileClass::Read(v158, (CampaignScore *)lpBuffer, v5);
  if ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032] )
  {
    for ( i = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032] - 1; i >= 0; --i )
    {
      __3_YAXPAX_Z(*(void **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020] + 4 * i));
      if ( i < *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] )
      {
        v7 = i;
        --*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032];
        if ( i < *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] )
        {
          do
          {
            ++v7;
            *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020] + 4 * v7 - 4) = *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020]
                                                                                                 + 4 * v7);
          }
          while ( v7 < *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] );
        }
      }
    }
  }
  v8 = (void **)&MEMORY[0xA8D63C].__pad_579C[57992];
  do
  {
    if ( *v8 )
    {
      __3_YAXPAX_Z(*v8);
      *v8 = 0;
    }
    ++v8;
  }
  while ( (int)v8 < (int)&MEMORY[0xA8D63C].__pad_579C[58008] );
  v9 = 112 * (_DWORD)a1;
  var904 = 112 * (_DWORD)a1;
  sprintf(Buffer, MEMORY[0x829600], (const char *)&off_7E1BC6 + 112 * (_DWORD)a1);
  CCFileClass::Construct(v149, Buffer);
  v10 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57992] = __2_YAPAXI_Z(v10);
  v11 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[57992], v11);
  v148 = 50;
  FileClass::SetFileName(v149, (IUnknown *)Buffer);
  v12 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57996] = __2_YAPAXI_Z(v12);
  v13 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[57996], v13);
  v148 = 51;
  FileClass::SetFileName(v149, (IUnknown *)Buffer);
  v14 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58000] = __2_YAPAXI_Z(v14);
  v15 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[58000], v15);
  v148 = 52;
  FileClass::SetFileName(v149, (IUnknown *)Buffer);
  v16 = CCFileClass::GetSize(v149);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58004] = __2_YAPAXI_Z(v16);
  v17 = CCFileClass::GetSize(v149);
  CCFileClass::Read(v149, *(CampaignScore **)&MEMORY[0xA8D63C].__pad_579C[58004], v17);
  while ( *(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[588] )
  {
    if ( **(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[576] )
      (*(void (__thiscall **)(_DWORD, int))(***(_DWORD ***)&MEMORY[0xA8D63C].__pad_14B0[576] + 32))(
        **(_DWORD **)&MEMORY[0xA8D63C].__pad_14B0[576],
        1);
  }
  sprintf(v180, MEMORY[0x8295F4], (const char *)&off_7E1BC6 + v9);
  CCFileClass::Construct(v161, v180);
  if ( CCFileClass::Open(v161, 0) )
  {
    CCFileClass::Read(v161, &stru_ABBED0, 768);
    v18 = &stru_ABBED0;
    v19 = 768;
    do
    {
      v18->__pad_0[0] *= 4;
      v18 = (CampaignScore *)((char *)v18 + 1);
      --v19;
    }
    while ( v19 );
  }
  TheatreClass::InitView();
  sprintf(v157, stru_8295E8, &aTemperat[v9]);
  CCFileClass::Construct(&aP1, v157);
  CCINIClass::Load(v77, &aP1, 0, 0);
  v20 = 0;
  v21 = 0;
  v90 = 0;
  v70 = 0;
  v72 = 0;
  Int_Overwrite = (AbstractClass *)INIClass::ReadInt_Overwrite(
                                     (int)v77,
                                     (unsigned __int8 *)&g_INI_Key_General,
                                     &unk_8295DC,
                                     (INIClass *)0xFFFFFFFF);
  var8A0 = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_8295D0,
                         (INIClass *)0xFFFFFFFF);
  v129 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8295C4,
                            (INIClass *)0xFFFFFFFF);
  v94 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8295B8,
                           (INIClass *)0xFFFFFFFF);
  v115 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8295AC,
                            (INIClass *)0xFFFFFFFF);
  v96 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8295A0,
                           (INIClass *)0xFFFFFFFF);
  v116 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829594,
                            (INIClass *)0xFFFFFFFF);
  v98 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829588,
                           (INIClass *)0xFFFFFFFF);
  v118 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829578,
                            (INIClass *)0xFFFFFFFF);
  v100 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829568,
                            (INIClass *)0xFFFFFFFF);
  v120 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829558,
                            (INIClass *)0xFFFFFFFF);
  var930 = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_829548,
                         (INIClass *)0xFFFFFFFF);
  v122 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829538,
                            (INIClass *)0xFFFFFFFF);
  v104 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_82952C,
                       (INIClass *)0xFFFFFFFF);
  v124 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829520,
                            (INIClass *)0xFFFFFFFF);
  v108 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_829514,
                       (INIClass *)0xFFFFFFFF);
  v126 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829504,
                            (INIClass *)0xFFFFFFFF);
  var918 = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_8294F8,
                         (INIClass *)0xFFFFFFFF);
  v128 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294EC,
                            (INIClass *)0xFFFFFFFF);
  v110 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294E0,
                            (INIClass *)0xFFFFFFFF);
  v130 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294D0,
                            (INIClass *)0xFFFFFFFF);
  v112 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294C0,
                            (INIClass *)0xFFFFFFFF);
  v132 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_8294B0,
                            (INIClass *)0xFFFFFFFF);
  v138 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_8294A8,
                       (INIClass *)0xFFFFFFFF);
  v117 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829498,
                            (INIClass *)0xFFFFFFFF);
  v114 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_82948C,
                            (INIClass *)0xFFFFFFFF);
  v92 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829478,
                           (INIClass *)0xFFFFFFFF);
  v141 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_829468,
                       (INIClass *)0xFFFFFFFF);
  v119 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829458,
                            (INIClass *)0xFFFFFFFF);
  v131 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829448,
                            (INIClass *)0xFFFFFFFF);
  v121 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829438,
                            (INIClass *)0xFFFFFFFF);
  v139 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_82942C,
                            (INIClass *)0xFFFFFFFF);
  v123 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829420,
                            (INIClass *)0xFFFFFFFF);
  v133 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829410,
                            (INIClass *)0xFFFFFFFF);
  v125 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829408,
                            (INIClass *)0xFFFFFFFF);
  v145 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_8293FC,
                       (INIClass *)0xFFFFFFFF);
  var8CC = (INIClass *)INIClass::ReadInt_Overwrite(
                         (int)v77,
                         (unsigned __int8 *)&g_INI_Key_General,
                         &unk_8293E8,
                         (INIClass *)0xFFFFFFFF);
  v137 = (INIClass *)INIClass::ReadInt_Overwrite(
                       (int)v77,
                       (unsigned __int8 *)&g_INI_Key_General,
                       &unk_8293D8,
                       (INIClass *)0xFFFFFFFF);
  v93 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8293C4,
                           (INIClass *)0xFFFFFFFF);
  v95 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8293B0,
                           (INIClass *)0xFFFFFFFE);
  v99 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_8293A4,
                           (INIClass *)0xFFFFFFFF);
  v97 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829398,
                           (INIClass *)0xFFFFFFFF);
  v101 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829388,
                            (INIClass *)0xFFFFFFFF);
  v103 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829378,
                            (INIClass *)0xFFFFFFFF);
  v105 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                            (int)v77,
                            (unsigned __int8 *)&g_INI_Key_General,
                            &unk_829370,
                            (INIClass *)0xFFFFFFFF);
  v22 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &unk_829364,
                           (INIClass *)0xFFFFFFFF);
  g_CellTileLookup = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57984] = -1;
  v107 = v22;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58052] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58072] = -1;
  dword_ABC2B8 = -1;
  dword_ABB104 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57408] = -1;
  dword_ABC2B0 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58060] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58204] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57420] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55664] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58064] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55660] = -1;
  dword_ABC2CC = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] = -1;
  g_TerrainBridgeIndex = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57928] = -1;
  dword_ABAD28 = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648] = -1;
  g_TerrainTypeTable2 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58048] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57932] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57980] = -1;
  dword_ABB108 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58076] = -1;
  dword_ABAD2C = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652] = -1;
  dword_ABB110 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976] = -1;
  dword_ABBEBC = (CCINIClass *)-1;
  g_CellTileTypeCache = (CCINIClass *)-1;
  dword_ABBEC4 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57416] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57412] = -1;
  dword_ABAD20 = (CCINIClass *)-1;
  dword_ABC1D4 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58068] = -1;
  dword_ABC2C8 = -2;
  dword_ABAD24 = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57924] = -1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58044] = -1;
  dword_ABBEC0 = (CCINIClass *)-1;
  dword_ABB10C = (CCINIClass *)-1;
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58040] = -1;
  dword_ABC2B4 = INIClass::ReadInt_Overwrite(
                   (int)v77,
                   (unsigned __int8 *)&g_INI_Key_General,
                   &unk_829354,
                   (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58200] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x829344],
                                                     (INIClass *)0xFFFFFFFF);
  dword_ABC1E8 = INIClass::ReadInt_Overwrite(
                   (int)v77,
                   (unsigned __int8 *)&g_INI_Key_General,
                   &MEMORY[0x829330],
                   (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57440] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x82931C],
                                                     (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[59248] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x82930C],
                                                     (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55656] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x8292FC],
                                                     (INIClass *)0xFFFFFFFF);
  dword_ABC1D0 = INIClass::ReadInt_Overwrite(
                   (int)v77,
                   (unsigned __int8 *)&g_INI_Key_General,
                   &MEMORY[0x8292E8],
                   (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[59240] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x8292D4],
                                                     (INIClass *)0xFFFFFFFF);
  g_TerrainSoundTable2 = INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&g_INI_Key_General,
                           &MEMORY[0x8292C4],
                           (INIClass *)0xFFFFFFFF);
  *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57936] = INIClass::ReadInt_Overwrite(
                                                     (int)v77,
                                                     (unsigned __int8 *)&g_INI_Key_General,
                                                     &MEMORY[0x8292B4],
                                                     (INIClass *)0xFFFFFFFF);
  dword_ABC558 = 0;
  Ticks = (INIClass *)Timer::GetTicks();
  v23 = 4;
  v83 = v143;
  var978 = 4;
  while ( 1 )
  {
    v69 = (MapClass *)v23;
    if ( Ticks == (INIClass *)-1 )
      goto LABEL_24;
    v24 = Timer::GetTicks() - (_DWORD)Ticks;
    if ( v24 < (int)v69 )
    {
      v23 = (int)v69 - v24;
LABEL_24:
      if ( v23 )
        goto LABEL_26;
    }
    Event::Dispatch();
    v140 = (AbstractClass *)Timer::GetTicks();
    v144 = 4;
    Ticks = (INIClass *)v140;
    v83 = v143;
    var978 = 4;
LABEL_26:
    v25 = dword_ABC558;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * dword_ABC558 + 58216] = v21;
    dword_ABC558 = v25 + 1;
    if ( v20 == (INIClass *)Int_Overwrite )
      g_CellTileLookup = v21;
    if ( v20 == var8A0 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57984] = v21;
    if ( v20 == (INIClass *)v129 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58052] = v21;
    if ( v20 == (INIClass *)v94 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58072] = v21;
    if ( v20 == (INIClass *)v115 )
      dword_ABC2B8 = (int)v21;
    if ( v20 == (INIClass *)v96 )
      dword_ABB104 = v21;
    if ( v20 == (INIClass *)v116 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57408] = v21;
    if ( v20 == (INIClass *)v98 )
      dword_ABC2B0 = v21;
    if ( v20 == (INIClass *)v118 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58060] = v21;
    if ( v20 == (INIClass *)v100 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58204] = v21;
    if ( v20 == (INIClass *)v120 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57420] = v21;
    if ( v20 == var930 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55664] = v21;
    if ( v20 == (INIClass *)v122 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58064] = v21;
    if ( v20 == v104 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55660] = v21;
    if ( v20 == (INIClass *)v124 )
      dword_ABC2CC = v21;
    if ( v20 == v108 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] = v21;
    if ( v20 == (INIClass *)v126 )
      g_TerrainBridgeIndex = (int)v21;
    if ( v20 == var918 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57928] = v21;
    if ( v20 == (INIClass *)v128 )
      dword_ABAD28 = (int)v21;
    if ( v20 == (INIClass *)v110 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648] = v21;
    if ( v20 == (INIClass *)v130 )
      g_TerrainTypeTable2 = v21;
    if ( v20 == (INIClass *)v112 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58048] = v21;
    if ( v20 == (INIClass *)v132 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57932] = v21;
    if ( v20 == (INIClass *)v114 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58076] = v21;
    if ( v20 == (INIClass *)v92 )
      dword_ABAD2C = v21;
    if ( v20 == v138 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57980] = v21;
    if ( v20 == (INIClass *)v117 )
      dword_ABB108 = v21;
    if ( v20 == v141 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55652] = v21;
    if ( v20 == (INIClass *)v119 )
      dword_ABB110 = v21;
    if ( v20 == (INIClass *)v131 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58056] = v21;
    if ( v20 == (INIClass *)v121 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57976] = v21;
    if ( v20 == (INIClass *)v139 )
      dword_ABBEBC = v21;
    if ( v20 == (INIClass *)v123 )
      g_CellTileTypeCache = v21;
    if ( v20 == (INIClass *)v133 )
      dword_ABBEC4 = v21;
    if ( v20 == (INIClass *)v125 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57416] = v21;
    if ( v20 == v145 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57412] = v21;
    if ( v20 == var8CC )
      dword_ABAD20 = v21;
    if ( v20 == v137 )
      dword_ABC1D4 = v21;
    if ( v20 == (INIClass *)v93 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58068] = v21;
    if ( v20 == (INIClass *)v95 )
      dword_ABC2C8 = (int)v21;
    if ( v20 == (INIClass *)v97 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57924] = v21;
    if ( v20 == (INIClass *)v99 )
      dword_ABAD24 = v21;
    if ( v20 == (INIClass *)v101 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58044] = v21;
    if ( v20 == (INIClass *)v103 )
      dword_ABBEC0 = v21;
    if ( v20 == (INIClass *)v105 )
      dword_ABB10C = v21;
    if ( v20 == (INIClass *)v107 )
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58040] = v21;
    sprintf((char *const)&aP2.INIClass_field_2C, stru_8292A8, v20);
    INIClass::ResetSection(v77);
    v71 = (ObjectClass *)INIClass::ReadInt_Overwrite(
                           (int)v77,
                           (unsigned __int8 *)&aP2.INIClass_field_2C,
                           &unk_82929C,
                           (INIClass *)0xFFFFFFFF);
    if ( v71 == (ObjectClass *)-1 )
      break;
    v26 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                             (int)v77,
                             (unsigned __int8 *)&aP2.INIClass_field_2C,
                             &unk_82928C,
                             (INIClass *)0xFFFFFFFF);
    v27 = v26;
    if ( v26 == (AbstractClass *)-1 || v26 == (AbstractClass *)v71 )
    {
      v31 = (CCINIClass *)((char *)v72 + (_DWORD)v71);
    }
    else
    {
      v28 = (MapClass *)__2_YAPAXI_Z(8u);
      v29 = (char *)v71 - (char *)v27;
      v76 = v28;
      v75 = (CCINIClass *)((char *)v72 + (_DWORD)v27);
      v28->field_0 = (int)&v72->__pad_0[(_DWORD)v27];
      v28->field_4 = (void *)v29;
      if ( *(int *)&MEMORY[0xA8D63C].__pad_579C[58032] < *(int *)&MEMORY[0xA8D63C].__pad_579C[58024]
        || (MEMORY[0xA8D63C].__pad_579C[58029] || !*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58024])
        && *(int *)&MEMORY[0xA8D63C].__pad_579C[58036] > 0
        && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58016] + 8))(
             &MEMORY[0xA8D63C].__pad_579C[58016],
             *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58036] + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58024],
             0) )
      {
        v30 = (*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58032])++;
        *(_DWORD *)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58020] + 4 * v30) = v76;
      }
      v31 = v75;
    }
    v72 = v31;
    INIClass::GetString(v77, (INIClass *)&aP2.INIClass_field_2C, &unk_82927C, &unk_829284, &aP4, 64);
    INIClass::GetString(v77, (INIClass *)&aP2.INIClass_field_2C, &unk_829268, &unk_829274, &v183, 64);
    v75 = (CCINIClass *)INIClass::ReadInt_Overwrite(
                          (int)v77,
                          (unsigned __int8 *)&aP2.INIClass_field_2C,
                          &unk_829258,
                          (INIClass *)0xFFFF);
    v86 = (INIClass *)INIClass::ReadInt_Overwrite(
                        (int)v77,
                        (unsigned __int8 *)&aP2.INIClass_field_2C,
                        &unk_829244,
                        (INIClass *)0xFFFF);
    Bool_Overwrite = INIClass::ReadBool_Overwrite((int)v77, (unsigned __int8 *)&aP2.INIClass_field_2C, &unk_829238, 0);
    v64 = INIClass::ReadBool_Overwrite((int)v77, (unsigned __int8 *)&aP2.INIClass_field_2C, &unk_829228, 1);
    v66 = INIClass::ReadBool_Overwrite((int)v77, (unsigned __int8 *)&aP2.INIClass_field_2C, &unk_829218, 1);
    v62 = INIClass::ReadBool_Overwrite(
            (int)v77,
            (unsigned __int8 *)&aP2.INIClass_field_2C,
            (CCINIClass *)&MEMORY[0x8291B8].unknown50,
            0);
    var9FC_2 = INIClass::ReadBool_Overwrite(
                 (int)v77,
                 (unsigned __int8 *)&aP2.INIClass_field_2C,
                 (CCINIClass *)&MEMORY[0x8291B8].ownsFile,
                 0);
    v109 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                              (int)v77,
                              (unsigned __int8 *)&aP2.INIClass_field_2C,
                              (CCINIClass *)&MEMORY[0x8291B8].unknown30,
                              (INIClass *)0xFFFFFFFF);
    v111 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                              (int)v77,
                              (unsigned __int8 *)&aP2.INIClass_field_2C,
                              (CCINIClass *)&MEMORY[0x8291B8].sectionCount,
                              (INIClass *)0xFFFFFFFF);
    v32 = INIClass::ReadBool_Overwrite(
            (int)v77,
            (unsigned __int8 *)&aP2.INIClass_field_2C,
            (CCINIClass *)&MEMORY[0x8291B8].headNode[2],
            0);
    v63 = v32;
    if ( v32 )
    {
      v33 = (INIClass *)v89;
      *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * (_DWORD)v89 + 57940] = v70;
      v89 = (AbstractClass *)&v33->__pad_0[1];
    }
    v88 = 0;
    if ( v32 )
      v88 = (AbstractClass *)INIClass::ReadInt_Overwrite(
                               (int)v77,
                               (unsigned __int8 *)&aP2.INIClass_field_2C,
                               &MEMORY[0x8291B8],
                               0);
    v34 = INIClass::BinarySearchSection((int)v77, &aP4);
    v69 = 0;
    var9F4_1 = v34 != 0;
    if ( (int)v71 > 0 )
    {
      while ( 1 )
      {
        v65 = 0;
        v76 = 0;
        var974 = 0;
        v87 = (AbstractClass *)((char *)&v70[-1].field_16C0 + 3);
        do
        {
          if ( v65 )
            var9F4_2 = (unsigned __int8)((_BYTE)v65 + 96);
          else
            LOBYTE(var9F4_2) = 0;
          v35 = (INIClass *)((char *)&v69->field_0 + 1);
          sprintf(aP2.__pad_20, MEMORY[0x8291B0], (char *)&v69->field_0 + 1);
          strcat(aP2.__pad_20, (const char *)&var9F4_2);
          strcpy(Filename, v183.__pad_0);
          strcat(Filename, aP2.__pad_20);
          sprintf(Source, MEMORY[0x8291A4], aP4.__pad_0, v35);
          if ( !v65 )
          {
            v36 = (_DWORD *)__2_YAPAXI_Z(0x30Cu);
            if ( v36 )
            {
              v37 = v70;
              v70 = (MapClass *)((char *)v70 + 1);
              v87 = (AbstractClass *)((char *)v87 + 1);
              v3 = TerrainTypeClass::Construct(v36, (int)v37, 0xBFu, 0, (MapClass *)Filename, 0);
            }
            else
            {
              v3 = 0;
            }
            if ( Source )
            {
              strncpy(Destination, Source, 0x30u);
              v154 = 0;
            }
            else
            {
              Destination[0] = (unsigned __int8)Source;
            }
            if ( Destination != (char *)(v3 + 25) )
            {
              qmemcpy(v3 + 25, Destination, 0x30u);
              *((_BYTE *)v3 + 148) = v154;
            }
            v38 = v86;
            v3[166] = v75;
            v3[167] = v38;
            *((_BYTE *)v3 + 738) = v64;
            *((_BYTE *)v3 + 736) = Bool_Overwrite;
            *((_BYTE *)v3 + 739) = var9FC_2;
            *((_BYTE *)v3 + 773) = v66;
            ecx147a = v109;
            *((_BYTE *)v3 + 774) = v62;
            v39 = (INIClass *)v111;
            v3[41] = 0;
            *((_BYTE *)v3 + 168) = 0;
            v3[176] = ecx147a;
            v3[177] = v39;
            if ( v63 && v88 )
              *((_BYTE *)v3 + 737) = v63;
            if ( a2 )
              *((_BYTE *)v3 + 756) = 1;
            v41 = v3[169];
            v3[168] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * dword_ABC558 + 58212];
            (*(void (__thiscall **)(_DWORD *))(v41 + 12))(v3 + 169);
            if ( var9F4_1 )
            {
              sprintf(aP2.__pad_0, MEMORY[0x829194], v35);
              if ( INIClass::GetString(
                     v77,
                     &aP4,
                     (unsigned __int8 *)&aP2,
                     (INIClass *)&MEMORY[0x87F8E4].__pad_5568[20760],
                     &v184,
                     128) )
              {
                v42 = AnimTypeClass::FindOrCreate((AbstractClass *)&v184);
                if ( v42 )
                {
                  v3[178] = (*(int (__thiscall **)(AnimTypeClass *))(*(_DWORD *)v42->__pad_0 + 64))(v42);
                  sprintf(aP2.__pad_0, MEMORY[0x829184], v35);
                  v3[179] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[179]);
                  sprintf(aP2.__pad_0, MEMORY[0x829174], v35);
                  v3[180] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[180]);
                  sprintf(aP2.__pad_0, MEMORY[0x829160], v35);
                  v3[181] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[181]);
                  sprintf(aP2.__pad_0, stru_829150, v35);
                  v3[182] = INIClass::ReadInt_Overwrite((int)v77, (unsigned __int8 *)&aP4, &aP2, (INIClass *)v3[182]);
                }
              }
            }
            v76 = (MapClass *)v3;
            var974 = (MapClass *)v3;
          }
          v43 = var904;
          _makepath(v182, 0, 0, Filename, (const char *)&off_7E1BC6 + var904);
          v44 = 0;
          v60 = 0;
          if ( a2 )
          {
            CCFileClass::Construct(v171, v182);
            v60 = CCFileClass::Open(v171, 0);
            if ( v60 && !v65 )
              strncpy((char *)v3 + 757, v182, 0xEu);
            v171[0] = &vt_CCFileClass;
            v173 = 0;
            Vector::Clear((int)v172);
            v171[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v171);
            if ( v60 )
              goto LABEL_190;
          }
          else
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( v44 )
              goto LABEL_189;
          }
          if ( !v86 )
            goto LABEL_190;
          if ( v91 == (AbstractClass *)-1 )
            _makepath(v182, 0, 0, Filename, aMmt);
          else
            _makepath(v182, 0, 0, Filename, (const char *)&off_7E1BCA + v43);
          if ( a2 )
          {
            CCFileClass::Construct(v174, v182);
            v60 = CCFileClass::Open(v174, 0);
            if ( v60 && !v65 )
              strncpy((char *)v3 + 757, v182, 0xEu);
            v174[0] = &vt_CCFileClass;
            v176 = 0;
            Vector::Clear((int)v175);
            v174[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v174);
            if ( v60 )
              goto LABEL_190;
          }
          else
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( v44 )
              goto LABEL_189;
          }
          _makepath(v182, 0, 0, Filename, aTem);
          if ( a2 )
          {
            CCFileClass::Construct(v165, v182);
            v60 = CCFileClass::Open(v165, 0);
            if ( v60 && !v65 )
              strncpy((char *)v3 + 757, v182, 0xEu);
            v165[0] = &vt_CCFileClass;
            v167 = 0;
            Vector::Clear((int)v166);
            v165[0] = &off_7E1668;
            BufferIOFileClass::Dtor(v165);
            if ( v60 )
              goto LABEL_190;
          }
          else
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( v44 )
              goto LABEL_189;
          }
          _makepath(v182, 0, 0, Filename, aUrb);
          if ( !a2 )
          {
            v44 = (unsigned __int8 *)SearchMIXFile(v182, 0);
            if ( !v44 )
              goto LABEL_190;
LABEL_189:
            v60 = 1;
            goto LABEL_190;
          }
          CCFileClass::Construct(v177, v182);
          v60 = CCFileClass::Open(v177, 0);
          if ( v60 && !v65 )
            strncpy((char *)v3 + 757, v182, 0xEu);
          v177[0] = &vt_CCFileClass;
          v179 = 0;
          Vector::Clear((int)v178);
          v177[0] = &off_7E1668;
          BufferIOFileClass::Dtor(v177);
LABEL_190:
          if ( !v65 )
            goto LABEL_207;
          if ( !v44 && !v60 )
            break;
          eax193 = (_DWORD *)__2_YAPAXI_Z(0x30Cu);
          if ( eax193 )
            v3 = TerrainTypeClass::Construct(eax193, (int)v87, 0xBFu, 0, (MapClass *)Filename, 1);
          else
            v3 = 0;
          if ( Source )
          {
            strncpy(v155, Source, 0x30u);
            v156 = 0;
          }
          else
          {
            v155[0] = (unsigned __int8)Source;
          }
          if ( v155 != (char *)(v3 + 25) )
          {
            qmemcpy(v3 + 25, v155, 0x30u);
            *((_BYTE *)v3 + 148) = v156;
          }
          v46 = v75;
          v3[167] = v86;
          v3[166] = v46;
          *((_BYTE *)v3 + 773) = v66;
          *((_BYTE *)v3 + 736) = Bool_Overwrite;
          *((_BYTE *)v3 + 738) = v64;
          *((_BYTE *)v3 + 774) = v62;
          *((_BYTE *)v3 + 739) = var9FC_2;
          if ( a2 )
          {
            *((_BYTE *)v3 + 756) = 1;
            strncpy((char *)v3 + 757, v182, 0xEu);
          }
          if ( v63 && v88 )
            *((_BYTE *)v3 + 737) = v63;
          v45 = var974;
          v3[168] = *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * dword_ABC558 + 58212];
          *(_DWORD *)&v45->__pad_298[36] = v3;
          (*(void (__thiscall **)(_DWORD *))(v3[169] + 12))(v3 + 169);
          var974 = (MapClass *)v3;
          if ( !v44 )
          {
LABEL_215:
            if ( !v65 )
            {
              v3[185] = 0;
              v3[186] = 0;
            }
            goto LABEL_217;
          }
LABEL_207:
          v3[41] = v44;
          if ( !v44 )
            goto LABEL_215;
          v48 = 0;
          v3[185] = *v44;
          v3[186] = v44[4];
          if ( *((_DWORD *)v44 + 1) * *(_DWORD *)v44 > 0 )
          {
            ecx209 = (unsigned int *)(v44 + 16);
            do
            {
              v50 = *ecx209;
              if ( *ecx209 && v50 < (unsigned int)v44 )
                *ecx209 = (unsigned int)&v44[v50];
              ++v48;
              ++ecx209;
            }
            while ( v48 < *((_DWORD *)v44 + 1) * *(_DWORD *)v44 );
          }
          TerrainClass::InitTheatre(v3);
LABEL_217:
          v65 = (MapClass *)((char *)v65 + 1);
        }
        while ( v44 || v60 );
        if ( (int)v65 > 1 )
        {
          v49 = v76;
          if ( (char)v65 > 1 )
          {
            v52 = (char)v65;
            v53 = (char)v65 - 1;
            do
            {
              *(_DWORD *)&v49->__pad_298[88] = v52;
              v49 = *(MapClass **)&v49->__pad_298[36];
              --v52;
              --v53;
            }
            while ( v53 );
          }
        }
        v69 = (MapClass *)((char *)v69 + 1);
        if ( (int)v69 >= (int)v71 )
        {
          v20 = (INIClass *)v90;
          break;
        }
      }
    }
    v23 = var978;
    v21 = (CCINIClass *)v70;
    v20 = (INIClass *)((char *)v20 + 1);
    v90 = (AbstractClass *)v20;
  }
  for ( j = 0; j < *(int *)&MEMORY[0xA8D63C].__pad_14B0[588]; ++j )
  {
    v55 = *(_DWORD **)(*(_DWORD *)&MEMORY[0xA8D63C].__pad_14B0[576] + 4 * j);
    v56 = v55[165] - v55[168];
    v57 = v55[166];
    if ( v57 != 0xFFFF )
      v55[166] = v56 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * v57 + 58216];
    v58 = v55[167];
    if ( v58 != 0xFFFF )
      v55[167] = v56 + *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[4 * v58 + 58216];
  }
  if ( v91 == (AbstractClass *)5 )
  {
    dword_ABAD28 = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[55648] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57928] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57924] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[58040] = -1;
    *(_DWORD *)&MEMORY[0xA8D63C].__pad_579C[57424] = -1;
    g_TerrainBridgeIndex = -1;
  }
  *(_DWORD *)aP1.__pad_0 = &vt_CCFileClass;
  v170 = 0;
  Vector::Clear((int)v169);
  *(_DWORD *)aP1.__pad_0 = &off_7E1668;
  BufferIOFileClass::Dtor(&aP1);
  v161[0] = &vt_CCFileClass;
  v163 = 0;
  Vector::Clear((int)v162);
  v161[0] = &off_7E1668;
  BufferIOFileClass::Dtor(v161);
  v149[0] = (int)&vt_CCFileClass;
  v151 = 0;
  Vector::Clear((int)v150);
  v149[0] = (int)&off_7E1668;
  BufferIOFileClass::Dtor(v149);
  v158[0] = (int)&vt_CCFileClass;
  v160 = 0;
  Vector::Clear((int)v159);
  v158[0] = (int)&off_7E1668;
  BufferIOFileClass::Dtor(v158);
  return HashTable::DestroyHashTableINIClass((void **)v77);
}

}
} // namespace gamemd

// 0x546DA0
namespace gamemd {
void MapClass_LoadIsometricTiles(char a1, char a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall MapClass_LoadIsometricTiles(char a1, char a2)
{
  int i; // edi
  int v4; // ecx
  int inited; // eax
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // ebp
  int v14; // esi
  int v15; // edi
  int v16; // eax
  int v17; // esi
  int v20; // [esp+14h] [ebp-1Ch]
  DWORD Ticks; // [esp+18h] [ebp-18h]
  int v22; // [esp+20h] [ebp-10h]

  Timer::GetTicks(); /*0x546db5*/
  if ( !a1 ) /*0x546dc8*/
  {
    LayerClass::CellIteratorReset(&MEMORY[0x87F7E8]); /*0x546dd3*/
    for ( i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]); i; i = LayerClass::CellIteratorNext(&MEMORY[0x87F7E8]) ) /*0x546de6*/
    {
      v4 = *(_DWORD *)(i + 56); /*0x546dec*/
      inited = 0; /*0x546def*/
      if ( v4 == 0xFFFF || v4 >= MEMORY[0xA8ED38] ) /*0x546dff*/
      {
        v6 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + unk_AA10B0); /*0x546e6f*/
        inited = CellClass::InitRandomOffsets(i, unk_AA10B0, v6[188]); /*0x546e7c*/
      }
      else
      {
        v6 = (_DWORD *)*((_DWORD *)MEMORY[0xA8ED2C] + v4); /*0x546e07*/
        if ( (int)v6[188] > 1 ) /*0x546e11*/
        {
          LOBYTE(inited) = *(_BYTE *)(i + 282); /*0x546e13*/
          v7 = inited; /*0x546e1d*/
          v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*v6 + 156))(*((_DWORD *)MEMORY[0xA8ED2C] + v4)); /*0x546e1f*/
          if ( v8 && (v9 = v8[v7 % (*v8 * v8[1]) + 4]) != 0 && (*(_DWORD *)(v9 + 36) & 4) != 0 ) /*0x546e48*/
            inited = (*(_DWORD *)(i + 320) >> 13) & 1; /*0x546e53*/
          else
            inited = CellClass::InitRandomOffsets(i, *(_DWORD *)(i + 56), v6[188]); /*0x546e62*/
        }
      }
      v10 = v6[188]; /*0x546e81*/
      v11 = inited; /*0x546e87*/
      if ( inited > v10 - 1 ) /*0x546e8e*/
        v11 = inited % v10; /*0x546e91*/
      for ( ; v11; --v11 ) /*0x546e95*/
        v6 = (_DWORD *)v6[175]; /*0x546e97*/
      ++v6[194]; /*0x546ea7*/
    }
  }
  v12 = 0; /*0x546ec5*/
  v13 = 0; /*0x546ec7*/
  Ticks = Timer::GetTicks(); /*0x546ed7*/
  v14 = 1; /*0x546ee0*/
  v15 = 0; /*0x546ee2*/
  v22 = 1; /*0x546eea*/
  v20 = 0; /*0x546eee*/
  if ( MEMORY[0xA8ED38] > 0 ) /*0x546ef2*/
  {
    while ( 1 ) /*0x546efe*/
    {
      if ( Ticks == -1 ) /*0x546f03*/
        goto LABEL_23; /*0x546f03*/
      v16 = Timer::GetTicks() - Ticks; /*0x546f0e*/
      if ( v16 < v14 ) /*0x546f14*/
        break; /*0x546f14*/
LABEL_24:
      Event::Dispatch(); /*0x546f1c*/
      Ticks = Timer::GetTicks(); /*0x546f2e*/
      v22 = 4; /*0x546f43*/
LABEL_25:
      v17 = *((_DWORD *)MEMORY[0xA8ED2C] + v15); /*0x546f47*/
      if ( v17 ) /*0x546f52*/
      {
        do /*0x546fdc*/
        {
          if ( *(_BYTE *)(v17 + 756) && strlen((const char *)(v17 + 757)) ) /*0x546f68*/
          {
            if ( a1 || *(_DWORD *)(v17 + 776) || a2 && *(_BYTE *)(v17 + 739) ) /*0x546f8e*/
            {
              if ( !*(_DWORD *)(v17 + 164) ) /*0x546fc0*/
              {
                v13 += MapClass::LoadFileData(v17); /*0x546fd1*/
                ++v12; /*0x546fd3*/
              }
            }
            else if ( *(_DWORD *)(v17 + 164) ) /*0x546f98*/
            {
              __3_YAXPAX_Z(*(void **)(v17 + 164)); /*0x546fa5*/
              *(_DWORD *)(v17 + 164) = 0; /*0x546fad*/
              *(_BYTE *)(v17 + 168) = 0; /*0x546fb7*/
            }
          }
          v17 = *(_DWORD *)(v17 + 700); /*0x546fd4*/
        }
        while ( v17 ); /*0x546fdc*/
        v15 = v20; /*0x546fe2*/
      }
      v20 = ++v15; /*0x546fee*/
      if ( v15 >= MEMORY[0xA8ED38] ) /*0x546ff2*/
        goto LABEL_39; /*0x546ff2*/
      v14 = v22; /*0x546efa*/
    }
    v14 -= v16; /*0x546f16*/
LABEL_23:
    if ( v14 ) /*0x546f1a*/
      goto LABEL_25; /*0x546f1a*/
    goto LABEL_24; /*0x546f1a*/
  }
LABEL_39:
  Debug::Log(); /*0x546ff8*/
}
}
} // namespace gamemd

// 0x547110
namespace gamemd {
int ResetAllTechnoField776()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int ResetAllTechnoField776()
{
  int result; // eax
  int i; // ecx
  int j; // eax

  result = MEMORY[0xA8ED38]; /*0x547110*/
  for ( i = 0; i < MEMORY[0xA8ED38]; ++i ) /*0x54711b*/
  {
    for ( j = *((_DWORD *)MEMORY[0xA8ED2C] + i); j; j = *(_DWORD *)(j + 700) ) /*0x547127*/
      *(_DWORD *)(j + 776) = 0; /*0x547129*/
    result = MEMORY[0xA8ED38]; /*0x547139*/
  }
  return result; /*0x547143*/
}
}
} // namespace gamemd

// 0x547370
namespace gamemd {
int Map_InitCoordinateOffsets(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall Map_InitCoordinateOffsets(int a1)
{
  int v1; // edx
  int *v2; // ecx
  unsigned int v3; // eax
  int v5; // [esp+Ch] [ebp-4h]

  v5 = a1; /*0x54737f*/
  if ( !*(_BYTE *)(a1 + 737) ) /*0x547373*/
    return 0; /*0x547cbb*/
  if ( (byte_ABBEB8 & 1) == 0 ) /*0x547390*/
  {
    byte_ABBEB8 |= 1u; /*0x5473a5*/
    dword_ABAD48 = 2147450879; /*0x5473b9*/
    dword_ABAD60 = 2147450879; /*0x5473cd*/
    dword_ABAD78 = 2147450879; /*0x5473e1*/
    dword_ABAD90 = 2147450879; /*0x5473f5*/
    dword_ABADA8 = 2147450879; /*0x547409*/
    dword_ABADC0 = 2147450879; /*0x54741d*/
    dword_ABADD8 = 2147450879; /*0x547431*/
    dword_ABAD34 = unk_AA105C[0]; /*0x547447*/
    dword_ABAD38 = unk_AA105C[0]; /*0x54744c*/
    dword_ABAD3C = unk_AA105C[0]; /*0x547451*/
    dword_ABAD40 = unk_AA105C[0]; /*0x547456*/
    dword_ABAD44 = unk_AA105C[0]; /*0x54745b*/
    dword_ABAD4C = unk_AA105C[0]; /*0x547460*/
    dword_ABAD50 = unk_AA105C[0]; /*0x547465*/
    dword_ABAD54 = unk_AA105C[0]; /*0x54746a*/
    dword_ABAD58 = unk_AA105C[0]; /*0x54746f*/
    dword_ABAD5C = unk_AA105C[0]; /*0x547474*/
    dword_ABAD64 = unk_AA105C[0]; /*0x547479*/
    dword_ABAD68 = unk_AA105C[0]; /*0x54747e*/
    dword_ABAD6C = unk_AA105C[0]; /*0x547483*/
    dword_ABAD70 = unk_AA105C[0]; /*0x547488*/
    dword_ABAD74 = unk_AA105C[0]; /*0x54748d*/
    dword_ABAD7C = unk_AA105C[0]; /*0x547492*/
    dword_ABAD80 = unk_AA105C[0]; /*0x547497*/
    dword_ABAD84 = unk_AA105C[0]; /*0x54749c*/
    dword_ABAD88 = unk_AA105C[0]; /*0x5474a1*/
    dword_ABAD8C = unk_AA105C[0]; /*0x5474a6*/
    dword_ABAD94 = unk_AA105C[0]; /*0x5474ab*/
    dword_ABAD98 = unk_AA105C[0]; /*0x5474b0*/
    dword_ABAD9C = unk_AA105C[0]; /*0x5474b5*/
    dword_ABADA0 = unk_AA105C[0]; /*0x5474ba*/
    dword_ABADA4 = unk_AA105C[0]; /*0x5474bf*/
    dword_ABADAC = unk_AA105C[0]; /*0x5474c4*/
    dword_ABADB0 = unk_AA105C[0]; /*0x5474c9*/
    dword_ABADB4 = unk_AA105C[0]; /*0x5474ce*/
    dword_ABADB8 = unk_AA105C[0]; /*0x5474d3*/
    dword_ABADBC = unk_AA105C[0]; /*0x5474d8*/
    dword_ABADC4 = unk_AA105C[0]; /*0x5474dd*/
    dword_ABADC8 = unk_AA105C[0]; /*0x5474e2*/
    dword_ABADCC = unk_AA105C[0]; /*0x5474e7*/
    dword_ABADD0 = unk_AA105C[0]; /*0x5474ec*/
    dword_ABADD4 = unk_AA105C[0]; /*0x5474f1*/
    dword_ABADDC = unk_AA105C[0]; /*0x5474f6*/
    dword_ABADE0 = unk_AA105C[0]; /*0x5474fb*/
    dword_ABADE4 = unk_AA105C[0]; /*0x547500*/
    dword_ABADE8 = unk_AA105C[0]; /*0x547505*/
    dword_ABADEC = unk_AA105C[0]; /*0x54750a*/
    dword_ABADF0 = 2147450879; /*0x54750f*/
    dword_ABADF4 = unk_AA105C[0]; /*0x547515*/
    dword_ABADF8 = unk_AA105C[0]; /*0x54751a*/
    dword_ABAE08 = 2147450879; /*0x547532*/
    dword_ABAE20 = 2147450879; /*0x547546*/
    dword_ABAE38 = 2147450879; /*0x54755a*/
    dword_ABAE50 = 2147450879; /*0x54756e*/
    dword_ABAE68 = 2147450879; /*0x547582*/
    dword_ABAE80 = 2147450879; /*0x547596*/
    dword_ABAE98 = 2147450879; /*0x5475aa*/
    dword_ABAEB0 = 2147450879; /*0x5475be*/
    dword_ABADFC = unk_AA105C[0]; /*0x5475cd*/
    dword_ABAE00 = unk_AA105C[0]; /*0x5475d2*/
    dword_ABAE04 = unk_AA105C[0]; /*0x5475d7*/
    dword_ABAE0C = unk_AA105C[0]; /*0x5475dc*/
    dword_ABAE10 = unk_AA105C[0]; /*0x5475e1*/
    dword_ABAE14 = unk_AA105C[0]; /*0x5475e6*/
    dword_ABAE18 = unk_AA105C[0]; /*0x5475eb*/
    dword_ABAE1C = unk_AA105C[0]; /*0x5475f0*/
    dword_ABAE24 = unk_AA105C[0]; /*0x5475f5*/
    dword_ABAE28 = unk_AA105C[0]; /*0x5475fa*/
    dword_ABAE2C = unk_AA105C[0]; /*0x5475ff*/
    dword_ABAE30 = unk_AA105C[0]; /*0x547604*/
    dword_ABAE34 = unk_AA105C[0]; /*0x547609*/
    dword_ABAE3C = unk_AA105C[0]; /*0x54760e*/
    dword_ABAE40 = unk_AA105C[0]; /*0x547613*/
    dword_ABAE44 = unk_AA105C[0]; /*0x547618*/
    dword_ABAE48 = unk_AA105C[0]; /*0x54761d*/
    dword_ABAE4C = unk_AA105C[0]; /*0x547622*/
    dword_ABAE54 = unk_AA105C[0]; /*0x547627*/
    dword_ABAE58 = unk_AA105C[0]; /*0x54762c*/
    dword_ABAE5C = unk_AA105C[0]; /*0x547631*/
    dword_ABAE60 = unk_AA105C[0]; /*0x547636*/
    dword_ABAE64 = unk_AA105C[0]; /*0x54763b*/
    dword_ABAE6C = unk_AA105C[0]; /*0x547640*/
    dword_ABAE70 = unk_AA105C[0]; /*0x547645*/
    dword_ABAE74 = unk_AA105C[0]; /*0x54764a*/
    dword_ABAE78 = unk_AA105C[0]; /*0x54764f*/
    dword_ABAE7C = unk_AA105C[0]; /*0x547654*/
    dword_ABAE84 = unk_AA105C[0]; /*0x547659*/
    dword_ABAE88 = unk_AA105C[0]; /*0x54765e*/
    dword_ABAE8C = unk_AA105C[0]; /*0x547663*/
    dword_ABAE90 = unk_AA105C[0]; /*0x547668*/
    dword_ABAE94 = unk_AA105C[0]; /*0x54766d*/
    dword_ABAE9C = unk_AA105C[0]; /*0x547672*/
    dword_ABAEA0 = unk_AA105C[0]; /*0x547677*/
    dword_ABAEA4 = unk_AA105C[0]; /*0x54767c*/
    dword_ABAEA8 = unk_AA105C[0]; /*0x547681*/
    dword_ABAEAC = unk_AA105C[0]; /*0x547686*/
    dword_ABAEB4 = unk_AA105C[0]; /*0x54768b*/
    dword_ABAEB8 = unk_AA105C[0]; /*0x547690*/
    dword_ABAEBC = unk_AA105C[0]; /*0x547695*/
    dword_ABAEC0 = unk_AA105C[0]; /*0x54769a*/
    dword_ABAEC4 = unk_AA105C[0]; /*0x54769f*/
    dword_ABAEC8 = 2147450879; /*0x5476a4*/
    dword_ABAECC = unk_AA105C[0]; /*0x5476aa*/
    dword_ABAED0 = unk_AA105C[0]; /*0x5476af*/
    dword_ABAEE0 = 2147450879; /*0x5476c7*/
    dword_ABAEF8 = 2147450879; /*0x5476db*/
    dword_ABAF10 = 2147450879; /*0x5476ed*/
    dword_ABAF14 = -65536; /*0x547701*/
    dword_ABAF18 = -65536; /*0x54771a*/
    dword_ABAF1C = -65537; /*0x547733*/
    dword_ABAF28 = 2147450879; /*0x547747*/
    dword_ABAF2C = -65536; /*0x54775b*/
    dword_ABAF30 = -65536; /*0x54776f*/
    dword_ABAF34 = -65537; /*0x547783*/
    dword_ABAF40 = 2147450879; /*0x547797*/
    dword_ABAF44 = -131073; /*0x5477ab*/
    dword_ABAF48 = -196608; /*0x5477bf*/
    dword_ABAED4 = unk_AA105C[0]; /*0x5477d3*/
    dword_ABAED8 = unk_AA105C[0]; /*0x5477d8*/
    dword_ABAEDC = unk_AA105C[0]; /*0x5477dd*/
    dword_ABAEE4 = unk_AA105C[0]; /*0x5477e2*/
    dword_ABAEE8 = unk_AA105C[0]; /*0x5477e7*/
    dword_ABAEEC = unk_AA105C[0]; /*0x5477ec*/
    dword_ABAEF0 = unk_AA105C[0]; /*0x5477f1*/
    dword_ABAEF4 = unk_AA105C[0]; /*0x5477f6*/
    dword_ABAEFC = unk_AA105C[0]; /*0x5477fb*/
    dword_ABAF00 = unk_AA105C[0]; /*0x547800*/
    dword_ABAF04 = unk_AA105C[0]; /*0x547805*/
    dword_ABAF08 = unk_AA105C[0]; /*0x54780a*/
    dword_ABAF0C = unk_AA105C[0]; /*0x54780f*/
    dword_ABAF20 = unk_AA105C[0]; /*0x547814*/
    dword_ABAF24 = unk_AA105C[0]; /*0x547819*/
    dword_ABAF38 = unk_AA105C[0]; /*0x54781e*/
    dword_ABAF3C = unk_AA105C[0]; /*0x547823*/
    dword_ABAF4C = unk_AA105C[0]; /*0x547828*/
    dword_ABAF50 = unk_AA105C[0]; /*0x54782d*/
    dword_ABAF54 = unk_AA105C[0]; /*0x547832*/
    dword_ABAF58 = 2147450879; /*0x547837*/
    dword_ABAF5C = -131073; /*0x547850*/
    dword_ABAF60 = -196608; /*0x547864*/
    dword_ABAF70 = 2147450879; /*0x547878*/
    dword_ABAF74 = -131073; /*0x54788c*/
    dword_ABAF78 = -196608; /*0x5478a0*/
    dword_ABAF88 = 2147450879; /*0x5478b4*/
    dword_ABAF8C = -196608; /*0x5478c8*/
    dword_ABAFA0 = 2147450879; /*0x5478dc*/
    dword_ABAFA4 = -196608; /*0x5478f2*/
    dword_ABAFA8 = -196607; /*0x547906*/
    dword_ABAFAC = -131073; /*0x54791a*/
    dword_ABAFB0 = -131074; /*0x54792e*/
    dword_ABAFB8 = 2147450879; /*0x547942*/
    dword_ABAFBC = -196608; /*0x547956*/
    dword_ABAFC0 = -131073; /*0x54796a*/
    dword_ABAFC4 = -131074; /*0x54797e*/
    dword_ABAFC8 = -65539; /*0x547992*/
    dword_ABAF64 = unk_AA105C[0]; /*0x5479a1*/
    dword_ABAF68 = unk_AA105C[0]; /*0x5479a6*/
    dword_ABAF6C = unk_AA105C[0]; /*0x5479ab*/
    dword_ABAF7C = unk_AA105C[0]; /*0x5479b0*/
    dword_ABAF80 = unk_AA105C[0]; /*0x5479b5*/
    dword_ABAF84 = unk_AA105C[0]; /*0x5479ba*/
    dword_ABAF90 = unk_AA105C[0]; /*0x5479bf*/
    dword_ABAF94 = unk_AA105C[0]; /*0x5479c4*/
    dword_ABAF98 = unk_AA105C[0]; /*0x5479c9*/
    dword_ABAF9C = unk_AA105C[0]; /*0x5479ce*/
    dword_ABAFB4 = unk_AA105C[0]; /*0x5479d3*/
    dword_ABAFCC = unk_AA105C[0]; /*0x5479d8*/
    dword_ABAFD0 = 2147450879; /*0x5479dd*/
    dword_ABAFD4 = -196608; /*0x5479f1*/
    dword_ABAFD8 = -131073; /*0x547a05*/
    dword_ABAFDC = -131074; /*0x547a19*/
    dword_ABAFE8 = 2147450879; /*0x547a2d*/
    dword_ABAFF0 = -131073; /*0x547a54*/
    dword_ABAFF4 = -131074; /*0x547a68*/
    dword_ABB000 = 2147450879; /*0x547a7c*/
    dword_ABB004 = -131074; /*0x547a90*/
    dword_ABB018 = 2147450879; /*0x547aa4*/
    dword_ABB01C = -131074; /*0x547ab8*/
    dword_ABB034 = -196608; /*0x547ad5*/
    dword_ABB048 = 2147450879; /*0x547ae9*/
    dword_ABAFE0 = unk_AA105C[0]; /*0x547afd*/
    dword_ABAFE4 = unk_AA105C[0]; /*0x547b02*/
    dword_ABAFEC = -196608; /*0x547b07*/
    dword_ABAFF8 = unk_AA105C[0]; /*0x547b0d*/
    dword_ABAFFC = unk_AA105C[0]; /*0x547b12*/
    dword_ABB008 = unk_AA105C[0]; /*0x547b17*/
    dword_ABB00C = unk_AA105C[0]; /*0x547b1c*/
    dword_ABB010 = unk_AA105C[0]; /*0x547b21*/
    dword_ABB014 = unk_AA105C[0]; /*0x547b26*/
    dword_ABB020 = unk_AA105C[0]; /*0x547b2b*/
    dword_ABB024 = unk_AA105C[0]; /*0x547b30*/
    dword_ABB028 = unk_AA105C[0]; /*0x547b35*/
    dword_ABB02C = unk_AA105C[0]; /*0x547b3a*/
    dword_ABB030 = 2147450879; /*0x547b3f*/
    dword_ABB038 = unk_AA105C[0]; /*0x547b45*/
    dword_ABB03C = unk_AA105C[0]; /*0x547b4a*/
    dword_ABB040 = unk_AA105C[0]; /*0x547b4f*/
    dword_ABB044 = unk_AA105C[0]; /*0x547b54*/
    dword_ABB04C = unk_AA105C[0]; /*0x547b59*/
    dword_ABB050 = unk_AA105C[0]; /*0x547b5e*/
    dword_ABB054 = unk_AA105C[0]; /*0x547b63*/
    dword_ABB058 = unk_AA105C[0]; /*0x547b68*/
    dword_ABB05C = unk_AA105C[0]; /*0x547b6d*/
    dword_ABB060 = 2147450879; /*0x547b72*/
    dword_ABB078 = 2147450879; /*0x547b86*/
    dword_ABB090 = 2147450879; /*0x547b9a*/
    dword_ABB0A8 = 2147450879; /*0x547bae*/
    dword_ABB0C0 = 2147450879; /*0x547bc2*/
    dword_ABB064 = unk_AA105C[0]; /*0x547bd6*/
    dword_ABB068 = unk_AA105C[0]; /*0x547bdb*/
    dword_ABB06C = unk_AA105C[0]; /*0x547be0*/
    dword_ABB070 = unk_AA105C[0]; /*0x547be5*/
    dword_ABB074 = unk_AA105C[0]; /*0x547bea*/
    dword_ABB07C = unk_AA105C[0]; /*0x547bef*/
    dword_ABB080 = unk_AA105C[0]; /*0x547bf4*/
    dword_ABB084 = unk_AA105C[0]; /*0x547bf9*/
    dword_ABB088 = unk_AA105C[0]; /*0x547bfe*/
    dword_ABB08C = unk_AA105C[0]; /*0x547c03*/
    dword_ABB094 = unk_AA105C[0]; /*0x547c08*/
    dword_ABB098 = unk_AA105C[0]; /*0x547c0d*/
    dword_ABB09C = unk_AA105C[0]; /*0x547c12*/
    dword_ABB0A0 = unk_AA105C[0]; /*0x547c17*/
    dword_ABB0A4 = unk_AA105C[0]; /*0x547c1c*/
    dword_ABB0AC = unk_AA105C[0]; /*0x547c21*/
    dword_ABB0B0 = unk_AA105C[0]; /*0x547c26*/
    dword_ABB0B4 = unk_AA105C[0]; /*0x547c2b*/
    dword_ABB0B8 = unk_AA105C[0]; /*0x547c30*/
    dword_ABB0BC = unk_AA105C[0]; /*0x547c35*/
    dword_ABB0C4 = unk_AA105C[0]; /*0x547c3a*/
    dword_ABB0C8 = unk_AA105C[0]; /*0x547c3f*/
    dword_ABB0CC = unk_AA105C[0]; /*0x547c44*/
    dword_ABB0D0 = unk_AA105C[0]; /*0x547c49*/
    dword_ABB0D4 = unk_AA105C[0]; /*0x547c4e*/
    dword_ABB0DC = unk_AA105C[0]; /*0x547c53*/
    dword_ABB0E0 = unk_AA105C[0]; /*0x547c58*/
    dword_ABB0E4 = unk_AA105C[0]; /*0x547c5d*/
    dword_ABB0E8 = unk_AA105C[0]; /*0x547c62*/
    dword_ABB0EC = unk_AA105C[0]; /*0x547c67*/
    dword_ABB0D8 = 2147450879; /*0x547c7f*/
    dword_ABB0F0 = 2147450879; /*0x547c85*/
    atexit(nullsub_20); /*0x547c8a*/
    a1 = v5; /*0x547c8f*/
  }
  v1 = *(_DWORD *)(a1 + 660); /*0x547c98*/
  v2 = unk_AA102C; /*0x547c9e*/
  while ( 1 ) /*0x547ca7*/
  {
    v3 = v1 - *v2; /*0x547ca7*/
    if ( v3 < 0x28 ) /*0x547ca9*/
      break; /*0x547ca9*/
    if ( (int)++v2 >= (int)&unk_AA1040 ) /*0x547cb9*/
      return 0; /*0x547cb9*/
  }
  return 24 * v3 + 11250996; /*0x547cbb*/
}
}
} // namespace gamemd

// 0x549830
namespace gamemd {
char E4Recv_549830::sub_549830(int a2, void ** a3, int a4, int a5)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __thiscall sub_549830(void *this, int a2, void **a3, int a4, int a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  _BYTE *v16; // eax
  unsigned int v17; // ebp
  char *v19; // edx
  int v20; // ecx
  char v21; // bl
  char v22; // bl
  _BYTE *v23; // eax
  _BYTE *v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // [esp+1Ch] [ebp+4h]
  char *v28; // [esp+1Ch] [ebp+4h]
  int v29; // [esp+28h] [ebp+10h]

  memset(*a3, 0, a5 * a4); /*0x549859*/
  v6 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x549866*/
  v7 = v6; /*0x54986c*/
  if ( v6 ) /*0x549870*/
  {
    v27 = a2 % (*v6 * v6[1]); /*0x549883*/
    v8 = v6[v27 + 4]; /*0x549887*/
    if ( !v8 ) /*0x54988d*/
      return 0; /*0x54988d*/
    v9 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 156))(this); /*0x549897*/
    v10 = v9; /*0x54989d*/
    if ( v9 ) /*0x5498a1*/
    {
      v11 = *v9 * v9[1]; /*0x5498aa*/
      v12 = v9[2]; /*0x5498b0*/
      v13 = v10[v27 % v11 + 4]; /*0x5498b3*/
      v14 = v10[3]; /*0x5498b7*/
      if ( v13 && (*(_BYTE *)(v13 + 36) & 1) != 0 ) /*0x5498c2*/
        v14 += *(_DWORD *)(v13 + 4) - *(_DWORD *)(v13 + 24); /*0x5498ca*/
    }
    else
    {
      v14 = 0; /*0x5498ce*/
      v12 = 0; /*0x5498d2*/
    }
    v15 = a4; /*0x5498d6*/
    if ( v12 > a4 || v14 > a5 ) /*0x5498e6*/
      return 0; /*0x5498e6*/
    v16 = *a3; /*0x5498f3*/
    v17 = (unsigned int)*a3 + a5 * a4; /*0x5498f5*/
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x5498fa*/
    {
      v16 += a4 * (*(_DWORD *)(v8 + 4) - *(_DWORD *)(v8 + 24)); /*0x549907*/
      if ( (unsigned int)v16 >= v17 ) /*0x54990b*/
        return 0; /*0x549916*/
    }
    v19 = (char *)&unk_828924; /*0x54991c*/
    v28 = (char *)(v8 + 52); /*0x549921*/
    v29 = 0; /*0x54992a*/
    if ( (int)v7[3] > 0 ) /*0x549932*/
    {
      while ( 1 ) /*0x549934*/
      {
        v20 = 0; /*0x549934*/
        if ( (int)v7[2] > 0 ) /*0x549939*/
          break; /*0x549939*/
LABEL_20:
        v16 += v15 - v7[2]; /*0x549969*/
        if ( (unsigned int)v16 >= v17 ) /*0x549972*/
          return 0; /*0x549972*/
        if ( ++v29 >= v7[3] ) /*0x549980*/
          goto LABEL_22; /*0x549980*/
      }
      while ( 1 ) /*0x54993b*/
      {
        v21 = *v19++; /*0x54993b*/
        if ( v21 != 32 ) /*0x549945*/
        {
          v22 = *v28++; /*0x54994b*/
          *v16 = v22; /*0x549956*/
        }
        if ( (unsigned int)++v16 >= v17 ) /*0x54995b*/
          return 0; /*0x54995b*/
        if ( ++v20 >= v7[2] ) /*0x549963*/
        {
          v15 = a4; /*0x549965*/
          goto LABEL_20; /*0x549965*/
        }
      }
    }
LABEL_22:
    if ( (*(_BYTE *)(v8 + 36) & 1) != 0 ) /*0x549986*/
    {
      v23 = (char *)*a3 + *(_DWORD *)(v8 + 20) - *(_DWORD *)v8; /*0x549995*/
      if ( (unsigned int)v23 >= v17 ) /*0x549999*/
        return 0; /*0x5499a4*/
      v24 = (_BYTE *)(v8 + *(_DWORD *)(v8 + 8)); /*0x5499ad*/
      v25 = 0; /*0x5499af*/
      if ( *(int *)(v8 + 32) > 0 ) /*0x5499b3*/
      {
        while ( 1 ) /*0x5499b8*/
        {
          v26 = 0; /*0x5499b8*/
          if ( *(int *)(v8 + 28) > 0 ) /*0x5499bc*/
            break; /*0x5499bc*/
LABEL_31:
          v23 += a4 - *(_DWORD *)(v8 + 28); /*0x5499d4*/
          if ( (unsigned int)v23 >= v17 ) /*0x5499e1*/
            return 0; /*0x5499e1*/
          if ( ++v25 >= *(_DWORD *)(v8 + 32) ) /*0x5499e9*/
            return 1; /*0x5499e9*/
        }
        while ( 1 ) /*0x5499be*/
        {
          if ( *v24 ) /*0x5499be*/
            *v23 = *v24; /*0x5499c4*/
          ++v23; /*0x5499c6*/
          ++v24; /*0x5499c7*/
          if ( (unsigned int)v23 >= v17 ) /*0x5499ca*/
            return 0; /*0x5499ca*/
          if ( ++v26 >= *(_DWORD *)(v8 + 28) ) /*0x5499d2*/
            goto LABEL_31; /*0x5499d2*/
        }
      }
    }
  }
  return 1; /*0x54990d*/
}
}
} // namespace gamemd

// 0x549B30
namespace gamemd {
int sub_549B30()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_549B30()
{
  lpBuffer = 0; /*0x549b32*/
  unk_AA1060 = 0; /*0x549b37*/
  unk_AA1064 = 0; /*0x549b3c*/
  unk_AA1068 = 0; /*0x549b41*/
  unk_AA106C = 0; /*0x549b46*/
  return 0; /*0x549b4b*/
}
}
} // namespace gamemd

// 0x54BA30
namespace gamemd {
int E4Recv_54BA30::UpdateFootMovement()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall UpdateFootMovement(int this)
{
  int v2; // edi
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  void *NeighbourContentCell; // eax
  _BYTE *v11; // ecx
  int result; // eax
  _DWORD *v13; // eax
  _BYTE *v14; // ecx
  char v15; // bl
  int *v16; // ecx
  int v17; // edx
  double v18; // st7
  int MemberTeam; // eax
  int v20; // edi
  _BYTE *v21; // eax
  int v22; // eax
  _BYTE *v23; // ecx
  char v24; // bl
  int v25; // [esp+14h] [ebp-24h]
  int v26; // [esp+20h] [ebp-18h] BYREF
  int v27; // [esp+24h] [ebp-14h] BYREF
  int v28; // [esp+28h] [ebp-10h] BYREF
  int v29; // [esp+2Ch] [ebp-Ch] BYREF
  int v30; // [esp+30h] [ebp-8h]
  int v31; // [esp+34h] [ebp-4h]

  v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(this->M12); /*0x54ba43*/
  v3 = this->M12; /*0x54ba45*/
  if ( !*(_BYTE *)(v3 + 140) ) /*0x54ba48*/
  {
    v4 = (int *)(v3 + 156); /*0x54ba52*/
    v29 = *v4; /*0x54ba59*/
    v30 = v4[1]; /*0x54ba65*/
    v31 = v4[2]; /*0x54ba71*/
    if ( (*((_DWORD *)Coord::To_Cell(&MEMORY[0x87F7E8], &v29) + 80) & 0x100) != 0 && v2 >= dword_ABC5DC ) /*0x54ba8c*/
      v2 -= dword_ABC5DC; /*0x54ba8e*/
  }
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *))(**(_DWORD **)(this + 12) + 440))(this->M12, &v28); /*0x54baa0*/
  v6 = this->M12; /*0x54baa2*/
  v26 = v5; /*0x54baa5*/
  if ( v5 != *(_DWORD *)(v6 + 1376) ) /*0x54bab0*/
    Coord::ToGridIndex((char *)MEMORY[0x887888], v6, *(_DWORD *)(v6 + 1376), v5); /*0x54bace*/
  if ( v2 < this->M128 ) /*0x54bade*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 44))(this->M12) == 1 /*0x54bba2*/
      && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->M12) + 3434) )
    {
      result = this->M128 / 2; /*0x54bbb5*/
    }
    else
    {
      result = this->M128 / 4; /*0x54bbc5*/
    }
    if ( v2 > result ) /*0x54bbca*/
    {
      v16 = (int *)(this->M12 + 156); /*0x54bbd6*/
      *(double *)(this + 120) = (double)*(int *)(this + 32); /*0x54bbdc*/
      v29 = *v16; /*0x54bbe1*/
      v17 = v16[1]; /*0x54bbe5*/
      v30 = v17; /*0x54bbe8*/
      v31 = v16[2]; /*0x54bbef*/
      v28 = this->M64; /*0x54bbf8*/
      if ( v29 == v28 && v17 == this->M68 ) /*0x54bc01*/
        LOWORD(v27) = 0; /*0x54bc03*/
      v18 = Math::CalcAngle((double)v30 - (double)*(int *)(this + 68), (double)v28 - (double)v29); /*0x54bc26*/
      LOWORD(v28) = Math::RoundToInt((v18 - 1.570796326794897) * -10430.06004058427); /*0x54bc3f*/
      v27 = v28; /*0x54bc50*/
      FacingClass::Update((char *)(this + 84), &v27); /*0x54bc54*/
      MemberTeam = Team::GetMember(*(_DWORD **)(this + 12), 0); /*0x54bc5e*/
      v20 = MemberTeam; /*0x54bc63*/
      if ( MemberTeam ) /*0x54bc67*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)MemberTeam + 44))(MemberTeam) == 6 ) /*0x54bc73*/
        {
          v21 = *(_BYTE **)(v20 + 1312); /*0x54bc75*/
          if ( v21[5821] || v21[5860] || v21[5861] || v21[5862] ) /*0x54bc99*/
            (**(void (__thiscall ***)(int, int, _DWORD))(this->M12 + 8))( /*0x54bcb3*/
              this->M12 + 8,
              4475,
              0);
        }
      }
      result = this->M68 / 256; /*0x54bcd2*/
      if ( v26 == __PAIR32__(result, this->M64 / 256) ) /*0x54bcda*/
      {
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 132))(this->M12); /*0x54bce8*/
        if ( !*(_BYTE *)(result + 3434) ) /*0x54bcee*/
        {
          v22 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 456))(this->M12); /*0x54bcfd*/
          v23 = *(_BYTE **)(this + 12); /*0x54bd03*/
          this->M128 = v22; /*0x54bd06*/
          v24 = v23[116]; /*0x54bd10*/
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v23 + 292))(v23, 0); /*0x54bd13*/
          result = this->M12; /*0x54bd19*/
          this->M80 = 3; /*0x54bd1c*/
          *(_BYTE *)(result + 116) = v24; /*0x54bd23*/
        }
      }
    }
  }
  else if ( ObjectClass::HasLinkedObject(this->M12) ) /*0x54baea*/
  {
    v7 = Random::Range((_DWORD *)MEMORY[0xA8B230] + 134, 0, 7); /*0x54bb08*/
    v8 = CellCoord::To_CellObj(&MEMORY[0x87F7E8], (__int16 *)&v26); /*0x54bb14*/
    v9 = **(_DWORD **)(this + 12); /*0x54bb1f*/
    NeighbourContentCell = Cell::GetNeighbourContent(v8, v7); /*0x54bb23*/
    (*(void (__thiscall **)(_DWORD, void *, int))(v9 + 1152))(this->M12, NeighbourContentCell, 1); /*0x54bb2c*/
    v11 = *(_BYTE **)(this + 12); /*0x54bb32*/
    LOBYTE(v9) = v11[116]; /*0x54bb39*/
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v11 + 292))(v11, 0); /*0x54bb3c*/
    result = this->M12; /*0x54bb42*/
    *(_BYTE *)(result + 116) = v9; /*0x54bb46*/
    this->M80 = 3; /*0x54bb49*/
  }
  else
  {
    v13 = (_DWORD *)(*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 12) + 444))(this->M12); /*0x54bb5c*/
    CellClass::AttachObject(v13, v25); /*0x54bb64*/
    v14 = *(_BYTE **)(this + 12); /*0x54bb69*/
    v15 = v14[116]; /*0x54bb70*/
    result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)v14 + 292))(v14, 0); /*0x54bb73*/
    *(_BYTE *)(this->M12 + 116) = v15; /*0x54bb7d*/
    this->M80 = 2; /*0x54bb80*/
  }
  return result; /*0x54bb45*/
}
}
} // namespace gamemd

// 0x5406E0
namespace gamemd {
void sub_5406E0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AA0650 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x540710
namespace gamemd {
void sub_540710()
{
{
    DataGlobal_AA06A0 = DataGlobal_AA0650 / 60.0;
}
}
} // namespace gamemd

// 0x540730
namespace gamemd {
void sub_540730()
{
{
    DataGlobal_AA0688 = 1.0 / DataGlobal_AA06A0;
}
}
} // namespace gamemd

// 0x540750
namespace gamemd {
void sub_540750()
{
{
    DataGlobal_AA0680 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x540770
namespace gamemd {
void sub_540770()
{
{
    DataGlobal_AA0658 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x540790
namespace gamemd {
void sub_540790()
{
{
    DataGlobal_AA0630 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5407B0
namespace gamemd {
long long sub_5407B0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AA0630 - DataGlobal_AA0658);
    result = Math::RoundToInt(v0 * DataGlobal_AA0650 * 0.5);
    DataGlobal_AA06A8 = result;
    return result;
}
}
} // namespace gamemd

// 0x5407F0
namespace gamemd {
void sub_5407F0()
{
{
    DataGlobal_AA0660 = Math::ArcTan((double)DataGlobal_AA06A8 * 0.00390625);
}
}
} // namespace gamemd

// 0x540820
namespace gamemd {
void sub_540820()
{
{
    DataGlobal_AA0678 = Math::ArcTan((double)(2 * DataGlobal_AA06A8) / DataGlobal_AA0650);
}
}
} // namespace gamemd

// 0x540850
namespace gamemd {
long long sub_540850()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AA06A8) + 0.5);
    DataGlobal_AA069C = result;
    return result;
}
}
} // namespace gamemd

// 0x540880
namespace gamemd {
int sub_540880()
{
{
    DataGlobal_AA0648 = 0;
    DataGlobal_AA064A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x540890
namespace gamemd {
int sub_540890()
{
{
    DataGlobal_AA0668 = 0;
    DataGlobal_AA066C = 0;
    DataGlobal_AA0670 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5408B0
namespace gamemd {
int sub_5408B0()
{
{
    DataGlobal_AA0698 = 0;
    DataGlobal_AA0690 = 128;
    DataGlobal_AA0694 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x5408D0
namespace gamemd {
int sub_5408D0()
{
{
    DataGlobal_AA0638 = 0;
    DataGlobal_AA063C = 0;
    DataGlobal_AA0640 = 0;
    DataGlobal_AA0644 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5408F0
namespace gamemd {
char * E4Recv_5408F0::sub_5408F0(int a2, int a3, int a4, int a5, short a6, short a7)
{
{
    int *v8;
    int *v9;
    short v10;
    *(int *)this = &vt_IPXManagerClass;
    if ( g_NetworkInterface )
  {
    (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1);
    g_NetworkInterface = 0;
  }
    v8 = __2_YAPAXI_Z(0x3F310u);
    if ( v8 )
    v9 = IPXInterfaceClass::Construct(v8);
    else
    v9 = 0;
    g_NetworkInterface = (int)v9;
    if ( WinsockInterface::Init(v9) )
    this->M4 = 1;
    else
    this->M4 = 0;
    if ( g_NetworkInterface )
    (**(void (__thiscall ***)(int, int))g_NetworkInterface)(g_NetworkInterface, 1);
    g_NetworkInterface = 0;
    this->M8 = a2;
    this->M12 = a4;
    this->M24 = a2;
    this->M20 = a5;
    this->M28 = a5;
    this->M32 = a7;
    LOBYTE(v10) = HIBYTE(a6);
    HIBYTE(v10) = a6;
    this->M34 = v10;
    this->M5 = 0;
    this->M16 = a3;
    this->M36 = 0;
    this->M68 = 0;
    this->M84 = 0;
    memset(this + 40, 0, 0x1Cu);
    this->M72 = 0;
    this->M168 = -1;
    this->M92 = -1;
    this->M76 = 0;
    this->M80 = 0;
    this->M160 = 0;
    this->M164 = 0;
    this->M88 = 2;
    this->M96 = 60;
    return this;
}
}
} // namespace gamemd

// 0x5422C0
namespace gamemd {
unsigned int E4Recv_5422C0::_GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ()
{
{
    return this->M168;
}
}
} // namespace gamemd

// 0x543120
namespace gamemd {
void sub_543120()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AA06D8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x543150
namespace gamemd {
void sub_543150()
{
{
    DataGlobal_AA0728 = DataGlobal_AA06D8 / 60.0;
}
}
} // namespace gamemd

// 0x543170
namespace gamemd {
void sub_543170()
{
{
    DataGlobal_AA0710 = 1.0 / DataGlobal_AA0728;
}
}
} // namespace gamemd

// 0x543190
namespace gamemd {
void sub_543190()
{
{
    DataGlobal_AA0708 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x5431B0
namespace gamemd {
void sub_5431B0()
{
{
    DataGlobal_AA06E0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x5431D0
namespace gamemd {
void sub_5431D0()
{
{
    DataGlobal_AA06B8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x5431F0
namespace gamemd {
long long sub_5431F0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AA06B8 - DataGlobal_AA06E0);
    result = Math::RoundToInt(v0 * DataGlobal_AA06D8 * 0.5);
    DataGlobal_AA0730 = result;
    return result;
}
}
} // namespace gamemd

// 0x543230
namespace gamemd {
void sub_543230()
{
{
    DataGlobal_AA06E8 = Math::ArcTan((double)DataGlobal_AA0730 * 0.00390625);
}
}
} // namespace gamemd

// 0x543260
namespace gamemd {
void sub_543260()
{
{
    DataGlobal_AA0700 = Math::ArcTan((double)(2 * DataGlobal_AA0730) / DataGlobal_AA06D8);
}
}
} // namespace gamemd

// 0x543290
namespace gamemd {
long long sub_543290()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_AA0730) + 0.5);
    DataGlobal_AA0724 = result;
    return result;
}
}
} // namespace gamemd

// 0x5432C0
namespace gamemd {
int sub_5432C0()
{
{
    DataGlobal_AA06D0 = 0;
    DataGlobal_AA06D2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5432D0
namespace gamemd {
int sub_5432D0()
{
{
    DataGlobal_AA06F0 = 0;
    DataGlobal_AA06F4 = 0;
    DataGlobal_AA06F8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x5432F0
namespace gamemd {
int sub_5432F0()
{
{
    DataGlobal_AA0720 = 0;
    DataGlobal_AA0718 = 128;
    DataGlobal_AA071C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x543310
namespace gamemd {
int sub_543310()
{
{
    DataGlobal_AA06C0 = 0;
    DataGlobal_AA06C4 = 0;
    DataGlobal_AA06C8 = 0;
    DataGlobal_AA06CC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x543AB0
namespace gamemd {
int nullsub_0(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = 237448640;
  a2[1] = 298949647;
  a2[2] = -1610610249;
  a2[3] = -777003740;
  return 0;
}
} // namespace gamemd

// 0x543AF0
namespace gamemd {
int E4Recv_543AF0::nullsub_0_0()
{
{
    return this->M172;
}
}
} // namespace gamemd

// 0x543B00
namespace gamemd {
void nullsub_154(int a1, int a2)
{
  ;
}
} // namespace gamemd

// 0x543C40
namespace gamemd {
int sub_543C40()
{
{
    DataGlobal_AA1040 = 0;
    DataGlobal_AA1044 = 0;
    DataGlobal_AA1048 = 0;
    DataGlobal_AA104C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x543C60
namespace gamemd {
void sub_543C60()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_AA1070 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x543C90
namespace gamemd {
void sub_543C90()
{
{
    DataGlobal_ABC2C0 = DataGlobal_AA1070 / 60.0;
}
}
} // namespace gamemd

// 0x543CB0
namespace gamemd {
void sub_543CB0()
{
{
    DataGlobal_ABC1F0 = 1.0 / DataGlobal_ABC2C0;
}
}
} // namespace gamemd

// 0x543CD0
namespace gamemd {
void sub_543CD0()
{
{
    DataGlobal_ABC1E0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x543CF0
namespace gamemd {
void sub_543CF0()
{
{
    DataGlobal_AA1128 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x543D10
namespace gamemd {
void sub_543D10()
{
{
    DataGlobal_AA0E30 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x543D30
namespace gamemd {
long long sub_543D30()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_AA0E30 - DataGlobal_AA1128);
    result = Math::RoundToInt(v0 * DataGlobal_AA1070 * 0.5);
    DataGlobal_ABC550 = result;
    return result;
}
}
} // namespace gamemd

// 0x543D70
namespace gamemd {
void sub_543D70()
{
{
    DataGlobal_AA1138 = Math::ArcTan((double)DataGlobal_ABC550 * 0.00390625);
}
}
} // namespace gamemd

// 0x543DA0
namespace gamemd {
void sub_543DA0()
{
{
    DataGlobal_ABB118 = Math::ArcTan((double)(2 * DataGlobal_ABC550) / DataGlobal_AA1070);
}
}
} // namespace gamemd

// 0x543DD0
namespace gamemd {
long long sub_543DD0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABC550) + 0.5);
    DataGlobal_ABC2BC = result;
    return result;
}
}
} // namespace gamemd

// 0x543E10
namespace gamemd {
int sub_543E10()
{
{
    DataGlobal_ABB0F8 = 0;
    DataGlobal_ABB0FC = 0;
    DataGlobal_ABB100 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x543E30
namespace gamemd {
int sub_543E30()
{
{
    DataGlobal_ABC208 = 0;
    DataGlobal_ABC200 = 128;
    DataGlobal_ABC204 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x543E50
namespace gamemd {
unsigned char * sub_543E50()
{
{
    char *result;
    int v1;
    result = &DataGlobal_ABBED2;
    v1 = 256;
    do
  {
    *(result - 2) = 0;
    *(result - 1) = 0;
    *result = 0;
    result += 3;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x543E70
namespace gamemd {
int sub_543E70()
{
{
    DataGlobal_AA107C = 0;
    DataGlobal_AA1080 = 0;
    DataGlobal_AA1084 = 1;
    DataGlobal_AA1085 = 0;
    DataGlobal_AA1078 = (int)&vt_DynamicVectorClass_IsometricTileTypeClass_TileInsertType;
    DataGlobal_AA108C = 10;
    DataGlobal_AA1088 = 0;
    return atexit(sub_543EB0);
}
}
} // namespace gamemd

// 0x543EB0
namespace gamemd {
void sub_543EB0()
{
{
    if ( (DataGlobal_AA0E2C & 1) == 0 )
  {
    DataGlobal_AA1078 = (int)&vt_VectorClass_IsometricTileTypeClass_TileInsertType;
    DataGlobal_AA0E2C |= 1u;
    if ( DataGlobal_AA107C )
    {
    if ( DataGlobal_AA1085 )
      {
    __3_YAXPAX_Z(DataGlobal_AA107C);
    DataGlobal_AA107C = 0;
      }
    }
    DataGlobal_AA1085 = 0;
    DataGlobal_AA1080 = 0;
  }
}
}
} // namespace gamemd

// 0x544690
namespace gamemd {
int sub_544690()
{
{
    DataGlobal_ABC21C = 0;
    DataGlobal_ABC22C = 0;
    DataGlobal_ABC23C = 0;
    DataGlobal_ABC24C = 0;
    DataGlobal_ABC210 = 0;
    DataGlobal_ABC214 = 0;
    DataGlobal_ABC218 = 0;
    DataGlobal_ABC220 = 0;
    DataGlobal_ABC224 = 0;
    DataGlobal_ABC228 = 0;
    DataGlobal_ABC230 = 0;
    DataGlobal_ABC234 = 0;
    DataGlobal_ABC238 = 0;
    DataGlobal_ABC240 = 0;
    DataGlobal_ABC244 = 0;
    DataGlobal_ABC248 = 0;
    DataGlobal_ABC25C = 12;
    DataGlobal_ABC250 = 13;
    DataGlobal_ABC254 = 6;
    DataGlobal_ABC258 = 48;
    DataGlobal_ABC26C = 0;
    DataGlobal_ABC260 = 0;
    DataGlobal_ABC264 = 0;
    DataGlobal_ABC268 = 0;
    DataGlobal_ABC27C = 12;
    DataGlobal_ABC270 = 14;
    DataGlobal_ABC274 = 1;
    DataGlobal_ABC278 = 48;
    DataGlobal_ABC28C = 0;
    DataGlobal_ABC29C = 0;
    DataGlobal_ABC2AC = 0;
    DataGlobal_ABC280 = 0;
    DataGlobal_ABC284 = 0;
    DataGlobal_ABC288 = 0;
    DataGlobal_ABC290 = 0;
    DataGlobal_ABC294 = 0;
    DataGlobal_ABC298 = 0;
    DataGlobal_ABC2A0 = 0;
    DataGlobal_ABC2A4 = 0;
    DataGlobal_ABC2A8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x544DF0
namespace gamemd {
void nullsub_155()
{
  ;
}
} // namespace gamemd

// 0x544E30
namespace gamemd {
int MIXFile_AccumulateIndex(int a1)
{
{
    int result;
    int v2;
    int *v3;
    int *v4;
    result = a1;
    if ( a1 != 0xFFFF )
  {
    v2 = 0;
    if ( DataGlobal_AA1088 > 0 )
    {
    v3 = DataGlobal_AA107C;
    do
      {
    v4 = (int *)*v3;
    if ( *(int *)*v3 > a1 )
    break;
    ++v3;
    result += v4[1];
    ++v2;
      }
    while ( v2 < DataGlobal_AA1088 );
    }
  }
    return result;
}
}
} // namespace gamemd

// 0x544FF0
namespace gamemd {
char ReturnFalse2()
{
return 0;
}
} // namespace gamemd

// 0x547CE0
namespace gamemd {
void nullsub_20()
{
  ;
}
} // namespace gamemd

// 0x549A00
namespace gamemd {
int sub_549A00(int a1, int a2, int * a3, int * a4)
{
{
    int result;
    *a3 = 60 * a1 / 2;
    *a4 = 30 * a1 / 2;
    *a3 += -60 * a2 / 2;
    result = 30 * a2 / 2;
    *a4 += result;
    return result;
}
}
} // namespace gamemd

// 0x54A8A0
namespace gamemd {
int sub_54A8A0()
{
{
    DataGlobal_ABC560 = 0;
    DataGlobal_ABC564 = 0;
    DataGlobal_ABC568 = 0;
    DataGlobal_ABC56C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54A900
namespace gamemd {
unsigned char * Bitfield_SetBit(int a1, int a2, int a3)
{
{
    char v3;
    char *result;
    char v5;
    v3 = 1 << (a2 % 8);
    result = (char *)(a1 + a2 / 8);
    if ( a3 )
    v5 = v3 | *result;
    else
    v5 = ~v3 & *result;
    *result = v5;
    return result;
}
}
} // namespace gamemd

// 0x54A990
namespace gamemd {
int E4Recv_54A990::sub_54A990()
{
{
    char *v1;
    int v2;
    char v3;
    int i;
    v1 = this;
    v2 = 0;
    if ( !*(void**)this )
  {
    do
    {
    v3 = v1[1];
    ++v2;
    ++v1;
    }
    while ( !v3 );
  }
    for ( i = 0; i < 8; ++i )
  {
    if ( ((unsigned char)(1 << (i % 8)) & v1[i / 8]) != 0 )
    break;
  }
    return i + 8 * v2;
}
}
} // namespace gamemd

// 0x54A9E0
namespace gamemd {
int E4Recv_54A9E0::sub_54A9E0()
{
{
    char *v1;
    int v2;
    char v3;
    int i;
    v1 = this;
    v2 = 0;
    if ( *(void**)this == 0xFF )
  {
    do
    {
    v3 = v1[1];
    ++v2;
    ++v1;
    }
    while ( v3 == -1 );
  }
    for ( i = 0; i < 8; ++i )
  {
    if ( ((unsigned char)(1 << (i % 8)) & v1[i / 8]) == 0 )
    break;
  }
    return i + 8 * v2;
}
}
} // namespace gamemd

// 0x54AA30
namespace gamemd {
void sub_54AA30()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABC590 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x54AA60
namespace gamemd {
void sub_54AA60()
{
{
    DataGlobal_ABC5E0 = DataGlobal_ABC590 / 60.0;
}
}
} // namespace gamemd

// 0x54AA80
namespace gamemd {
void sub_54AA80()
{
{
    DataGlobal_ABC5C8 = 1.0 / DataGlobal_ABC5E0;
}
}
} // namespace gamemd

// 0x54AAA0
namespace gamemd {
void sub_54AAA0()
{
{
    DataGlobal_ABC5C0 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x54AAC0
namespace gamemd {
void sub_54AAC0()
{
{
    DataGlobal_ABC598 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x54AAE0
namespace gamemd {
void sub_54AAE0()
{
{
    DataGlobal_ABC570 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x54AB00
namespace gamemd {
long long sub_54AB00()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABC570 - DataGlobal_ABC598);
    result = Math::RoundToInt(v0 * DataGlobal_ABC590 * 0.5);
    DataGlobal_ABC5E8 = result;
    return result;
}
}
} // namespace gamemd

// 0x54AB40
namespace gamemd {
void sub_54AB40()
{
{
    DataGlobal_ABC5A0 = Math::ArcTan((double)DataGlobal_ABC5E8 * 0.00390625);
}
}
} // namespace gamemd

// 0x54AB70
namespace gamemd {
void sub_54AB70()
{
{
    DataGlobal_ABC5B8 = Math::ArcTan((double)(2 * DataGlobal_ABC5E8) / DataGlobal_ABC590);
}
}
} // namespace gamemd

// 0x54ABA0
namespace gamemd {
long long sub_54ABA0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABC5E8) + 0.5);
    DataGlobal_ABC5DC = result;
    return result;
}
}
} // namespace gamemd

// 0x54ABD0
namespace gamemd {
int sub_54ABD0()
{
{
    DataGlobal_ABC588 = 0;
    DataGlobal_ABC58A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54ABE0
namespace gamemd {
int sub_54ABE0()
{
{
    DataGlobal_ABC5A8 = 0;
    DataGlobal_ABC5AC = 0;
    DataGlobal_ABC5B0 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54AC00
namespace gamemd {
int sub_54AC00()
{
{
    DataGlobal_ABC5D8 = 0;
    DataGlobal_ABC5D0 = 128;
    DataGlobal_ABC5D4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x54AC20
namespace gamemd {
int sub_54AC20()
{
{
    DataGlobal_ABC578 = 0;
    DataGlobal_ABC57C = 0;
    DataGlobal_ABC580 = 0;
    DataGlobal_ABC584 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54D0C0
namespace gamemd {
void nullsub_156()
{
  ;
}
} // namespace gamemd

// 0x54E050
namespace gamemd {
void sub_54E050()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABC638 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x54E080
namespace gamemd {
void sub_54E080()
{
{
    DataGlobal_ABC688 = DataGlobal_ABC638 / 60.0;
}
}
} // namespace gamemd

// 0x54E0A0
namespace gamemd {
void sub_54E0A0()
{
{
    DataGlobal_ABC670 = 1.0 / DataGlobal_ABC688;
}
}
} // namespace gamemd

// 0x54E0C0
namespace gamemd {
void sub_54E0C0()
{
{
    DataGlobal_ABC668 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x54E0E0
namespace gamemd {
void sub_54E0E0()
{
{
    DataGlobal_ABC640 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x54E100
namespace gamemd {
void sub_54E100()
{
{
    DataGlobal_ABC5F0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x54E120
namespace gamemd {
long long sub_54E120()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABC5F0 - DataGlobal_ABC640);
    result = Math::RoundToInt(v0 * DataGlobal_ABC638 * 0.5);
    DataGlobal_ABC690 = result;
    return result;
}
}
} // namespace gamemd

// 0x54E160
namespace gamemd {
void sub_54E160()
{
{
    DataGlobal_ABC648 = Math::ArcTan((double)DataGlobal_ABC690 * 0.00390625);
}
}
} // namespace gamemd

// 0x54E190
namespace gamemd {
void sub_54E190()
{
{
    DataGlobal_ABC660 = Math::ArcTan((double)(2 * DataGlobal_ABC690) / DataGlobal_ABC638);
}
}
} // namespace gamemd

// 0x54E1C0
namespace gamemd {
long long sub_54E1C0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABC690) + 0.5);
    DataGlobal_ABC684 = result;
    return result;
}
}
} // namespace gamemd

// 0x54E1F0
namespace gamemd {
int sub_54E1F0()
{
{
    DataGlobal_ABC630 = 0;
    DataGlobal_ABC632 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54E200
namespace gamemd {
int sub_54E200()
{
{
    DataGlobal_ABC650 = 0;
    DataGlobal_ABC654 = 0;
    DataGlobal_ABC658 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54E220
namespace gamemd {
int sub_54E220()
{
{
    DataGlobal_ABC680 = 0;
    DataGlobal_ABC678 = 128;
    DataGlobal_ABC67C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x54E240
namespace gamemd {
int sub_54E240()
{
{
    DataGlobal_ABC620 = 0;
    DataGlobal_ABC624 = 0;
    DataGlobal_ABC628 = 0;
    DataGlobal_ABC62C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54E260
namespace gamemd {
int sub_54E260()
{
{
    int v1;
    g_MissionQueueFrame = (int)g_CurrentFrame;
    g_MissionQueueType = 0;
    sub_54EBF0(&DataGlobal_ABC604, 0, 0);
    DataGlobal_ABC604 = (int)&vt_DynamicVectorClass_KamikazeControl;
    DataGlobal_ABC618 = 10;
    DataGlobal_ABC614 = 0;
    g_MissionQueueFrame = (int)g_CurrentFrame;
    g_MissionQueueParam = v1;
    g_MissionQueueType = 100;
    return atexit(loc_54E2D0);
}
}
} // namespace gamemd

// 0x54E360
namespace gamemd {
unsigned int * E4Recv_54E360::sub_54E360()
{
{
    int v2;
    *(void**)this = g_CurrentFrame;
    this->M8 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M24 = 1;
    this->M25 = 0;
    this->M12 = &vt_DynamicVectorClass_KamikazeControl;
    this->M32 = 10;
    this->M28 = 0;
    *(void**)this = g_CurrentFrame;
    this->M4 = v2;
    this->M8 = 100;
    return this;
}
}
} // namespace gamemd

// 0x54E690
namespace gamemd {
void E4Recv_54E690::sub_54E690()
{
{
    int i;
    int v3;
    int *v4;
    int *v5;
    int v6;
    void *v7;
    i = this->M28 - 1;
    for ( ; i >= 0; --i )
    __3_YAXPAX_Z(*(void **)(this->M16 + 4 * i));
    v3 = this->M12;
    v4 = this + 3;
    v5 = this + 3;
    v6 = this->M20;
    (*(void (__thiscall **)(int *))(v3 + 12))(v5);
    (*(void (__thiscall **)(int *, int, int))(*v4 + 8))(v4, v6, 0);
    v7 = (void *)v4[1];
    *v4 = &vt_VectorClass_KamikazeControl;
    if ( v7 && *((char *)(v4) + 13) )
  {
    __3_YAXPAX_Z(v7);
    v4[1] = 0;
  }
    *((char *)(v4) + 13) = 0;
    v4[2] = 0;
}
}
} // namespace gamemd

// 0x54EBF0
namespace gamemd {
unsigned int * E4Recv_54EBF0::sub_54EBF0(int a2, int a3)
{
{
    this->M4 = 0;
    this->M8 = a2;
    this->M12 = 1;
    this->M13 = 0;
    *(void**)this = &vt_VectorClass_KamikazeControl;
    if ( a2 )
  {
    if ( a3 )
    {
    this->M4 = a3;
    return this;
    }
    this->M4 = __2_YAPAXI_Z(4 * a2);
    this->M13 = 1;
  }
    return this;
}
}
} // namespace gamemd

// 0x54EC40
namespace gamemd {
int sub_54EC40()
{
{
    DataGlobal_ABC6A0 = 0;
    DataGlobal_ABC6A4 = 0;
    DataGlobal_ABC6A8 = 0;
    DataGlobal_ABC6AC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54EC60
namespace gamemd {
void sub_54EC60()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABC6B8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x54EC90
namespace gamemd {
void sub_54EC90()
{
{
    DataGlobal_ABC708 = DataGlobal_ABC6B8 / 60.0;
}
}
} // namespace gamemd

// 0x54ECB0
namespace gamemd {
void sub_54ECB0()
{
{
    DataGlobal_ABC6F0 = 1.0 / DataGlobal_ABC708;
}
}
} // namespace gamemd

// 0x54ECD0
namespace gamemd {
void sub_54ECD0()
{
{
    DataGlobal_ABC6E8 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x54ECF0
namespace gamemd {
void sub_54ECF0()
{
{
    DataGlobal_ABC6C0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x54ED10
namespace gamemd {
void sub_54ED10()
{
{
    DataGlobal_ABC698 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x54ED30
namespace gamemd {
long long sub_54ED30()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABC698 - DataGlobal_ABC6C0);
    result = Math::RoundToInt(v0 * DataGlobal_ABC6B8 * 0.5);
    DataGlobal_ABC710 = result;
    return result;
}
}
} // namespace gamemd

// 0x54ED70
namespace gamemd {
void sub_54ED70()
{
{
    DataGlobal_ABC6C8 = Math::ArcTan((double)DataGlobal_ABC710 * 0.00390625);
}
}
} // namespace gamemd

// 0x54EDA0
namespace gamemd {
void sub_54EDA0()
{
{
    DataGlobal_ABC6E0 = Math::ArcTan((double)(2 * DataGlobal_ABC710) / DataGlobal_ABC6B8);
}
}
} // namespace gamemd

// 0x54EDD0
namespace gamemd {
long long sub_54EDD0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABC710) + 0.5);
    DataGlobal_ABC704 = result;
    return result;
}
}
} // namespace gamemd

// 0x54EE00
namespace gamemd {
int sub_54EE00()
{
{
    DataGlobal_ABC6B0 = 0;
    DataGlobal_ABC6B2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54EE10
namespace gamemd {
int sub_54EE10()
{
{
    DataGlobal_ABC6D0 = 0;
    DataGlobal_ABC6D4 = 0;
    DataGlobal_ABC6D8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54EE30
namespace gamemd {
int sub_54EE30()
{
{
    DataGlobal_ABC700 = 0;
    DataGlobal_ABC6F8 = 128;
    DataGlobal_ABC6FC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x54EE50
namespace gamemd {
void nullsub_157()
{
  ;
}
} // namespace gamemd

// 0x54F6D0
namespace gamemd {
bool E4Recv_54F6D0::sub_54F6D0()
{
{
    return this->M788 == this->M792;
}
}
} // namespace gamemd

// 0x54FBB0
namespace gamemd {
void sub_54FBB0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_ABC7C0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x54FBE0
namespace gamemd {
void sub_54FBE0()
{
{
    DataGlobal_ABC8B0 = DataGlobal_ABC7C0 / 60.0;
}
}
} // namespace gamemd

// 0x54FC00
namespace gamemd {
void sub_54FC00()
{
{
    DataGlobal_ABC898 = 1.0 / DataGlobal_ABC8B0;
}
}
} // namespace gamemd

// 0x54FC20
namespace gamemd {
void sub_54FC20()
{
{
    DataGlobal_ABC890 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x54FC40
namespace gamemd {
void sub_54FC40()
{
{
    DataGlobal_ABC7D0 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x54FC60
namespace gamemd {
void sub_54FC60()
{
{
    DataGlobal_ABC720 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x54FC80
namespace gamemd {
long long sub_54FC80()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_ABC720 - DataGlobal_ABC7D0);
    result = Math::RoundToInt(v0 * DataGlobal_ABC7C0 * 0.5);
    DataGlobal_ABC8BC = result;
    return result;
}
}
} // namespace gamemd

// 0x54FCC0
namespace gamemd {
void sub_54FCC0()
{
{
    DataGlobal_ABC7D8 = Math::ArcTan((double)DataGlobal_ABC8BC * 0.00390625);
}
}
} // namespace gamemd

// 0x54FCF0
namespace gamemd {
void sub_54FCF0()
{
{
    DataGlobal_ABC7F0 = Math::ArcTan((double)(2 * DataGlobal_ABC8BC) / DataGlobal_ABC7C0);
}
}
} // namespace gamemd

// 0x54FD20
namespace gamemd {
long long sub_54FD20()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_ABC8BC) + 0.5);
    DataGlobal_ABC8AC = result;
    return result;
}
}
} // namespace gamemd

// 0x54FD50
namespace gamemd {
int sub_54FD50()
{
{
    DataGlobal_ABC7B8 = 0;
    DataGlobal_ABC7BA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54FD60
namespace gamemd {
int sub_54FD60()
{
{
    DataGlobal_ABC7E0 = 0;
    DataGlobal_ABC7E4 = 0;
    DataGlobal_ABC7E8 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54FD80
namespace gamemd {
int sub_54FD80()
{
{
    DataGlobal_ABC8A8 = 0;
    DataGlobal_ABC8A0 = 128;
    DataGlobal_ABC8A4 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x54FDA0
namespace gamemd {
int sub_54FDA0()
{
{
    DataGlobal_ABC728 = 0;
    DataGlobal_ABC72C = 0;
    DataGlobal_ABC730 = 0;
    DataGlobal_ABC734 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x54FDC0
namespace gamemd {
int sub_54FDC0()
{
{
    DataGlobal_ABC87C = 0;
    DataGlobal_ABC880 = 0;
    DataGlobal_ABC884 = 1;
    DataGlobal_ABC885 = 0;
    DataGlobal_ABC878 = (int)&vt_DynamicVectorClass_LaserDrawClass;
    DataGlobal_ABC88C = 10;
    g_TimerPool = 0;
    return atexit(sub_54FE00);
}
}
} // namespace gamemd

// 0x54FE00
namespace gamemd {
void sub_54FE00()
{
{
    if ( (DataGlobal_ABC718 & 1) == 0 )
  {
    DataGlobal_ABC878 = (int)&vt_VectorClass_LaserDrawClass;
    DataGlobal_ABC718 |= 1u;
    if ( DataGlobal_ABC87C )
    {
    if ( DataGlobal_ABC885 )
      {
    __3_YAXPAX_Z(DataGlobal_ABC87C);
    DataGlobal_ABC87C = 0;
      }
    }
    DataGlobal_ABC885 = 0;
    DataGlobal_ABC880 = 0;
  }
}
}
} // namespace gamemd
