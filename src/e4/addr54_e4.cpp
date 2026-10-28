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
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Team_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WinsockInterface_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/TextRenderer_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/E4Recv_52A110_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/E4Recv_554400_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/TheatreClass_e4.hpp"
#include "e4/classes/LinkedList_flat_e4.hpp"
#include "e4/classes/GenericNode_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/_w14_nocarrier_e4.hpp"
#include "e4/classes/TerrainTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/AnimTypeClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/BufferIOFileClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TerrainClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/HashTable_flat_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/CellClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/X99_vector_globals_e4.hpp"  // X99 S4b typed vector globals
// [w18j2] C2065 function supply (raw-evidenced)
namespace gamemd { void nullsub_20(); }  // w18j2 raw 0x00547CE0

// 0x540C50
namespace gamemd {  // G42.18 ns repair
int E4Recv_540C50::sub_540C50()
{

  return LOBYTE(this->M4); /*0x540c55*/

}
}  // G42.18 ns repair
// 0x541170
namespace gamemd {
AbstractClass * * E4Recv_541170::sub_541170(int a2, int a3, int a4, int a5)
{

  int v5; // ebx
  int v7; // eax
  unsigned int *i; // edx
  unsigned int *v10; // ecx
  char ptr_0; // al
  int v12; // edi
  int v13; // edi
  int v14; // [esp+0h] [ebp-1Ch] BYREF
  unsigned int v15[3]; // [esp+10h] [ebp-Ch] BYREF

  HIWORD(v5) = HIWORD(a5); /*0x541174*/
  if ( MEMORY[0xA8DA84] && *(unsigned int *)(*MEMORY[0xA8DA78] + 111) == a5 ) /*0x541192*/
    return 0; /*0x541192*/
  v7 = 1; /*0x541194*/
  if ( MEMORY[0xA8DA84] <= 1 ) /*0x54119b*/
    return 0; /*0x54119b*/
  for ( i = MEMORY[0xA8DA78] + 1; *(unsigned int *)(*i + 111) != a5; ++i ) /*0x54119d*/
  {
    if ( ++v7 >= MEMORY[0xA8DA84] ) /*0x5411ad*/
      return 0; /*0x5411ad*/
  }
  (v5) = ((v5) & ~0xFFFF) | ((*(&dword_A8E2B2 + v7)) & 0xFFFF); /*0x5411be*/
  v10 = (unsigned int *)(MEMORY[0xA8DA78][v7] + 40); /*0x5411c6*/
  ptr_0 = (char)this->ptr_4; /*0x5411c9*/
  v12 = a4; /*0x5411cc*/
  v15[0] = *v10; /*0x5411d2*/
  v15[1] = v10[1]; /*0x5411d9*/
  v15[2] = v10[2]; /*0x5411e2*/
  if ( !ptr_0 || !BYTE1(this->ptr_4) ) /*0x5411e8*/
    return 0; /*0x5411af*/
  if ( a4 && (&v14 == (int *)-16 || Network::IsBroadcastAddr((Network *)v15)) ) /*0x5411ff*/
    v12 = 0; /*0x541208*/
  v13 = (*(int (**)(int, int, int, unsigned int *, int, int, unsigned int))(*(unsigned int *)this->ambientSoundController[3] /*0x541225*/
                                                                         + 44))(
          this->ambientSoundController[3],
          a2,
          a3,
          v15,
          v12,
          v5,
          0);
  if ( !v13 ) /*0x541229*/
  {
    ++this->location[1]; /*0x541232*/
    Debug::Log(); /*0x541240*/
  }
  return v13; /*0x5411af*/

}
}
// 0x542F30
namespace gamemd {
int E4Recv_542F30::sub_542F30()
{

  unsigned int v1; // ebx
  int result; // eax
  int v3; // ebp
  int *i; // edi
  int v5; // esi
  Terrain *v6; // ecx
  int TileIndex; // eax
  int v8; // [esp+8h] [ebp-8h]

  v1 = -1; /*0x542f38*/
  result = 0; /*0x542f3b*/
  v3 = 0; /*0x542f3d*/
  v8 = 0; /*0x542f45*/
  if ( this->ambientSoundController[2] > 0 ) /*0x542f49*/
  {
    for ( i = &this->owningHouseIndex; ; ++i ) /*0x542f4d*/
    {
      v5 = 0; /*0x542f52*/
      v6 = *(Terrain **)(*i + 4); /*0x542f54*/
      if ( *(int *)v6->__pad_28 <= 0 ) /*0x542f5c*/
        goto LABEL_12; /*0x542f5c*/
      while ( 1 ) /*0x542f5f*/
      {
        TileIndex = (v6)->GetTileIndex(v5); /*0x542f5f*/
        if ( TileIndex ) /*0x542f66*/
          break; /*0x542f66*/
LABEL_8:
        ++v5; /*0x542f79*/
        v6 = *(Terrain **)(*i + 4); /*0x542f7c*/
        if ( v5 >= *(unsigned int *)v6->__pad_28 ) /*0x542f82*/
          goto LABEL_9; /*0x542f82*/
      }
      if ( *(unsigned char *)(*(unsigned int *)(TileIndex + 20) + 2) || (*(unsigned char *)TileIndex & 2) != 0 ) /*0x542f75*/
        break; /*0x542f75*/
LABEL_9:
      if ( TileIndex ) /*0x542f86*/
      {
        if ( *(unsigned int *)(TileIndex + 4) < v1 ) /*0x542f8d*/
        {
          v1 = *(unsigned int *)(TileIndex + 4); /*0x542f92*/
          v8 = *(unsigned int *)(TileIndex + 20); /*0x542f94*/
        }
      }
LABEL_12:
      if ( ++v3 >= this->ambientSoundController[2] ) /*0x542fa3*/
        return v8; /*0x542fa5*/
    }
    TileIndex = 0; /*0x542f77*/
    goto LABEL_8; /*0x542f77*/
  }
  return result; /*0x542fab*/

}
}
// 0x544E70
namespace gamemd {
AbstractClass * * SurfaceClass_CreatePrimary(int a1, int a2, int a3)
{

  int result; // eax
  int v4; // ecx
  char *v5; // edx
  int v6; // esi
  int v7; // esi
  int v8; // eax

  if ( !g_DSurface_Primary ) /*0x544e86*/
    return 0; /*0x544e8b*/
  if ( a1 == 1000 && a2 == 1000 && a3 == 1000 && dword_87F6A8 ) /*0x544ead*/
    return *(unsigned int *)dword_87F69C; /*0x544eb7*/
  QuantizeColorRGB(&a3); /*0x544ecd*/
  v4 = 1; /*0x544ee4*/
  if ( dword_87F6A8 <= 1 ) /*0x544eeb*/
  {
LABEL_14:
    v6 = 53; /*0x544f1c*/
    if ( a3 + a2 + a1 < 2000 ) /*0x544f2b*/
      v6 = 27; /*0x544f2d*/
    if ( __2_YAPAXI_Z(0x1B4u) ) /*0x544f37*/
      v7 = LightConvertClass::Constructor( /*0x544f79*/
             &unk_ABBED0,
             &FileSystem_TEMPERAT_PAL,
             g_DSurface_Primary,
             a1,
             a2,
             a3,
             dword_87F6A8 != 0,
             0,
             v6);
    else
      v7 = 0; /*0x544f7d*/
    if ( dword_87F6A8 < dword_87F6A0 /*0x544fb6*/
      || (byte_87F6A5 || !dword_87F6A0)
      && dword_87F6AC > 0
      && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_87F698 + 8))(
           &dword_87F698,
           dword_87F6A0 + dword_87F6AC,
           0) )
    {
      v8 = dword_87F6A8++; /*0x544fc3*/
      *((unsigned int *)dword_87F69C + v8) = v7; /*0x544fd2*/
    }
    return v7; /*0x544fd5*/
  }
  else
  {
    v5 = (char *)dword_87F69C + 4; /*0x544ef3*/
    while ( 1 ) /*0x544ef6*/
    {
      result = *(unsigned int *)v5; /*0x544ef6*/
      if ( *(unsigned int *)(*(unsigned int *)v5 + 408) == a1 && *(unsigned int *)(result + 412) == a2 && *(unsigned int *)(result + 416) == a3 ) /*0x544f0e*/
        break; /*0x544f0e*/
      ++v4; /*0x544f14*/
      v5 += 4; /*0x544f15*/
      if ( v4 >= dword_87F6A8 ) /*0x544f1a*/
        goto LABEL_14; /*0x544f1a*/
    }
  }
  return result; /*0x544e88*/

}
}
// 0x545150
namespace gamemd {
char * * LoadTerrainTypeClassTheatre(AbstractClass * a1, char a2)
{

  int v3; // ebp
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
  unsigned char *v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  signed int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebx
  unsigned int *v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // eax
  char v32; // al
  int v33; // ecx
  int v34; // eax
  int v35; // ebx
  int v36; // edx
  int v37; // ecx
  int v38; // ecx
  int v39; // edx
  int v40; // edx
  int v41; // eax
  int v42; // esi
  unsigned __int8 *v43; // ebx
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  unsigned int *v47; // ecx
  unsigned int v48; // eax
  unsigned int *v49; // eax
  int v50; // ecx
  int v51; // edx
  int j; // edi
  unsigned int *v53; // eax
  int v54; // ecx
  int v55; // edx
  int v56; // edx
  char v58; // [esp+11h] [ebp-9FFh]
  char v60; // [esp+13h] [ebp-9FDh]
  char v61; // [esp+14h] [ebp-9FCh]
  char v62; // [esp+15h] [ebp-9FBh]
  char v63; // [esp+16h] [ebp-9FAh]
  char v64; // [esp+17h] [ebp-9F9h]
  int v65; // [esp+18h] [ebp-9F8h]
  char Bool_Overwrite; // [esp+1Ch] [ebp-9F4h]
  bool v67; // [esp+1Dh] [ebp-9F3h]
  __int16 v68; // [esp+1Eh] [ebp-9F2h] BYREF
  int v69; // [esp+20h] [ebp-9F0h]
  int v70; // [esp+24h] [ebp-9ECh]
  int v71; // [esp+28h] [ebp-9E8h]
  int v72; // [esp+2Ch] [ebp-9E4h]
  int v73; // [esp+30h] [ebp-9E0h]
  unsigned int *v74; // [esp+34h] [ebp-9DCh]
  void *v75[4]; // [esp+38h] [ebp-9D8h] BYREF
  unsigned int v76[3]; // [esp+48h] [ebp-9C8h] BYREF
  unsigned int v77[6]; // [esp+54h] [ebp-9BCh] BYREF
  char v78; // [esp+6Ch] [ebp-9A4h]
  int v79; // [esp+70h] [ebp-9A0h]
  int v80; // [esp+74h] [ebp-99Ch]
  char v81; // [esp+78h] [ebp-998h]
  DWORD Ticks; // [esp+90h] [ebp-980h]
  int v83; // [esp+94h] [ebp-97Ch]
  int v84; // [esp+98h] [ebp-978h]
  int v85; // [esp+9Ch] [ebp-974h]
  int v86; // [esp+A0h] [ebp-970h]
  int v87; // [esp+A4h] [ebp-96Ch]
  int v88; // [esp+A8h] [ebp-968h]
  int v89; // [esp+ACh] [ebp-964h]
  int v90; // [esp+B0h] [ebp-960h]
  int v91; // [esp+B4h] [ebp-95Ch]
  int v92; // [esp+B8h] [ebp-958h]
  int v93; // [esp+BCh] [ebp-954h]
  int v94; // [esp+C0h] [ebp-950h]
  int v95; // [esp+C4h] [ebp-94Ch]
  int v96; // [esp+C8h] [ebp-948h]
  int v97; // [esp+CCh] [ebp-944h]
  int v98; // [esp+D0h] [ebp-940h]
  int v99; // [esp+D4h] [ebp-93Ch]
  int v100; // [esp+D8h] [ebp-938h]
  int v101; // [esp+DCh] [ebp-934h]
  int v102; // [esp+E0h] [ebp-930h]
  int v103; // [esp+E4h] [ebp-92Ch]
  int v104; // [esp+E8h] [ebp-928h]
  int v105; // [esp+ECh] [ebp-924h]
  int v106; // [esp+F0h] [ebp-920h]
  int v107; // [esp+F4h] [ebp-91Ch]
  int v108; // [esp+F8h] [ebp-918h]
  int v109; // [esp+FCh] [ebp-914h]
  int v110; // [esp+100h] [ebp-910h]
  int v111; // [esp+104h] [ebp-90Ch]
  int v112; // [esp+108h] [ebp-908h]
  int v113; // [esp+10Ch] [ebp-904h]
  int v114; // [esp+110h] [ebp-900h]
  int v115; // [esp+114h] [ebp-8FCh]
  int v116; // [esp+118h] [ebp-8F8h]
  int v117; // [esp+11Ch] [ebp-8F4h]
  int v118; // [esp+120h] [ebp-8F0h]
  int v119; // [esp+124h] [ebp-8ECh]
  int v120; // [esp+128h] [ebp-8E8h]
  int v121; // [esp+12Ch] [ebp-8E4h]
  int v122; // [esp+130h] [ebp-8E0h]
  int v123; // [esp+134h] [ebp-8DCh]
  int v124; // [esp+138h] [ebp-8D8h]
  int v125; // [esp+13Ch] [ebp-8D4h]
  int v126; // [esp+140h] [ebp-8D0h]
  int v127; // [esp+144h] [ebp-8CCh]
  int v128; // [esp+148h] [ebp-8C8h]
  int v129; // [esp+14Ch] [ebp-8C4h]
  int v130; // [esp+150h] [ebp-8C0h]
  int v131; // [esp+154h] [ebp-8BCh]
  int v132; // [esp+158h] [ebp-8B8h]
  int v133; // [esp+15Ch] [ebp-8B4h]
  int Int_Overwrite; // [esp+160h] [ebp-8B0h]
  int v135; // [esp+164h] [ebp-8ACh]
  int v136; // [esp+168h] [ebp-8A8h]
  int v137; // [esp+16Ch] [ebp-8A4h]
  int v138; // [esp+170h] [ebp-8A0h]
  int v139; // [esp+174h] [ebp-89Ch]
  DWORD v140; // [esp+178h] [ebp-898h]
  int v141; // [esp+17Ch] [ebp-894h]
  int v142; // [esp+180h] [ebp-890h]
  int v143; // [esp+184h] [ebp-88Ch]
  char v144[32]; // [esp+188h] [ebp-888h] BYREF
  char v145[12]; // [esp+1A8h] [ebp-868h] BYREF
  char v146[64]; // [esp+1B4h] [ebp-85Ch] BYREF
  char Buffer[5]; // [esp+1F4h] [ebp-81Ch] BYREF
  char v148; // [esp+1F9h] [ebp-817h]
  int v149[22]; // [esp+214h] [ebp-7FCh] BYREF
  char v150[12]; // [esp+26Ch] [ebp-7A4h] BYREF
  int v151; // [esp+278h] [ebp-798h]
  char v152[64]; // [esp+280h] [ebp-790h] BYREF
  char Destination[48]; // [esp+2C0h] [ebp-750h] BYREF
  char v154; // [esp+2F0h] [ebp-720h]
  char v155[48]; // [esp+2F4h] [ebp-71Ch] BYREF
  char v156; // [esp+324h] [ebp-6ECh]
  char v157[20]; // [esp+328h] [ebp-6E8h] BYREF
  int v158[22]; // [esp+33Ch] [ebp-6D4h] BYREF
  char v159[12]; // [esp+394h] [ebp-67Ch] BYREF
  int v160; // [esp+3A0h] [ebp-670h]
  unsigned int v161[22]; // [esp+3A8h] [ebp-668h] BYREF
  char v162[12]; // [esp+400h] [ebp-610h] BYREF
  int v163; // [esp+40Ch] [ebp-604h]
  char Filename[128]; // [esp+414h] [ebp-5FCh] BYREF
  unsigned int v165[22]; // [esp+494h] [ebp-57Ch] BYREF
  char v166[12]; // [esp+4ECh] [ebp-524h] BYREF
  int v167; // [esp+4F8h] [ebp-518h]
  unsigned int v168[22]; // [esp+500h] [ebp-510h] BYREF
  char v169[12]; // [esp+558h] [ebp-4B8h] BYREF
  int v170; // [esp+564h] [ebp-4ACh]
  unsigned int v171[22]; // [esp+56Ch] [ebp-4A4h] BYREF
  char v172[12]; // [esp+5C4h] [ebp-44Ch] BYREF
  int v173; // [esp+5D0h] [ebp-440h]
  unsigned int v174[22]; // [esp+5D8h] [ebp-438h] BYREF
  char v175[12]; // [esp+630h] [ebp-3E0h] BYREF
  int v176; // [esp+63Ch] [ebp-3D4h]
  unsigned int v177[22]; // [esp+644h] [ebp-3CCh] BYREF
  char v178[12]; // [esp+69Ch] [ebp-374h] BYREF
  int v179; // [esp+6A8h] [ebp-368h]
  char v180[32]; // [esp+6B0h] [ebp-360h] BYREF
  char Source[128]; // [esp+6D0h] [ebp-340h] BYREF
  char v182[512]; // [esp+750h] [ebp-2C0h] BYREF
  char v183[64]; // [esp+950h] [ebp-C0h] BYREF
  char v184[128]; // [esp+990h] [ebp-80h] BYREF

  v3 = 0; /*0x54515c*/
  v91 = a1; /*0x545166*/
  v75[1] = 0; /*0x54516d*/
  v75[2] = 0; /*0x545171*/
  GenericNode::Constructor(v76); /*0x545175*/
  GenericNode::Constructor(v77); /*0x54517e*/
  LinkedList::Prepend(v76, (int)v77); /*0x545194*/
  v75[3] = &g_ptr_7E1AFC; /*0x5451a0*/
  memset(&v77[3], 0, 12); /*0x5451a8*/
  v78 = 0; /*0x5451b4*/
  v79 = 0; /*0x5451b9*/
  v80 = 0; /*0x5451bd*/
  v81 = 0; /*0x5451c1*/
  v75[0] = &CCINIClass_Vtable; /*0x5451c6*/
  Ticks = Timer::GetTicks(); /*0x5451d5*/
  dword_AA102C[0] = 0; /*0x5451dc*/
  dword_AA1030 = 0; /*0x5451e7*/
  v84 = 0; /*0x5451ed*/
  dword_AA1034 = 0; /*0x5451f4*/
  v89 = 0; /*0x5451fa*/
  dword_AA1038 = 0; /*0x545201*/
  dword_AA103C = 0; /*0x545207*/
  ((CCFileClass *)v158)->Construct(aCShadowShp); /*0x545214*/
  if ( lpBuffer ) /*0x545220*/
  {
    __3_YAXPAX_Z(lpBuffer); /*0x545223*/
    lpBuffer = 0; /*0x54522b*/
  }
  Size = CCFileClass::GetSize(v158); /*0x545238*/
  lpBuffer = __2_YAPAXI_Z(Size); /*0x54524d*/
  v5 = CCFileClass::GetSize(v158); /*0x545252*/
  CCFileClass::Read(v158, lpBuffer, v5); /*0x545266*/
  if ( g_X99Vec_AA1078.Count ) /*0x545272*/
  {
    for ( i = g_X99Vec_AA1078.Count - 1; i >= 0; --i ) /*0x545279*/
    {
      __3_YAXPAX_Z(*((void **)g_X99Vec_AA1078.Items + i)); /*0x545284*/
      if ( i < g_X99Vec_AA1078.Count ) /*0x545294*/
      {
        v7 = i; /*0x545297*/
        if ( i < --g_X99Vec_AA1078.Count ) /*0x5452a1*/
        {
          do /*0x5452b9*/
          {
            ++v7; /*0x5452a9*/
            *((unsigned int *)g_X99Vec_AA1078.Items + v7 - 1) = *((unsigned int *)g_X99Vec_AA1078.Items + v7); /*0x5452ad*/
          }
          while ( v7 < g_X99Vec_AA1078.Count ); /*0x5452b9*/
        }
      }
    }
  }
  v8 = &dword_AA1060; /*0x5452be*/
  do /*0x5452dd*/
  {
    if ( *v8 ) /*0x5452c3*/
    {
      __3_YAXPAX_Z(*v8); /*0x5452ca*/
      *v8 = 0; /*0x5452d2*/
    }
    ++v8; /*0x5452d4*/
  }
  while ( (int)v8 < (int)&dbl_AA1070 ); /*0x5452dd*/
  v9 = 112 * a1; /*0x5452e8*/
  v113 = 112 * a1; /*0x5452eb*/
  sprintf(Buffer, "SLOP01Z.%s", (const char *)&off_7E1BC6 + 112 * a1); /*0x545306*/
  ((CCFileClass *)v149)->Construct(Buffer); /*0x54531d*/
  v10 = CCFileClass::GetSize(v149); /*0x545329*/
  dword_AA1060 = __2_YAPAXI_Z(v10); /*0x54533e*/
  v11 = CCFileClass::GetSize(v149); /*0x545343*/
  CCFileClass::Read(v149, dword_AA1060, v11); /*0x545357*/
  v148 = 50; /*0x54536b*/
  ((FileClass *)v149)->SetFileName(Buffer); /*0x545373*/
  v12 = CCFileClass::GetSize(v149); /*0x54537f*/
  dword_AA1064 = __2_YAPAXI_Z(v12); /*0x545394*/
  v13 = CCFileClass::GetSize(v149); /*0x545399*/
  CCFileClass::Read(v149, dword_AA1064, v13); /*0x5453ad*/
  v148 = 51; /*0x5453c1*/
  ((FileClass *)v149)->SetFileName(Buffer); /*0x5453c9*/
  v14 = CCFileClass::GetSize(v149); /*0x5453d5*/
  dword_AA1068 = __2_YAPAXI_Z(v14); /*0x5453ea*/
  v15 = CCFileClass::GetSize(v149); /*0x5453ef*/
  CCFileClass::Read(v149, dword_AA1068, v15); /*0x545402*/
  v148 = 52; /*0x54540e*/
  ((FileClass *)v149)->SetFileName(Buffer); /*0x54541e*/
  v16 = CCFileClass::GetSize(v149); /*0x54542a*/
  dword_AA106C = __2_YAPAXI_Z(v16); /*0x54543f*/
  v17 = CCFileClass::GetSize(v149); /*0x545444*/
  CCFileClass::Read(v149, dword_AA106C, v17); /*0x545458*/
  while ( MEMORY[0xA8ED38] ) /*0x545463*/
  {
    if ( *(unsigned int *)MEMORY[0xA8ED2C] ) /*0x54546a*/
      (*(void (**)(unsigned int, int))(**(unsigned int **)MEMORY[0xA8ED2C] + 32))(*(unsigned int *)MEMORY[0xA8ED2C], 1); /*0x545474*/
  }
  sprintf(v180, "ISO%s.PAL", (const char *)&off_7E1BC6 + v9); /*0x545493*/
  ((CCFileClass *)v161)->Construct(v180); /*0x5454aa*/
  if ( CCFileClass::Open(v161, 0) ) /*0x5454b7*/
  {
    CCFileClass::Read(v161, &unk_ABBED0, 768); /*0x5454d1*/
    v18 = &unk_ABBED0; /*0x5454d6*/
    v19 = 768; /*0x5454db*/
    do /*0x5454e9*/
    {
      *v18++ *= 4; /*0x5454e5*/
      --v19; /*0x5454e8*/
    }
    while ( v19 ); /*0x5454e9*/
  }
  TheatreClass::InitView(); /*0x5454eb*/
  sprintf(v157, "%sMD.INI", &aTemperat[v9]); /*0x545504*/
  ((CCFileClass *)v168)->Construct(v157); /*0x54551b*/
  CCINIClass::Load(v75, (int)v168, 0, 0); /*0x545530*/
  v20 = 0; /*0x545538*/
  v21 = 0; /*0x54553b*/
  v90 = 0; /*0x54554b*/
  v70 = 0; /*0x545552*/
  v72 = 0; /*0x545556*/
  Int_Overwrite = INIClass::ReadInt_Overwrite(g_INI_Key_General, aRampbase, -1); /*0x54556e*/
  v138 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aRampsmooth, -1); /*0x545589*/
  v129 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aMmrampbase, -1); /*0x5455a4*/
  v94 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aCleartile, -1); /*0x5455bf*/
  v115 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aRoughtile, -1); /*0x5455da*/
  v96 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aSandtile, -1); /*0x5455f5*/
  v116 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aGreentile, -1); /*0x545610*/
  v98 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aPavetile, -1); /*0x54562b*/
  v118 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aMiscpavetile, -1); /*0x54563d*/
  v100 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aCleartoroughla, -1); /*0x545661*/
  v120 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aCleartosandlat, -1); /*0x54567c*/
  v102 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aCleartogreenla, -1); /*0x545697*/
  v122 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aCleartopavelat, -1); /*0x5456b2*/
  v104 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aHeightbase, -1); /*0x5456cd*/
  v124 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBlacktile, -1); /*0x5456e8*/
  v106 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgeset, -1); /*0x545703*/
  v126 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWoodbridgeset, -1); /*0x54571e*/
  v108 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aCliffset, -1); /*0x545739*/
  v128 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aShorepieces, -1); /*0x545754*/
  v110 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWaterset, -1); /*0x54576f*/
  v130 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aSlopesetpieces, -1); /*0x54578a*/
  v112 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aSlopesetpieces_0, -1); /*0x5457a5*/
  v132 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aMonorailslopes, -1); /*0x5457b1*/
  v136 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aTunnels, -1); /*0x5457db*/
  v117 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aTracktunnels, -1); /*0x5457f6*/
  v114 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aDirttunnels, -1); /*0x545811*/
  v92 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aDirttracktunne, -1); /*0x54582c*/
  v139 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWaterfalleast, -1); /*0x545847*/
  v119 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWaterfallwest, -1); /*0x545862*/
  v131 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWaterfallnorth, -1); /*0x54587d*/
  v121 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWaterfallsouth, -1); /*0x545898*/
  v137 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aClifframps, -1); /*0x5458b3*/
  v123 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aPavedroads, -1); /*0x5458ce*/
  v133 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aPavedroadends, -1); /*0x5458e9*/
  v125 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aMedians, -1); /*0x545904*/
  v143 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aRoughground, -1); /*0x545916*/
  v127 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aDirtroadjuncti, -1); /*0x54593a*/
  v135 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aDirtroadcurve, -1); /*0x545955*/
  v93 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aDirtroadstraig, -1); /*0x545971*/
  v95 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aDestroyablecli, -2); /*0x54598c*/
  v99 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWatercaves, -1); /*0x5459a7*/
  v97 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWatercliffs, -1); /*0x5459c2*/
  v101 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aPavedroadslope, -1); /*0x5459dd*/
  v103 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aDirtroadslopes, -1); /*0x5459f8*/
  v105 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aRocks, -1); /*0x545a13*/
  v22 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aWaterbridge, -1); /*0x545a1a*/
  g_CellTileLookup = -1; /*0x545a1f*/
  dword_AA1058 = -1; /*0x545a25*/
  v107 = v22; /*0x545a2b*/
  dword_AA109C = -1; /*0x545a32*/
  dword_AA10B0 = -1; /*0x545a38*/
  dword_ABC2B8 = -1; /*0x545a3e*/
  dword_ABB104 = -1; /*0x545a44*/
  dword_AA0E18 = -1; /*0x545a4a*/
  dword_ABC2B0 = -1; /*0x545a50*/
  dword_AA10A4 = -1; /*0x545a56*/
  dword_AA1134 = -1; /*0x545a5c*/
  dword_AA0E24 = -1; /*0x545a62*/
  dword_AA0748 = -1; /*0x545a68*/
  dword_AA10A8 = -1; /*0x545a6e*/
  dword_AA0744 = -1; /*0x545a74*/
  dword_ABC2CC = -1; /*0x545a7a*/
  g_Cell_BuildabilityLUT = -1; /*0x545a80*/
  g_TerrainBridgeIndex = -1; /*0x545a86*/
  g_TerrainBuildConfig = -1; /*0x545a8c*/
  dword_ABAD28 = -1; /*0x545a92*/
  g_CellPassabilityLUT = -1; /*0x545a98*/
  g_TerrainTypeTable2 = -1; /*0x545a9e*/
  dword_AA1098 = -1; /*0x545aa4*/
  dword_AA1024 = -1; /*0x545aaa*/
  dword_AA1054 = -1; /*0x545ab0*/
  dword_ABB108 = -1; /*0x545ac5*/
  dword_AA10B4 = -1; /*0x545acb*/
  dword_ABAD2C = -1; /*0x545ad1*/
  dword_AA073C = -1; /*0x545ad7*/
  dword_ABB110 = -1; /*0x545add*/
  dword_AA10A0 = -1; /*0x545ae3*/
  dword_AA1050 = -1; /*0x545ae9*/
  dword_ABBEBC = -1; /*0x545aef*/
  g_CellTileTypeCache = -1; /*0x545af5*/
  dword_ABBEC4 = -1; /*0x545afb*/
  dword_AA0E20 = -1; /*0x545b01*/
  dword_AA0E1C = -1; /*0x545b07*/
  dword_ABAD20 = -1; /*0x545b0d*/
  dword_ABC1D4 = -1; /*0x545b13*/
  dword_AA10AC = -1; /*0x545b19*/
  dword_ABC2C8 = -2; /*0x545b1f*/
  dword_ABAD24 = -1; /*0x545b29*/
  dword_AA101C = -1; /*0x545b2f*/
  dword_AA1094 = -1; /*0x545b35*/
  dword_ABBEC0 = -1; /*0x545b3b*/
  dword_ABB10C = -1; /*0x545b41*/
  dword_AA1090 = -1; /*0x545b47*/
  dword_ABC2B4 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgetopleft1, -1); /*0x545b56*/
  dword_AA1130 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgetopleft2, -1); /*0x545b6f*/
  dword_ABC1E8 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgebottomri, -1); /*0x545b88*/
  dword_AA0E38 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgebottomri_0, -1); /*0x545ba1*/
  dword_AA1548 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgetopright, -1); /*0x545bba*/
  dword_AA0740 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgetopright_0, -1); /*0x545bd3*/
  dword_ABC1D0 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgebottomle, -1); /*0x545bec*/
  dword_AA1540 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgebottomle_0, -1); /*0x545c05*/
  g_TerrainSoundTable2 = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgemiddle1, -1); /*0x545c1e*/
  g_TerrainSoundConfig = INIClass::ReadInt_Overwrite(g_INI_Key_General, aBridgemiddle2, -1); /*0x545c3a*/
  dword_ABC558 = 0; /*0x545c3f*/
  Ticks = Timer::GetTicks(); /*0x545c4a*/
  v23 = 4; /*0x545c58*/
  v83 = v141; /*0x545c5d*/
  v84 = 4; /*0x545c64*/
  while ( 1 ) /*0x545c72*/
  {
    v69 = v23; /*0x545c72*/
    if ( Ticks == -1 ) /*0x545c78*/
      goto LABEL_24; /*0x545c78*/
    v24 = Timer::GetTicks() - Ticks; /*0x545c91*/
    if ( v24 < v69 ) /*0x545c95*/
    {
      v23 = v69 - v24; /*0x545c97*/
LABEL_24:
      if ( v23 ) /*0x545c9b*/
        goto LABEL_26; /*0x545c9b*/
    }
    Event::Dispatch(); /*0x545c9d*/
    v140 = Timer::GetTicks(); /*0x545cba*/
    v142 = 4; /*0x545cc1*/
    Ticks = v140; /*0x545cc8*/
    v83 = v141; /*0x545ccf*/
    v84 = 4; /*0x545cd6*/
LABEL_26:
    v25 = dword_ABC558; /*0x545cdd*/
    dword_AA1140[dword_ABC558] = v21; /*0x545ce2*/
    dword_ABC558 = v25 + 1; /*0x545cea*/
    if ( v20 == Int_Overwrite ) /*0x545cf8*/
      g_CellTileLookup = v21; /*0x545cfa*/
    if ( v20 == v138 ) /*0x545d07*/
      dword_AA1058 = v21; /*0x545d09*/
    if ( v20 == v129 ) /*0x545d16*/
      dword_AA109C = v21; /*0x545d18*/
    if ( v20 == v94 ) /*0x545d25*/
      dword_AA10B0 = v21; /*0x545d27*/
    if ( v20 == v115 ) /*0x545d34*/
      dword_ABC2B8 = v21; /*0x545d36*/
    if ( v20 == v96 ) /*0x545d43*/
      dword_ABB104 = v21; /*0x545d45*/
    if ( v20 == v116 ) /*0x545d52*/
      dword_AA0E18 = v21; /*0x545d54*/
    if ( v20 == v98 ) /*0x545d61*/
      dword_ABC2B0 = v21; /*0x545d63*/
    if ( v20 == v118 ) /*0x545d70*/
      dword_AA10A4 = v21; /*0x545d72*/
    if ( v20 == v100 ) /*0x545d7f*/
      dword_AA1134 = v21; /*0x545d81*/
    if ( v20 == v120 ) /*0x545d8e*/
      dword_AA0E24 = v21; /*0x545d90*/
    if ( v20 == v102 ) /*0x545d9d*/
      dword_AA0748 = v21; /*0x545d9f*/
    if ( v20 == v122 ) /*0x545dac*/
      dword_AA10A8 = v21; /*0x545dae*/
    if ( v20 == v104 ) /*0x545dbb*/
      dword_AA0744 = v21; /*0x545dbd*/
    if ( v20 == v124 ) /*0x545dca*/
      dword_ABC2CC = v21; /*0x545dcc*/
    if ( v20 == v106 ) /*0x545dd9*/
      g_Cell_BuildabilityLUT = v21; /*0x545ddb*/
    if ( v20 == v126 ) /*0x545de8*/
      g_TerrainBridgeIndex = v21; /*0x545dea*/
    if ( v20 == v108 ) /*0x545df7*/
      g_TerrainBuildConfig = v21; /*0x545df9*/
    if ( v20 == v128 ) /*0x545e06*/
      dword_ABAD28 = v21; /*0x545e08*/
    if ( v20 == v110 ) /*0x545e15*/
      g_CellPassabilityLUT = v21; /*0x545e17*/
    if ( v20 == v130 ) /*0x545e24*/
      g_TerrainTypeTable2 = v21; /*0x545e26*/
    if ( v20 == v112 ) /*0x545e33*/
      dword_AA1098 = v21; /*0x545e35*/
    if ( v20 == v132 ) /*0x545e42*/
      dword_AA1024 = v21; /*0x545e44*/
    if ( v20 == v114 ) /*0x545e51*/
      dword_AA10B4 = v21; /*0x545e53*/
    if ( v20 == v92 ) /*0x545e60*/
      dword_ABAD2C = v21; /*0x545e62*/
    if ( v20 == v136 ) /*0x545e6f*/
      dword_AA1054 = v21; /*0x545e71*/
    if ( v20 == v117 ) /*0x545e7e*/
      dword_ABB108 = v21; /*0x545e80*/
    if ( v20 == v139 ) /*0x545e8d*/
      dword_AA073C = v21; /*0x545e8f*/
    if ( v20 == v119 ) /*0x545e9c*/
      dword_ABB110 = v21; /*0x545e9e*/
    if ( v20 == v131 ) /*0x545eab*/
      dword_AA10A0 = v21; /*0x545ead*/
    if ( v20 == v121 ) /*0x545eba*/
      dword_AA1050 = v21; /*0x545ebc*/
    if ( v20 == v137 ) /*0x545ec9*/
      dword_ABBEBC = v21; /*0x545ecb*/
    if ( v20 == v123 ) /*0x545ed8*/
      g_CellTileTypeCache = v21; /*0x545eda*/
    if ( v20 == v133 ) /*0x545ee7*/
      dword_ABBEC4 = v21; /*0x545ee9*/
    if ( v20 == v125 ) /*0x545ef6*/
      dword_AA0E20 = v21; /*0x545ef8*/
    if ( v20 == v143 ) /*0x545f05*/
      dword_AA0E1C = v21; /*0x545f07*/
    if ( v20 == v127 ) /*0x545f14*/
      dword_ABAD20 = v21; /*0x545f16*/
    if ( v20 == v135 ) /*0x545f23*/
      dword_ABC1D4 = v21; /*0x545f25*/
    if ( v20 == v93 ) /*0x545f32*/
      dword_AA10AC = v21; /*0x545f34*/
    if ( v20 == v95 ) /*0x545f41*/
      dword_ABC2C8 = v21; /*0x545f43*/
    if ( v20 == v97 ) /*0x545f50*/
      dword_AA101C = v21; /*0x545f52*/
    if ( v20 == v99 ) /*0x545f5f*/
      dword_ABAD24 = v21; /*0x545f61*/
    if ( v20 == v101 ) /*0x545f6e*/
      dword_AA1094 = v21; /*0x545f70*/
    if ( v20 == v103 ) /*0x545f7d*/
      dword_ABBEC0 = v21; /*0x545f7f*/
    if ( v20 == v105 ) /*0x545f8c*/
      dword_ABB10C = v21; /*0x545f8e*/
    if ( v20 == v107 ) /*0x545f9b*/
      dword_AA1090 = v21; /*0x545f9d*/
    sprintf(v146, "TileSet%04d", v20); /*0x545fb1*/
    INIClass::ResetSection(v75); /*0x545fbd*/
    v71 = INIClass::ReadInt_Overwrite(v146, aTilesinset, -1); /*0x545fdb*/
    if ( v71 == -1 ) /*0x545fdf*/
      break; /*0x545fdf*/
    v26 = INIClass::ReadInt_Overwrite(v146, aLasttilesinset, -1); /*0x545ff7*/
    v27 = v26; /*0x545ffc*/
    if ( v26 == -1 || v26 == v71 ) /*0x54600a*/
    {
      v31 = v71 + v72; /*0x54609a*/
    }
    else
    {
      v28 = __2_YAPAXI_Z(8u); /*0x546012*/
      v29 = v71 - v27; /*0x546021*/
      v74 = v28; /*0x546023*/
      v73 = v27 + v72; /*0x546027*/
      *v28 = v27 + v72; /*0x54602b*/
      v28[1] = v29; /*0x54602d*/
      if ( g_X99Vec_AA1078.Count < g_X99Vec_AA1078.Capacity /*0x546069*/
        || (g_X99Vec_AA1078.IsAllocated || !g_X99Vec_AA1078.Capacity)
        && g_X99Vec_AA1078.CapacityIncrement > 0
        && (*(unsigned __int8 (**)(int *, int, unsigned int))(g_X99Vec_AA1078.ptr_0 + 8))(
             &g_X99Vec_AA1078.ptr_0,
             g_X99Vec_AA1078.CapacityIncrement + g_X99Vec_AA1078.Capacity,
             0) )
      {
        v30 = g_X99Vec_AA1078.Count++; /*0x54607a*/
        *((unsigned int *)g_X99Vec_AA1078.Items + v30) = v74; /*0x546089*/
      }
      v31 = v73; /*0x54608c*/
    }
    v72 = v31; /*0x5460a5*/
    ((INIClass *)(/*0x5460c0*/ (unsigned __int8 ***)v75))->GetString((unsigned __int8 *)v146, (unsigned __int8 *)aSetname, g_Str_No_Name, v152, 64);
    ((INIClass *)(/*0x5460e5*/ (unsigned __int8 ***)v75))->GetString((unsigned __int8 *)v146, (unsigned __int8 *)aFilename, aTile, v183, 64);
    v73 = INIClass::ReadInt_Overwrite(v146, aMarblemadness, 0xFFFF); /*0x54611b*/
    v86 = INIClass::ReadInt_Overwrite(v146, aNonmarblemadne, 0xFFFF); /*0x546138*/
    Bool_Overwrite = INIClass::ReadBool_Overwrite(v146, aMorphable, 0); /*0x546148*/
    v62 = INIClass::ReadBool_Overwrite(v146, aAllowtoplace, 1); /*0x546173*/
    v64 = INIClass::ReadBool_Overwrite(v146, aAllowburrowing, 1); /*0x54618e*/
    v60 = INIClass::ReadBool_Overwrite(v146, aAllowtiberium, 0); /*0x54619b*/
    v63 = INIClass::ReadBool_Overwrite(v146, aRequiredforrmg, 0); /*0x5461c4*/
    v109 = INIClass::ReadInt_Overwrite(v146, aTosnowtheater, -1); /*0x5461de*/
    v111 = INIClass::ReadInt_Overwrite(v146, aTotemperatethe, -1); /*0x5461ef*/
    v32 = INIClass::ReadBool_Overwrite(v146, aShadowcaster, 0); /*0x546204*/
    v61 = v32; /*0x54620b*/
    if ( v32 ) /*0x54620f*/
    {
      v33 = v89; /*0x546211*/
      dword_AA102C[v89] = v70; /*0x54621c*/
      v89 = v33 + 1; /*0x546224*/
    }
    v88 = 0; /*0x54622d*/
    if ( v32 ) /*0x546234*/
      v88 = INIClass::ReadInt_Overwrite(v146, aShadowtiles, 0); /*0x54624d*/
    v34 = INIClass::BinarySearchSection((int)v75, (unsigned __int8 *)v152); /*0x546260*/
    v69 = 0; /*0x54626b*/
    v67 = v34 != 0; /*0x54626f*/
    if ( v71 > 0 ) /*0x546276*/
    {
      while ( 1 ) /*0x546283*/
      {
        v65 = 0; /*0x546283*/
        v74 = 0; /*0x546287*/
        v85 = 0; /*0x54628b*/
        v87 = v70 - 1; /*0x546292*/
        do /*0x546299*/
        {
          if ( v65 ) /*0x54629f*/
            v68 = (unsigned __int8)(v65 + 96); /*0x5462a8*/
          else
            (v68) = ((v68) & ~0xFF) | ((0) & 0xFF); /*0x5462ae*/
          v35 = v69 + 1; /*0x5462be*/
          sprintf(v145, "%02d", v69 + 1); /*0x5462c8*/
          strcat(v145, (const char *)&v68); /*0x5462f5*/
          strcpy(Filename, v183); /*0x546325*/
          strcat(Filename, v145); /*0x546351*/
          sprintf(Source, "%.28s %02d", v152, v35); /*0x54636f*/
          if ( !v65 ) /*0x54637d*/
          {
            if ( __2_YAPAXI_Z(0x30Cu) ) /*0x546388*/
            {
              v36 = v70++; /*0x54639f*/
              ++v87; /*0x5463b8*/
              v3 = TerrainTypeClass::Construct(v36, -65, 0, Filename, 0); /*0x5463c4*/
            }
            else
            {
              v3 = 0; /*0x5463c8*/
            }
            if ( Source ) /*0x5463d3*/
            {
              strncpy(Destination, Source, 0x30u); /*0x5463f0*/
              v154 = 0; /*0x5463f8*/
            }
            else
            {
              Destination[0] = (unsigned __int8)Source; /*0x5463d5*/
            }
            if ( Destination != (char *)(v3 + 100) ) /*0x54640c*/
            {
              memcpy((void *)(v3 + 100), Destination, 0x30u); /*0x54641c*/
              *(unsigned char *)(v3 + 148) = v154; /*0x54641e*/
            }
            v37 = v86; /*0x546423*/
            *(unsigned int *)(v3 + 664) = v73; /*0x54642e*/
            *(unsigned int *)(v3 + 668) = v37; /*0x546438*/
            *(unsigned char *)(v3 + 738) = v62; /*0x546442*/
            *(unsigned char *)(v3 + 736) = Bool_Overwrite; /*0x54644c*/
            *(unsigned char *)(v3 + 739) = v63; /*0x546456*/
            *(unsigned char *)(v3 + 773) = v64; /*0x546460*/
            v38 = v109; /*0x546466*/
            *(unsigned char *)(v3 + 774) = v60; /*0x54646d*/
            v39 = v111; /*0x546473*/
            *(unsigned int *)(v3 + 164) = 0; /*0x54647a*/
            *(unsigned char *)(v3 + 168) = 0; /*0x546486*/
            *(unsigned int *)(v3 + 704) = v38; /*0x54648d*/
            *(unsigned int *)(v3 + 708) = v39; /*0x546493*/
            if ( v61 && v88 ) /*0x5464a4*/
              *(unsigned char *)(v3 + 737) = v61; /*0x5464a6*/
            if ( a2 ) /*0x5464b2*/
              *(unsigned char *)(v3 + 756) = 1; /*0x5464b4*/
            v40 = *(unsigned int *)(v3 + 676); /*0x5464c0*/
            *(unsigned int *)(v3 + 672) = dword_AA113C[dword_ABC558]; /*0x5464cd*/
            (*(void (**)(int))(v40 + 12))(v3 + 676); /*0x5464d9*/
            if ( v67 ) /*0x5464e2*/
            {
              sprintf(v144, "Tile%02dAnim", v35); /*0x5464f6*/
              if ( ((INIClass *)(/*0x546524*/ (unsigned __int8 ***)v75))->GetString((unsigned __int8 *)v152, (unsigned __int8 *)v144, &g_INI_DefaultBuffer, v184, 128) )
              {
                v41 = AnimTypeClass::FindOrCreate(v184); /*0x546538*/
                if ( v41 ) /*0x54653f*/
                {
                  *(unsigned int *)(v3 + 712) = (*(int (**)(int))(*(unsigned int *)v41 + 64))(v41); /*0x54654c*/
                  sprintf(v144, "Tile%02dXOffset", v35); /*0x546560*/
                  *(unsigned int *)(v3 + 716) = INIClass::ReadInt_Overwrite(v152, v144, *(unsigned int *)(v3 + 716)); /*0x54658f*/
                  sprintf(v144, "Tile%02dYOffset", v35); /*0x54659c*/
                  *(unsigned int *)(v3 + 720) = INIClass::ReadInt_Overwrite(v152, v144, *(unsigned int *)(v3 + 720)); /*0x5465cb*/
                  sprintf(v144, "Tile%02dAttachesTo", v35); /*0x5465d8*/
                  *(unsigned int *)(v3 + 724) = INIClass::ReadInt_Overwrite(v152, v144, *(unsigned int *)(v3 + 724)); /*0x546600*/
                  sprintf(v144, "Tile%02dZAdjust", v35); /*0x546614*/
                  *(unsigned int *)(v3 + 728) = INIClass::ReadInt_Overwrite(v152, v144, *(unsigned int *)(v3 + 728)); /*0x54663c*/
                }
              }
            }
            v74 = (unsigned int *)v3; /*0x546642*/
            v85 = v3; /*0x546646*/
          }
          v42 = v113; /*0x54664d*/
          _makepath(v182, 0, 0, Filename, (const char *)&off_7E1BC6 + v113); /*0x54666f*/
          v43 = 0; /*0x54667b*/
          v58 = 0; /*0x54667d*/
          if ( a2 ) /*0x546684*/
          {
            CCFileClass::Construct(v171, v182); /*0x546699*/
            v58 = CCFileClass::Open(v171, 0); /*0x5466ad*/
            if ( v58 && !v65 ) /*0x5466b9*/
              strncpy((char *)(v3 + 757), v182, 0xEu); /*0x5466cc*/
            v171[0] = &g_ptr_7E16B0; /*0x5466db*/
            v173 = 0; /*0x5466e6*/
            Vector::Clear((int)v172); /*0x5466f1*/
            v171[0] = &off_7E1668; /*0x546702*/
            ((BufferIOFileClass *)v171)->Dtor(); /*0x546709*/
            if ( v58 ) /*0x546714*/
              goto LABEL_190; /*0x546714*/
          }
          else
          {
            v43 = (unsigned __int8 *)SearchMIXFile(v182, 0); /*0x54672a*/
            if ( v43 ) /*0x54672e*/
              goto LABEL_189; /*0x54672e*/
          }
          if ( !v86 ) /*0x546743*/
            goto LABEL_190; /*0x546743*/
          if ( v91 == -1 ) /*0x546751*/
            _makepath(v182, 0, 0, Filename, aMmt); /*0x546793*/
          else
            _makepath(v182, 0, 0, Filename, (const char *)&off_7E1BCA + v42); /*0x54676e*/
          if ( a2 ) /*0x5467a1*/
          {
            CCFileClass::Construct(v174, v182); /*0x5467b6*/
            v58 = CCFileClass::Open(v174, 0); /*0x5467ca*/
            if ( v58 && !v65 ) /*0x5467d4*/
              strncpy((char *)(v3 + 757), v182, 0xEu); /*0x5467e7*/
            v174[0] = &g_ptr_7E16B0; /*0x5467f6*/
            v176 = 0; /*0x546801*/
            Vector::Clear((int)v175); /*0x546808*/
            v174[0] = &off_7E1668; /*0x546814*/
            ((BufferIOFileClass *)v174)->Dtor(); /*0x54681b*/
            if ( v58 ) /*0x546826*/
              goto LABEL_190; /*0x546826*/
          }
          else
          {
            v43 = (unsigned __int8 *)SearchMIXFile(v182, 0); /*0x5468e0*/
            if ( v43 ) /*0x5468e4*/
              goto LABEL_189; /*0x5468e4*/
          }
          _makepath(v182, 0, 0, Filename, aTem); /*0x546843*/
          if ( a2 ) /*0x546851*/
          {
            CCFileClass::Construct(v165, v182); /*0x546866*/
            v58 = CCFileClass::Open(v165, 0); /*0x54687a*/
            if ( v58 && !v65 ) /*0x546884*/
              strncpy((char *)(v3 + 757), v182, 0xEu); /*0x546897*/
            v165[0] = &g_ptr_7E16B0; /*0x5468a6*/
            v167 = 0; /*0x5468b1*/
            Vector::Clear((int)v166); /*0x5468b8*/
            v165[0] = &off_7E1668; /*0x5468c4*/
            ((BufferIOFileClass *)v165)->Dtor(); /*0x5468cb*/
            if ( v58 ) /*0x54690e*/
              goto LABEL_190; /*0x54690e*/
          }
          else
          {
            v43 = (unsigned __int8 *)SearchMIXFile(v182, 0); /*0x5468fd*/
            if ( v43 ) /*0x546901*/
              goto LABEL_189; /*0x546901*/
          }
          _makepath(v182, 0, 0, Filename, aUrb); /*0x54692b*/
          if ( !a2 ) /*0x546939*/
          {
            v43 = (unsigned __int8 *)SearchMIXFile(v182, 0); /*0x5469c4*/
            if ( !v43 ) /*0x5469c8*/
              goto LABEL_190; /*0x5469c8*/
LABEL_189:
            v58 = 1; /*0x5469ca*/
            goto LABEL_190; /*0x5469ca*/
          }
          CCFileClass::Construct(v177, v182); /*0x54694a*/
          v58 = CCFileClass::Open(v177, 0); /*0x54695e*/
          if ( v58 && !v65 ) /*0x546968*/
            strncpy((char *)(v3 + 757), v182, 0xEu); /*0x54697b*/
          v177[0] = &g_ptr_7E16B0; /*0x54698a*/
          v179 = 0; /*0x546995*/
          Vector::Clear((int)v178); /*0x54699c*/
          v177[0] = &off_7E1668; /*0x5469a8*/
          ((BufferIOFileClass *)v177)->Dtor(); /*0x5469af*/
LABEL_190:
          if ( !v65 ) /*0x5469d5*/
            goto LABEL_207; /*0x5469d5*/
          if ( !v43 && !v58 ) /*0x5469e5*/
            break; /*0x5469e5*/
          if ( __2_YAPAXI_Z(0x30Cu) ) /*0x5469f0*/
            v3 = TerrainTypeClass::Construct(v87, -65, 0, Filename, 1); /*0x546a19*/
          else
            v3 = 0; /*0x546a1d*/
          if ( Source ) /*0x546a28*/
          {
            strncpy(v155, Source, 0x30u); /*0x546a45*/
            v156 = 0; /*0x546a4d*/
          }
          else
          {
            v155[0] = (unsigned __int8)Source; /*0x546a2a*/
          }
          if ( v155 != (char *)(v3 + 100) ) /*0x546a61*/
          {
            memcpy((void *)(v3 + 100), v155, 0x30u); /*0x546a71*/
            *(unsigned char *)(v3 + 148) = v156; /*0x546a73*/
          }
          v44 = v73; /*0x546a7b*/
          *(unsigned int *)(v3 + 668) = v86; /*0x546a83*/
          *(unsigned int *)(v3 + 664) = v44; /*0x546a8d*/
          *(unsigned char *)(v3 + 773) = v64; /*0x546a97*/
          *(unsigned char *)(v3 + 736) = Bool_Overwrite; /*0x546aa1*/
          *(unsigned char *)(v3 + 738) = v62; /*0x546aab*/
          *(unsigned char *)(v3 + 774) = v60; /*0x546ab5*/
          *(unsigned char *)(v3 + 739) = v63; /*0x546abd*/
          if ( a2 ) /*0x546ac3*/
          {
            *(unsigned char *)(v3 + 756) = 1; /*0x546ad6*/
            strncpy((char *)(v3 + 757), v182, 0xEu); /*0x546add*/
          }
          if ( v61 && v88 ) /*0x546af6*/
            *(unsigned char *)(v3 + 737) = v61; /*0x546af8*/
          v45 = v85; /*0x546b04*/
          *(unsigned int *)(v3 + 672) = dword_AA113C[dword_ABC558]; /*0x546b12*/
          v45->q2BC = v3; /*0x546b18*/
          (*(void (**)(int))(*(unsigned int *)(v3 + 676) + 12))(v3 + 676); /*0x546b2a*/
          v85 = v3; /*0x546b2f*/
          if ( !v43 ) /*0x546b36*/
          {
LABEL_215:
            if ( !v65 ) /*0x546b91*/
            {
              *(unsigned int *)(v3 + 740) = 0; /*0x546b93*/
              *(unsigned int *)(v3 + 744) = 0; /*0x546b9d*/
            }
            goto LABEL_217; /*0x546b9d*/
          }
LABEL_207:
          *(unsigned int *)(v3 + 164) = v43; /*0x546b38*/
          if ( !v43 ) /*0x546b40*/
            goto LABEL_215; /*0x546b40*/
          v46 = 0; /*0x546b48*/
          *(unsigned int *)(v3 + 740) = *v43; /*0x546b4a*/
          *(unsigned int *)(v3 + 744) = v43[4]; /*0x546b53*/
          if ( *(&v43->ptr_4) * *(unsigned int *)v43 > 0 ) /*0x546b61*/
          {
            v47 = &v43->uniqueId; /*0x546b63*/
            do /*0x546b80*/
            {
              v48 = *v47; /*0x546b66*/
              if ( *v47 && v48 < (unsigned int)v43 ) /*0x546b6e*/
                *v47 = (unsigned int)&v43[v48]; /*0x546b72*/
              ++v46; /*0x546b76*/
              ++v47; /*0x546b7b*/
            }
            while ( v46 < *(&v43->ptr_4) * *(unsigned int *)v43 ); /*0x546b80*/
          }
          TerrainClass::InitTheatre(v3); /*0x546b84*/
LABEL_217:
          ++v65; /*0x546ba7*/
        }
        while ( v43 || v58 ); /*0x546299*/
        if ( v65 > 1 ) /*0x546bcb*/
        {
          v49 = v74; /*0x546bcd*/
          if ( (char)v65 > 1 ) /*0x546bd4*/
          {
            v50 = (char)v65; /*0x546bd6*/
            v51 = (char)v65 - 1; /*0x546bd9*/
            do /*0x546bea*/
            {
              v49->u32_2F0 = v50; /*0x546bdc*/
              v49 = v49->q2BC; /*0x546be2*/
              --v50; /*0x546be8*/
              --v51; /*0x546be9*/
            }
            while ( v51 ); /*0x546bea*/
          }
        }
        if ( ++v69 >= v71 ) /*0x546bfb*/
        {
          v20 = v90; /*0x546c01*/
          break; /*0x546c01*/
        }
      }
    }
    v23 = v84; /*0x546c0b*/
    v21 = v70; /*0x546c12*/
    v90 = ++v20; /*0x546c17*/
  }
  for ( j = 0; j < MEMORY[0xA8ED38]; ++j ) /*0x546c2e*/
  {
    v53 = (unsigned int *)*((unsigned int *)MEMORY[0xA8ED2C] + j); /*0x546c36*/
    v54 = v53[165] - v53[168]; /*0x546c45*/
    v55 = v53[166]; /*0x546c47*/
    if ( v55 != 0xFFFF ) /*0x546c53*/
      v53[166] = v54 + dword_AA1140[v55]; /*0x546c5e*/
    v56 = v53[167]; /*0x546c64*/
    if ( v56 != 0xFFFF ) /*0x546c70*/
      v53[167] = v54 + dword_AA1140[v56]; /*0x546c7b*/
  }
  if ( v91 == 5 ) /*0x546c93*/
  {
    dword_ABAD28 = -1; /*0x546c95*/
    g_CellPassabilityLUT = -1; /*0x546c9b*/
    g_TerrainBuildConfig = -1; /*0x546ca1*/
    dword_AA101C = -1; /*0x546ca7*/
    dword_AA1090 = -1; /*0x546cad*/
    g_Cell_BuildabilityLUT = -1; /*0x546cb3*/
    g_TerrainBridgeIndex = -1; /*0x546cb9*/
  }
  v168[0] = &g_ptr_7E16B0; /*0x546ccb*/
  v170 = 0; /*0x546cd2*/
  Vector::Clear((int)v169); /*0x546cd9*/
  v168[0] = &off_7E1668; /*0x546cea*/
  ((BufferIOFileClass *)v168)->Dtor(); /*0x546cf1*/
  v161[0] = &g_ptr_7E16B0; /*0x546cfd*/
  v163 = 0; /*0x546d04*/
  Vector::Clear((int)v162); /*0x546d0b*/
  v161[0] = &off_7E1668; /*0x546d17*/
  ((BufferIOFileClass *)v161)->Dtor(); /*0x546d1e*/
  v149[0] = (int)&g_ptr_7E16B0; /*0x546d2a*/
  v151 = 0; /*0x546d31*/
  Vector::Clear((int)v150); /*0x546d38*/
  v149[0] = (int)&off_7E1668; /*0x546d44*/
  ((BufferIOFileClass *)v149)->Dtor(); /*0x546d4b*/
  v158[0] = (int)&g_ptr_7E16B0; /*0x546d57*/
  v160 = 0; /*0x546d5e*/
  Vector::Clear((int)v159); /*0x546d65*/
  v158[0] = (int)&off_7E1668; /*0x546d71*/
  ((BufferIOFileClass *)v158)->Dtor(); /*0x546d78*/
  return ((HashTable *)v75)->DestroyHashTableINIClass(); /*0x546d86*/

}

} // namespace gamemd

