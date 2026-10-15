// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MIXFile_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MixFileClass_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Mixer_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/BTree_e4.hpp"
#include "e4/classes/VoxClass_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/FontClass_e4.hpp"
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/TabClass_e4.hpp"

// 0x530460
namespace gamemd {  // G42.18 ns repair
MixFileClass * * MixFile::LoadAll()
{

  unsigned int *v1; // eax
  char v2; // bl
  MixFileClass *v3; // eax
  MixFileClass *v5; // eax
  unsigned int *v6; // eax
  MixFileClass *v7; // eax
  unsigned int *v8; // eax
  MixFileClass *v9; // eax
  MixFileClass *v10; // eax
  unsigned int *v11; // eax
  char v12; // bl
  MixFileClass *v13; // eax
  unsigned int *v14; // eax
  char v15; // bl
  MixFileClass *v16; // eax
  unsigned int *v17; // eax
  char v18; // bl
  MixFileClass *v19; // eax
  int v20; // esi
  MixFileClass *v21; // eax
  MixFileClass *v22; // eax
  unsigned int *v23; // esi
  int v24; // eax
  MixFileClass *v25; // eax
  MixFileClass *v26; // eax
  unsigned int *v27; // esi
  int v28; // eax
  unsigned int *v29; // eax
  char v30; // bl
  MixFileClass *v31; // eax
  unsigned int *v32; // eax
  char v33; // bl
  MixFileClass *v34; // eax
  unsigned int *v35; // eax
  char v36; // bl
  MixFileClass *v37; // eax
  unsigned int *v38; // eax
  char v39; // bl
  MixFileClass *v40; // eax
  unsigned int *v41; // eax
  char v42; // bl
  // w15f4: v3-export truncated tail (RHS lost): MixFil... ...
  // live body via get_context/0x530460 — w15f4 regrafted decls only
  MixFileClass *v43; // eax
  unsigned int *v44; // eax
  char v45; // bl
  unsigned int *v46; // eax
  char v47; // bl
  unsigned int *v48; // eax
  char v49; // bl
  unsigned int *v50; // eax
  char v51; // bl
  unsigned int *v52; // eax
  char v53; // bl
  unsigned int *v54; // eax
  char v55; // bl
  MixFileClass *v56; // eax
  MixFileClass *v57; // eax
  unsigned int *v58; // esi
  int v59; // eax
  MixFileClass *v60; // eax
  MixFileClass *v61; // eax
  unsigned int *v62; // esi
  int v63; // eax
  int v64; // esi
  unsigned int *v65; // eax
  char v66; // bl
  MixFileClass *v67; // eax
  unsigned int *v68; // eax
  char v69; // bl
  CCFileClass v70; // [esp+38h] [ebp-198h] BYREF
  int v71[3]; // [esp+90h] [ebp-140h] BYREF
  int v72; // [esp+9Ch] [ebp-134h]
  int v73; // [esp+A4h] [ebp-12Ch]
  RawFileClass v74; // [esp+A8h] [ebp-128h] BYREF
  char Buffer[260]; // [esp+CCh] [ebp-104h] BYREF
}
}  // G42.18 ns repair
// 0x534FA0
namespace gamemd {
AbstractClass * * MixFile::LoadSide(void * aUimdIni)
{
  unsigned int *v12; // eax
  CCFileClass v18; // [esp+60h] [ebp-D8h] BYREF
  CCFileClass v21; // [esp+CCh] [ebp-6Ch] BYREF
  int v22[3]; // [esp+124h] [ebp-14h] BYREF
  int v23; // [esp+130h] [ebp-8h]

  int v1; // esi
  v1 = (int)aUimdIni; /*0x534faa*/
  ((VoxClass *)aUimdIni)->SetEVAIndex(); /*0x534fac*/
  if ( v1 == 2 ) /*0x534fb4*/
    v1 = 1; /*0x534fb6*/
  unsigned int v2; // ebx
  v2 = v1; /*0x534fbb*/
  Game *v16; // [esp+1Ch] [ebp-11Ch]
  v16 = (Game *)v1; /*0x534fc0*/
  if ( v1 == -1 ) /*0x534fc4*/
  {
  unsigned int YRCD; // eax
    YRCD = AlwaysFindYRCD(); /*0x534fd1*/
    if ( YRCD >= 2 ) /*0x534fda*/
    {
      Debug::Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v16 = (Game *)YRCD; /*0x534ffb*/
    v2 = YRCD; /*0x534fff*/
  }
  Debug::Log(); /*0x53500b*/
  if ( dword_884E68 ) /*0x53501a*/
  {
    Debug::Log(); /*0x535025*/
    if ( dword_884E68 ) /*0x535035*/
      (**(void (***)(int, int))dword_884E68)(dword_884E68, 1); /*0x53503b*/
    dword_884E68 = 0; /*0x53503d*/
  }
  if ( dword_884E74 ) /*0x53504a*/
  {
    Debug::Log(); /*0x535055*/
    if ( dword_884E74 ) /*0x535065*/
      (**(void (***)(int, int))dword_884E74)(dword_884E74, 1); /*0x53506b*/
    dword_884E74 = 0; /*0x53506d*/
  }
  if ( dword_884E70 ) /*0x53507a*/
  {
    Debug::Log(); /*0x535085*/
    if ( dword_884E70 ) /*0x535095*/
      (**(void (***)(int, int))dword_884E70)(dword_884E70, 1); /*0x53509b*/
    dword_884E70 = 0; /*0x53509d*/
  }
  if ( dword_884E78 ) /*0x5350aa*/
  {
    Debug::Log(); /*0x5350b5*/
    if ( dword_884E78 ) /*0x5350c5*/
      (**(void (***)(int, int))dword_884E78)(dword_884E78, 1); /*0x5350cb*/
    dword_884E78 = 0; /*0x5350cd*/
  }
  unsigned int v5; // esi
  v5 = v2 + 1; /*0x5350d3*/
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  sprintf(Buffer, "SIDEC%02dMD.MIX", v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  unsigned int *v6; // eax
  v6 = CCFileClass::Construct(&v18, Buffer); /*0x535101*/
  char v7; // bl
  v7 = v6->vt_slot_20(0); /*0x535115*/
  v18.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&vt_CCFileClass; /*0x535117*/
  int v20; // [esp+C4h] [ebp-74h]
  v20 = 0; /*0x53511f*/
  int v19[3]; // [esp+B8h] [ebp-80h] BYREF
  Vector::Clear((int)v19); /*0x535126*/
  v18.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&off_7E1668; /*0x535134*/
  ((BufferIOFileClass *)(&v18))->Dtor(); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
  MixFileClass *v8; // eax
    v8 = (MixFileClass *)operator new(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      dword_884E70 = (int)((MixFileClass *)(v8))->FromFile(Buffer, (int)dword_886980); /*0x535160*/
    else
      dword_884E70 = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, "SIDEC%02d.MIX", v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  unsigned int *v9; // eax
  v9 = CCFileClass::Construct(&v18, Buffer); /*0x5351a4*/
  char v10; // bl
  v10 = v9->vt_slot_20(0); /*0x5351b8*/
  v18.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&vt_CCFileClass; /*0x5351ba*/
  v20 = 0; /*0x5351c2*/
  Vector::Clear((int)v19); /*0x5351c9*/
  v18.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&off_7E1668; /*0x5351d2*/
  ((BufferIOFileClass *)(&v18))->Dtor(); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
  MixFileClass *v11; // eax
    v11 = (MixFileClass *)operator new(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      dword_884E74 = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = ((MixFileClass *)(v11))->FromFile(Buffer, (int)dword_886980); /*0x5351f9*/
    dword_884E74 = (int)v12; /*0x5351fe*/
  }
  else
  {
    v12 = (unsigned int *)dword_884E74; /*0x535225*/
  }
  if ( v12 ) /*0x53522c*/
  {
    ReturnTrue(0); /*0x53524b*/
    sprintf(Buffer, "SIDENC%02d.MIX", v5); /*0x53525b*/
    Debug::Log(); /*0x53526a*/
  unsigned int *v13; // eax
    v13 = CCFileClass::Construct(&v18, Buffer); /*0x53527b*/
  char v14; // bl
    v14 = v13->vt_slot_20(0); /*0x535294*/
    v18.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&vt_CCFileClass; /*0x535296*/
    v20 = 0; /*0x53529a*/
    Vector::Clear((int)v19); /*0x5352a1*/
    v18.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&off_7E1668; /*0x5352aa*/
    ((gamemd::BufferIOFileClass *)(&v18))->Dtor(); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
  MixFileClass *v15; // eax
      v15 = (MixFileClass *)operator new(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        dword_884E78 = (int)((MixFileClass *)(v15))->FromFile(Buffer, (int)dword_886980); /*0x5352d6*/
      else
        dword_884E78 = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    (v16)->InitializeToolTipColor(); /*0x5352ec*/
    CCFileClass::Construct(&v21, aUimdIni); /*0x5352fd*/
    if ( CCINIClass::Load(&dword_887208, (int)&v21, 0, 0) ) /*0x535311*/
    {
      ((SidebarClass *)dword_8871E0)->ReadButtonList(); /*0x53533d*/
      ((TabClass *)&dword_87F7E8)->LoadButtonSHPs(); /*0x535347*/
      v21.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&vt_CCFileClass; /*0x535353*/
      v23 = 0; /*0x53535a*/
      Vector::Clear((int)v22); /*0x535361*/
      v21.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&off_7E1668; /*0x53536d*/
      ((BufferIOFileClass *)(&v21))->Dtor(); /*0x535374*/
      return (gamemd::AbstractClass **)(1); /*0x535379*/
    }
    else
    {
      Debug::Log(); /*0x53538b*/
      v21.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&vt_CCFileClass; /*0x53539a*/
      v23 = 0; /*0x5353a1*/
      Vector::Clear((int)v22); /*0x5353a8*/
      v21.vtable1.__tail_0.__tail_0.__tail_0 = (FileClass)&off_7E1668; /*0x5353b4*/
      ((BufferIOFileClass *)(&v21))->Dtor(); /*0x5353bb*/
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
// 0x627590
namespace gamemd {
unsigned int * MIXFile::Load(ObjectClass * a2)
{

  Struct v39[192]; // [esp+124h] [ebp-300h] BYREF

  MIXFile *v2; // ebp
  v2 = this; /*0x627598*/
  MIXFile *v36; // [esp+1Ch] [ebp-408h]
  v36 = this; /*0x62759c*/
  int v3; // edx
  v3 = *(unsigned int *)this->__pad_000; /*0x6275a0*/
  if ( *(unsigned int *)this->__pad_000 == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  char String[256]; // [esp+24h] [ebp-400h] BYREF
  strcpy(String, a2); /*0x6275d6*/
  strcat(String, (const char *)&off_7E1BC6 + 112 * v3); /*0x627611*/
  strcat(String, asc_826598); /*0x62763d*/
  strcat(String, (const char *)off_836464); /*0x62766a*/
  _strupr(String); /*0x627678*/
  Struct *v5; // esi
  v5 = v39; /*0x627680*/
  int v6; // edi
  v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    (v5)->Zero3(); /*0x62768e*/
    v5 = &v5->Struct_3; /*0x627693*/
    --v6; /*0x627696*/
  }
  while ( v6 ); /*0x627697*/
  void *v7; // eax
  v7 = SearchMIXFile(String, 0); /*0x62769f*/
  int v8; // ebx
  v8 = 0; /*0x6276a4*/
  if ( !v7 ) /*0x6276a8*/
    return 0; /*0x6276ad*/
  memcpy(v39, v7, sizeof(v39)); /*0x6276c7*/
  int i; // esi
  for ( i = 0; i < 256; ++i ) /*0x6276c9*/
  {
  char *v10; // eax
    v10 = &v39->u32_2 * (i % 256) + i % 256; /*0x6276e2*/
  __int16 v31; // [esp+10h] [ebp-414h]
    v31 = *(unsigned short *)v10; /*0x6276ea*/
  char v11; // cl
    v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(unsigned short *)v10; /*0x6276f9*/
    v10[1] = 4 * HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  int v12; // edi
  v12 = *(unsigned int *)(*v2->u32_4.__pad_0 + 16); /*0x627719*/
  int v37; // [esp+20h] [ebp-404h]
  v37 = v12; /*0x62771c*/
  int v13; // eax
  v13 = (int)(__2_YAPAXI_Z(0x18u)); /*0x627720*/
  unsigned int *v14; // esi
  v14 = (unsigned int *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(unsigned int *)(v13 + 4) = 0; /*0x627730*/
    *(unsigned int *)(v13 + 8) = 20; /*0x627733*/
    *(unsigned char *)(v13 + 12) = 1; /*0x62773a*/
    *(unsigned char *)(v13 + 13) = 0; /*0x62773e*/
    *(unsigned int *)v13 = (unsigned int)(&vt_VectorClass); /*0x627742*/
    *(unsigned int *)(v13 + 4) = (unsigned int)(__2_YAPAXI_Z(0x50u)); /*0x627750*/
    *((unsigned char *)v14 + 13) = 1; /*0x627753*/
    *v14 = (unsigned int)(&vt_DynamicVectorClass); /*0x627757*/
    v14[5] = 10; /*0x62775d*/
    v14[4] = 0; /*0x627764*/
  }
  else
  {
    v14 = 0; /*0x627769*/
  }
  int v35; // [esp+18h] [ebp-40Ch]
  v35 = 0; /*0x62776d*/
  if ( v12 > 0 ) /*0x627771*/
  {
  int v32; // [esp+10h] [ebp-414h]
    v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
  char *v15; // ebp
      v15 = *(char **)(*((unsigned int *)v2->field_4 + 1) + 4 * v8); /*0x62779b*/
  __int16 *v16; // edx
      v16 = (__int16 *)(v32 + *(unsigned int *)(*v36->u32_4.__pad_0 + 4)); /*0x6277a1*/
  __int16 v33; // [esp+14h] [ebp-410h] BYREF
      v33 = *v16; /*0x6277a6*/
  char v34; // [esp+16h] [ebp-40Eh]
      v34 = v16->u32_2; /*0x6277ae*/
  char *v17; // eax
      v17 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x6277b2*/
  char *inited; // edi
      if ( v17 ) /*0x6277bc*/
        inited = FontClass::InitMetrics(v17, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 1, 0); /*0x6277dc*/
      else
        inited = 0; /*0x6277e0*/
  int v19; // ebx
      v19 = 2 * v8; /*0x6277e2*/
      *(unsigned int *)inited = v19; /*0x6277e4*/
  int v20; // eax
      v20 = v14[2]; /*0x6277e6*/
  int v21; // ecx
      if ( v14[4] < v20 /*0x627809*/
        || (v14->u32_D || !v20)
        && (v21 = v14[5], v21 > 0)
        && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(*v14 + 8))(v14, v20 + v21, 0) )
      {
  int v22; // eax
        v22 = v14[4]; /*0x627810*/
  int v23; // edx
        v23 = v14[1]; /*0x627813*/
        v14[4] = v22 + 1; /*0x627819*/
        *(unsigned int *)(v23 + 4 * v22) = (unsigned int)(inited); /*0x62781c*/
      }
  char *v24; // eax
      v24 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x627824*/
  char *v25; // edi
      if ( v24 ) /*0x62782e*/
        v25 = FontClass::InitMetrics(v24, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 53, 0); /*0x62784e*/
      else
        v25 = 0; /*0x627852*/
      *(unsigned int *)v25 = v19 + 1; /*0x627855*/
  int v26; // eax
      v26 = v14[2]; /*0x627857*/
  int v27; // ecx
      if ( v14[4] < v26 /*0x62787a*/
        || (v14->u32_D || !v26)
        && (v27 = v14[5], v27 > 0)
        && (*(unsigned __int8 (**)(unsigned int *, int, unsigned int))(*v14 + 8))(v14, v26 + v27, 0) )
      {
  int v28; // eax
        v28 = v14[4]; /*0x627881*/
  int v29; // edx
        v29 = v14[1]; /*0x627884*/
        v14[4] = v28 + 1; /*0x62788a*/
        *(unsigned int *)(v29 + 4 * v28) = (unsigned int)(v25); /*0x62788d*/
      }
  bool v30; // cc
      v30 = ++v35 < v37; /*0x6278a0*/
      v32 += 3; /*0x6278a6*/
      if ( !v30 ) /*0x6278aa*/
        break; /*0x6278aa*/
      v8 = v35; /*0x62777d*/
      v2 = v36; /*0x627781*/
    }
  }
  return v14; /*0x6275a8*/

}
}