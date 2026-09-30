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

// 0x530460
namespace gamemd {
MixFileClass * * MixFile::LoadAll()
{
  unsigned int *v0; // eax
  void ** v1;
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // eax
  void * v6;
  unsigned int *v7; // eax
  void * v8;
  unsigned int *v9; // eax
  void * v10;
  int v11; // esi
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  unsigned int *v16; // eax
  void * v17;
  unsigned int *v18; // eax
  void * v19;
  unsigned int *v20; // eax
  void * v21;
  unsigned int *v22; // eax
  void * v23;
  unsigned int *v24; // eax
  void ** v25;
  int v26; // eax
  char v27; // bl
  int v28; // eax
  char v29; // bl
  int v30; // eax
  char v31; // bl
  int v32; // eax
  char v33; // bl
  int v34; // eax
  char v35; // bl
  int v36; // eax
  char v37; // bl
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // esi
  unsigned int *v43; // eax
  char v44; // bl
  unsigned int *v45; // eax
  char v46; // bl
  unsigned int v47[22]; // [esp+38h] [ebp-198h] BYREF
  unsigned char v48[12]; // [esp+90h] [ebp-140h] BYREF
  int v49; // [esp+9Ch] [ebp-134h]
  int v50; // [esp+A4h] [ebp-12Ch]
  unsigned char v51[36]; // [esp+A8h] [ebp-128h] BYREF
  char Buffer[260]; // [esp+CCh] [ebp-104h] BYREF

  v0 = (unsigned int)(((CCFileClass *)(v47))->Construct(aConqmdMix));
  v1 = (void **)((unsigned int)((*(int (**)(unsigned int *, unsigned int))(*v0 + 20))(v0, 0)));
  v47[0] = (unsigned int)((void*)&CCFileClass_vftable);
  v49 = (unsigned int)(0);
  Vector::Clear(v48); /*0x530495*/
  v47[0] = (unsigned int)&off_7E1668; /*0x5304a3*/
  BufferIOFileClass::Dtor(v47); /*0x5304a7*/
  if ( v1 ) /*0x5304ae*/
  {
    if ( RA2_OPNEW(0x28u) ) /*0x5304b2*/
      g_MixFile_CONQMD = MixFileClass::FromFile(aConqmdMix, (int)&dword_886980); /*0x5304cf*/
    else
      g_MixFile_CONQMD = 0; /*0x5304d6*/
  }
  Debug::Log_0(aConqmdMix_0); /*0x5304e1*/
  if ( !g_MixFile_CONQMD ) /*0x5304f0*/
    return 0; /*0x5304fe*/
  if ( g_MixFile_GENERMD ) /*0x530507*/
    (**(void (***)(int, int))g_MixFile_GENERMD)(g_MixFile_GENERMD, 1); /*0x53050d*/
  if ( RA2_OPNEW(0x28u) ) /*0x530511*/
    v3 = MixFileClass::FromFile(aGenermdMix, (int)&dword_886980); /*0x530529*/
  else
    v3 = 0; /*0x530530*/
  g_MixFile_GENERMD = v3; /*0x530535*/
  ReturnTrue(0); /*0x53053a*/
  if ( g_MixFile_GENERIC ) /*0x530547*/
    (**(void (***)(int, int))g_MixFile_GENERIC)(g_MixFile_GENERIC, 1); /*0x53054d*/
  if ( RA2_OPNEW(0x28u) ) /*0x530551*/
    v4 = MixFileClass::FromFile(aGenericMix, (int)&dword_886980); /*0x530569*/
  else
    v4 = (unsigned int)(0);
  g_MixFile_GENERIC = (unsigned int)(v4);
  ReturnTrue(0); /*0x53057a*/
  if ( g_MixFile_ISOGENMD ) /*0x530587*/
    (**(void (***)(int, int))g_MixFile_ISOGENMD)(g_MixFile_ISOGENMD, 1); /*0x53058d*/
  if ( RA2_OPNEW(0x28u) ) /*0x530591*/
    g_MixFile_ISOGENMD = MixFileClass::FromFile(aIsogenmdMix, (int)&dword_886980); /*0x5305ae*/
  else
    g_MixFile_ISOGENMD = 0; /*0x5305b5*/
  if ( g_MixFile_ISOGEN ) /*0x5305c3*/
    (**(void (***)(int, int))g_MixFile_ISOGEN)(g_MixFile_ISOGEN, 1); /*0x5305c9*/
  if ( RA2_OPNEW(0x28u) ) /*0x5305cd*/
    g_MixFile_ISOGEN = MixFileClass::FromFile(aIsogenMix, (int)&dword_886980); /*0x5305ea*/
  else
    g_MixFile_ISOGEN = 0; /*0x5305f1*/
  v5 = ((CCFileClass *)(v47))->Construct(aConquerMix); /*0x530600*/
  v6 = (*(int (**)(unsigned int *, unsigned int))(*v5 + 20))(v5, 0); /*0x530611*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x530613*/
  v49 = 0; /*0x530617*/
  Vector::Clear(v48); /*0x53061b*/
  v47[0] = (unsigned int)&off_7E1668; /*0x530624*/
  BufferIOFileClass::Dtor(v47); /*0x530628*/
  if ( v6 ) /*0x53062f*/
  {
    if ( RA2_OPNEW(0x28u) ) /*0x530633*/
      g_MixFile_CONQUER = MixFileClass::FromFile(aConquerMix, (int)&dword_886980); /*0x530650*/
    else
      g_MixFile_CONQUER = 0; /*0x530657*/
  }
  Debug::Log_0(aConquerMix_0); /*0x530662*/
  if ( !g_MixFile_CONQUER ) /*0x530671*/
    return 0; /*0x53067f*/
  v7 = CCFileClass::Construct(v47, aCameomdMix); /*0x530689*/
  v8 = (*(int (**)(unsigned int *, unsigned int))(*v7 + 20))(v7, 0); /*0x53069a*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x53069c*/
  v49 = 0; /*0x5306a0*/
  Vector::Clear(v48); /*0x5306a4*/
  v47[0] = (unsigned int)&off_7E1668; /*0x5306ad*/
  BufferIOFileClass::Dtor(v47); /*0x5306b1*/
  if ( v8 ) /*0x5306b8*/
  {
    if ( RA2_OPNEW(0x28u) ) /*0x5306bc*/
      g_MixFile_CAMEOMD = MixFileClass::FromFile(aCameomdMix, (int)&dword_886980); /*0x5306d9*/
    else
      g_MixFile_CAMEOMD = 0; /*0x5306e0*/
  }
  Debug::Log_0(aCameomdMix_0); /*0x5306eb*/
  if ( !g_MixFile_CAMEOMD ) /*0x5306fa*/
    return 0; /*0x530708*/
  v9 = CCFileClass::Construct(v47, aCameoMix); /*0x530712*/
  v10 = (*(int (**)(unsigned int *, unsigned int))(*v9 + 20))(v9, 0); /*0x530723*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x530725*/
  v49 = 0; /*0x530729*/
  Vector::Clear(v48); /*0x53072d*/
  v47[0] = (unsigned int)&off_7E1668; /*0x530736*/
  BufferIOFileClass::Dtor(v47); /*0x53073a*/
  if ( v10 ) /*0x530741*/
  {
    if ( RA2_OPNEW(0x28u) ) /*0x530745*/
      g_MixFile_CAMEO = MixFileClass::FromFile(aCameoMix, (int)&dword_886980); /*0x530762*/
    else
      g_MixFile_CAMEO = 0; /*0x530769*/
  }
  Debug::Log_0(aCameoMix_0); /*0x530774*/
  if ( !g_MixFile_CAMEO ) /*0x530783*/
    return 0; /*0x530791*/
  v11 = Game::CheckForGameCD(60) + 1; /*0x5307a3*/
  v50 = v11; /*0x5307a6*/
  if ( byte_89E3A0 == 1 ) /*0x5307aa*/
  {
    strcpy(Buffer, aMapsmdMix); /*0x5307d0*/
    if ( (uint8_t)FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x5307e7*/
    {
      Debug::Log_0(&off_826688); /*0x5307fa*/
      if ( RA2_OPNEW(0x28u) ) /*0x530801*/
        g_MixFile_MAPSMDFirst = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x530821*/
      else
        g_MixFile_MAPSMDFirst = 0; /*0x530828*/
      while ( (uint8_t)FileFind::Next(Buffer) == 1 ) /*0x53083c*/
      {
        Debug::Log_0(&off_826688); /*0x53084f*/
        if ( RA2_OPNEW(0x28u) ) /*0x530856*/
        {
          v12 = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x530876*/
          if ( v12 ) /*0x53087a*/
          {
            if ( dword_884DB8 < dword_884DB0 /*0x5308b2*/
              || (byte_884DB5 || !dword_884DB0)
              && dword_884DBC > 0
              && (*(uint8_t (**)(int *, int, unsigned int))(g_MixFileArray_Maps + 8))(
                   &g_MixFileArray_Maps,
                   dword_884DBC + dword_884DB0,
                   0) )
            {
              v13 = dword_884DB8++; /*0x5308bf*/
              *((unsigned int *)dword_884DAC + v13) = v12; /*0x5308ce*/
            }
          }
        }
      }
  LABEL_60:
      FileFind::CloseHandle(); /*0x5308e5*/
      goto LABEL_85; /*0x5308ea*/
    }
    strcpy(Buffer, aMapsMix); /*0x53090f*/
    if ( (uint8_t)FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x530926*/
    {
      Debug::Log_0(&off_826688); /*0x530939*/
      if ( RA2_OPNEW(0x28u) ) /*0x530940*/
        g_MixFile_MAPSFirst = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x530960*/
      else
        g_MixFile_MAPSFirst = 0; /*0x530967*/
      while ( (uint8_t)FileFind::Next(Buffer) == 1 ) /*0x53097b*/
      {
        Debug::Log_0(&off_826688); /*0x53098e*/
        if ( RA2_OPNEW(0x28u) ) /*0x530995*/
        {
          v14 = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x5309b5*/
          if ( v14 ) /*0x5309b9*/
          {
            if ( dword_884DB8 < dword_884DB0 /*0x5309f1*/
              || (byte_884DB5 || !dword_884DB0)
              && dword_884DBC > 0
              && (*(uint8_t (**)(int *, int, unsigned int))(g_MixFileArray_Maps + 8))(
                   &g_MixFileArray_Maps,
                   dword_884DBC + dword_884DB0,
                   0) )
            {
              v15 = dword_884DB8++; /*0x5309fe*/
              *((unsigned int *)dword_884DAC + v15) = v14; /*0x530a0d*/
            }
          }
        }
      }
      goto LABEL_60; /*0x530a1e*/
    }
  }
  else
  {
    sprintf(Buffer, "MAPSMD%02d.MIX", v11); /*0x530a3c*/
    v16 = ((CCFileClass *)(v47))->Construct(Buffer); /*0x530a50*/
    v17 = (*(int (**)(unsigned int *, unsigned int))(*v16 + 20))(v16, 0); /*0x530a61*/
    v47[0] = (void*)&CCFileClass_vftable; /*0x530a63*/
    v49 = 0; /*0x530a67*/
    Vector::Clear(v48); /*0x530a6b*/
    v47[0] = (unsigned int)&off_7E1668; /*0x530a74*/
    BufferIOFileClass::Dtor(v47); /*0x530a7c*/
    if ( v17 ) /*0x530a83*/
    {
      if ( RA2_OPNEW(0x28u) ) /*0x530a87*/
        g_MixFile_MAPSMDFirst = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x530aa7*/
      else
        g_MixFile_MAPSMDFirst = 0; /*0x530aae*/
    }
    Debug::Log_0(&off_826688); /*0x530ac1*/
    sprintf(Buffer, "MAPS%02d.MIX", v11); /*0x530ad4*/
    v18 = ((CCFileClass *)(v47))->Construct(Buffer); /*0x530ae8*/
    v19 = (*(int (**)(unsigned int *, unsigned int))(*v18 + 20))(v18, 0); /*0x530af9*/
    v47[0] = (void*)&CCFileClass_vftable; /*0x530afb*/
    v49 = 0; /*0x530aff*/
    Vector::Clear(v48); /*0x530b03*/
    v47[0] = (unsigned int)&off_7E1668; /*0x530b0c*/
    BufferIOFileClass::Dtor(v47); /*0x530b14*/
    if ( v19 ) /*0x530b1b*/
    {
      if ( RA2_OPNEW(0x28u) ) /*0x530b1f*/
        g_MixFile_MAPSFirst = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x530b3f*/
      else
        g_MixFile_MAPSFirst = 0; /*0x530b46*/
    }
    Debug::Log_0(&off_826688); /*0x530b59*/
  }
  LABEL_85:
  if ( !g_MixFile_MAPSMDFirst ) /*0x530b67*/
    return 0; /*0x530b75*/
  v20 = CCFileClass::Construct(v47, g_Str_File_MULTIMD_MIX); /*0x530b7f*/
  v21 = (*(int (**)(unsigned int *, unsigned int))(*v20 + 20))(v20, 0); /*0x530b95*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x530b97*/
  v49 = 0; /*0x530b9b*/
  Vector::Clear(v48); /*0x530b9f*/
  v47[0] = (unsigned int)&off_7E1668; /*0x530bad*/
  BufferIOFileClass::Dtor(v47); /*0x530bb1*/
  if ( v21 ) /*0x530bb8*/
  {
    if ( RA2_OPNEW(0x28u) ) /*0x530bbc*/
      g_MixFile_MULTIMD = MixFileClass::FromFile(g_Str_File_MULTIMD_MIX, (int)&dword_886980); /*0x530bd9*/
    else
      g_MixFile_MULTIMD = 0; /*0x530be0*/
  }
  Debug::Log_0(aMultimdMix_0); /*0x530beb*/
  if ( !g_MixFile_MULTIMD ) /*0x530bfa*/
    return 0; /*0x530c08*/
  v22 = CCFileClass::Construct(v47, g_Str_File_THEMEMD_MIX); /*0x530c12*/
  v23 = (*(int (**)(unsigned int *, unsigned int))(*v22 + 20))(v22, 0); /*0x530c23*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x530c25*/
  v49 = 0; /*0x530c29*/
  Vector::Clear(v48); /*0x530c2d*/
  v47[0] = (unsigned int)&off_7E1668; /*0x530c36*/
  BufferIOFileClass::Dtor(v47); /*0x530c3a*/
  if ( v23 ) /*0x530c41*/
  {
    Debug::Log(aInitializingTh); /*0x530c48*/
    if ( RA2_OPNEW(0x28u) ) /*0x530c4f*/
    {
      g_MixFile_THEME = MixFileClass::FromFile(g_Str_File_THEMEMD_MIX, (int)&dword_886980); /*0x530c70*/
      goto LABEL_100; /*0x530c75*/
    }
  }
  else
  {
    v24 = (unsigned int)(CCFileClass::Construct(v47, g_Str_File_THEME_MIX));
    v25 = (void **)((unsigned int)((*(int (**)(unsigned int *, unsigned int))(*v24 + 20))(v24, 0)));
    v47[0] = (unsigned int)((void*)&CCFileClass_vftable);
    v49 = (unsigned int)(0);
    Vector::Clear(v48); /*0x530c9b*/
    v47[0] = (unsigned int)&off_7E1668; /*0x530ca4*/
    BufferIOFileClass::Dtor(v47); /*0x530ca8*/
    if ( !v25 ) /*0x530caf*/
      goto LABEL_100; /*0x530caf*/
    Debug::Log(aInitializingTh_0); /*0x530cb6*/
    if ( RA2_OPNEW(0x28u) ) /*0x530cbd*/
    {
      g_MixFile_THEME = MixFileClass::FromFile(g_Str_File_THEME_MIX, (int)&dword_886980); /*0x530cda*/
      goto LABEL_100; /*0x530cdf*/
    }
  }
  g_MixFile_THEME = 0; /*0x530ce1*/
  LABEL_100:
  Debug::Log_0(aThemeMix_0); /*0x530ce7*/
  g_ThemeMIXLoaded = 1; /*0x530cf9*/
  Audio::LoadWAVFiles(&g_BuildingTypeClass_Count); /*0x530d00*/
  if ( byte_89E3A0 == 1 ) /*0x530d0c*/
  {
    strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530d37*/
    v26 = RawFileClass::Construct(aMovies01Mix); /*0x530d47*/
    v27 = (*(int (**)(int, unsigned int))(*(unsigned int *)v26 + 20))(v26, 0); /*0x530d5b*/
    RawFileClass::Dtor(v51); /*0x530d5d*/
    if ( v27 ) /*0x530d64*/
      strcpy(Buffer, aMoviesMix); /*0x530d86*/
    v28 = RawFileClass::Construct(aMixfilesMovies); /*0x530d9b*/
    v29 = (*(int (**)(int, unsigned int))(*(unsigned int *)v28 + 20))(v28, 0); /*0x530daf*/
    RawFileClass::Dtor(v51); /*0x530db1*/
    if ( v29 ) /*0x530db8*/
      strcpy(Buffer, aMixfilesMovies_0); /*0x530dda*/
    v30 = RawFileClass::Construct(aMovmd01Mix); /*0x530def*/
    v31 = (*(int (**)(int, unsigned int))(*(unsigned int *)v30 + 20))(v30, 0); /*0x530e03*/
    RawFileClass::Dtor(v51); /*0x530e05*/
    if ( v31 ) /*0x530e0c*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530e2e*/
    v32 = RawFileClass::Construct(aMixfilesMovmd0); /*0x530e43*/
    v33 = (*(int (**)(int, unsigned int))(*(unsigned int *)v32 + 20))(v32, 0); /*0x530e57*/
    RawFileClass::Dtor(v51); /*0x530e59*/
    if ( v33 ) /*0x530e60*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530e82*/
    v34 = RawFileClass::Construct(aMovmd03Mix); /*0x530e97*/
    v35 = (*(int (**)(int, unsigned int))(*(unsigned int *)v34 + 20))(v34, 0); /*0x530eab*/
    RawFileClass::Dtor(v51); /*0x530ead*/
    if ( v35 ) /*0x530eb4*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530ed6*/
    v36 = RawFileClass::Construct(aMixfilesMovmd0_0); /*0x530eeb*/
    v37 = (*(int (**)(int, unsigned int))(*(unsigned int *)v36 + 20))(v36, 0); /*0x530eff*/
    RawFileClass::Dtor(v51); /*0x530f01*/
    if ( v37 ) /*0x530f08*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530f2a*/
    if ( (uint8_t)FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x530f41*/
    {
      Debug::Log_0(&off_826688); /*0x530f54*/
      if ( RA2_OPNEW(0x28u) ) /*0x530f5b*/
        g_MixFile_MOVIES = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x530f7b*/
      else
        g_MixFile_MOVIES = 0; /*0x530f82*/
      while ( (uint8_t)FileFind::Next(Buffer) == 1 ) /*0x530f96*/
      {
        Debug::Log_0(&off_826688); /*0x530fa9*/
        if ( RA2_OPNEW(0x28u) ) /*0x530fb0*/
        {
          v38 = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x530fd0*/
          if ( v38 ) /*0x530fd4*/
          {
            if ( dword_884DF0 < dword_884DE8 /*0x53100c*/
              || (byte_884DED || !dword_884DE8)
              && dword_884DF4 > 0
              && (*(uint8_t (**)(int *, int, unsigned int))(g_MixFileArray_Movies + 8))(
                   &g_MixFileArray_Movies,
                   dword_884DE8 + dword_884DF4,
                   0) )
            {
              v39 = dword_884DF0++; /*0x531019*/
              *((unsigned int *)dword_884DE4 + v39) = v38; /*0x531028*/
            }
          }
        }
      }
    }
    else
    {
      strcpy(Buffer, aMoviesMix); /*0x531069*/
      Debug::Log_0(&off_826688); /*0x53107f*/
      if ( RA2_OPNEW(0x28u) ) /*0x531086*/
        g_MixFile_MOVIES = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x5310a6*/
      else
        g_MixFile_MOVIES = 0; /*0x5310ad*/
      while ( (uint8_t)FileFind::Next(Buffer) == 1 ) /*0x5310c1*/
      {
        Debug::Log_0(&off_826688); /*0x5310d4*/
        if ( RA2_OPNEW(0x28u) ) /*0x5310db*/
        {
          v40 = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x5310fb*/
          if ( v40 ) /*0x5310ff*/
          {
            if ( dword_884DF0 < dword_884DE8 /*0x531137*/
              || (byte_884DED || !dword_884DE8)
              && dword_884DF4 > 0
              && (*(uint8_t (**)(int *, int, unsigned int))(g_MixFileArray_Movies + 8))(
                   &g_MixFileArray_Movies,
                   dword_884DE8 + dword_884DF4,
                   0) )
            {
              v41 = dword_884DF0++; /*0x531144*/
              *((unsigned int *)dword_884DE4 + v41) = v40; /*0x531153*/
            }
          }
        }
      }
    }
    FileFind::CloseHandle(); /*0x53103f*/
    return g_MixFile_MOVIES != 0; /*0x531044*/
  }
  v42 = v50; /*0x531174*/
  sprintf(Buffer, "MOVMD%02d.MIX", v50); /*0x531186*/
  v43 = CCFileClass::Construct(v47, Buffer); /*0x53119a*/
  v44 = (*(int (**)(unsigned int *, unsigned int))(*v43 + 20))(v43, 0); /*0x5311ab*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x5311ad*/
  v49 = 0; /*0x5311b5*/
  Vector::Clear(v48); /*0x5311b9*/
  v47[0] = (unsigned int)&off_7E1668; /*0x5311c2*/
  BufferIOFileClass::Dtor(v47); /*0x5311c6*/
  if ( v44 ) /*0x5311cd*/
  {
    if ( RA2_OPNEW(0x28u) ) /*0x5311d1*/
      goto LABEL_147; /*0x5311db*/
    goto LABEL_148; /*0x5311db*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v42); /*0x5311f1*/
  v45 = CCFileClass::Construct(v47, Buffer); /*0x531205*/
  v46 = (*(int (**)(unsigned int *, unsigned int))(*v45 + 20))(v45, 0); /*0x531216*/
  v47[0] = (void*)&CCFileClass_vftable; /*0x531218*/
  v49 = 0; /*0x531220*/
  Vector::Clear(v48); /*0x531224*/
  v47[0] = (unsigned int)&off_7E1668; /*0x53122d*/
  BufferIOFileClass::Dtor(v47); /*0x531231*/
  if ( v46 ) /*0x531238*/
  {
    if ( RA2_OPNEW(0x28u) ) /*0x53123c*/
    {
  LABEL_147:
      g_MixFile_MOVIES = MixFileClass::FromFile(Buffer, (int)&dword_886980); /*0x531248*/
      goto LABEL_149; /*0x531261*/
    }
  LABEL_148:
    g_MixFile_MOVIES = 0; /*0x531263*/
  }
  LABEL_149:
  Debug::Log_0(&off_826688); /*0x531269*/
  return g_MixFile_MOVIES != 0; /*0x5304f2*/
}
}
// 0x534FA0
namespace gamemd {
AbstractClass * * MixFile::LoadSide()
{
  int v1; // esi
  unsigned int v2; // ebx
  unsigned int YRCD; // eax
  unsigned int v5; // esi
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
  VoxClass::SetEVAIndex(); /*0x534fac*/
  if ( v1 == 2 ) /*0x534fb4*/
    v1 = 1; /*0x534fb6*/
  v2 = v1; /*0x534fbb*/
  v16 = (Game *)v1; /*0x534fc0*/
  if ( v1 == -1 ) /*0x534fc4*/
  {
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
  v5 = v2 + 1; /*0x5350d3*/
  sprintf(Buffer, "SIDEC%02dMD.MIX", v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  v6 = CCFileClass::Construct(&v18, Buffer); /*0x535101*/
  v7 = (*(int (**)(unsigned int *, unsigned int))(*v6 + 20))(v6, 0); /*0x535115*/
  v18.FileClass = (FileClass)(void*)&CCFileClass_vftable; /*0x535117*/
  v20 = 0; /*0x53511f*/
  Vector::Clear((int)v19); /*0x535126*/
  v18.FileClass = (FileClass)&off_7E1668; /*0x535134*/
  BufferIOFileClass::Dtor(&v18); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    v8 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      dword_884E70 = (int)MixFileClass::FromFile(v8, Buffer, (int)dword_886980); /*0x535160*/
    else
      dword_884E70 = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, "SIDEC%02d.MIX", v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  v9 = CCFileClass::Construct(&v18, Buffer); /*0x5351a4*/
  v10 = (*(int (**)(unsigned int *, unsigned int))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v18.FileClass = (FileClass)(void*)&CCFileClass_vftable; /*0x5351ba*/
  v20 = 0; /*0x5351c2*/
  Vector::Clear((int)v19); /*0x5351c9*/
  v18.FileClass = (FileClass)&off_7E1668; /*0x5351d2*/
  BufferIOFileClass::Dtor(&v18); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    v11 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      dword_884E74 = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = MixFileClass::FromFile(v11, Buffer, (int)dword_886980); /*0x5351f9*/
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
    v13 = CCFileClass::Construct(&v18, Buffer); /*0x53527b*/
    v14 = (*(int (**)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x535294*/
    v18.FileClass = (FileClass)(void*)&CCFileClass_vftable; /*0x535296*/
    v20 = 0; /*0x53529a*/
    Vector::Clear((int)v19); /*0x5352a1*/
    v18.FileClass = (FileClass)&off_7E1668; /*0x5352aa*/
    BufferIOFileClass::Dtor(&v18); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      v15 = (MixFileClass *)RA2_OPNEW(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        dword_884E78 = (int)MixFileClass::FromFile(v15, Buffer, (int)dword_886980); /*0x5352d6*/
      else
        dword_884E78 = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    Game::InitializeToolTipColor(v16); /*0x5352ec*/
    CCFileClass::Construct(&v21, aUimdIni); /*0x5352fd*/
    if ( CCINIClass::Load(&dword_887208, (int)&v21, 0, 0) ) /*0x535311*/
    {
      SidebarClass::ReadButtonList((SidebarClass *)dword_8871E0); /*0x53533d*/
      SidebarClass::LoadButtonSHPs((TabClass *)&dword_87F7E8); /*0x535347*/
      v21.FileClass = (FileClass)(void*)&CCFileClass_vftable; /*0x535353*/
      v23 = 0; /*0x53535a*/
      Vector::Clear((int)v22); /*0x535361*/
      v21.FileClass = (FileClass)&off_7E1668; /*0x53536d*/
      BufferIOFileClass::Dtor(&v21); /*0x535374*/
      return 1; /*0x535379*/
    }
    else
    {
      Debug::Log(); /*0x53538b*/
      v21.FileClass = (FileClass)(void*)&CCFileClass_vftable; /*0x53539a*/
      v23 = 0; /*0x5353a1*/
      Vector::Clear((int)v22); /*0x5353a8*/
      v21.FileClass = (FileClass)&off_7E1668; /*0x5353b4*/
      BufferIOFileClass::Dtor(&v21); /*0x5353bb*/
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
unsigned int * MIXFile::Load(ObjectClass * aP1)
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
    v3 = (ObjectClass *)*this;
    if ( *this == -1 )
    return 0; /*0x6275ab*/
  strcpy(String, aP1); /*0x6275d6*/
  strcat(String, (const char *)&off_7E1BC6 + 112 * v3); /*0x627611*/
  strcat(String, asc_826598); /*0x62763d*/
  strcat(String, (const char *)off_836464); /*0x62766a*/
  _strupr(String); /*0x627678*/
  v5 = v39; /*0x627680*/
  v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    Struct::Zero3(v5); /*0x62768e*/
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
    v10[1] = 4 * IDA_HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(unsigned int *)(*(unsigned int *)v2[1].__pad_0 + 16); /*0x627719*/
  v37 = v12; /*0x62771c*/
  v13 = RA2_OPNEW(0x18u); /*0x627720*/
  v14 = (unsigned int *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(unsigned int *)(v13 + 4) = 0; /*0x627730*/
    *(unsigned int *)(v13 + 8) = 20; /*0x627733*/
    *(unsigned char *)(v13 + 12) = 1; /*0x62773a*/
    *(unsigned char *)(v13 + 13) = 0; /*0x62773e*/
    *(unsigned int *)v13 = (void*)&VectorClass_ColorScheme___vftable; /*0x627742*/
    *(unsigned int *)(v13 + 4) = RA2_OPNEW(0x50u); /*0x627750*/
    *((unsigned char *)v14 + 13) = 1; /*0x627753*/
    *v14 = (void*)&DynamicVectorClass_ColorScheme___vftable; /*0x627757*/
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
      v17 = (char *)RA2_OPNEW(0x33Cu); /*0x6277b2*/
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
        *(unsigned int *)(v23 + 4 * v22) = inited; /*0x62781c*/
      }
      v24 = (char *)RA2_OPNEW(0x33Cu); /*0x627824*/
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
        *(unsigned int *)(v29 + 4 * v28) = v25; /*0x62788d*/
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