// 0x546DA0
namespace gamemd {
void MapClass_LoadIsometricTiles(char a1, char a2)
{

  int i; // edi
  int v4; // ecx
  int inited; // eax
  unsigned int *v6; // esi
  int v7; // ebp
  unsigned int *v8; // eax
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
    LayerClass::CellIteratorReset(&dword_87F7E8); /*0x546dd3*/
    for ( i = ((LayerClass *)&dword_87F7E8)->CellIteratorNext(); i; i = ((LayerClass *)&dword_87F7E8)->CellIteratorNext() ) /*0x546de6*/
    {
      v4 = *(unsigned int *)(i + 56); /*0x546dec*/
      inited = 0; /*0x546def*/
      if ( v4 == 0xFFFF || v4 >= MEMORY[0xA8ED38] ) /*0x546dff*/
      {
        v6 = (unsigned int *)*((unsigned int *)MEMORY[0xA8ED2C] + dword_AA10B0); /*0x546e6f*/
        inited = CellClass::InitRandomOffsets(i, dword_AA10B0, v6[188]); /*0x546e7c*/
      }
      else
      {
        v6 = (unsigned int *)*((unsigned int *)MEMORY[0xA8ED2C] + v4); /*0x546e07*/
        if ( (int)v6[188] > 1 ) /*0x546e11*/
        {
          (inited) = ((inited) & ~0xFF) | ((*(unsigned char *)(i + 282)) & 0xFF); /*0x546e13*/
          v7 = inited; /*0x546e1d*/
          v8 = (unsigned int *)(*(int (**)(unsigned int))(*v6 + 156))(*((unsigned int *)MEMORY[0xA8ED2C] + v4)); /*0x546e1f*/
          if ( v8 && (v9 = v8[v7 % (*v8 * v8[1]) + 4]) != 0 && (*(unsigned int *)(v9 + 36) & 4) != 0 ) /*0x546e48*/
            inited = (*(unsigned int *)(i + 320) >> 13) & 1; /*0x546e53*/
          else
            inited = CellClass::InitRandomOffsets(i, *(unsigned int *)(i + 56), v6[188]); /*0x546e62*/
        }
      }
      v10 = v6[188]; /*0x546e81*/
      v11 = inited; /*0x546e87*/
      if ( inited > v10 - 1 ) /*0x546e8e*/
        v11 = inited % v10; /*0x546e91*/
      for ( ; v11; --v11 ) /*0x546e95*/
        v6 = (unsigned int *)v6[175]; /*0x546e97*/
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
      v17 = *((unsigned int *)MEMORY[0xA8ED2C] + v15); /*0x546f47*/
      if ( v17 ) /*0x546f52*/
      {
        do /*0x546fdc*/
        {
          if ( *(unsigned char *)(v17 + 756) && strlen((const char *)(v17 + 757)) ) /*0x546f68*/
          {
            if ( a1 || *(unsigned int *)(v17 + 776) || a2 && *(unsigned char *)(v17 + 739) ) /*0x546f8e*/
            {
              if ( !*(unsigned int *)(v17 + 164) ) /*0x546fc0*/
              {
                v13 += MapClass::LoadFileData(v17); /*0x546fd1*/
                ++v12; /*0x546fd3*/
              }
            }
            else if ( *(unsigned int *)(v17 + 164) ) /*0x546f98*/
            {
              __3_YAXPAX_Z(*(void **)(v17 + 164)); /*0x546fa5*/
              *(unsigned int *)(v17 + 164) = 0; /*0x546fad*/
              *(unsigned char *)(v17 + 168) = 0; /*0x546fb7*/
            }
          }
          v17 = *(unsigned int *)(v17 + 700); /*0x546fd4*/
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
// 0x547110
namespace gamemd {
int ResetAllTechnoField776()
{

  int result = dword_A8ED38; // eax /*0x547110*/
  int i; // ecx
  for ( i = 0; i < dword_A8ED38; ++i ) /*0x54711b*/
  {
    int j; // eax
    for ( j = *((unsigned int *)dword_A8ED2C + i); j; j = *(unsigned int *)(j + 700) ) /*0x547127*/
      *(unsigned int *)(j + 776) = 0; /*0x547129*/
    result = dword_A8ED38; /*0x547139*/
  }
  return result; /*0x547143*/
}
}
// 0x547370
namespace gamemd {
int Map_InitCoordinateOffsets(int a1)
{
  unsigned int v3; // eax

  int v5; // [esp+Ch] [ebp-4h]
  v5 = a1; /*0x54737f*/
  if ( !*(unsigned char *)(a1 + 737) ) /*0x547373*/
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
    dword_ABAD34 = dword_AA105C[0]; /*0x547447*/
    dword_ABAD38 = dword_AA105C[0]; /*0x54744c*/
    dword_ABAD3C = dword_AA105C[0]; /*0x547451*/
    dword_ABAD40 = dword_AA105C[0]; /*0x547456*/
    dword_ABAD44 = dword_AA105C[0]; /*0x54745b*/
    dword_ABAD4C = dword_AA105C[0]; /*0x547460*/
    dword_ABAD50 = dword_AA105C[0]; /*0x547465*/
    dword_ABAD54 = dword_AA105C[0]; /*0x54746a*/
    dword_ABAD58 = dword_AA105C[0]; /*0x54746f*/
    dword_ABAD5C = dword_AA105C[0]; /*0x547474*/
    dword_ABAD64 = dword_AA105C[0]; /*0x547479*/
    dword_ABAD68 = dword_AA105C[0]; /*0x54747e*/
    dword_ABAD6C = dword_AA105C[0]; /*0x547483*/
    dword_ABAD70 = dword_AA105C[0]; /*0x547488*/
    dword_ABAD74 = dword_AA105C[0]; /*0x54748d*/
    dword_ABAD7C = dword_AA105C[0]; /*0x547492*/
    dword_ABAD80 = dword_AA105C[0]; /*0x547497*/
    dword_ABAD84 = dword_AA105C[0]; /*0x54749c*/
    dword_ABAD88 = dword_AA105C[0]; /*0x5474a1*/
    dword_ABAD8C = dword_AA105C[0]; /*0x5474a6*/
    dword_ABAD94 = dword_AA105C[0]; /*0x5474ab*/
    dword_ABAD98 = dword_AA105C[0]; /*0x5474b0*/
    dword_ABAD9C = dword_AA105C[0]; /*0x5474b5*/
    dword_ABADA0 = dword_AA105C[0]; /*0x5474ba*/
    dword_ABADA4 = dword_AA105C[0]; /*0x5474bf*/
    dword_ABADAC = dword_AA105C[0]; /*0x5474c4*/
    dword_ABADB0 = dword_AA105C[0]; /*0x5474c9*/
    dword_ABADB4 = dword_AA105C[0]; /*0x5474ce*/
    dword_ABADB8 = dword_AA105C[0]; /*0x5474d3*/
    dword_ABADBC = dword_AA105C[0]; /*0x5474d8*/
    dword_ABADC4 = dword_AA105C[0]; /*0x5474dd*/
    dword_ABADC8 = dword_AA105C[0]; /*0x5474e2*/
    dword_ABADCC = dword_AA105C[0]; /*0x5474e7*/
    dword_ABADD0 = dword_AA105C[0]; /*0x5474ec*/
    dword_ABADD4 = dword_AA105C[0]; /*0x5474f1*/
    dword_ABADDC = dword_AA105C[0]; /*0x5474f6*/
    dword_ABADE0 = dword_AA105C[0]; /*0x5474fb*/
    dword_ABADE4 = dword_AA105C[0]; /*0x547500*/
    dword_ABADE8 = dword_AA105C[0]; /*0x547505*/
    dword_ABADEC = dword_AA105C[0]; /*0x54750a*/
    dword_ABADF0 = 2147450879; /*0x54750f*/
    dword_ABADF4 = dword_AA105C[0]; /*0x547515*/
    dword_ABADF8 = dword_AA105C[0]; /*0x54751a*/
    dword_ABAE08 = 2147450879; /*0x547532*/
    dword_ABAE20 = 2147450879; /*0x547546*/
    dword_ABAE38 = 2147450879; /*0x54755a*/
    dword_ABAE50 = 2147450879; /*0x54756e*/
    dword_ABAE68 = 2147450879; /*0x547582*/
    dword_ABAE80 = 2147450879; /*0x547596*/
    dword_ABAE98 = 2147450879; /*0x5475aa*/
    dword_ABAEB0 = 2147450879; /*0x5475be*/
    dword_ABADFC = dword_AA105C[0]; /*0x5475cd*/
    dword_ABAE00 = dword_AA105C[0]; /*0x5475d2*/
    dword_ABAE04 = dword_AA105C[0]; /*0x5475d7*/
    dword_ABAE0C = dword_AA105C[0]; /*0x5475dc*/
    dword_ABAE10 = dword_AA105C[0]; /*0x5475e1*/
    dword_ABAE14 = dword_AA105C[0]; /*0x5475e6*/
    dword_ABAE18 = dword_AA105C[0]; /*0x5475eb*/
    dword_ABAE1C = dword_AA105C[0]; /*0x5475f0*/
    dword_ABAE24 = dword_AA105C[0]; /*0x5475f5*/
    dword_ABAE28 = dword_AA105C[0]; /*0x5475fa*/
    dword_ABAE2C = dword_AA105C[0]; /*0x5475ff*/
    dword_ABAE30 = dword_AA105C[0]; /*0x547604*/
    dword_ABAE34 = dword_AA105C[0]; /*0x547609*/
    dword_ABAE3C = dword_AA105C[0]; /*0x54760e*/
    dword_ABAE40 = dword_AA105C[0]; /*0x547613*/
    dword_ABAE44 = dword_AA105C[0]; /*0x547618*/
    dword_ABAE48 = dword_AA105C[0]; /*0x54761d*/
    dword_ABAE4C = dword_AA105C[0]; /*0x547622*/
    dword_ABAE54 = dword_AA105C[0]; /*0x547627*/
    dword_ABAE58 = dword_AA105C[0]; /*0x54762c*/
    dword_ABAE5C = dword_AA105C[0]; /*0x547631*/
    dword_ABAE60 = dword_AA105C[0]; /*0x547636*/
    dword_ABAE64 = dword_AA105C[0]; /*0x54763b*/
    dword_ABAE6C = dword_AA105C[0]; /*0x547640*/
    dword_ABAE70 = dword_AA105C[0]; /*0x547645*/
    dword_ABAE74 = dword_AA105C[0]; /*0x54764a*/
    dword_ABAE78 = dword_AA105C[0]; /*0x54764f*/
    dword_ABAE7C = dword_AA105C[0]; /*0x547654*/
    dword_ABAE84 = dword_AA105C[0]; /*0x547659*/
    dword_ABAE88 = dword_AA105C[0]; /*0x54765e*/
    dword_ABAE8C = dword_AA105C[0]; /*0x547663*/
    dword_ABAE90 = dword_AA105C[0]; /*0x547668*/
    dword_ABAE94 = dword_AA105C[0]; /*0x54766d*/
    dword_ABAE9C = dword_AA105C[0]; /*0x547672*/
    dword_ABAEA0 = dword_AA105C[0]; /*0x547677*/
    dword_ABAEA4 = dword_AA105C[0]; /*0x54767c*/
    dword_ABAEA8 = dword_AA105C[0]; /*0x547681*/
    dword_ABAEAC = dword_AA105C[0]; /*0x547686*/
    dword_ABAEB4 = dword_AA105C[0]; /*0x54768b*/
    dword_ABAEB8 = dword_AA105C[0]; /*0x547690*/
    dword_ABAEBC = dword_AA105C[0]; /*0x547695*/
    dword_ABAEC0 = dword_AA105C[0]; /*0x54769a*/
    dword_ABAEC4 = dword_AA105C[0]; /*0x54769f*/
    dword_ABAEC8 = 2147450879; /*0x5476a4*/
    dword_ABAECC = dword_AA105C[0]; /*0x5476aa*/
    dword_ABAED0 = dword_AA105C[0]; /*0x5476af*/
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
    dword_ABAED4 = dword_AA105C[0]; /*0x5477d3*/
    dword_ABAED8 = dword_AA105C[0]; /*0x5477d8*/
    dword_ABAEDC = dword_AA105C[0]; /*0x5477dd*/
    dword_ABAEE4 = dword_AA105C[0]; /*0x5477e2*/
    dword_ABAEE8 = dword_AA105C[0]; /*0x5477e7*/
    dword_ABAEEC = dword_AA105C[0]; /*0x5477ec*/
    dword_ABAEF0 = dword_AA105C[0]; /*0x5477f1*/
    dword_ABAEF4 = dword_AA105C[0]; /*0x5477f6*/
    dword_ABAEFC = dword_AA105C[0]; /*0x5477fb*/
    dword_ABAF00 = dword_AA105C[0]; /*0x547800*/
    dword_ABAF04 = dword_AA105C[0]; /*0x547805*/
    dword_ABAF08 = dword_AA105C[0]; /*0x54780a*/
    dword_ABAF0C = dword_AA105C[0]; /*0x54780f*/
    dword_ABAF20 = dword_AA105C[0]; /*0x547814*/
    dword_ABAF24 = dword_AA105C[0]; /*0x547819*/
    dword_ABAF38 = dword_AA105C[0]; /*0x54781e*/
    dword_ABAF3C = dword_AA105C[0]; /*0x547823*/
    dword_ABAF4C = dword_AA105C[0]; /*0x547828*/
    dword_ABAF50 = dword_AA105C[0]; /*0x54782d*/
    dword_ABAF54 = dword_AA105C[0]; /*0x547832*/
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
    dword_ABAF64 = dword_AA105C[0]; /*0x5479a1*/
    dword_ABAF68 = dword_AA105C[0]; /*0x5479a6*/
    dword_ABAF6C = dword_AA105C[0]; /*0x5479ab*/
    dword_ABAF7C = dword_AA105C[0]; /*0x5479b0*/
    dword_ABAF80 = dword_AA105C[0]; /*0x5479b5*/
    dword_ABAF84 = dword_AA105C[0]; /*0x5479ba*/
    dword_ABAF90 = dword_AA105C[0]; /*0x5479bf*/
    dword_ABAF94 = dword_AA105C[0]; /*0x5479c4*/
    dword_ABAF98 = dword_AA105C[0]; /*0x5479c9*/
    dword_ABAF9C = dword_AA105C[0]; /*0x5479ce*/
    dword_ABAFB4 = dword_AA105C[0]; /*0x5479d3*/
    dword_ABAFCC = dword_AA105C[0]; /*0x5479d8*/
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
    dword_ABAFE0 = dword_AA105C[0]; /*0x547afd*/
    dword_ABAFE4 = dword_AA105C[0]; /*0x547b02*/
    dword_ABAFEC = -196608; /*0x547b07*/
    dword_ABAFF8 = dword_AA105C[0]; /*0x547b0d*/
    dword_ABAFFC = dword_AA105C[0]; /*0x547b12*/
    dword_ABB008 = dword_AA105C[0]; /*0x547b17*/
    dword_ABB00C = dword_AA105C[0]; /*0x547b1c*/
    dword_ABB010 = dword_AA105C[0]; /*0x547b21*/
    dword_ABB014 = dword_AA105C[0]; /*0x547b26*/
    dword_ABB020 = dword_AA105C[0]; /*0x547b2b*/
    dword_ABB024 = dword_AA105C[0]; /*0x547b30*/
    dword_ABB028 = dword_AA105C[0]; /*0x547b35*/
    dword_ABB02C = dword_AA105C[0]; /*0x547b3a*/
    dword_ABB030 = 2147450879; /*0x547b3f*/
    dword_ABB038 = dword_AA105C[0]; /*0x547b45*/
    dword_ABB03C = dword_AA105C[0]; /*0x547b4a*/
    dword_ABB040 = dword_AA105C[0]; /*0x547b4f*/
    dword_ABB044 = dword_AA105C[0]; /*0x547b54*/
    dword_ABB04C = dword_AA105C[0]; /*0x547b59*/
    dword_ABB050 = dword_AA105C[0]; /*0x547b5e*/
    dword_ABB054 = dword_AA105C[0]; /*0x547b63*/
    dword_ABB058 = dword_AA105C[0]; /*0x547b68*/
    dword_ABB05C = dword_AA105C[0]; /*0x547b6d*/
    dword_ABB060 = 2147450879; /*0x547b72*/
    dword_ABB078 = 2147450879; /*0x547b86*/
    dword_ABB090 = 2147450879; /*0x547b9a*/
    dword_ABB0A8 = 2147450879; /*0x547bae*/
    dword_ABB0C0 = 2147450879; /*0x547bc2*/
    dword_ABB064 = dword_AA105C[0]; /*0x547bd6*/
    dword_ABB068 = dword_AA105C[0]; /*0x547bdb*/
    dword_ABB06C = dword_AA105C[0]; /*0x547be0*/
    dword_ABB070 = dword_AA105C[0]; /*0x547be5*/
    dword_ABB074 = dword_AA105C[0]; /*0x547bea*/
    dword_ABB07C = dword_AA105C[0]; /*0x547bef*/
    dword_ABB080 = dword_AA105C[0]; /*0x547bf4*/
    dword_ABB084 = dword_AA105C[0]; /*0x547bf9*/
    dword_ABB088 = dword_AA105C[0]; /*0x547bfe*/
    dword_ABB08C = dword_AA105C[0]; /*0x547c03*/
    dword_ABB094 = dword_AA105C[0]; /*0x547c08*/
    dword_ABB098 = dword_AA105C[0]; /*0x547c0d*/
    dword_ABB09C = dword_AA105C[0]; /*0x547c12*/
    dword_ABB0A0 = dword_AA105C[0]; /*0x547c17*/
    dword_ABB0A4 = dword_AA105C[0]; /*0x547c1c*/
    dword_ABB0AC = dword_AA105C[0]; /*0x547c21*/
    dword_ABB0B0 = dword_AA105C[0]; /*0x547c26*/
    dword_ABB0B4 = dword_AA105C[0]; /*0x547c2b*/
    dword_ABB0B8 = dword_AA105C[0]; /*0x547c30*/
    dword_ABB0BC = dword_AA105C[0]; /*0x547c35*/
    dword_ABB0C4 = dword_AA105C[0]; /*0x547c3a*/
    dword_ABB0C8 = dword_AA105C[0]; /*0x547c3f*/
    dword_ABB0CC = dword_AA105C[0]; /*0x547c44*/
    dword_ABB0D0 = dword_AA105C[0]; /*0x547c49*/
    dword_ABB0D4 = dword_AA105C[0]; /*0x547c4e*/
    dword_ABB0DC = dword_AA105C[0]; /*0x547c53*/
    dword_ABB0E0 = dword_AA105C[0]; /*0x547c58*/
    dword_ABB0E4 = dword_AA105C[0]; /*0x547c5d*/
    dword_ABB0E8 = dword_AA105C[0]; /*0x547c62*/
    dword_ABB0EC = dword_AA105C[0]; /*0x547c67*/
    dword_ABB0D8 = 2147450879; /*0x547c7f*/
    dword_ABB0F0 = 2147450879; /*0x547c85*/
    atexit(nullsub_20); /*0x547c8a*/
    a1 = v5; /*0x547c8f*/
  }
  int v1; // edx
  v1 = *(unsigned int *)(a1 + 660); /*0x547c98*/
  int *v2 = dword_AA102C; // ecx /*0x547c9e*/
  while ( 1 ) /*0x547ca7*/
  {
    v3 = v1 - *v2; /*0x547ca7*/
    if ( v3 < 0x28 ) /*0x547ca9*/
      break; /*0x547ca9*/
    if ( (int)++v2 >= (int)&dword_AA1040 ) /*0x547cb9*/
      return 0; /*0x547cb9*/
  }
  return 24 * v3 + 11250996; /*0x547cbb*/
}
}
// 0x549830
namespace gamemd {
int E4Recv_549830::sub_549830(int a2, void ** a3, int a4, int a5)
{
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  int v8; // edi
  unsigned int *v9; // eax
  unsigned int *v10; // ecx
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  char *v16; // eax
  char *v17; // ebp
  char *v19; // edx
  int v20; // ecx
  char v21; // bl
  char v22; // bl
  char *v23; // eax
  char *v24; // edx
  int v25; // ebx
  int v26; // esi
  int v27; // [esp+1Ch] [ebp+4h]
  char *v28; // [esp+1Ch] [ebp+4h]
  int v29; // [esp+28h] [ebp+10h]

  memset(*a3, 0, a5 * a4); /*0x549859*/
  v6 = (unsigned int *)(*((int (**)(ObjectClass *))this->ptr_0 + 39))(this); /*0x549866*/
  v7 = v6; /*0x54986c*/
  if ( v6 ) /*0x549870*/
  {
    v27 = a2 % (*v6 * v6[1]); /*0x549883*/
    v8 = v6[v27 + 4]; /*0x549887*/
    if ( !v8 ) /*0x54988d*/
      return 0; /*0x54988d*/
    v9 = (unsigned int *)(*((int (**)(ObjectClass *))this->ptr_0 + 39))(this); /*0x549897*/
    v10 = v9; /*0x54989d*/
    if ( v9 ) /*0x5498a1*/
    {
      v11 = *v9 * v9[1]; /*0x5498aa*/
      v12 = v9[2]; /*0x5498b0*/
      v13 = v10[v27 % v11 + 4]; /*0x5498b3*/
      v14 = v10[3]; /*0x5498b7*/
      if ( v13 && (*(unsigned char *)(v13 + 36) & 1) != 0 ) /*0x5498c2*/
        v14 += *(unsigned int *)(v13 + 4) - *(unsigned int *)(v13 + 24); /*0x5498ca*/
    }
    else
    {
      v14 = 0; /*0x5498ce*/
      v12 = 0; /*0x5498d2*/
    }
    v15 = a4; /*0x5498d6*/
    if ( v12 > a4 || v14 > a5 ) /*0x5498e6*/
      return 0; /*0x5498e6*/
    v16 = (char *)*a3; /*0x5498f3*/
    v17 = (char *)*a3 + a5 * a4; /*0x5498f5*/
    if ( (*(unsigned char *)(v8 + 36) & 1) != 0 ) /*0x5498fa*/
    {
      v16 += a4 * (*(unsigned int *)(v8 + 4) - *(unsigned int *)(v8 + 24)); /*0x549907*/
      if ( v16 >= v17 ) /*0x54990b*/
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
        if ( v16 >= v17 ) /*0x549972*/
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
        if ( ++v16 >= v17 ) /*0x54995b*/
          return 0; /*0x54995b*/
        if ( ++v20 >= v7[2] ) /*0x549963*/
        {
          v15 = a4; /*0x549965*/
          goto LABEL_20; /*0x549965*/
        }
      }
    }
    LABEL_22:
    if ( (*(unsigned char *)(v8 + 36) & 1) != 0 ) /*0x549986*/
    {
      v23 = (char *)*a3 + *(unsigned int *)(v8 + 20) - *(unsigned int *)v8; /*0x549995*/
      if ( v23 >= v17 ) /*0x549999*/
        return 0; /*0x5499a4*/
      v24 = (char *)(v8 + *(unsigned int *)(v8 + 8)); /*0x5499ad*/
      v25 = 0; /*0x5499af*/
      if ( *(int *)(v8 + 32) > 0 ) /*0x5499b3*/
      {
        while ( 1 ) /*0x5499b8*/
        {
          v26 = 0; /*0x5499b8*/
          if ( *(int *)(v8 + 28) > 0 ) /*0x5499bc*/
            break; /*0x5499bc*/
          LABEL_31:
          v23 += a4 - *(unsigned int *)(v8 + 28); /*0x5499d4*/
          if ( v23 >= v17 ) /*0x5499e1*/
            return 0; /*0x5499e1*/
          if ( ++v25 >= *(unsigned int *)(v8 + 32) ) /*0x5499e9*/
            return 1; /*0x5499e9*/
        }
        while ( 1 ) /*0x5499be*/
        {
          if ( *v24 ) /*0x5499be*/
            *v23 = *v24; /*0x5499c4*/
          ++v23; /*0x5499c6*/
          ++v24; /*0x5499c7*/
          if ( v23 >= v17 ) /*0x5499ca*/
            return 0; /*0x5499ca*/
          if ( ++v26 >= *(unsigned int *)(v8 + 28) ) /*0x5499d2*/
            goto LABEL_31; /*0x5499d2*/
        }
      }
    }
  }
  return 1; /*0x54990d*/
}
}
// 0x549B30
namespace gamemd {
int sub_549B30()
{
  lpBuffer = 0; /*0x549b32*/
  dword_AA1060 = 0; /*0x549b37*/
  dword_AA1064 = 0; /*0x549b3c*/
  dword_AA1068 = 0; /*0x549b41*/
  dword_AA106C = 0; /*0x549b46*/
  return 0; /*0x549b4b*/
}
}
// 0x54BA30
namespace gamemd {
AbstractClass * * E4Recv_54BA30::UpdateFootMovement()
{

  int v17; // eax
  int v34; // [esp+2Ch] [ebp-Ch] BYREF
  int v35; // [esp+30h] [ebp-8h]
  int v36; // [esp+34h] [ebp-4h]

  int v2; // ecx
  _ESI = v2; /*0x54ba35*/
  int v4; // edi
  v4 = (*(int (**)(unsigned int))(**(unsigned int **)(v2 + 12) + 456))(*(unsigned int *)(v2 + 12)); /*0x54ba43*/
  int v5 = _ESI->ptr_C; // eax /*0x54ba45*/
  if ( !v5->q08C ) /*0x54ba48*/
  {
    int *v6 = &v5->Coord_9C; // eax /*0x54ba52*/
    v34 = *v6; /*0x54ba59*/
    v35 = v6[1]; /*0x54ba65*/
    v36 = v6[2]; /*0x54ba71*/
    if ( (((Coord *)&DataGlobal_87F7E8)->To_Cell( &v34)->flags[0] & 0x100) != 0 && v4 >= dword_ABC5DC ) /*0x54ba8c*/
      v4 -= dword_ABC5DC; /*0x54ba8e*/
  }
  int v7; // eax
  int v33; // [esp+28h] [ebp-10h] BYREF
  v7 = *(unsigned int *)(*(int (**)(unsigned int, int *))(*_ESI->ptr_C + 440))(_ESI->ptr_C, &v33); /*0x54baa0*/
  int v8 = _ESI->ptr_C; // ecx /*0x54baa2*/
  __int16 v31[2]; // [esp+20h] [ebp-18h] BYREF
  *(unsigned int *)v31 = v7; /*0x54baa5*/
  if ( (unsigned short)v7 != v8->q560 || v31[1] != v8->q562 ) /*0x54babe*/
    ((char *)&g_CellClassManager)->ToGridIndex(v8, v8->q560, v7); /*0x54bace*/
  if ( v4 < _ESI->needsRedraw ) /*0x54bade*/
  {
    if ( (*(int (**)(unsigned int))(*_ESI->ptr_C + 44))(_ESI->ptr_C) == 1 /*0x54bba2*/
      && *(unsigned char *)((*(int (**)(unsigned int))(*_ESI->ptr_C + 132))(_ESI->ptr_C) + 3434) )
    {
      v17 = *(unsigned int *)(_ESI + 128) / 2; /*0x54bbb5*/
    }
    else
    {
      v17 = *(unsigned int *)(_ESI + 128) / 4; /*0x54bbc5*/
    }
    if ( v4 > v17 ) /*0x54bbca*/
    {
      __asm { fild dword ptr [esi+20h] } /*0x54bbd0*/
      int *v18; // ecx
      v18 = (int *)(_ESI->ptr_C + 156); /*0x54bbd6*/
      __asm { fstp qword ptr [esi+78h] } /*0x54bbdc*/
      _ESI->spawnStatus = _RT1; /*0x54bbdc*/
      v34 = *v18; /*0x54bbe1*/
      int v20; // edx
      v20 = v18[1]; /*0x54bbe5*/
      v35 = v20; /*0x54bbe8*/
      v36 = v18[2]; /*0x54bbef*/
      v33 = _ESI->q040; /*0x54bbf8*/
      int v32; // [esp+24h] [ebp-14h] BYREF
      if ( v34 == v33 && v20 == _ESI->u32_44 ) /*0x54bc01*/
        (v32) = ((v32) & ~0xFFFF) | ((0) & 0xFFFF); /*0x54bc03*/
      __asm { fild [esp+24h+var_10] } /*0x54bc0a*/
      __asm
      {
        fisub [esp+34h+var_C]
        fstp [esp+34h+var_30+4]; double
        fild [esp+34h+var_8]
        fisub dword ptr [esi+44h]
        fstp [esp+34h+var_38+4]; double
      }
      double v28; // [esp+4h] [ebp-34h]
      double v29; // [esp+Ch] [ebp-2Ch]
      Math::CalcAngle(v28, v29); /*0x54bc26*/
      __asm { fsub ds:dbl_7E2820 } /*0x54bc2b*/
      __asm { fmul ds:dbl_7E2818 }
      (v33) = ((v33) & ~0xFFFF) | ((Math::RoundToInt(result)) & 0xFFFF); /*0x54bc3f*/
      v32 = v33; /*0x54bc50*/
      FacingClass::Update(&_ESI->u32_54, &v32); /*0x54bc54*/
      int Member; // eax
      Member = Team::GetMember(_ESI->ptr_C, 0); /*0x54bc5e*/
      int v22 = Member; // edi /*0x54bc63*/
      if ( Member ) /*0x54bc67*/
      {
        if ( (*(int (**)(int))(*(unsigned int *)Member + 44))(Member) == 6 ) /*0x54bc73*/
        {
          unsigned char *v23 = v22->u32_520; // eax /*0x54bc75*/
          if ( v23[5821] || v23[5860] || v23[5861] || v23[5862] ) /*0x54bc99*/
            (**(void (***)(int, int, unsigned int))(_ESI->ptr_C + 8))( /*0x54bcb3*/
              _ESI->ptr_C + 8,
              4475,
              0);
        }
      }
      if ( *(unsigned int *)v31 == ((*(unsigned int *)(_ESI + 68) / 256 & 0xFFFFu) << 16 | (*(unsigned int *)(_ESI + 64) / 256 & 0xFFFFu)) /*0x54bcee*/
        && !*(unsigned char *)((*(int (**)(unsigned int))(*_ESI->ptr_C + 132))(_ESI->ptr_C) + 3434) )
      {
        int v24; // eax
        v24 = (*(int (**)(unsigned int))(*_ESI->ptr_C + 456))(_ESI->ptr_C); /*0x54bcfd*/
        unsigned char *v25 = _ESI->ptr_C; // ecx /*0x54bd03*/
        _ESI->needsRedraw = v24; /*0x54bd06*/
        char v26; // bl
        v26 = v25[116]; /*0x54bd10*/
        (*(void (**)(unsigned char *, unsigned int))(*&v25->u32_490))(v25, 0); /*0x54bd13*/
        int v27 = _ESI->ptr_C; // eax /*0x54bd19*/
        _ESI->customSound_controller = 3; /*0x54bd1c*/
        v27->unknown74 = v26; /*0x54bd23*/
      }
    }
  }
  else if ( (unsigned __int8)ObjectClass::HasLinkedObject(_ESI->ptr_C) ) /*0x54baea*/
  {
    unsigned int v9; // edi
    v9 = ((Random *)&dword_A8B230[14].NeedsSaveOrLink)->Range(0, 7); /*0x54bb08*/
    Cell *v10; // eax
    v10 = (Cell *)((CellCoord *)&DataGlobal_87F7E8)->To_CellObj(v31); /*0x54bb14*/
    int v11 = *_ESI->ptr_C; // ebx /*0x54bb1f*/
    void *NeighbourContent; // eax
    NeighbourContent = Cell::GetNeighbourContent(v10, v9); /*0x54bb23*/
    (*(void (**)(unsigned int, void *, int))(v11 + 1152))(_ESI->ptr_C, NeighbourContent, 1); /*0x54bb2c*/
    unsigned char *v13 = _ESI->ptr_C; // ecx /*0x54bb32*/
    LOBYTE(v11) = v13[116]; /*0x54bb39*/
    (*(void (**)(unsigned char *, unsigned int))(*&v13->u32_490))(v13, 0); /*0x54bb3c*/
    *(unsigned char *)(_ESI->ptr_C + 116) = v11; /*0x54bb46*/
    _ESI->customSound_controller = 3; /*0x54bb49*/
  }
  else
  {
    CellClass *v14; // eax
    v14 = (CellClass *)(*(int (**)(unsigned int))(*_ESI->ptr_C + 444))(_ESI->ptr_C); /*0x54bb5c*/
    int v30; // [esp+14h] [ebp-24h]
    CellClass::AttachObject(v14, v30); /*0x54bb64*/
    unsigned char *v15 = _ESI->ptr_C; // ecx /*0x54bb69*/
    char v16; // bl
    v16 = v15[116]; /*0x54bb70*/
    (*(void (**)(unsigned char *, unsigned int))(*&v15->u32_490))(v15, 0); /*0x54bb73*/
    *(unsigned char *)(_ESI->ptr_C + 116) = v16; /*0x54bb7d*/
    _ESI->customSound_controller = 2; /*0x54bb80*/
  }
  return result; /*0x54bb45*/

}
}
// 0x5406E0
namespace gamemd {
void sub_5406E0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x5406ec*/
  dbl_AA0650 = Math::Sqrt(v0 + v0); /*0x5406fe*/
}
} // namespace gamemd

// 0x540710
namespace gamemd {
void sub_540710()
{
  dbl_AA06A0 = dbl_AA0650 / 60.0; /*0x54071c*/
}
} // namespace gamemd

// 0x540730
namespace gamemd {
void sub_540730()
{
  dbl_AA0688 = 1.0 / dbl_AA06A0; /*0x54073c*/
}
} // namespace gamemd

// 0x540750
namespace gamemd {
void sub_540750()
{
  dbl_AA0680 = 0.0174532925199433 * 45.0; /*0x54075c*/
}
} // namespace gamemd

// 0x540770
namespace gamemd {
void sub_540770()
{
  dbl_AA0658 = 0.0174532925199433 * 60.0; /*0x54077c*/
}
} // namespace gamemd

// 0x540790
namespace gamemd {
void sub_540790()
{
  dbl_AA0630 = 0.0174532925199433 * 90.0; /*0x54079c*/
}
} // namespace gamemd

// 0x5407B0
namespace gamemd {
long long sub_5407B0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_AA0630 - dbl_AA0658); /*0x5407c2*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_AA0650 * 0.5); /*0x5407d6*/
  dword_AA06A8 = result; /*0x5407db*/
  return result; /*0x5407e0*/
}
} // namespace gamemd

