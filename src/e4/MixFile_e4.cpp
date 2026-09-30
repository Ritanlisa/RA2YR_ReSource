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

// 0x530460
namespace gamemd {
MixFileClass * * MixFile::LoadAll()
{

  unsigned int *v0; // eax
  char v1; // bl
  unsigned int *v2; // eax
  unsigned int *v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // eax
  char v11; // bl
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  char v14; // bl
  unsigned int *v15; // eax
  unsigned int *v16; // eax
  char v17; // bl
  unsigned int *v18; // eax
  int v19; // esi
  unsigned int *v20; // eax
  unsigned int *v21; // eax
  unsigned int *v22; // esi
  int v23; // eax
  unsigned int *v24; // eax
  unsigned int *v25; // eax
  unsigned int *v26; // esi
  int v27; // eax
  unsigned int *v28; // eax
  char v29; // bl
  unsigned int *v30; // eax
  unsigned int *v31; // eax
  char v32; // bl
  unsigned int *v33; // eax
  unsigned int *v34; // eax
  char v35; // bl
  unsigned int *v36; // eax
  unsigned int *v37; // eax
  char v38; // bl
  unsigned int *v39; // eax
  unsigned int *v40; // eax
  char v41; // bl
  unsigned int *v42; // eax
  unsigned int *v43; // eax
  char v44; // bl
  unsigned int *v45; // eax
  char v46; // bl
  unsigned int *v47; // eax
  char v48; // bl
  unsigned int *v49; // eax
  char v50; // bl
  unsigned int *v51; // eax
  char v52; // bl
  unsigned int *v53; // eax
  char v54; // bl
  unsigned int *v55; // eax
  unsigned int *v56; // eax
  unsigned int *v57; // esi
  int v58; // eax
  unsigned int *v59; // eax
  unsigned int *v60; // eax
  unsigned int *v61; // esi
  int v62; // eax
  int v63; // esi
  unsigned int *v64; // eax
  char v65; // bl
  unsigned int *v66; // eax
  unsigned int *v67; // eax
  char v68; // bl
  unsigned int v69[22]; // [esp+38h] [ebp-198h] BYREF
  unsigned char v70[12]; // [esp+90h] [ebp-140h] BYREF
  int v71; // [esp+9Ch] [ebp-134h]
  int v72; // [esp+A4h] [ebp-12Ch]
  int v73[9]; // [esp+A8h] [ebp-128h] BYREF
  char Buffer[260]; // [esp+CCh] [ebp-104h] BYREF

  v0 = (unsigned int)(((CCFileClass *)(v69))->Construct(aConqmdMix));
  v1 = (unsigned int)((*(int (**)(unsigned int *, unsigned int))(*v0 + 20))(v0, 0));
  v69[0] = &CCFileClass::`vftable'; /*0x53048d*/
  v71 = 0; /*0x530491*/
  Vector::Clear((int)v70); /*0x530495*/
  v69[0] = &off_7E1668; /*0x5304a3*/
  ((BufferIOFileClass *)(v69))->Dtor(); /*0x5304a7*/
  if ( v1 ) /*0x5304ae*/
  {
    v2 = (unsigned int *)__2_YAPAXI_Z(40); /*0x5304b2*/
    if ( v2 ) /*0x5304bc*/
      MEMORY[0x87F7E8][5524] = MixFileClass::FromFile(v2, aConqmdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5304cf*/
    else
      MEMORY[0x87F7E8][5524] = 0; /*0x5304d6*/
  }
  this->Debug::Log_0(); /*0x5304e1*/
  if ( !MEMORY[0x87F7E8][5524] ) /*0x5304f0*/
    return 0; /*0x5304fe*/
  if ( MEMORY[0x87F7E8][5516] ) /*0x530507*/
    (**(void (***)(unsigned int, int))MEMORY[0x87F7E8][5516])(MEMORY[0x87F7E8][5516], 1); /*0x53050d*/
  v4 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530511*/
  if ( v4 ) /*0x53051b*/
    v5 = MixFileClass::FromFile(v4, aGenermdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530529*/
  else
    v5 = 0; /*0x530530*/
  MEMORY[0x87F7E8][5516] = v5; /*0x530535*/
  ReturnTrue(0); /*0x53053a*/
  if ( MEMORY[0x87F7E8][5515] ) /*0x530547*/
    (**(void (***)(unsigned int, int))MEMORY[0x87F7E8][5515])(MEMORY[0x87F7E8][5515], 1); /*0x53054d*/
  v6 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530551*/
  if ( v6 ) /*0x53055b*/
    v7 = MixFileClass::FromFile(v6, aGenericMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530569*/
  else
    v7 = 0; /*0x530570*/
  MEMORY[0x87F7E8][5515] = v7; /*0x530575*/
  ReturnTrue(0); /*0x53057a*/
  if ( MEMORY[0x87F7E8][5520] ) /*0x530587*/
    (**(void (***)(unsigned int, int))MEMORY[0x87F7E8][5520])(MEMORY[0x87F7E8][5520], 1); /*0x53058d*/
  v8 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530591*/
  if ( v8 ) /*0x53059b*/
    MEMORY[0x87F7E8][5520] = MixFileClass::FromFile(v8, aIsogenmdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5305ae*/
  else
    MEMORY[0x87F7E8][5520] = 0; /*0x5305b5*/
  if ( MEMORY[0x87F7E8][5519] ) /*0x5305c3*/
    (**(void (***)(unsigned int, int))MEMORY[0x87F7E8][5519])(MEMORY[0x87F7E8][5519], 1); /*0x5305c9*/
  v9 = (unsigned int *)__2_YAPAXI_Z(40); /*0x5305cd*/
  if ( v9 ) /*0x5305d7*/
    MEMORY[0x87F7E8][5519] = MixFileClass::FromFile(v9, aIsogenMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5305ea*/
  else
    MEMORY[0x87F7E8][5519] = 0; /*0x5305f1*/
  v10 = ((CCFileClass *)(v69))->Construct(aConquerMix); /*0x530600*/
  v11 = (*(int (**)(unsigned int *, unsigned int))(*v10 + 20))(v10, 0); /*0x530611*/
  v69[0] = &CCFileClass::`vftable'; /*0x530613*/
  v71 = 0; /*0x530617*/
  Vector::Clear((int)v70); /*0x53061b*/
  v69[0] = &off_7E1668; /*0x530624*/
  ((BufferIOFileClass *)(v69))->Dtor(); /*0x530628*/
  if ( v11 ) /*0x53062f*/
  {
    v12 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530633*/
    if ( v12 ) /*0x53063d*/
      MEMORY[0x87F7E8][5525] = MixFileClass::FromFile(v12, aConquerMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530650*/
    else
      MEMORY[0x87F7E8][5525] = 0; /*0x530657*/
  }
  this->Debug::Log_0(); /*0x530662*/
  if ( !MEMORY[0x87F7E8][5525] ) /*0x530671*/
    return 0; /*0x53067f*/
  v13 = CCFileClass::Construct(v69, aCameomdMix); /*0x530689*/
  v14 = (*(int (**)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x53069a*/
  v69[0] = &CCFileClass::`vftable'; /*0x53069c*/
  v71 = 0; /*0x5306a0*/
  Vector::Clear((int)v70); /*0x5306a4*/
  v69[0] = &off_7E1668; /*0x5306ad*/
  ((BufferIOFileClass *)(v69))->Dtor(); /*0x5306b1*/
  if ( v14 ) /*0x5306b8*/
  {
    v15 = (unsigned int *)__2_YAPAXI_Z(40); /*0x5306bc*/
    if ( v15 ) /*0x5306c6*/
      MEMORY[0x87F7E8][5526] = MixFileClass::FromFile(v15, aCameomdMix, (int)&MEMORY[0x87F7E8][7270]); /*0x5306d9*/
    else
      MEMORY[0x87F7E8][5526] = 0; /*0x5306e0*/
  }
  this->Debug::Log_0(); /*0x5306eb*/
  if ( !MEMORY[0x87F7E8][5526] ) /*0x5306fa*/
    return 0; /*0x530708*/
  v16 = CCFileClass::Construct(v69, aCameoMix); /*0x530712*/
  v17 = (*(int (**)(unsigned int *, unsigned int))(*v16 + 20))(v16, 0); /*0x530723*/
  v69[0] = &CCFileClass::`vftable'; /*0x530725*/
  v71 = 0; /*0x530729*/
  Vector::Clear((int)v70); /*0x53072d*/
  v69[0] = &off_7E1668; /*0x530736*/
  BufferIOFileClass::Dtor(v69); /*0x53073a*/
  if ( v17 ) /*0x530741*/
  {
    v18 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530745*/
    if ( v18 ) /*0x53074f*/
      MEMORY[0x87F7E8][5527] = MixFileClass::FromFile(v18, aCameoMix, (int)&MEMORY[0x87F7E8][7270]); /*0x530762*/
    else
      MEMORY[0x87F7E8][5527] = 0; /*0x530769*/
  }
  Debug::Log_0(); /*0x530774*/
  if ( !MEMORY[0x87F7E8][5527] ) /*0x530783*/
    return 0; /*0x530791*/
  v19 = Game::CheckForGameCD((void *)0x3C) + 1; /*0x5307a3*/
  v72 = v19; /*0x5307a6*/
  if ( LOBYTE(MEMORY[0x87F7E8][31470]) == 1 ) /*0x5307aa*/
  {
    strcpy(Buffer, aMapsmdMix); /*0x5307d0*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x5307e7*/
    {
      Debug::Log_0(); /*0x5307fa*/
      v20 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530801*/
      if ( v20 ) /*0x53080b*/
        MEMORY[0x87F7E8][5534] = MixFileClass::FromFile(v20, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530821*/
      else
        MEMORY[0x87F7E8][5534] = 0; /*0x530828*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x53083c*/
      {
        Debug::Log_0(); /*0x53084f*/
        v21 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530856*/
        if ( v21 ) /*0x530860*/
        {
          v22 = MixFileClass::FromFile(v21, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530876*/
          if ( v22 ) /*0x53087a*/
          {
            if ( MEMORY[0x87F7E8][5492] < MEMORY[0x87F7E8][5490] /*0x5308b2*/
              || (BYTE1(MEMORY[0x87F7E8][5491]) || !MEMORY[0x87F7E8][5490])
              && MEMORY[0x87F7E8][5493] > 0
              && (*(uint8_t (**)(unsigned int *, int, unsigned int))(MEMORY[0x87F7E8][5488] + 8))(
                   &MEMORY[0x87F7E8][5488],
                   MEMORY[0x87F7E8][5493] + MEMORY[0x87F7E8][5490],
                   0) )
            {
              v23 = MEMORY[0x87F7E8][5492]++; /*0x5308bf*/
              *(unsigned int *)(MEMORY[0x87F7E8][5489] + 4 * v23) = v22; /*0x5308ce*/
            }
          }
        }
      }
LABEL_60:
      FileFind::CloseHandle(); /*0x5308e5*/
      goto LABEL_85; /*0x5308ea*/
    }
    strcpy(Buffer, aMapsMix); /*0x53090f*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x530926*/
    {
      Debug::Log_0(); /*0x530939*/
      v24 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530940*/
      if ( v24 ) /*0x53094a*/
        MEMORY[0x87F7E8][5535] = MixFileClass::FromFile(v24, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530960*/
      else
        MEMORY[0x87F7E8][5535] = 0; /*0x530967*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x53097b*/
      {
        Debug::Log_0(); /*0x53098e*/
        v25 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530995*/
        if ( v25 ) /*0x53099f*/
        {
          v26 = MixFileClass::FromFile(v25, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x5309b5*/
          if ( v26 ) /*0x5309b9*/
          {
            if ( MEMORY[0x87F7E8][5492] < MEMORY[0x87F7E8][5490] /*0x5309f1*/
              || (BYTE1(MEMORY[0x87F7E8][5491]) || !MEMORY[0x87F7E8][5490])
              && MEMORY[0x87F7E8][5493] > 0
              && (*(uint8_t (**)(unsigned int *, int, unsigned int))(MEMORY[0x87F7E8][5488] + 8))(
                   &MEMORY[0x87F7E8][5488],
                   MEMORY[0x87F7E8][5493] + MEMORY[0x87F7E8][5490],
                   0) )
            {
              v27 = MEMORY[0x87F7E8][5492]++; /*0x5309fe*/
              *(unsigned int *)(MEMORY[0x87F7E8][5489] + 4 * v27) = v26; /*0x530a0d*/
            }
          }
        }
      }
      goto LABEL_60; /*0x530a1e*/
    }
  }
  else
  {
    sprintf(Buffer, "MAPSMD%02d.MIX", v19); /*0x530a3c*/
    v28 = CCFileClass::Construct(v69, Buffer); /*0x530a50*/
    v29 = (*(int (**)(unsigned int *, unsigned int))(*v28 + 20))(v28, 0); /*0x530a61*/
    v69[0] = &CCFileClass::`vftable'; /*0x530a63*/
    v71 = 0; /*0x530a67*/
    Vector::Clear((int)v70); /*0x530a6b*/
    v69[0] = &off_7E1668; /*0x530a74*/
    BufferIOFileClass::Dtor(v69); /*0x530a7c*/
    if ( v29 ) /*0x530a83*/
    {
      v30 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530a87*/
      if ( v30 ) /*0x530a91*/
        MEMORY[0x87F7E8][5534] = MixFileClass::FromFile(v30, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530aa7*/
      else
        MEMORY[0x87F7E8][5534] = 0; /*0x530aae*/
    }
    Debug::Log_0(); /*0x530ac1*/
    sprintf(Buffer, "MAPS%02d.MIX", v19); /*0x530ad4*/
    v31 = CCFileClass::Construct(v69, Buffer); /*0x530ae8*/
    v32 = (*(int (**)(unsigned int *, unsigned int))(*v31 + 20))(v31, 0); /*0x530af9*/
    v69[0] = &CCFileClass::`vftable'; /*0x530afb*/
    v71 = 0; /*0x530aff*/
    Vector::Clear((int)v70); /*0x530b03*/
    v69[0] = &off_7E1668; /*0x530b0c*/
    BufferIOFileClass::Dtor(v69); /*0x530b14*/
    if ( v32 ) /*0x530b1b*/
    {
      v33 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530b1f*/
      if ( v33 ) /*0x530b29*/
        MEMORY[0x87F7E8][5535] = MixFileClass::FromFile(v33, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530b3f*/
      else
        MEMORY[0x87F7E8][5535] = 0; /*0x530b46*/
    }
    Debug::Log_0(); /*0x530b59*/
  }
LABEL_85:
  if ( !MEMORY[0x87F7E8][5534] ) /*0x530b67*/
    return 0; /*0x530b75*/
  v34 = CCFileClass::Construct(v69, g_Str_File_MULTIMD_MIX); /*0x530b7f*/
  v35 = (*(int (**)(unsigned int *, unsigned int))(*v34 + 20))(v34, 0); /*0x530b95*/
  v69[0] = &CCFileClass::`vftable'; /*0x530b97*/
  v71 = 0; /*0x530b9b*/
  Vector::Clear((int)v70); /*0x530b9f*/
  v69[0] = &off_7E1668; /*0x530bad*/
  BufferIOFileClass::Dtor(v69); /*0x530bb1*/
  if ( v35 ) /*0x530bb8*/
  {
    v36 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530bbc*/
    if ( v36 ) /*0x530bc6*/
      MEMORY[0x87F7E8][5500] = MixFileClass::FromFile(v36, g_Str_File_MULTIMD_MIX, (int)&MEMORY[0x87F7E8][7270]); /*0x530bd9*/
    else
      MEMORY[0x87F7E8][5500] = 0; /*0x530be0*/
  }
  Debug::Log_0(); /*0x530beb*/
  if ( !MEMORY[0x87F7E8][5500] ) /*0x530bfa*/
    return 0; /*0x530c08*/
  v37 = CCFileClass::Construct(v69, g_Str_File_THEMEMD_MIX); /*0x530c12*/
  v38 = (*(int (**)(unsigned int *, unsigned int))(*v37 + 20))(v37, 0); /*0x530c23*/
  v69[0] = &CCFileClass::`vftable'; /*0x530c25*/
  v71 = 0; /*0x530c29*/
  Vector::Clear((int)v70); /*0x530c2d*/
  v69[0] = &off_7E1668; /*0x530c36*/
  BufferIOFileClass::Dtor(v69); /*0x530c3a*/
  if ( v38 ) /*0x530c41*/
  {
    Debug::Log(); /*0x530c48*/
    v39 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530c4f*/
    if ( v39 ) /*0x530c59*/
    {
      MEMORY[0x87E738] = MixFileClass::FromFile(v39, g_Str_File_THEMEMD_MIX, (int)&MEMORY[0x87F7E8][7270]); /*0x530c70*/
      goto LABEL_100; /*0x530c75*/
    }
  }
  else
  {
    v40 = CCFileClass::Construct(v69, g_Str_File_THEME_MIX); /*0x530c80*/
    v41 = (*(int (**)(unsigned int *, unsigned int))(*v40 + 20))(v40, 0); /*0x530c91*/
    v69[0] = &CCFileClass::`vftable'; /*0x530c93*/
    v71 = 0; /*0x530c97*/
    Vector::Clear((int)v70); /*0x530c9b*/
    v69[0] = &off_7E1668; /*0x530ca4*/
    BufferIOFileClass::Dtor(v69); /*0x530ca8*/
    if ( !v41 ) /*0x530caf*/
      goto LABEL_100; /*0x530caf*/
    Debug::Log(); /*0x530cb6*/
    v42 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530cbd*/
    if ( v42 ) /*0x530cc7*/
    {
      MEMORY[0x87E738] = MixFileClass::FromFile(v42, g_Str_File_THEME_MIX, (int)&MEMORY[0x87F7E8][7270]); /*0x530cda*/
      goto LABEL_100; /*0x530cdf*/
    }
  }
  MEMORY[0x87E738] = 0; /*0x530ce1*/
LABEL_100:
  Debug::Log_0(); /*0x530ce7*/
  LOBYTE(MEMORY[0x87F7E8][539939]) = 1; /*0x530cf9*/
  Audio::LoadWAVFiles(&MEMORY[0x87F7E8][528714]); /*0x530d00*/
  if ( LOBYTE(MEMORY[0x87F7E8][31470]) == 1 ) /*0x530d0c*/
  {
    strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530d37*/
    v43 = RawFileClass::Construct(v73, (int)aMovies01Mix); /*0x530d47*/
    v44 = (*(int (**)(unsigned int *, unsigned int))(*v43 + 20))(v43, 0); /*0x530d5b*/
    RawFileClass::Dtor(v73); /*0x530d5d*/
    if ( v44 ) /*0x530d64*/
      strcpy(Buffer, aMoviesMix); /*0x530d86*/
    v45 = RawFileClass::Construct(v73, (int)aMixfilesMovies); /*0x530d9b*/
    v46 = (*(int (**)(unsigned int *, unsigned int))(*v45 + 20))(v45, 0); /*0x530daf*/
    RawFileClass::Dtor(v73); /*0x530db1*/
    if ( v46 ) /*0x530db8*/
      strcpy(Buffer, aMixfilesMovies_0); /*0x530dda*/
    v47 = RawFileClass::Construct(v73, (int)aMovmd01Mix); /*0x530def*/
    v48 = (*(int (**)(unsigned int *, unsigned int))(*v47 + 20))(v47, 0); /*0x530e03*/
    RawFileClass::Dtor(v73); /*0x530e05*/
    if ( v48 ) /*0x530e0c*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530e2e*/
    v49 = RawFileClass::Construct(v73, (int)aMixfilesMovmd0); /*0x530e43*/
    v50 = (*(int (**)(unsigned int *, unsigned int))(*v49 + 20))(v49, 0); /*0x530e57*/
    RawFileClass::Dtor(v73); /*0x530e59*/
    if ( v50 ) /*0x530e60*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530e82*/
    v51 = RawFileClass::Construct(v73, (int)aMovmd03Mix); /*0x530e97*/
    v52 = (*(int (**)(unsigned int *, unsigned int))(*v51 + 20))(v51, 0); /*0x530eab*/
    RawFileClass::Dtor(v73); /*0x530ead*/
    if ( v52 ) /*0x530eb4*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530ed6*/
    v53 = RawFileClass::Construct(v73, (int)aMixfilesMovmd0_0); /*0x530eeb*/
    v54 = (*(int (**)(unsigned int *, unsigned int))(*v53 + 20))(v53, 0); /*0x530eff*/
    RawFileClass::Dtor(v73); /*0x530f01*/
    if ( v54 ) /*0x530f08*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530f2a*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x530f41*/
    {
      Debug::Log_0(); /*0x530f54*/
      v55 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530f5b*/
      if ( v55 ) /*0x530f65*/
        MEMORY[0x87F7E8][5521] = MixFileClass::FromFile(v55, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530f7b*/
      else
        MEMORY[0x87F7E8][5521] = 0; /*0x530f82*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x530f96*/
      {
        Debug::Log_0(); /*0x530fa9*/
        v56 = (unsigned int *)__2_YAPAXI_Z(40); /*0x530fb0*/
        if ( v56 ) /*0x530fba*/
        {
          v57 = MixFileClass::FromFile(v56, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x530fd0*/
          if ( v57 ) /*0x530fd4*/
          {
            if ( MEMORY[0x87F7E8][5506] < MEMORY[0x87F7E8][5504] /*0x53100c*/
              || (BYTE1(MEMORY[0x87F7E8][5505]) || !MEMORY[0x87F7E8][5504])
              && MEMORY[0x87F7E8][5507] > 0
              && (*(uint8_t (**)(unsigned int *, int, unsigned int))(MEMORY[0x87F7E8][5502] + 8))(
                   &MEMORY[0x87F7E8][5502],
                   MEMORY[0x87F7E8][5504] + MEMORY[0x87F7E8][5507],
                   0) )
            {
              v58 = MEMORY[0x87F7E8][5506]++; /*0x531019*/
              *(unsigned int *)(MEMORY[0x87F7E8][5503] + 4 * v58) = v57; /*0x531028*/
            }
          }
        }
      }
    }
    else
    {
      strcpy(Buffer, aMoviesMix); /*0x531069*/
      Debug::Log_0(); /*0x53107f*/
      v59 = (unsigned int *)__2_YAPAXI_Z(40); /*0x531086*/
      if ( v59 ) /*0x531090*/
        MEMORY[0x87F7E8][5521] = MixFileClass::FromFile(v59, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x5310a6*/
      else
        MEMORY[0x87F7E8][5521] = 0; /*0x5310ad*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x5310c1*/
      {
        Debug::Log_0(); /*0x5310d4*/
        v60 = (unsigned int *)__2_YAPAXI_Z(40); /*0x5310db*/
        if ( v60 ) /*0x5310e5*/
        {
          v61 = MixFileClass::FromFile(v60, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x5310fb*/
          if ( v61 ) /*0x5310ff*/
          {
            if ( MEMORY[0x87F7E8][5506] < MEMORY[0x87F7E8][5504] /*0x531137*/
              || (BYTE1(MEMORY[0x87F7E8][5505]) || !MEMORY[0x87F7E8][5504])
              && MEMORY[0x87F7E8][5507] > 0
              && (*(uint8_t (**)(unsigned int *, int, unsigned int))(MEMORY[0x87F7E8][5502] + 8))(
                   &MEMORY[0x87F7E8][5502],
                   MEMORY[0x87F7E8][5504] + MEMORY[0x87F7E8][5507],
                   0) )
            {
              v62 = MEMORY[0x87F7E8][5506]++; /*0x531144*/
              *(unsigned int *)(MEMORY[0x87F7E8][5503] + 4 * v62) = v61; /*0x531153*/
            }
          }
        }
      }
    }
    FileFind::CloseHandle(); /*0x53103f*/
    return MEMORY[0x87F7E8][5521] != 0; /*0x531044*/
  }
  v63 = v72; /*0x531174*/
  sprintf(Buffer, "MOVMD%02d.MIX", v72); /*0x531186*/
  v64 = CCFileClass::Construct(v69, Buffer); /*0x53119a*/
  v65 = (*(int (**)(unsigned int *, unsigned int))(*v64 + 20))(v64, 0); /*0x5311ab*/
  v69[0] = &CCFileClass::`vftable'; /*0x5311ad*/
  v71 = 0; /*0x5311b5*/
  Vector::Clear((int)v70); /*0x5311b9*/
  v69[0] = &off_7E1668; /*0x5311c2*/
  BufferIOFileClass::Dtor(v69); /*0x5311c6*/
  if ( v65 ) /*0x5311cd*/
  {
    v66 = (unsigned int *)__2_YAPAXI_Z(40); /*0x5311d1*/
    if ( v66 ) /*0x5311db*/
      goto LABEL_147; /*0x5311db*/
    goto LABEL_148; /*0x5311db*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v63); /*0x5311f1*/
  v67 = CCFileClass::Construct(v69, Buffer); /*0x531205*/
  v68 = (*(int (**)(unsigned int *, unsigned int))(*v67 + 20))(v67, 0); /*0x531216*/
  v69[0] = &CCFileClass::`vftable'; /*0x531218*/
  v71 = 0; /*0x531220*/
  Vector::Clear((int)v70); /*0x531224*/
  v69[0] = &off_7E1668; /*0x53122d*/
  BufferIOFileClass::Dtor(v69); /*0x531231*/
  if ( v68 ) /*0x531238*/
  {
    v66 = (unsigned int *)__2_YAPAXI_Z(40); /*0x53123c*/
    if ( v66 ) /*0x531246*/
    {
LABEL_147:
      MEMORY[0x87F7E8][5521] = MixFileClass::FromFile(v66, Buffer, (int)&MEMORY[0x87F7E8][7270]); /*0x531248*/
      goto LABEL_149; /*0x531261*/
    }
LABEL_148:
    MEMORY[0x87F7E8][5521] = 0; /*0x531263*/
  }
LABEL_149:
  Debug::Log_0(); /*0x531269*/
  return MEMORY[0x87F7E8][5521] != 0; /*0x5304f2*/

}
}
// 0x534FA0
namespace gamemd {
AbstractClass * * MixFile::LoadSide()
{

  unsigned int v2; // ebx
  unsigned int YR; // eax
  unsigned int v5; // esi
  unsigned int *v6; // eax
  char v7; // bl
  unsigned int *v8; // eax
  unsigned int *v9; // eax
  char v10; // bl
  unsigned int *v11; // eax
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  char v14; // bl
  unsigned int *v15; // eax
  char v16; // al
  unsigned int v17; // [esp+1Ch] [ebp-11Ch]
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  unsigned int v19[22]; // [esp+60h] [ebp-D8h] BYREF
  unsigned char v20[12]; // [esp+B8h] [ebp-80h] BYREF
  int v21; // [esp+C4h] [ebp-74h]
  unsigned int v22[22]; // [esp+CCh] [ebp-6Ch] BYREF
  unsigned char v23[12]; // [esp+124h] [ebp-14h] BYREF
  int v24; // [esp+130h] [ebp-8h]

  VoxClass::SetEVAIndex(); /*0x534fac*/
  if ( this == 2 ) /*0x534fb4*/
    this = 1; /*0x534fb6*/
  v2 = this; /*0x534fbb*/
  v17 = this; /*0x534fc0*/
  if ( this == -1 ) /*0x534fc4*/
  {
    YR = AlwaysFindYRCD(g_abs_89E414, 60); /*0x534fd1*/
    if ( YR >= 2 ) /*0x534fda*/
    {
      Debug::Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v17 = YR; /*0x534ffb*/
    v2 = YR; /*0x534fff*/
  }
  Debug::Log(); /*0x53500b*/
  if ( g_abs_884E68 ) /*0x53501a*/
  {
    Debug::Log(); /*0x535025*/
    if ( g_abs_884E68 ) /*0x535035*/
      (**(void (***)(int, int))g_abs_884E68)(g_abs_884E68, 1); /*0x53503b*/
    g_abs_884E68 = 0; /*0x53503d*/
  }
  if ( g_abs_884E74 ) /*0x53504a*/
  {
    Debug::Log(); /*0x535055*/
    if ( g_abs_884E74 ) /*0x535065*/
      (**(void (***)(int, int))g_abs_884E74)(g_abs_884E74, 1); /*0x53506b*/
    g_abs_884E74 = 0; /*0x53506d*/
  }
  if ( g_abs_884E70 ) /*0x53507a*/
  {
    Debug::Log(); /*0x535085*/
    if ( g_abs_884E70 ) /*0x535095*/
      (**(void (***)(int, int))g_abs_884E70)(g_abs_884E70, 1); /*0x53509b*/
    g_abs_884E70 = 0; /*0x53509d*/
  }
  if ( g_abs_884E78 ) /*0x5350aa*/
  {
    Debug::Log(); /*0x5350b5*/
    if ( g_abs_884E78 ) /*0x5350c5*/
      (**(void (***)(int, int))g_abs_884E78)(g_abs_884E78, 1); /*0x5350cb*/
    g_abs_884E78 = 0; /*0x5350cd*/
  }
  v5 = v2 + 1; /*0x5350d3*/
  sprintf(Buffer, g_abs_827E0C, v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  v6 = CCFileClass::Construct(v19, Buffer); /*0x535101*/
  v7 = (*(int (**)(unsigned int *, unsigned int))(*v6 + 20))(v6, 0); /*0x535115*/
  v19[0] = &vt_CCFileClass; /*0x535117*/
  v21 = 0; /*0x53511f*/
  Vector::Clear((int)v20); /*0x535126*/
  v19[0] = &off_7E1668; /*0x535134*/
  BufferIOFileClass::Dtor(v19); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    v8 = RA2_OPNEW(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      g_abs_884E70 = (int)MixFileClass::FromFile(v8, Buffer, (int)&g_abs_886980); /*0x535160*/
    else
      g_abs_884E70 = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, g_abs_827DE4, v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  v9 = CCFileClass::Construct(v19, Buffer); /*0x5351a4*/
  v10 = (*(int (**)(unsigned int *, unsigned int))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v19[0] = &vt_CCFileClass; /*0x5351ba*/
  v21 = 0; /*0x5351c2*/
  Vector::Clear((int)v20); /*0x5351c9*/
  v19[0] = &off_7E1668; /*0x5351d2*/
  BufferIOFileClass::Dtor(v19); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    v11 = RA2_OPNEW(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      g_abs_884E74 = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = MixFileClass::FromFile(v11, Buffer, (int)&g_abs_886980); /*0x5351f9*/
    g_abs_884E74 = (int)v12; /*0x5351fe*/
  }
  else
  {
    v12 = (unsigned int *)g_abs_884E74; /*0x535225*/
  }
  if ( v12 ) /*0x53522c*/
  {
    ReturnTrue(0); /*0x53524b*/
    sprintf(Buffer, stru_827DD4, v5); /*0x53525b*/
    Debug::Log(); /*0x53526a*/
    v13 = CCFileClass::Construct(v19, Buffer); /*0x53527b*/
    v14 = (*(int (**)(unsigned int *, unsigned int))(*v13 + 20))(v13, 0); /*0x535294*/
    v19[0] = &vt_CCFileClass; /*0x535296*/
    v21 = 0; /*0x53529a*/
    Vector::Clear((int)v20); /*0x5352a1*/
    v19[0] = &off_7E1668; /*0x5352aa*/
    BufferIOFileClass::Dtor(v19); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      v15 = RA2_OPNEW(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        g_abs_884E78 = (int)MixFileClass::FromFile(v15, Buffer, (int)&g_abs_886980); /*0x5352d6*/
      else
        g_abs_884E78 = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    Game::InitializeToolTipColor(v17); /*0x5352ec*/
    CCFileClass::Construct(v22, unk_827DC8); /*0x5352fd*/
    if ( CCINIClass::Load(&g_abs_887208, (int)v22, 0, 0) ) /*0x535311*/
    {
      v16 = g_abs_A8B238[0] && g_abs_A8B238[0] != 5; /*0x53532f*/
      SidebarClass::ReadButtonList(&g_abs_887208, v16); /*0x53533d*/
      SidebarClass::LoadButtonSHPs(&g_abs_87F7E8); /*0x535347*/
      v22[0] = &vt_CCFileClass; /*0x535353*/
      v24 = 0; /*0x53535a*/
      Vector::Clear((int)v23); /*0x535361*/
      v22[0] = &off_7E1668; /*0x53536d*/
      BufferIOFileClass::Dtor(v22); /*0x535374*/
      return 1; /*0x535379*/
    }
    else
    {
      Debug::Log(); /*0x53538b*/
      v22[0] = &vt_CCFileClass; /*0x53539a*/
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
// 0x627590
namespace gamemd {
unsigned int * MIXFile::Load(ObjectClass * aP1)
{

  unsigned int *v2; // ebp
  ObjectClass *v3; // edx
  unsigned char *v5; // esi
  int v6; // edi
  const void *v7; // eax
  int v8; // ebx
  int i; // esi
  unsigned char *v10; // eax
  char v11; // cl
  ObjectClass *v12; // edi
  int v13; // eax
  unsigned int *v14; // esi
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
  int16_t v31; // [esp+10h] [ebp-414h]
  int v32; // [esp+10h] [ebp-414h]
  ObjectClass aP2; // [esp+14h] [ebp-410h] BYREF
  unsigned char aP3[768]; // [esp+124h] [ebp-300h] BYREF

  v2 = this; /*0x627598*/
  *(unsigned int *)&aP2.__pad_0[8] = this; /*0x62759c*/
  v3 = (ObjectClass *)*this; /*0x6275a0*/
  if ( *this == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  strcpy((char *)&aP2.uniqueId, aP1->__pad_0); /*0x6275d6*/
  strcat((char *)&aP2.uniqueId, (const char *)&off_7E1BC6 + 112 * (unsigned int)v3); /*0x627611*/
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
    v31 = *(unsigned short *)v10; /*0x6276ea*/
    v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(unsigned short *)v10; /*0x6276f9*/
    v10[1] = 4 * IDA_HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(ObjectClass **)(v2[2] + 16); /*0x627719*/
  *(unsigned int *)&aP2.__pad_0[12] = v12; /*0x62771c*/
  v13 = RA2_OPNEW(0x18u); /*0x627720*/
  v14 = (unsigned int *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(unsigned int *)(v13 + 4) = 0; /*0x627730*/
    *(unsigned int *)(v13 + 8) = 20; /*0x627733*/
    *(unsigned char *)(v13 + 12) = 1; /*0x62773a*/
    *(unsigned char *)(v13 + 13) = 0; /*0x62773e*/
    *(unsigned int *)v13 = &vt_VectorClass_ColorScheme; /*0x627742*/
    *(unsigned int *)(v13 + 4) = RA2_OPNEW(0x50u); /*0x627750*/
    *((unsigned char *)v14 + 13) = 1; /*0x627753*/
    *v14 = &vt_DynamicVectorClass_ColorScheme; /*0x627757*/
    v14[5] = 10; /*0x62775d*/
    v14[4] = 0; /*0x627764*/
  }
  else
  {
    v14 = 0; /*0x627769*/
  }
  *(unsigned int *)&aP2.__pad_0[4] = 0; /*0x62776d*/
  if ( (int)v12 > 0 ) /*0x627771*/
  {
    v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
      v15 = *(char **)(*(unsigned int *)(v2[1] + 4) + 4 * v8); /*0x62779b*/
      v16 = v32 + *(unsigned int *)(*(unsigned int *)(*(unsigned int *)&aP2.__pad_0[8] + 8) + 4); /*0x6277a1*/
      *(unsigned short *)aP2.__pad_0 = *(unsigned short *)v16; /*0x6277a6*/
      aP2.__pad_0[2] = *(unsigned char *)(v16 + 2); /*0x6277ae*/
      eax15 = (char *)RA2_OPNEW(0x33Cu); /*0x6277b2*/
      if ( eax15 ) /*0x6277bc*/
        v17 = (ObjectClass *)FontClass::InitMetrics( /*0x6277dc*/
                               eax15,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&g_abs_87F8E4,
                               1,
                               0);
      else
        v17 = 0; /*0x6277e0*/
      v19 = 2 * v8; /*0x6277e2*/
      *(unsigned int *)v17->__pad_0 = v19; /*0x6277e4*/
      v20 = v14[2]; /*0x6277e6*/
      if ( v14[4] < v20 /*0x627809*/
        || (*((unsigned char *)v14 + 13) || !v20)
        && (ecx21 = v14[5], ecx21 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v14 + 8))(v14, v20 + ecx21, 0) )
      {
        v21 = (ObjectClass *)v14[4]; /*0x627810*/
        v22 = (ObjectClass *)v14[1]; /*0x627813*/
        v14[4] = &v21->__pad_0[1]; /*0x627819*/
        *(unsigned int *)&v22->__pad_0[4 * (unsigned int)v21] = v17; /*0x62781c*/
      }
      v24 = (char *)RA2_OPNEW(0x33Cu); /*0x627824*/
      if ( v24 ) /*0x62782e*/
        v23 = (ObjectClass *)FontClass::InitMetrics( /*0x62784e*/
                               v24,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&g_abs_87F8E4,
                               53,
                               0);
      else
        v23 = 0; /*0x627852*/
      *(unsigned int *)v23->__pad_0 = v19 + 1; /*0x627855*/
      eax27 = v14[2]; /*0x627857*/
      if ( v14[4] < eax27 /*0x62787a*/
        || (*((unsigned char *)v14 + 13) || !eax27)
        && (ecx30 = v14[5], ecx30 > 0)
        && (*(uint8_t (**)(unsigned int *, int, unsigned int))(*v14 + 8))(v14, eax27 + ecx30, 0) )
      {
        v26 = (ObjectClass *)v14[4]; /*0x627881*/
        v27 = (ObjectClass *)v14[1]; /*0x627884*/
        v14[4] = &v26->__pad_0[1]; /*0x62788a*/
        *(unsigned int *)&v27->__pad_0[4 * (unsigned int)v26] = v23; /*0x62788d*/
      }
      v30 = ++*(unsigned int *)&aP2.__pad_0[4] < *(unsigned int *)&aP2.__pad_0[12]; /*0x6278a0*/
      v32 += 3; /*0x6278a6*/
      if ( !v30 ) /*0x6278aa*/
        break; /*0x6278aa*/
      v8 = *(unsigned int *)&aP2.__pad_0[4]; /*0x62777d*/
      v2 = *(unsigned int **)&aP2.__pad_0[8]; /*0x627781*/
    }
  }
  return v14; /*0x6275a8*/

}
}