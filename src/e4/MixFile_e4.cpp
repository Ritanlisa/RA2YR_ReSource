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

// 0x530460
namespace gamemd {
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
  MixFil... [19161 chars total]
}
}
// 0x534FA0
namespace gamemd {
AbstractClass * * MixFile::LoadSide(void * aUimdIni)
{

  int v1; // esi
  unsigned int v2; // ebx
  unsigned int YRCD; // eax
  unsigned int * v5;
  unsigned int *v6; // eax
  char v7; // bl
  MixFileClass *v8; // eax
  unsigned int *v9; // eax
  char v10; // bl
  MixFileClass *v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  char v14; // bl
  MixFileClass *v15; // eax
  Game *v16; // [esp+1Ch] [ebp-11Ch]
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  CCFileClass v18; // [esp+60h] [ebp-D8h] BYREF
  int v19[3]; // [esp+B8h] [ebp-80h] BYREF
  int v20; // [esp+C4h] [ebp-74h]
  CCFileClass v21; // [esp+CCh] [ebp-6Ch] BYREF
  int v22[3]; // [esp+124h] [ebp-14h] BYREF
  int v23; // [esp+130h] [ebp-8h]

  v1 = (int)this; /*0x534faa*/
  ((VoxClass *)((VoxClass *)this))->SetEVAIndex(); /*0x534fac*/
  if ( v1 == 2 ) /*0x534fb4*/
    v1 = 1; /*0x534fb6*/
  v2 = v1; /*0x534fbb*/
  v16 = (Game *)v1; /*0x534fc0*/
  if ( v1 == -1 ) /*0x534fc4*/
  {
    YRCD = AlwaysFindYRCD(); /*0x534fd1*/
    if ( YRCD >= 2 ) /*0x534fda*/
    {
      ((gamemd::Debug *)this)->Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v16 = (Game *)YRCD; /*0x534ffb*/
    v2 = YRCD; /*0x534fff*/
  }
  ((gamemd::Debug *)this)->Log(); /*0x53500b*/
  if ( dword_884E68 ) /*0x53501a*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x535025*/
    if ( dword_884E68 ) /*0x535035*/
      (**(void (***)(int, int))dword_884E68)(dword_884E68, 1); /*0x53503b*/
    dword_884E68 = 0; /*0x53503d*/
  }
  if ( dword_884E74 ) /*0x53504a*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x535055*/
    if ( dword_884E74 ) /*0x535065*/
      (**(void (***)(int, int))dword_884E74)(dword_884E74, 1); /*0x53506b*/
    dword_884E74 = 0; /*0x53506d*/
  }
  if ( dword_884E70 ) /*0x53507a*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x535085*/
    if ( dword_884E70 ) /*0x535095*/
      (**(void (***)(int, int))dword_884E70)(dword_884E70, 1); /*0x53509b*/
    dword_884E70 = 0; /*0x53509d*/
  }
  if ( dword_884E78 ) /*0x5350aa*/
  {
    ((gamemd::Debug *)this)->Log(); /*0x5350b5*/
    if ( dword_884E78 ) /*0x5350c5*/
      (**(void (***)(int, int))dword_884E78)(dword_884E78, 1); /*0x5350cb*/
    dword_884E78 = 0; /*0x5350cd*/
  }
  v5 = (unsigned int *)(v2 + 1);
  sprintf(Buffer, "SIDEC%02dMD.MIX", v2 + 1); /*0x5350e1*/
  ((gamemd::Debug *)this)->Log(); /*0x5350f0*/
  v6 = ((CCFileClass *)(&v18))->Construct(Buffer); /*0x535101*/
  v7 = (*(int (**)(unsigned int *, unsigned int))(*v6 + 20))(v6, 0); /*0x535115*/
  v18.FileClass = (unsigned int)((FileClass)&vt_CCFileClass); /*0x535117*/
  v20 = 0; /*0x53511f*/
  ((Vector *)((int)v19))->Clear(); /*0x535126*/
  v18.FileClass = (unsigned int)((FileClass)&off_7E1668); /*0x535134*/
  ((BufferIOFileClass *)(&v18))->Dtor(); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    v8 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      dword_884E70 = (int)((MixFileClass *)(v8))->FromFile(Buffer, (int)dword_886980); /*0x535160*/
    else
      dword_884E70 = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, "SIDEC%02d.MIX", v5); /*0x535184*/
  ((gamemd::Debug *)this)->Log(); /*0x535193*/
  v9 = ((CCFileClass *)(&v18))->Construct(Buffer); /*0x5351a4*/
  v10 = (*(int (**)(unsigned int *, unsigned int))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v18.FileClass = (unsigned int)((FileClass)&vt_CCFileClass); /*0x5351ba*/
  v20 = 0; /*0x5351c2*/
  ((Vector *)((int)v19))->Clear(); /*0x5351c9*/
  v18.FileClass = (unsigned int)((FileClass)&off_7E1668); /*0x5351d2*/
  ((BufferIOFileClass *)(&v18))->Dtor(); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    v11 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      dword_884E74 = 0; /*0x53520a*/
      ((gamemd::Debug *)this)->Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = (unsigned int *)(((MixFileClass *)(v11))->FromFile(Buffer, (int)dword_886980));
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
    ((gamemd::Debug *)this)->Log(); /*0x53526a*/
    v13 = ((CCFileClass *)(&v18))->Construct(Buffer); /*0x53527b*/
    v14 = (*(int (**)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x535294*/
    v18.FileClass = (unsigned int)((FileClass)&vt_CCFileClass); /*0x535296*/
    v20 = 0; /*0x53529a*/
    ((Vector *)((int)v19))->Clear(); /*0x5352a1*/
    v18.FileClass = (unsigned int)((FileClass)&off_7E1668); /*0x5352aa*/
    ((BufferIOFileClass *)(&v18))->Dtor(); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      v15 = (MixFileClass *)__2_YAPAXI_Z(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        dword_884E78 = (int)((MixFileClass *)(v15))->FromFile(Buffer, (int)dword_886980); /*0x5352d6*/
      else
        dword_884E78 = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    ((Game*)v16)->InitializeToolTipColor(); /*0x5352ec*/
    ((CCFileClass*)&v21)->Construct(aUimdIni); /*0x5352fd*/
    if ( ((CCINIClass *)(&dword_887208))->Load((int)&v21, 0, 0) ) /*0x535311*/
    {
      ((SidebarClass *)((SidebarClass *)dword_8871E0))->ReadButtonList(); /*0x53533d*/
      ((SidebarClass *)((TabClass *)&dword_87F7E8))->LoadButtonSHPs(); /*0x535347*/
      v21.FileClass = (gamemd::AbstractClass **)((FileClass)&vt_CCFileClass); /*0x535353*/
      v23 = 0; /*0x53535a*/
      ((Vector *)((int)v22))->Clear(); /*0x535361*/
      v21.FileClass = (unsigned int)((FileClass)&off_7E1668); /*0x53536d*/
      ((BufferIOFileClass *)(&v21))->Dtor(); /*0x535374*/
      return (gamemd::AbstractClass **)(1); /*0x535379*/
    }
    else
    {
      ((gamemd::Debug *)this)->Log(); /*0x53538b*/
      v21.FileClass = (unsigned int)((FileClass)&vt_CCFileClass); /*0x53539a*/
      v23 = 0; /*0x5353a1*/
      ((Vector *)((int)v22))->Clear(); /*0x5353a8*/
      v21.FileClass = (unsigned int)((FileClass)&off_7E1668); /*0x5353b4*/
      ((BufferIOFileClass *)(&v21))->Dtor(); /*0x5353bb*/
      return 0; /*0x5353c0*/
    }
  }
  else
  {
    ((gamemd::Debug *)this)->Log(); /*0x535233*/
    return 0; /*0x53523b*/
  }

}
}
// 0x627590
namespace gamemd {
unsigned int * MIXFile::Load(ObjectClass * a2)
{

  MIXFile *v2; // ebp
  int v3; // edx
  Struct *v5; // esi
  int v6; // edi
  void *v7; // eax
  int v8; // ebx
  int i; // esi
  char *v10; // eax
  char v11; // cl
  int v12; // edi
  int v13; // eax
  unsigned int *v14; // esi
  char *v15; // ebp
  int16_t *v16; // edx
  char *v17; // eax
  char *inited; // edi
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edx
  char *v24; // eax
  char *v25; // edi
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // edx
  bool v30; // cc
  int16_t v31; // [esp+10h] [ebp-414h]
  int v32; // [esp+10h] [ebp-414h]
  int16_t v33; // [esp+14h] [ebp-410h] BYREF
  char v34; // [esp+16h] [ebp-40Eh]
  int v35; // [esp+18h] [ebp-40Ch]
  MIXFile *v36; // [esp+1Ch] [ebp-408h]
  int v37; // [esp+20h] [ebp-404h]
  char String[256]; // [esp+24h] [ebp-400h] BYREF
  Struct v39[192]; // [esp+124h] [ebp-300h] BYREF

  v2 = this; /*0x627598*/
  v36 = this; /*0x62759c*/
  v3 = *(unsigned int *)this->__pad_0; /*0x6275a0*/
  if ( *(unsigned int *)this->__pad_0 == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  strcpy(String,(const char *)(aP1)); /*0x6275d6*/
  strcat(String, (const char *)&off_7E1BC6 + 112 * v3); /*0x627611*/
  strcat(String,(const char *)(asc_826598)); /*0x62763d*/
  strcat(String, (const char *)off_836464); /*0x62766a*/
  _strupr(String); /*0x627678*/
  v5 = v39; /*0x627680*/
  v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    ((Struct *)(v5))->Zero3(); /*0x62768e*/
    v5 = (Struct *)((char *)v5 + 3); /*0x627693*/
    --v6; /*0x627696*/
  }
  while ( v6 ); /*0x627697*/
  v7 = SearchMIXFile(String, 0); /*0x62769f*/
  v8 = 0; /*0x6276a4*/
  if ( !v7 ) /*0x6276a8*/
    return 0; /*0x6276ad*/
  qmemcpy(v39, v7, sizeof(v39)); /*0x6276c7*/
  for ( i = 0; i < 256; ++i ) /*0x6276c9*/
  {
    v10 = (char *)v39 + 2 * (i % 256) + i % 256; /*0x6276e2*/
    v31 = *(unsigned short *)v10; /*0x6276ea*/
    v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(unsigned short *)v10; /*0x6276f9*/
    v10[1] = 4 * HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(unsigned int *)(*(unsigned int *)v2[1].__pad_0 + 16); /*0x627719*/
  v37 = v12; /*0x62771c*/
  v13 = (int)(__2_YAPAXI_Z(0x18u)); /*0x627720*/
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
  v35 = 0; /*0x62776d*/
  if ( v12 > 0 ) /*0x627771*/
  {
    v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
      v15 = *(char **)(*((unsigned int *)v2->field_4 + 1) + 4 * v8); /*0x62779b*/
      v16 = (int16_t *)(v32 + *(unsigned int *)(*(unsigned int *)v36[1].__pad_0 + 4)); /*0x6277a1*/
      v33 = *v16; /*0x6277a6*/
      v34 = *((unsigned char *)v16 + 2); /*0x6277ae*/
      v17 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x6277b2*/
      if ( v17 ) /*0x6277bc*/
        inited = FontClass::InitMetrics(v17, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 1, 0); /*0x6277dc*/
      else
        inited = 0; /*0x6277e0*/
      v19 = 2 * v8; /*0x6277e2*/
      *(unsigned int *)inited = v19; /*0x6277e4*/
      v20 = v14[2]; /*0x6277e6*/
      if ( v14[4] < v20 /*0x627809*/
        || (*((unsigned char *)v14 + 13) || !v20)
        && (v21 = v14[5], v21 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v14 + 8))(v14, v20 + v21, 0) )
      {
        v22 = v14[4]; /*0x627810*/
        v23 = v14[1]; /*0x627813*/
        v14[4] = v22 + 1; /*0x627819*/
        *(unsigned int *)(v23 + 4 * v22) = (unsigned int)(inited); /*0x62781c*/
      }
      v24 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x627824*/
      if ( v24 ) /*0x62782e*/
        v25 = FontClass::InitMetrics(v24, v15, (int)&v33, (int)v39, (int)&FileSystem_TEMPERAT_PAL, 53, 0); /*0x62784e*/
      else
        v25 = 0; /*0x627852*/
      *(unsigned int *)v25 = v19 + 1; /*0x627855*/
      v26 = v14[2]; /*0x627857*/
      if ( v14[4] < v26 /*0x62787a*/
        || (*((unsigned char *)v14 + 13) || !v26)
        && (v27 = v14[5], v27 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v14 + 8))(v14, v26 + v27, 0) )
      {
        v28 = v14[4]; /*0x627881*/
        v29 = v14[1]; /*0x627884*/
        v14[4] = v28 + 1; /*0x62788a*/
        *(unsigned int *)(v29 + 4 * v28) = (unsigned int)(v25); /*0x62788d*/
      }
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