// 0x5407F0
namespace gamemd {
void sub_5407F0()
{
  dbl_AA0660 = Math::ArcTan((double)dword_AA06A8 * 0.00390625); /*0x540807*/
}
} // namespace gamemd

// 0x540820
namespace gamemd {
void sub_540820()
{
  dbl_AA0678 = Math::ArcTan((double)(2 * dword_AA06A8) / dbl_AA0650); /*0x540842*/
}
} // namespace gamemd

// 0x540850
namespace gamemd {
long long sub_540850()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_AA06A8) + 0.5); /*0x54086b*/
  dword_AA069C = result; /*0x540870*/
  return result; /*0x540876*/
}
} // namespace gamemd

// 0x540880
namespace gamemd {
int sub_540880()
{
  word_AA0648 = 0; /*0x540882*/
  word_AA064A = 0; /*0x540888*/
  return 0; /*0x54088e*/
}
} // namespace gamemd

// 0x540890
namespace gamemd {
int sub_540890()
{
  dword_AA0668 = 0; /*0x540892*/
  dword_AA066C = 0; /*0x540897*/
  dword_AA0670 = 0; /*0x54089c*/
  return 0; /*0x5408a1*/
}
} // namespace gamemd

// 0x5408B0
namespace gamemd {
int sub_5408B0()
{
  dword_AA0698 = 0; /*0x5408b5*/
  dword_AA0690 = 128; /*0x5408bf*/
  dword_AA0694 = 128; /*0x5408c4*/
  return 128; /*0x5408c9*/
}
} // namespace gamemd

// 0x5408D0
namespace gamemd {
int sub_5408D0()
{
  dword_AA0638 = 0; /*0x5408d2*/
  dword_AA063C = 0; /*0x5408d7*/
  dword_AA0640 = 0; /*0x5408dc*/
  dword_AA0644 = 0; /*0x5408e1*/
  return 0; /*0x5408e6*/
}
} // namespace gamemd

// 0x5408F0
namespace gamemd {
char * E4Recv_5408F0::sub_5408F0(int a2, int a3, int a4, int a5, short a6, short a7)
{

  unsigned int *v8; // eax
  unsigned int *v9; // eax
  __int16 v10; // cx

  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7EC16C) */  /*0x5408f7*/
  if ( dword_887628 ) /*0x540905*/
  {
    (**(void (***)(int, int))dword_887628)(dword_887628, 1); /*0x54090b*/
    dword_887628 = 0; /*0x54090d*/
  }
  v8 = __2_YAPAXI_Z(0x3F310u); /*0x540918*/
  if ( v8 ) /*0x540922*/
    v9 = IPXInterfaceClass::Construct(v8); /*0x540926*/
  else
    v9 = 0; /*0x54092d*/
  dword_887628 = (int)v9; /*0x540931*/
  if ( WinsockInterface::Init(v9) ) /*0x540936*/
    this->M4 = 1; /*0x54093f*/
  else
    this->M4 = 0; /*0x540945*/
  if ( dword_887628 ) /*0x540950*/
    (**(void (***)(int, int))dword_887628)(dword_887628, 1); /*0x540956*/
  dword_887628 = 0; /*0x540960*/
  this->M8 = a2; /*0x540966*/
  this->M12 = a4; /*0x540969*/
  this->M20 = a2; /*0x540970*/
  this->M20 = a5; /*0x54097c*/
  this->M28 = a5; /*0x54097f*/
  this->M24 = a7; /*0x540982*/
  LOBYTE(v10) = HIBYTE(a6); /*0x54098d*/
  HIBYTE(v10) = a6; /*0x540992*/
  this->u32_22 = v10; /*0x540996*/
  this->M5 = 0; /*0x54099f*/
  this->M16 = a3; /*0x5409a2*/
  this->M24 = 0; /*0x5409a5*/
  this->M68 = 0; /*0x5409a8*/
  this->u32_54 = 0; /*0x5409ab*/
  memset(&this->M34, 0, 0x1Cu); /*0x5409ae*/
  this->M72 = 0; /*0x5409b3*/
  this->M168 = -1; /*0x5409b6*/
  this->M92 = -1; /*0x5409bc*/
  this->M76 = 0; /*0x5409bf*/
  this->q050 = 0; /*0x5409c2*/
  this->M160 = 0; /*0x5409c5*/
  this->M164 = 0; /*0x5409cb*/
  this->M88 = 2; /*0x5409d1*/
  this->M96 = 60; /*0x5409d8*/
  return this; /*0x5409e1*/

}
} // namespace gamemd

// 0x5422C0
namespace gamemd {
unsigned int E4Recv_5422C0::_GetNumBorrowedCores_SchedulerProxy_details_Concurrency__QBEIXZ()
{
  return this->M168; /*0x5422c6*/
}
} // namespace gamemd

// 0x543120
namespace gamemd {
void sub_543120()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x54312c*/
  dbl_AA06D8 = Math::Sqrt(v0 + v0); /*0x54313e*/
}
} // namespace gamemd

// 0x543150
namespace gamemd {
void sub_543150()
{
  dbl_AA0728 = dbl_AA06D8 / 60.0; /*0x54315c*/
}
} // namespace gamemd

// 0x543170
namespace gamemd {
void sub_543170()
{
  dbl_AA0710 = 1.0 / dbl_AA0728; /*0x54317c*/
}
} // namespace gamemd

// 0x543190
namespace gamemd {
void sub_543190()
{
  dbl_AA0708 = 0.0174532925199433 * 45.0; /*0x54319c*/
}
} // namespace gamemd

// 0x5431B0
namespace gamemd {
void sub_5431B0()
{
  dbl_AA06E0 = 0.0174532925199433 * 60.0; /*0x5431bc*/
}
} // namespace gamemd

// 0x5431D0
namespace gamemd {
void sub_5431D0()
{
  dbl_AA06B8 = 0.0174532925199433 * 90.0; /*0x5431dc*/
}
} // namespace gamemd

// 0x5431F0
namespace gamemd {
long long sub_5431F0()
{

  double v0; // st7
  v0 = Math::Sin(dbl_AA06B8 - dbl_AA06E0); /*0x543202*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_AA06D8 * 0.5); /*0x543216*/
  dword_AA0730 = result; /*0x54321b*/
  return result; /*0x543220*/
}
} // namespace gamemd

// 0x543230
namespace gamemd {
void sub_543230()
{
  dbl_AA06E8 = Math::ArcTan((double)dword_AA0730 * 0.00390625); /*0x543247*/
}
} // namespace gamemd

// 0x543260
namespace gamemd {
void sub_543260()
{
  dbl_AA0700 = Math::ArcTan((double)(2 * dword_AA0730) / dbl_AA06D8); /*0x543282*/
}
} // namespace gamemd

// 0x543290
namespace gamemd {
long long sub_543290()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_AA0730) + 0.5); /*0x5432ab*/
  dword_AA0724 = result; /*0x5432b0*/
  return result; /*0x5432b6*/
}
} // namespace gamemd

// 0x5432C0
namespace gamemd {
int sub_5432C0()
{
  word_AA06D0 = 0; /*0x5432c2*/
  word_AA06D2 = 0; /*0x5432c8*/
  return 0; /*0x5432ce*/
}
} // namespace gamemd

// 0x5432D0
namespace gamemd {
int sub_5432D0()
{
  dword_AA06F0 = 0; /*0x5432d2*/
  dword_AA06F4 = 0; /*0x5432d7*/
  dword_AA06F8 = 0; /*0x5432dc*/
  return 0; /*0x5432e1*/
}
} // namespace gamemd

// 0x5432F0
namespace gamemd {
int sub_5432F0()
{
  dword_AA0720 = 0; /*0x5432f5*/
  dword_AA0718 = 128; /*0x5432ff*/
  dword_AA071C = 128; /*0x543304*/
  return 128; /*0x543309*/
}
} // namespace gamemd

// 0x543310
namespace gamemd {
int sub_543310()
{
  dword_AA06C0 = 0; /*0x543312*/
  dword_AA06C4 = 0; /*0x543317*/
  dword_AA06C8 = 0; /*0x54331c*/
  dword_AA06CC = 0; /*0x543321*/
  return 0; /*0x543326*/
}
} // namespace gamemd

// 0x543AB0
namespace gamemd {
int nullsub_0(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x543ab6*/
    return -2147467261; /*0x543ab8*/
  *a2 = 237448640; /*0x543ac6*/
  a2[1] = 298949647; /*0x543ace*/
  a2[2] = -1610610249; /*0x543ad7*/
  a2[3] = -777003740; /*0x543ae0*/
  return 0; /*0x543abd*/
}
} // namespace gamemd

// 0x543AF0
namespace gamemd {
int E4Recv_543AF0::nullsub_0_0()
{
  return this->M172; /*0x543af6*/
}
} // namespace gamemd

// 0x543B00
namespace gamemd {
void nullsub_154(int a1, int a2)
{
  ; /*0x543b00*/
}
} // namespace gamemd

// 0x543C40
namespace gamemd {
int sub_543C40()
{
  dword_AA1040 = 0; /*0x543c42*/
  dword_AA1044 = 0; /*0x543c47*/
  dword_AA1048 = 0; /*0x543c4c*/
  dword_AA104C = 0; /*0x543c51*/
  return 0; /*0x543c56*/
}
} // namespace gamemd

// 0x543C60
namespace gamemd {
void sub_543C60()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x543c6c*/
  dbl_AA1070 = Math::Sqrt(v0 + v0); /*0x543c7e*/
}
} // namespace gamemd

// 0x543C90
namespace gamemd {
void sub_543C90()
{
  dbl_ABC2C0 = dbl_AA1070 / 60.0; /*0x543c9c*/
}
} // namespace gamemd

// 0x543CB0
namespace gamemd {
void sub_543CB0()
{
  dbl_ABC1F0 = 1.0 / dbl_ABC2C0; /*0x543cbc*/
}
} // namespace gamemd

// 0x543CD0
namespace gamemd {
void sub_543CD0()
{
  dbl_ABC1E0 = 0.0174532925199433 * 45.0; /*0x543cdc*/
}
} // namespace gamemd

// 0x543CF0
namespace gamemd {
void sub_543CF0()
{
  dbl_AA1128 = 0.0174532925199433 * 60.0; /*0x543cfc*/
}
} // namespace gamemd

// 0x543D10
namespace gamemd {
void sub_543D10()
{
  dbl_AA0E30 = 0.0174532925199433 * 90.0; /*0x543d1c*/
}
} // namespace gamemd

// 0x543D30
namespace gamemd {
long long sub_543D30()
{

  double v0; // st7
  v0 = Math::Sin(dbl_AA0E30 - dbl_AA1128); /*0x543d42*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_AA1070 * 0.5); /*0x543d56*/
  dword_ABC550 = result; /*0x543d5b*/
  return result; /*0x543d60*/
}
} // namespace gamemd

// 0x543D70
namespace gamemd {
void sub_543D70()
{
  unk_AA1138 = Math::ArcTan((double)dword_ABC550 * 0.00390625); /*0x543d87*/
}
} // namespace gamemd

// 0x543DA0
namespace gamemd {
void sub_543DA0()
{
  dbl_ABB118 = Math::ArcTan((double)(2 * dword_ABC550) / dbl_AA1070); /*0x543dc2*/
}
} // namespace gamemd

// 0x543DD0
namespace gamemd {
long long sub_543DD0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABC550) + 0.5); /*0x543deb*/
  dword_ABC2BC = result; /*0x543df0*/
  return result; /*0x543df6*/
}
} // namespace gamemd

// 0x543E00
namespace gamemd {
int sub_543E00()
{
  dword_AA105C[0] = 0; /*0x543e02*/
  return 0; /*0x543e0e*/
}
} // namespace gamemd

// 0x543E10
namespace gamemd {
int sub_543E10()
{
  dword_ABB0F8 = 0; /*0x543e12*/
  dword_ABB0FC = 0; /*0x543e17*/
  dword_ABB100 = 0; /*0x543e1c*/
  return 0; /*0x543e21*/
}
} // namespace gamemd

// 0x543E30
namespace gamemd {
int sub_543E30()
{
  dword_ABC208 = 0; /*0x543e35*/
  dword_ABC200 = 128; /*0x543e3f*/
  dword_ABC204 = 128; /*0x543e44*/
  return 128; /*0x543e49*/
}
} // namespace gamemd

// 0x543E50
namespace gamemd {
unsigned char * sub_543E50()
{

  unsigned char *result = &unk_ABBED2; // eax /*0x543e50*/
  int v1 = 256; // ecx /*0x543e55*/
  do /*0x543e68*/
  {
    *(result - 2) = 0; /*0x543e5c*/
    *(result - 1) = 0; /*0x543e5f*/
    *result = 0; /*0x543e62*/
    result += 3; /*0x543e64*/
    --v1; /*0x543e67*/
  }
  while ( v1 ); /*0x543e68*/
  return result; /*0x543e6a*/
}
} // namespace gamemd

// 0x543E70
namespace gamemd {
int sub_543E70()
{
  g_X99Vec_AA1078.Items = 0; /*0x543e77*/
  g_X99Vec_AA1078.Capacity = 0; /*0x543e7c*/
  g_X99Vec_AA1078.IsInitialized = 1; /*0x543e81*/
  g_X99Vec_AA1078.IsAllocated = 0; /*0x543e88*/
  g_X99Vec_AA1078.ptr_0 = (int)&g_ptr_7E3238; /*0x543e8d*/
  g_X99Vec_AA1078.CapacityIncrement = 10; /*0x543e97*/
  g_X99Vec_AA1078.Count = 0; /*0x543ea1*/
  return atexit(sub_543EB0); /*0x543eac*/
}
} // namespace gamemd

// 0x543EB0
namespace gamemd {
void sub_543EB0()
{
  if ( (byte_AA0E2C & 1) == 0 ) /*0x543eba*/
  {
    g_X99Vec_AA1078.ptr_0 = (int)&g_ptr_7E8500; /*0x543ebe*/
    byte_AA0E2C |= 1u; /*0x543ed1*/
    if ( g_X99Vec_AA1078.Items ) /*0x543ed7*/
    {
      if ( g_X99Vec_AA1078.IsAllocated ) /*0x543ee1*/
      {
        operator delete((void *)(g_X99Vec_AA1078.Items)); /*0x543ee4*/
        g_X99Vec_AA1078.Items = 0; /*0x543eec*/
      }
    }
    g_X99Vec_AA1078.IsAllocated = 0; /*0x543ef6*/
    g_X99Vec_AA1078.Capacity = 0; /*0x543efd*/
  }
}
} // namespace gamemd

// 0x544690
namespace gamemd {
int sub_544690()
{
  dword_ABC21C = 0; /*0x544699*/
  dword_ABC22C = 0; /*0x54469f*/
  dword_ABC23C = 0; /*0x5446a5*/
  dword_ABC24C = 0; /*0x5446ab*/
  dword_ABC210 = 0; /*0x5446b1*/
  dword_ABC214 = 0; /*0x5446b6*/
  dword_ABC218 = 0; /*0x5446bc*/
  dword_ABC220 = 0; /*0x5446c2*/
  dword_ABC224 = 0; /*0x5446c7*/
  dword_ABC228 = 0; /*0x5446cd*/
  dword_ABC230 = 0; /*0x5446d3*/
  dword_ABC234 = 0; /*0x5446d8*/
  dword_ABC238 = 0; /*0x5446de*/
  dword_ABC240 = 0; /*0x5446e4*/
  dword_ABC244 = 0; /*0x5446e9*/
  dword_ABC248 = 0; /*0x5446ef*/
  dword_ABC25C = 12; /*0x544709*/
  dword_ABC250 = 13; /*0x54470f*/
  dword_ABC254 = 6; /*0x544714*/
  dword_ABC258 = 48; /*0x54471a*/
  dword_ABC26C = 0; /*0x544728*/
  dword_ABC260 = 0; /*0x54472e*/
  dword_ABC264 = 0; /*0x544733*/
  dword_ABC268 = 0; /*0x544739*/
  dword_ABC27C = 12; /*0x544753*/
  dword_ABC270 = 14; /*0x544759*/
  dword_ABC274 = 1; /*0x54475e*/
  dword_ABC278 = 48; /*0x544764*/
  dword_ABC28C = 0; /*0x544772*/
  dword_ABC29C = 0; /*0x544778*/
  dword_ABC2AC = 0; /*0x54477e*/
  dword_ABC280 = 0; /*0x544784*/
  dword_ABC284 = 0; /*0x544789*/
  dword_ABC288 = 0; /*0x54478f*/
  dword_ABC290 = 0; /*0x544795*/
  dword_ABC294 = 0; /*0x54479a*/
  dword_ABC298 = 0; /*0x5447a0*/
  dword_ABC2A0 = 0; /*0x5447a6*/
  dword_ABC2A4 = 0; /*0x5447ab*/
  dword_ABC2A8 = 0; /*0x5447b1*/
  return 0; /*0x5447b7*/
}
} // namespace gamemd

// 0x544DF0
namespace gamemd {
void nullsub_155()
{
  ; /*0x544df0*/
}
} // namespace gamemd

// 0x544E30
namespace gamemd {
int MIXFile_AccumulateIndex(int a1)
{

  int result = a1; // eax /*0x544e36*/
  if ( a1 != 0xFFFF ) /*0x544e38*/
  {
    int v2 = 0; // esi /*0x544e44*/
    if ( g_X99Vec_AA1078.Count > 0 ) /*0x544e49*/
    {
      unsigned int *v3 = g_X99Vec_AA1078.Items; // edi /*0x544e4b*/
      do /*0x544e62*/
      {
        unsigned int *v4; // edx
        v4 = (unsigned int *)*v3; /*0x544e51*/
        if ( *(unsigned int *)*v3 > a1 ) /*0x544e55*/
          break; /*0x544e55*/
        ++v3; /*0x544e5a*/
        result += v4[1]; /*0x544e5d*/
        ++v2; /*0x544e5f*/
      }
      while ( v2 < g_X99Vec_AA1078.Count ); /*0x544e62*/
    }
  }
  return result; /*0x544e3a*/
}
} // namespace gamemd

// 0x544FF0
namespace gamemd {
char ReturnFalse2()
{
  return 0; /*0x544ff2*/
}
} // namespace gamemd

// 0x547CE0
namespace gamemd {
void nullsub_20()
{
  ; /*0x547ce0*/
}
} // namespace gamemd

// 0x549A00
namespace gamemd {
int sub_549A00(int a1, int a2, int * a3, int * a4)
{

  *a3 = 60 * a1 / 2; /*0x549a16*/
  *a4 = 30 * a1 / 2; /*0x549a29*/
  *a3 += -60 * a2 / 2; /*0x549a43*/
  int result = 30 * a2 / 2; // eax /*0x549a51*/
  *a4 += result; /*0x549a55*/
  return result; /*0x549a45*/
}
} // namespace gamemd

// 0x54A8A0
namespace gamemd {
int sub_54A8A0()
{
  dword_ABC560 = 0; /*0x54a8a2*/
  dword_ABC564 = 0; /*0x54a8a7*/
  dword_ABC568 = 0; /*0x54a8ac*/
  dword_ABC56C = 0; /*0x54a8b1*/
  return 0; /*0x54a8b6*/
}
} // namespace gamemd

// 0x54A900
namespace gamemd {
unsigned char * Bitfield_SetBit(int a1, int a2, int a3)
{

  char v3; // bl
  v3 = 1 << (a2 % 8); /*0x54a917*/
  unsigned char *result; // eax
  result = (unsigned char *)(a1 + a2 / 8); /*0x54a92a*/
  char v5; // cl
  if ( a3 ) /*0x54a920*/
    v5 = v3 | *result; /*0x54a92f*/
  else
    v5 = ~v3 & *result; /*0x54a946*/
  *result = v5; /*0x54a932*/
  return result; /*0x54a92c*/
}
} // namespace gamemd

// 0x54A990
namespace gamemd {
int E4Recv_54A990::sub_54A990()
{
  char v3; // al

  ObjectClass *v1 = this; // edi /*0x54a994*/
  int v2 = 0; // ebp /*0x54a996*/
  if ( !(*((unsigned char *)&(this->ptr_0))) ) /*0x54a998*/
  {
    do /*0x54a9a4*/
    {
      v3 = (v1->AbstractClass_1); /*0x54a99d*/
      ++v2; /*0x54a9a0*/
      v1 = &v1->AbstractClass_1; /*0x54a9a1*/
    }
    while ( !v3 ); /*0x54a9a4*/
  }
  int i; // esi
  for ( i = 0; i < 8; ++i ) /*0x54a9a6*/
  {
    if ( ((uint8_t)(1 << (i % 8)) & v1->ptr_0 + i / 8)) != 0 ) /*0x54a9c9*/
      break; /*0x54a9c9*/
  }
  return i + 8 * v2; /*0x54a9d4*/
}
} // namespace gamemd

// 0x54A9E0
namespace gamemd {
int E4Recv_54A9E0::sub_54A9E0()
{
  char v3; // al

  ObjectClass *v1 = this; // edi /*0x54a9e4*/
  int v2 = 0; // ebp /*0x54a9e6*/
  if ( (*((unsigned char *)&(this->ptr_0))) == 0xFF ) /*0x54a9eb*/
  {
    do /*0x54a9f4*/
    {
      v3 = (v1->AbstractClass_1); /*0x54a9ed*/
      ++v2; /*0x54a9f0*/
      v1 = &v1->AbstractClass_1; /*0x54a9f1*/
    }
    while ( v3 == -1 ); /*0x54a9f4*/
  }
  int i; // esi
  for ( i = 0; i < 8; ++i ) /*0x54a9f6*/
  {
    if ( ((uint8_t)(1 << (i % 8)) & v1->ptr_0 + i / 8)) == 0 ) /*0x54aa19*/
      break; /*0x54aa19*/
  }
  return i + 8 * v2; /*0x54aa24*/
}
} // namespace gamemd

// 0x54AA30
namespace gamemd {
void sub_54AA30()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x54aa3c*/
  dbl_ABC590 = Math::Sqrt(v0 + v0); /*0x54aa4e*/
}
} // namespace gamemd

// 0x54AA60
namespace gamemd {
void sub_54AA60()
{
  dbl_ABC5E0 = dbl_ABC590 / 60.0; /*0x54aa6c*/
}
} // namespace gamemd

// 0x54AA80
namespace gamemd {
void sub_54AA80()
{
  dbl_ABC5C8 = 1.0 / dbl_ABC5E0; /*0x54aa8c*/
}
} // namespace gamemd

// 0x54AAA0
namespace gamemd {
void sub_54AAA0()
{
  dbl_ABC5C0 = 0.0174532925199433 * 45.0; /*0x54aaac*/
}
} // namespace gamemd

// 0x54AAC0
namespace gamemd {
void sub_54AAC0()
{
  dbl_ABC598 = 0.0174532925199433 * 60.0; /*0x54aacc*/
}
} // namespace gamemd

// 0x54AAE0
namespace gamemd {
void sub_54AAE0()
{
  dbl_ABC570 = 0.0174532925199433 * 90.0; /*0x54aaec*/
}
} // namespace gamemd

// 0x54AB00
namespace gamemd {
long long sub_54AB00()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABC570 - dbl_ABC598); /*0x54ab12*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABC590 * 0.5); /*0x54ab26*/
  dword_ABC5E8 = result; /*0x54ab2b*/
  return result; /*0x54ab30*/
}
} // namespace gamemd

// 0x54AB40
namespace gamemd {
void sub_54AB40()
{
  dbl_ABC5A0 = Math::ArcTan((double)dword_ABC5E8 * 0.00390625); /*0x54ab57*/
}
} // namespace gamemd

// 0x54AB70
namespace gamemd {
void sub_54AB70()
{
  dbl_ABC5B8 = Math::ArcTan((double)(2 * dword_ABC5E8) / dbl_ABC590); /*0x54ab92*/
}
} // namespace gamemd

// 0x54ABA0
namespace gamemd {
long long sub_54ABA0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABC5E8) + 0.5); /*0x54abbb*/
  dword_ABC5DC = result; /*0x54abc0*/
  return result; /*0x54abc6*/
}
} // namespace gamemd

// 0x54ABD0
namespace gamemd {
int sub_54ABD0()
{
  dword_ABC588 = 0; /*0x54abd2*/
  g_abs_ABC58A = 0; /*0x54abd8*/
  return 0; /*0x54abde*/
}
} // namespace gamemd

// 0x54ABE0
namespace gamemd {
int sub_54ABE0()
{
  dword_ABC5A8 = 0; /*0x54abe2*/
  dword_ABC5AC = 0; /*0x54abe7*/
  dword_ABC5B0 = 0; /*0x54abec*/
  return 0; /*0x54abf1*/
}
} // namespace gamemd

// 0x54AC00
namespace gamemd {
int sub_54AC00()
{
  dword_ABC5D8 = 0; /*0x54ac05*/
  dword_ABC5D0 = 128; /*0x54ac0f*/
  dword_ABC5D4 = 128; /*0x54ac14*/
  return 128; /*0x54ac19*/
}
} // namespace gamemd

// 0x54AC20
namespace gamemd {
int sub_54AC20()
{
  dword_ABC578 = 0; /*0x54ac22*/
  dword_ABC57C = 0; /*0x54ac27*/
  dword_ABC580 = 0; /*0x54ac2c*/
  dword_ABC584 = 0; /*0x54ac31*/
  return 0; /*0x54ac36*/
}
} // namespace gamemd

// 0x54D0C0
namespace gamemd {
void nullsub_156()
{
  ; /*0x54d0c0*/
}
} // namespace gamemd

// 0x54E050
namespace gamemd {
void sub_54E050()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x54e05c*/
  unk_ABC638 = Math::Sqrt(v0 + v0); /*0x54e06e*/
}
} // namespace gamemd

// 0x54E080
namespace gamemd {
void sub_54E080()
{
  unk_ABC688 = unk_ABC638 / 60.0; /*0x54e08c*/
}
} // namespace gamemd

// 0x54E0A0
namespace gamemd {
void sub_54E0A0()
{
  unk_ABC670 = 1.0 / unk_ABC688; /*0x54e0ac*/
}
} // namespace gamemd

// 0x54E0C0
namespace gamemd {
void sub_54E0C0()
{
  unk_ABC668 = 0.0174532925199433 * 45.0; /*0x54e0cc*/
}
} // namespace gamemd

// 0x54E0E0
namespace gamemd {
void sub_54E0E0()
{
  unk_ABC640 = 0.0174532925199433 * 60.0; /*0x54e0ec*/
}
} // namespace gamemd

// 0x54E100
namespace gamemd {
void sub_54E100()
{
  dbl_ABC5F0 = 0.0174532925199433 * 90.0; /*0x54e10c*/
}
} // namespace gamemd

// 0x54E120
namespace gamemd {
long long sub_54E120()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABC5F0 - unk_ABC640); /*0x54e132*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * unk_ABC638 * 0.5); /*0x54e146*/
  unk_ABC690 = result; /*0x54e14b*/
  return result; /*0x54e150*/
}
} // namespace gamemd

// 0x54E160
namespace gamemd {
void sub_54E160()
{
  unk_ABC648 = Math::ArcTan((double)unk_ABC690 * 0.00390625); /*0x54e177*/
}
} // namespace gamemd

// 0x54E190
namespace gamemd {
void sub_54E190()
{
  unk_ABC660 = Math::ArcTan((double)(2 * unk_ABC690) / unk_ABC638); /*0x54e1b2*/
}
} // namespace gamemd

// 0x54E1C0
namespace gamemd {
long long sub_54E1C0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * unk_ABC690) + 0.5); /*0x54e1db*/
  unk_ABC684 = result; /*0x54e1e0*/
  return result; /*0x54e1e6*/
}
} // namespace gamemd

// 0x54E1F0
namespace gamemd {
int sub_54E1F0()
{
  unk_ABC630 = 0; /*0x54e1f2*/
  unk_ABC632 = 0; /*0x54e1f8*/
  return 0; /*0x54e1fe*/
}
} // namespace gamemd

// 0x54E200
namespace gamemd {
int sub_54E200()
{
  unk_ABC650 = 0; /*0x54e202*/
  unk_ABC654 = 0; /*0x54e207*/
  unk_ABC658 = 0; /*0x54e20c*/
  return 0; /*0x54e211*/
}
} // namespace gamemd

// 0x54E220
namespace gamemd {
int sub_54E220()
{
  unk_ABC680 = 0; /*0x54e225*/
  unk_ABC678 = 128; /*0x54e22f*/
  unk_ABC67C = 128; /*0x54e234*/
  return 128; /*0x54e239*/
}
} // namespace gamemd

// 0x54E240
namespace gamemd {
int sub_54E240()
{
  unk_ABC620 = 0; /*0x54e242*/
  unk_ABC624 = 0; /*0x54e247*/
  unk_ABC628 = 0; /*0x54e24c*/
  unk_ABC62C = 0; /*0x54e251*/
  return 0; /*0x54e256*/
}
} // namespace gamemd

// 0x54E260
namespace gamemd {
int sub_54E260()
{

  g_MissionQueueFrame.nextScenario[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x54e26d*/
  g_MissionQueueFrame.nextScenario[2] = 0; /*0x54e276*/
  sub_54EBF0((VectorClass *)&g_MissionQueueFrame.nextScenario[3], 0, 0); /*0x54e280*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x54e298*/
  g_MissionQueueFrame.nextScenario[8] = 10; /*0x54e2a2*/
  g_MissionQueueFrame.nextScenario[7] = 0; /*0x54e2ac*/
  g_MissionQueueFrame.nextScenario[0] = *(unsigned int *)&((unsigned int *)&stru_A8EB00)[416]; /*0x54e2b6*/
  int v2; // [esp+4h] [ebp-8h]
  g_MissionQueueFrame.nextScenario[1] = v2; /*0x54e2bb*/
  g_MissionQueueFrame.nextScenario[2] = 100; /*0x54e2c1*/
  return atexit(loc_54E2D0); /*0x54e2cf*/
}
} // namespace gamemd

// 0x54E360
namespace gamemd {
unsigned int * E4Recv_54E360::sub_54E360()
{


  this->AbstractClass = *(void **)&TeamTypeClass_Array; /*0x54e370*/
  this->M8 = 0; /*0x54e375*/
  this->M16 = 0; /*0x54e378*/
  this->M20 = 0; /*0x54e37b*/
  LOBYTE(this->q018) = 1; /*0x54e37e*/
  BYTE1(this->M25) = 0; /*0x54e382*/
  /* X11: ptr_0 install elided (X67 recv-slot, RHS g_ptr_7E3238) */  /*0x54e385*/
  this->M24 = (void *)10; /*0x54e38c*/
  this->M28 = 0; /*0x54e393*/
  this->AbstractClass = *(void **)&DataGlobal_A8EB00[644]; /*0x54e39e*/
  void *v2; // [esp+8h] [ebp-8h]
  this->M4 = v2; /*0x54e3a4*/
  this->M8 = (void *)100; /*0x54e3a7*/
  return &this->AbstractClass; /*0x54e3aa*/

}
} // namespace gamemd

// 0x54E690
namespace gamemd {
void E4Recv_54E690::sub_54E690()
{

  void (**ptr_8)(void **); // edx
  void **p_vtable3; // esi
  void **v5; // ecx
  int abstractFlags; // edi
  void *v7; // eax

  int i; // esi
  for ( i = this->q050 - 1; i >= 0; --i ) /*0x54e699*/
    __3_YAXPAX_Z(*(void **)(this->q050 + 4 * i)); /*0x54e6a2*/
  ptr_8 = (void (**)(void **))this->M12; /*0x54e6ad*/
  p_vtable3 = &this->M12; /*0x54e6b0*/
  v5 = &this->q050; /*0x54e6b3*/
  abstractFlags = this->abstractFlags; /*0x54e6b5*/
  ptr_8[3](v5); /*0x54e6b8*/
  (*((void (**)(void **, int, unsigned int))*p_vtable3 + 2))(p_vtable3, abstractFlags, 0); /*0x54e6c3*/
  v7 = p_vtable3[1]; /*0x54e6c6*/
  /* X11: ptr_0 install elided (X67 star-deref, RHS g_ptr_7E8500) */  /*0x54e6c9*/
  if ( v7 && *((unsigned char *)p_vtable3 + 13) ) /*0x54e6d3*/
  {
    __3_YAXPAX_Z(v7); /*0x54e6d9*/
    p_vtable3[1] = 0; /*0x54e6e1*/
  }
  *((unsigned char *)p_vtable3 + 13) = 0; /*0x54e6e4*/
  p_vtable3[2] = 0; /*0x54e6e7*/

}
} // namespace gamemd

// 0x54EBF0
namespace gamemd {
unsigned int * E4Recv_54EBF0::sub_54EBF0(int a2, int a3)
{

  this->Items = 0; /*0x54ebfb*/
  this->Capacity = a2; /*0x54ebfe*/
  this->IsInitialized = 1; /*0x54ec01*/
  this->IsAllocated = 0; /*0x54ec05*/
  /* X11: ptr_0 install elided (implicit via VectorClass virtuals 0x54ec08) */
  if ( a2 ) /*0x54ec0e*/
  {
    if ( a3 ) /*0x54ec16*/
    {
      this->Items = (void *)a3; /*0x54ec18*/
      return &this->ptr_0; /*0x54ec1e*/
    }
    this->Items = __2_YAPAXI_Z(4 * a2); /*0x54ec2d*/
    this->IsAllocated = 1; /*0x54ec30*/
  }
  return &this->ptr_0; /*0x54ec1d*/

}
} // namespace gamemd

// 0x54EC40
namespace gamemd {
int sub_54EC40()
{
  unk_ABC6A0 = 0; /*0x54ec42*/
  unk_ABC6A4 = 0; /*0x54ec47*/
  unk_ABC6A8 = 0; /*0x54ec4c*/
  unk_ABC6AC = 0; /*0x54ec51*/
  return 0; /*0x54ec56*/
}
} // namespace gamemd

// 0x54EC60
namespace gamemd {
void sub_54EC60()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x54ec6c*/
  unk_ABC6B8 = Math::Sqrt(v0 + v0); /*0x54ec7e*/
}
} // namespace gamemd

// 0x54EC90
namespace gamemd {
void sub_54EC90()
{
  dbl_ABC708 = unk_ABC6B8 / 60.0; /*0x54ec9c*/
}
} // namespace gamemd

// 0x54ECB0
namespace gamemd {
void sub_54ECB0()
{
  unk_ABC6F0 = 1.0 / dbl_ABC708; /*0x54ecbc*/
}
} // namespace gamemd

// 0x54ECD0
namespace gamemd {
void sub_54ECD0()
{
  unk_ABC6E8 = 0.0174532925199433 * 45.0; /*0x54ecdc*/
}
} // namespace gamemd

// 0x54ECF0
namespace gamemd {
void sub_54ECF0()
{
  unk_ABC6C0 = 0.0174532925199433 * 60.0; /*0x54ecfc*/
}
} // namespace gamemd

// 0x54ED10
namespace gamemd {
void sub_54ED10()
{
  unk_ABC698 = 0.0174532925199433 * 90.0; /*0x54ed1c*/
}
} // namespace gamemd

// 0x54ED30
namespace gamemd {
long long sub_54ED30()
{

  double v0; // st7
  v0 = Math::Sin(unk_ABC698 - unk_ABC6C0); /*0x54ed42*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * unk_ABC6B8 * 0.5); /*0x54ed56*/
  dword_ABC710 = result; /*0x54ed5b*/
  return result; /*0x54ed60*/
}
} // namespace gamemd

// 0x54ED70
namespace gamemd {
void sub_54ED70()
{
  unk_ABC6C8 = Math::ArcTan((double)dword_ABC710 * 0.00390625); /*0x54ed87*/
}
} // namespace gamemd

// 0x54EDA0
namespace gamemd {
void sub_54EDA0()
{
  unk_ABC6E0 = Math::ArcTan((double)(2 * dword_ABC710) / unk_ABC6B8); /*0x54edc2*/
}
} // namespace gamemd

// 0x54EDD0
namespace gamemd {
long long sub_54EDD0()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABC710) + 0.5); /*0x54edeb*/
  dword_ABC704 = result; /*0x54edf0*/
  return result; /*0x54edf6*/
}
} // namespace gamemd

// 0x54EE00
namespace gamemd {
int sub_54EE00()
{
  unk_ABC6B0 = 0; /*0x54ee02*/
  unk_ABC6B2 = 0; /*0x54ee08*/
  return 0; /*0x54ee0e*/
}
} // namespace gamemd

// 0x54EE10
namespace gamemd {
int sub_54EE10()
{
  unk_ABC6D0 = 0; /*0x54ee12*/
  unk_ABC6D4 = 0; /*0x54ee17*/
  unk_ABC6D8 = 0; /*0x54ee1c*/
  return 0; /*0x54ee21*/
}
} // namespace gamemd

// 0x54EE30
namespace gamemd {
int sub_54EE30()
{
  dword_ABC700 = 0; /*0x54ee35*/
  unk_ABC6F8 = 128; /*0x54ee3f*/
  dword_ABC6FC = 128; /*0x54ee44*/
  return 128; /*0x54ee49*/
}
} // namespace gamemd

// 0x54EE50
namespace gamemd {
void nullsub_157()
{
  ; /*0x54ee50*/
}
} // namespace gamemd

// 0x54F6D0
namespace gamemd {
bool E4Recv_54F6D0::sub_54F6D0()
{

  return this->railgunParticles == this->unk1Particles; /*0x54f6e1*/

}
} // namespace gamemd

// 0x54FBB0
namespace gamemd {
void sub_54FBB0()
{

  long double v0; // st7
  v0 = pow(256.0, 2.0); /*0x54fbbc*/
  dbl_ABC7C0 = Math::Sqrt(v0 + v0); /*0x54fbce*/
}
} // namespace gamemd

// 0x54FBE0
namespace gamemd {
void sub_54FBE0()
{
  dbl_ABC8B0 = dbl_ABC7C0 / 60.0; /*0x54fbec*/
}
} // namespace gamemd

// 0x54FC00
namespace gamemd {
void sub_54FC00()
{
  dbl_ABC898 = 1.0 / dbl_ABC8B0; /*0x54fc0c*/
}
} // namespace gamemd

// 0x54FC20
namespace gamemd {
void sub_54FC20()
{
  dbl_ABC890 = 0.0174532925199433 * 45.0; /*0x54fc2c*/
}
} // namespace gamemd

// 0x54FC40
namespace gamemd {
void sub_54FC40()
{
  dbl_ABC7D0 = 0.0174532925199433 * 60.0; /*0x54fc4c*/
}
} // namespace gamemd

// 0x54FC60
namespace gamemd {
void sub_54FC60()
{
  dbl_ABC720 = 0.0174532925199433 * 90.0; /*0x54fc6c*/
}
} // namespace gamemd

// 0x54FC80
namespace gamemd {
long long sub_54FC80()
{

  double v0; // st7
  v0 = Math::Sin(dbl_ABC720 - dbl_ABC7D0); /*0x54fc92*/
  int64_t result; // rax
  result = Math::RoundToInt(v0 * dbl_ABC7C0 * 0.5); /*0x54fca6*/
  dword_ABC8BC = result; /*0x54fcab*/
  return result; /*0x54fcb0*/
}
} // namespace gamemd

// 0x54FCC0
namespace gamemd {
void sub_54FCC0()
{
  dbl_ABC7D8 = Math::ArcTan((double)dword_ABC8BC * 0.00390625); /*0x54fcd7*/
}
} // namespace gamemd

// 0x54FCF0
namespace gamemd {
void sub_54FCF0()
{
  dbl_ABC7F0 = Math::ArcTan((double)(2 * dword_ABC8BC) / dbl_ABC7C0); /*0x54fd12*/
}
} // namespace gamemd

// 0x54FD20
namespace gamemd {
long long sub_54FD20()
{

  int64_t result; // rax
  result = Math::RoundToInt((double)(4 * dword_ABC8BC) + 0.5); /*0x54fd3b*/
  dword_ABC8AC = result; /*0x54fd40*/
  return result; /*0x54fd46*/
}
} // namespace gamemd

// 0x54FD50
namespace gamemd {
int sub_54FD50()
{
  word_ABC7B8 = 0; /*0x54fd52*/
  word_ABC7BA = 0; /*0x54fd58*/
  return 0; /*0x54fd5e*/
}
} // namespace gamemd

// 0x54FD60
namespace gamemd {
int sub_54FD60()
{
  dword_ABC7E0 = 0; /*0x54fd62*/
  dword_ABC7E4 = 0; /*0x54fd67*/
  dword_ABC7E8 = 0; /*0x54fd6c*/
  return 0; /*0x54fd71*/
}
} // namespace gamemd

// 0x54FD80
namespace gamemd {
int sub_54FD80()
{
  dword_ABC8A8 = 0; /*0x54fd85*/
  dword_ABC8A0 = 128; /*0x54fd8f*/
  dword_ABC8A4 = 128; /*0x54fd94*/
  return 128; /*0x54fd99*/
}
} // namespace gamemd

// 0x54FDA0
namespace gamemd {
int sub_54FDA0()
{
  dword_ABC728 = 0; /*0x54fda2*/
  dword_ABC72C = 0; /*0x54fda7*/
  dword_ABC730 = 0; /*0x54fdac*/
  dword_ABC734 = 0; /*0x54fdb1*/
  return 0; /*0x54fdb6*/
}
} // namespace gamemd

// 0x54FDC0
namespace gamemd {
int sub_54FDC0()
{
  dword_ABC87C = 0; /*0x54fdc7*/
  dword_ABC880 = 0; /*0x54fdcc*/
  byte_ABC884 = 1; /*0x54fdd1*/
  byte_ABC885 = 0; /*0x54fdd8*/
  dword_ABC878 = (int)&g_ptr_7E3238; /*0x54fddd*/
  dword_ABC88C = 10; /*0x54fde7*/
  dword_ABC888 = 0; /*0x54fdf1*/
  return atexit(sub_54FE00); /*0x54fdfc*/
}
} // namespace gamemd

// 0x54FE00
namespace gamemd {
void sub_54FE00()
{
  if ( (byte_ABC718 & 1) == 0 ) /*0x54fe0a*/
  {
    dword_ABC878 = (int)&g_ptr_7E8500; /*0x54fe0e*/
    byte_ABC718 |= 1u; /*0x54fe21*/
    if ( dword_ABC87C ) /*0x54fe27*/
    {
      if ( byte_ABC885 ) /*0x54fe31*/
      {
        operator delete((void *)(dword_ABC87C)); /*0x54fe34*/
        dword_ABC87C = 0; /*0x54fe3c*/
      }
    }
    byte_ABC885 = 0; /*0x54fe46*/
    dword_ABC880 = 0; /*0x54fe4d*/
  }
}
} // namespace gamemd
