// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/MIXFile_e4.hpp"
#include "e4/classes/MixFile_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Vector_e4.hpp"

// 0x530460
namespace gamemd {
int MixFile::LoadAll()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  _DWORD *v66; // eax
  _DWORD *v67; // eax
  char v68; // bl
  _DWORD v69[22]; // [esp+38h] [ebp-198h] BYREF
  _BYTE v70[12]; // [esp+90h] [ebp-140h] BYREF
  int v71; // [esp+9Ch] [ebp-134h]
  int v72; // [esp+A4h] [ebp-12Ch]
  char Buffer[260]; // [esp+CCh] [ebp-104h] BYREF

  _DWORD * v0 = CCFileClass::Construct(v69, aConqmdMix); /*0x530473*/
  char v1 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v0 + 20))(v0, 0); /*0x53048b*/
  v69[0] = &CCFileClass::`vftable'; /*0x53048d*/
  v71 = 0; /*0x530491*/
  Vector::Clear((int)v70); /*0x530495*/
  v69[0] = &off_7E1668; /*0x5304a3*/
  BufferIOFileClass::Dtor(v69); /*0x5304a7*/
  if ( v1 ) /*0x5304ae*/
  {
    _DWORD * v2 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5304b2*/
    if ( v2 ) /*0x5304bc*/
      DataGlobal_87F7E8[5524] = MixFileClass::FromFile(v2, aConqmdMix, (int)&DataGlobal_87F7E8[7270]); /*0x5304cf*/
    else
      DataGlobal_87F7E8[5524] = 0; /*0x5304d6*/
  }
  Debug::Log_0(); /*0x5304e1*/
  if ( !DataGlobal_87F7E8[5524] ) /*0x5304f0*/
    return 0; /*0x5304fe*/
  if ( DataGlobal_87F7E8[5516] ) /*0x530507*/
    (**(void (__thiscall ***)(_DWORD, int))DataGlobal_87F7E8[5516])(DataGlobal_87F7E8[5516], 1); /*0x53050d*/
  _DWORD * v4 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530511*/
  if ( v4 ) /*0x53051b*/
    _DWORD * v5 = MixFileClass::FromFile(v4, aGenermdMix, (int)&DataGlobal_87F7E8[7270]); /*0x530529*/
  else
    v5 = 0; /*0x530530*/
  DataGlobal_87F7E8[5516] = v5; /*0x530535*/
  ReturnTrue(0); /*0x53053a*/
  if ( DataGlobal_87F7E8[5515] ) /*0x530547*/
    (**(void (__thiscall ***)(_DWORD, int))DataGlobal_87F7E8[5515])(DataGlobal_87F7E8[5515], 1); /*0x53054d*/
  _DWORD * v6 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530551*/
  if ( v6 ) /*0x53055b*/
    _DWORD * v7 = MixFileClass::FromFile(v6, aGenericMix, (int)&DataGlobal_87F7E8[7270]); /*0x530569*/
  else
    v7 = 0; /*0x530570*/
  DataGlobal_87F7E8[5515] = v7; /*0x530575*/
  ReturnTrue(0); /*0x53057a*/
  if ( DataGlobal_87F7E8[5520] ) /*0x530587*/
    (**(void (__thiscall ***)(_DWORD, int))DataGlobal_87F7E8[5520])(DataGlobal_87F7E8[5520], 1); /*0x53058d*/
  _DWORD * v8 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530591*/
  if ( v8 ) /*0x53059b*/
    DataGlobal_87F7E8[5520] = MixFileClass::FromFile(v8, aIsogenmdMix, (int)&DataGlobal_87F7E8[7270]); /*0x5305ae*/
  else
    DataGlobal_87F7E8[5520] = 0; /*0x5305b5*/
  if ( DataGlobal_87F7E8[5519] ) /*0x5305c3*/
    (**(void (__thiscall ***)(_DWORD, int))DataGlobal_87F7E8[5519])(DataGlobal_87F7E8[5519], 1); /*0x5305c9*/
  _DWORD * v9 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5305cd*/
  if ( v9 ) /*0x5305d7*/
    DataGlobal_87F7E8[5519] = MixFileClass::FromFile(v9, aIsogenMix, (int)&DataGlobal_87F7E8[7270]); /*0x5305ea*/
  else
    DataGlobal_87F7E8[5519] = 0; /*0x5305f1*/
  _DWORD * v10 = CCFileClass::Construct(v69, aConquerMix); /*0x530600*/
  char v11 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v10 + 20))(v10, 0); /*0x530611*/
  v69[0] = &CCFileClass::`vftable'; /*0x530613*/
  v71 = 0; /*0x530617*/
  Vector::Clear((int)v70); /*0x53061b*/
  v69[0] = &off_7E1668; /*0x530624*/
  BufferIOFileClass::Dtor(v69); /*0x530628*/
  if ( v11 ) /*0x53062f*/
  {
    _DWORD * v12 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530633*/
    if ( v12 ) /*0x53063d*/
      DataGlobal_87F7E8[5525] = MixFileClass::FromFile(v12, aConquerMix, (int)&DataGlobal_87F7E8[7270]); /*0x530650*/
    else
      DataGlobal_87F7E8[5525] = 0; /*0x530657*/
  }
  Debug::Log_0(); /*0x530662*/
  if ( !DataGlobal_87F7E8[5525] ) /*0x530671*/
    return 0; /*0x53067f*/
  _DWORD * v13 = CCFileClass::Construct(v69, aCameomdMix); /*0x530689*/
  char v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x53069a*/
  v69[0] = &CCFileClass::`vftable'; /*0x53069c*/
  v71 = 0; /*0x5306a0*/
  Vector::Clear((int)v70); /*0x5306a4*/
  v69[0] = &off_7E1668; /*0x5306ad*/
  BufferIOFileClass::Dtor(v69); /*0x5306b1*/
  if ( v14 ) /*0x5306b8*/
  {
    _DWORD * v15 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5306bc*/
    if ( v15 ) /*0x5306c6*/
      DataGlobal_87F7E8[5526] = MixFileClass::FromFile(v15, aCameomdMix, (int)&DataGlobal_87F7E8[7270]); /*0x5306d9*/
    else
      DataGlobal_87F7E8[5526] = 0; /*0x5306e0*/
  }
  Debug::Log_0(); /*0x5306eb*/
  if ( !DataGlobal_87F7E8[5526] ) /*0x5306fa*/
    return 0; /*0x530708*/
  _DWORD * v16 = CCFileClass::Construct(v69, aCameoMix); /*0x530712*/
  char v17 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v16 + 20))(v16, 0); /*0x530723*/
  v69[0] = &CCFileClass::`vftable'; /*0x530725*/
  v71 = 0; /*0x530729*/
  Vector::Clear((int)v70); /*0x53072d*/
  v69[0] = &off_7E1668; /*0x530736*/
  BufferIOFileClass::Dtor(v69); /*0x53073a*/
  if ( v17 ) /*0x530741*/
  {
    _DWORD * v18 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530745*/
    if ( v18 ) /*0x53074f*/
      DataGlobal_87F7E8[5527] = MixFileClass::FromFile(v18, aCameoMix, (int)&DataGlobal_87F7E8[7270]); /*0x530762*/
    else
      DataGlobal_87F7E8[5527] = 0; /*0x530769*/
  }
  Debug::Log_0(); /*0x530774*/
  if ( !DataGlobal_87F7E8[5527] ) /*0x530783*/
    return 0; /*0x530791*/
  int v19 = Game::CheckForGameCD((void *)0x3C) + 1; /*0x5307a3*/
  v72 = v19; /*0x5307a6*/
  if ( LOBYTE(DataGlobal_87F7E8[31470]) == 1 ) /*0x5307aa*/
  {
    strcpy(Buffer, aMapsmdMix); /*0x5307d0*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x5307e7*/
    {
      Debug::Log_0(); /*0x5307fa*/
      _DWORD * v20 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530801*/
      if ( v20 ) /*0x53080b*/
        DataGlobal_87F7E8[5534] = MixFileClass::FromFile(v20, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x530821*/
      else
        DataGlobal_87F7E8[5534] = 0; /*0x530828*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x53083c*/
      {
        Debug::Log_0(); /*0x53084f*/
        _DWORD * v21 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530856*/
        if ( v21 ) /*0x530860*/
        {
          _DWORD * v22 = MixFileClass::FromFile(v21, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x530876*/
          if ( v22 ) /*0x53087a*/
          {
            if ( DataGlobal_87F7E8[5492] < DataGlobal_87F7E8[5490] /*0x5308b2*/
              || (BYTE1(DataGlobal_87F7E8[5491]) || !DataGlobal_87F7E8[5490])
              && DataGlobal_87F7E8[5493] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(DataGlobal_87F7E8[5488] + 8))(
                   &DataGlobal_87F7E8[5488],
                   DataGlobal_87F7E8[5493] + DataGlobal_87F7E8[5490],
                   0) )
            {
              int v23 = DataGlobal_87F7E8[5492]++; /*0x5308bf*/
              *(_DWORD *)(DataGlobal_87F7E8[5489] + 4 * v23) = v22; /*0x5308ce*/
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
      _DWORD * v24 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530940*/
      if ( v24 ) /*0x53094a*/
        DataGlobal_87F7E8[5535] = MixFileClass::FromFile(v24, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x530960*/
      else
        DataGlobal_87F7E8[5535] = 0; /*0x530967*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x53097b*/
      {
        Debug::Log_0(); /*0x53098e*/
        _DWORD * v25 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530995*/
        if ( v25 ) /*0x53099f*/
        {
          _DWORD * v26 = MixFileClass::FromFile(v25, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x5309b5*/
          if ( v26 ) /*0x5309b9*/
          {
            if ( DataGlobal_87F7E8[5492] < DataGlobal_87F7E8[5490] /*0x5309f1*/
              || (BYTE1(DataGlobal_87F7E8[5491]) || !DataGlobal_87F7E8[5490])
              && DataGlobal_87F7E8[5493] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(DataGlobal_87F7E8[5488] + 8))(
                   &DataGlobal_87F7E8[5488],
                   DataGlobal_87F7E8[5493] + DataGlobal_87F7E8[5490],
                   0) )
            {
              int v27 = DataGlobal_87F7E8[5492]++; /*0x5309fe*/
              *(_DWORD *)(DataGlobal_87F7E8[5489] + 4 * v27) = v26; /*0x530a0d*/
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
    _DWORD * v28 = CCFileClass::Construct(v69, Buffer); /*0x530a50*/
    char v29 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v28 + 20))(v28, 0); /*0x530a61*/
    v69[0] = &CCFileClass::`vftable'; /*0x530a63*/
    v71 = 0; /*0x530a67*/
    Vector::Clear((int)v70); /*0x530a6b*/
    v69[0] = &off_7E1668; /*0x530a74*/
    BufferIOFileClass::Dtor(v69); /*0x530a7c*/
    if ( v29 ) /*0x530a83*/
    {
      _DWORD * v30 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530a87*/
      if ( v30 ) /*0x530a91*/
        DataGlobal_87F7E8[5534] = MixFileClass::FromFile(v30, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x530aa7*/
      else
        DataGlobal_87F7E8[5534] = 0; /*0x530aae*/
    }
    Debug::Log_0(); /*0x530ac1*/
    sprintf(Buffer, "MAPS%02d.MIX", v19); /*0x530ad4*/
    _DWORD * v31 = CCFileClass::Construct(v69, Buffer); /*0x530ae8*/
    char v32 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v31 + 20))(v31, 0); /*0x530af9*/
    v69[0] = &CCFileClass::`vftable'; /*0x530afb*/
    v71 = 0; /*0x530aff*/
    Vector::Clear((int)v70); /*0x530b03*/
    v69[0] = &off_7E1668; /*0x530b0c*/
    BufferIOFileClass::Dtor(v69); /*0x530b14*/
    if ( v32 ) /*0x530b1b*/
    {
      _DWORD * v33 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530b1f*/
      if ( v33 ) /*0x530b29*/
        DataGlobal_87F7E8[5535] = MixFileClass::FromFile(v33, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x530b3f*/
      else
        DataGlobal_87F7E8[5535] = 0; /*0x530b46*/
    }
    Debug::Log_0(); /*0x530b59*/
  }
LABEL_85:
  if ( !DataGlobal_87F7E8[5534] ) /*0x530b67*/
    return 0; /*0x530b75*/
  _DWORD * v34 = CCFileClass::Construct(v69, g_Str_File_MULTIMD_MIX); /*0x530b7f*/
  char v35 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v34 + 20))(v34, 0); /*0x530b95*/
  v69[0] = &CCFileClass::`vftable'; /*0x530b97*/
  v71 = 0; /*0x530b9b*/
  Vector::Clear((int)v70); /*0x530b9f*/
  v69[0] = &off_7E1668; /*0x530bad*/
  BufferIOFileClass::Dtor(v69); /*0x530bb1*/
  if ( v35 ) /*0x530bb8*/
  {
    _DWORD * v36 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530bbc*/
    if ( v36 ) /*0x530bc6*/
      DataGlobal_87F7E8[5500] = MixFileClass::FromFile(v36, g_Str_File_MULTIMD_MIX, (int)&DataGlobal_87F7E8[7270]); /*0x530bd9*/
    else
      DataGlobal_87F7E8[5500] = 0; /*0x530be0*/
  }
  Debug::Log_0(); /*0x530beb*/
  if ( !DataGlobal_87F7E8[5500] ) /*0x530bfa*/
    return 0; /*0x530c08*/
  _DWORD * v37 = CCFileClass::Construct(v69, g_Str_File_THEMEMD_MIX); /*0x530c12*/
  char v38 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v37 + 20))(v37, 0); /*0x530c23*/
  v69[0] = &CCFileClass::`vftable'; /*0x530c25*/
  v71 = 0; /*0x530c29*/
  Vector::Clear((int)v70); /*0x530c2d*/
  v69[0] = &off_7E1668; /*0x530c36*/
  BufferIOFileClass::Dtor(v69); /*0x530c3a*/
  if ( v38 ) /*0x530c41*/
  {
    Debug::Log(); /*0x530c48*/
    _DWORD * v39 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530c4f*/
    if ( v39 ) /*0x530c59*/
    {
      g_MixFile_THEME = MixFileClass::FromFile(v39, g_Str_File_THEMEMD_MIX, (int)&DataGlobal_87F7E8[7270]); /*0x530c70*/
      goto LABEL_100; /*0x530c75*/
    }
  }
  else
  {
    _DWORD * v40 = CCFileClass::Construct(v69, g_Str_File_THEME_MIX); /*0x530c80*/
    char v41 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v40 + 20))(v40, 0); /*0x530c91*/
    v69[0] = &CCFileClass::`vftable'; /*0x530c93*/
    v71 = 0; /*0x530c97*/
    Vector::Clear((int)v70); /*0x530c9b*/
    v69[0] = &off_7E1668; /*0x530ca4*/
    BufferIOFileClass::Dtor(v69); /*0x530ca8*/
    if ( !v41 ) /*0x530caf*/
      goto LABEL_100; /*0x530caf*/
    Debug::Log(); /*0x530cb6*/
    _DWORD * v42 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530cbd*/
    if ( v42 ) /*0x530cc7*/
    {
      g_MixFile_THEME = MixFileClass::FromFile(v42, g_Str_File_THEME_MIX, (int)&DataGlobal_87F7E8[7270]); /*0x530cda*/
      goto LABEL_100; /*0x530cdf*/
    }
  }
  g_MixFile_THEME = 0; /*0x530ce1*/
LABEL_100:
  Debug::Log_0(); /*0x530ce7*/
  LOBYTE(DataGlobal_87F7E8[539939]) = 1; /*0x530cf9*/
  Audio::LoadWAVFiles(&DataGlobal_87F7E8[528714]); /*0x530d00*/
  if ( LOBYTE(DataGlobal_87F7E8[31470]) == 1 ) /*0x530d0c*/
  {
    strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530d37*/
  int v73[9]; // [esp+A8h] [ebp-128h] BYREF
    _DWORD * v43 = RawFileClass::Construct(v73, (int)aMovies01Mix); /*0x530d47*/
    char v44 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v43 + 20))(v43, 0); /*0x530d5b*/
    RawFileClass::Dtor(v73); /*0x530d5d*/
    if ( v44 ) /*0x530d64*/
      strcpy(Buffer, aMoviesMix); /*0x530d86*/
    _DWORD * v45 = RawFileClass::Construct(v73, (int)aMixfilesMovies); /*0x530d9b*/
    char v46 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v45 + 20))(v45, 0); /*0x530daf*/
    RawFileClass::Dtor(v73); /*0x530db1*/
    if ( v46 ) /*0x530db8*/
      strcpy(Buffer, aMixfilesMovies_0); /*0x530dda*/
    _DWORD * v47 = RawFileClass::Construct(v73, (int)aMovmd01Mix); /*0x530def*/
    char v48 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v47 + 20))(v47, 0); /*0x530e03*/
    RawFileClass::Dtor(v73); /*0x530e05*/
    if ( v48 ) /*0x530e0c*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530e2e*/
    _DWORD * v49 = RawFileClass::Construct(v73, (int)aMixfilesMovmd0); /*0x530e43*/
    char v50 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v49 + 20))(v49, 0); /*0x530e57*/
    RawFileClass::Dtor(v73); /*0x530e59*/
    if ( v50 ) /*0x530e60*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530e82*/
    _DWORD * v51 = RawFileClass::Construct(v73, (int)aMovmd03Mix); /*0x530e97*/
    char v52 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v51 + 20))(v51, 0); /*0x530eab*/
    RawFileClass::Dtor(v73); /*0x530ead*/
    if ( v52 ) /*0x530eb4*/
      strcpy(Buffer, g_Str_File_MOVMD__MIX); /*0x530ed6*/
    _DWORD * v53 = RawFileClass::Construct(v73, (int)aMixfilesMovmd0_0); /*0x530eeb*/
    char v54 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v53 + 20))(v53, 0); /*0x530eff*/
    RawFileClass::Dtor(v73); /*0x530f01*/
    if ( v54 ) /*0x530f08*/
      strcpy(Buffer, aMixfilesMovmdM); /*0x530f2a*/
    if ( FileClass::FindFirstWithCD(Buffer) == 1 ) /*0x530f41*/
    {
      Debug::Log_0(); /*0x530f54*/
      _DWORD * v55 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530f5b*/
      if ( v55 ) /*0x530f65*/
        DataGlobal_87F7E8[5521] = MixFileClass::FromFile(v55, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x530f7b*/
      else
        DataGlobal_87F7E8[5521] = 0; /*0x530f82*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x530f96*/
      {
        Debug::Log_0(); /*0x530fa9*/
        _DWORD * v56 = (_DWORD *)__2_YAPAXI_Z(40); /*0x530fb0*/
        if ( v56 ) /*0x530fba*/
        {
          _DWORD * v57 = MixFileClass::FromFile(v56, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x530fd0*/
          if ( v57 ) /*0x530fd4*/
          {
            if ( DataGlobal_87F7E8[5506] < DataGlobal_87F7E8[5504] /*0x53100c*/
              || (BYTE1(DataGlobal_87F7E8[5505]) || !DataGlobal_87F7E8[5504])
              && DataGlobal_87F7E8[5507] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(DataGlobal_87F7E8[5502] + 8))(
                   &DataGlobal_87F7E8[5502],
                   DataGlobal_87F7E8[5504] + DataGlobal_87F7E8[5507],
                   0) )
            {
              int v58 = DataGlobal_87F7E8[5506]++; /*0x531019*/
              *(_DWORD *)(DataGlobal_87F7E8[5503] + 4 * v58) = v57; /*0x531028*/
            }
          }
        }
      }
    }
    else
    {
      strcpy(Buffer, aMoviesMix); /*0x531069*/
      Debug::Log_0(); /*0x53107f*/
      _DWORD * v59 = (_DWORD *)__2_YAPAXI_Z(40); /*0x531086*/
      if ( v59 ) /*0x531090*/
        DataGlobal_87F7E8[5521] = MixFileClass::FromFile(v59, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x5310a6*/
      else
        DataGlobal_87F7E8[5521] = 0; /*0x5310ad*/
      while ( FileFind::Next(Buffer) == 1 ) /*0x5310c1*/
      {
        Debug::Log_0(); /*0x5310d4*/
        _DWORD * v60 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5310db*/
        if ( v60 ) /*0x5310e5*/
        {
          _DWORD * v61 = MixFileClass::FromFile(v60, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x5310fb*/
          if ( v61 ) /*0x5310ff*/
          {
            if ( DataGlobal_87F7E8[5506] < DataGlobal_87F7E8[5504] /*0x531137*/
              || (BYTE1(DataGlobal_87F7E8[5505]) || !DataGlobal_87F7E8[5504])
              && DataGlobal_87F7E8[5507] > 0
              && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(DataGlobal_87F7E8[5502] + 8))(
                   &DataGlobal_87F7E8[5502],
                   DataGlobal_87F7E8[5504] + DataGlobal_87F7E8[5507],
                   0) )
            {
              int v62 = DataGlobal_87F7E8[5506]++; /*0x531144*/
              *(_DWORD *)(DataGlobal_87F7E8[5503] + 4 * v62) = v61; /*0x531153*/
            }
          }
        }
      }
    }
    FileFind::CloseHandle(); /*0x53103f*/
    return DataGlobal_87F7E8[5521] != 0; /*0x531044*/
  }
  int v63 = v72; /*0x531174*/
  sprintf(Buffer, "MOVMD%02d.MIX", v72); /*0x531186*/
  _DWORD * v64 = CCFileClass::Construct(v69, Buffer); /*0x53119a*/
  char v65 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v64 + 20))(v64, 0); /*0x5311ab*/
  v69[0] = &CCFileClass::`vftable'; /*0x5311ad*/
  v71 = 0; /*0x5311b5*/
  Vector::Clear((int)v70); /*0x5311b9*/
  v69[0] = &off_7E1668; /*0x5311c2*/
  BufferIOFileClass::Dtor(v69); /*0x5311c6*/
  if ( v65 ) /*0x5311cd*/
  {
    v66 = (_DWORD *)__2_YAPAXI_Z(40); /*0x5311d1*/
    if ( v66 ) /*0x5311db*/
      goto LABEL_147; /*0x5311db*/
    goto LABEL_148; /*0x5311db*/
  }
  sprintf(Buffer, "MOVIES%02d.MIX", v63); /*0x5311f1*/
  v67 = CCFileClass::Construct(v69, Buffer); /*0x531205*/
  v68 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v67 + 20))(v67, 0); /*0x531216*/
  v69[0] = &CCFileClass::`vftable'; /*0x531218*/
  v71 = 0; /*0x531220*/
  Vector::Clear((int)v70); /*0x531224*/
  v69[0] = &off_7E1668; /*0x53122d*/
  BufferIOFileClass::Dtor(v69); /*0x531231*/
  if ( v68 ) /*0x531238*/
  {
    v66 = (_DWORD *)__2_YAPAXI_Z(40); /*0x53123c*/
    if ( v66 ) /*0x531246*/
    {
LABEL_147:
      DataGlobal_87F7E8[5521] = MixFileClass::FromFile(v66, Buffer, (int)&DataGlobal_87F7E8[7270]); /*0x531248*/
      goto LABEL_149; /*0x531261*/
    }
LABEL_148:
    DataGlobal_87F7E8[5521] = 0; /*0x531263*/
  }
LABEL_149:
  Debug::Log_0(); /*0x531269*/
  return DataGlobal_87F7E8[5521] != 0; /*0x5304f2*/
}
}
} // namespace gamemd

// 0x534FA0
namespace gamemd {
int MixFile::LoadSide()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  MixFile *v2; // ebx
  unsigned int YR; // eax
  _DWORD *v12; // eax
  MixFile *v17; // [esp+1Ch] [ebp-11Ch]
  char Buffer[64]; // [esp+20h] [ebp-118h] BYREF
  _DWORD v19[22]; // [esp+60h] [ebp-D8h] BYREF
  _BYTE v20[12]; // [esp+B8h] [ebp-80h] BYREF
  int v21; // [esp+C4h] [ebp-74h]
  VoxClass::SetEVAIndex(); /*0x534fac*/
  if ( this == 2 ) /*0x534fb4*/
    this = 1; /*0x534fb6*/
  v2 = this; /*0x534fbb*/
  v17 = this; /*0x534fc0*/
  if ( this == -1 ) /*0x534fc4*/
  {
    YR = AlwaysFindYRCD(DataGlobal_89E414, 60); /*0x534fd1*/
    if ( YR >= 2 ) /*0x534fda*/
    {
      Debug::Log(); /*0x534fe6*/
      return 0; /*0x534ffa*/
    }
    v17 = YR; /*0x534ffb*/
    v2 = YR; /*0x534fff*/
  }
  Debug::Log(); /*0x53500b*/
  if ( DataGlobal_884E68 ) /*0x53501a*/
  {
    Debug::Log(); /*0x535025*/
    if ( DataGlobal_884E68 ) /*0x535035*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E68)(DataGlobal_884E68, 1); /*0x53503b*/
    DataGlobal_884E68 = 0; /*0x53503d*/
  }
  if ( DataGlobal_884E74 ) /*0x53504a*/
  {
    Debug::Log(); /*0x535055*/
    if ( DataGlobal_884E74 ) /*0x535065*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E74)(DataGlobal_884E74, 1); /*0x53506b*/
    DataGlobal_884E74 = 0; /*0x53506d*/
  }
  if ( DataGlobal_884E70 ) /*0x53507a*/
  {
    Debug::Log(); /*0x535085*/
    if ( DataGlobal_884E70 ) /*0x535095*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E70)(DataGlobal_884E70, 1); /*0x53509b*/
    DataGlobal_884E70 = 0; /*0x53509d*/
  }
  if ( DataGlobal_884E78 ) /*0x5350aa*/
  {
    Debug::Log(); /*0x5350b5*/
    if ( DataGlobal_884E78 ) /*0x5350c5*/
      (**(void (__thiscall ***)(int, int))DataGlobal_884E78)(DataGlobal_884E78, 1); /*0x5350cb*/
    DataGlobal_884E78 = 0; /*0x5350cd*/
  }
  unsigned int v5 = v2 + 1; /*0x5350d3*/
  sprintf(Buffer, DataGlobal_827E0C, v2 + 1); /*0x5350e1*/
  Debug::Log(); /*0x5350f0*/
  _DWORD * v6 = CCFileClass::Construct(v19, Buffer); /*0x535101*/
  char v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v6 + 20))(v6, 0); /*0x535115*/
  v19[0] = &vt_CCFileClass; /*0x535117*/
  v21 = 0; /*0x53511f*/
  Vector::Clear((int)v20); /*0x535126*/
  v19[0] = &off_7E1668; /*0x535134*/
  BufferIOFileClass::Dtor(v19); /*0x535138*/
  if ( v7 ) /*0x53513f*/
  {
    _DWORD * v8 = __2_YAPAXI_Z(0x28u); /*0x535143*/
    if ( v8 ) /*0x53514d*/
      DataGlobal_884E70 = (int)MixFileClass::FromFile(v8, Buffer, (int)&DataGlobal_886980); /*0x535160*/
    else
      DataGlobal_884E70 = 0; /*0x535167*/
  }
  ReturnTrue(0); /*0x535174*/
  sprintf(Buffer, DataGlobal_827DE4, v5); /*0x535184*/
  Debug::Log(); /*0x535193*/
  _DWORD * v9 = CCFileClass::Construct(v19, Buffer); /*0x5351a4*/
  char v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v9 + 20))(v9, 0); /*0x5351b8*/
  v19[0] = &vt_CCFileClass; /*0x5351ba*/
  v21 = 0; /*0x5351c2*/
  Vector::Clear((int)v20); /*0x5351c9*/
  v19[0] = &off_7E1668; /*0x5351d2*/
  BufferIOFileClass::Dtor(v19); /*0x5351d6*/
  if ( v10 ) /*0x5351dd*/
  {
    _DWORD * v11 = __2_YAPAXI_Z(0x28u); /*0x5351e1*/
    if ( !v11 ) /*0x5351eb*/
    {
      DataGlobal_884E74 = 0; /*0x53520a*/
      Debug::Log(); /*0x535210*/
      return 0; /*0x535224*/
    }
    v12 = MixFileClass::FromFile(v11, Buffer, (int)&DataGlobal_886980); /*0x5351f9*/
    DataGlobal_884E74 = (int)v12; /*0x5351fe*/
  }
  else
  {
    v12 = (_DWORD *)DataGlobal_884E74; /*0x535225*/
  }
  if ( v12 ) /*0x53522c*/
  {
  int v24; // [esp+130h] [ebp-8h]
  _BYTE v23[12]; // [esp+124h] [ebp-14h] BYREF
    ReturnTrue(0); /*0x53524b*/
    sprintf(Buffer, stru_827DD4, v5); /*0x53525b*/
    Debug::Log(); /*0x53526a*/
    _DWORD * v13 = CCFileClass::Construct(v19, Buffer); /*0x53527b*/
    char v14 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v13 + 20))(v13, 0); /*0x535294*/
    v19[0] = &vt_CCFileClass; /*0x535296*/
    v21 = 0; /*0x53529a*/
    Vector::Clear((int)v20); /*0x5352a1*/
    v19[0] = &off_7E1668; /*0x5352aa*/
    BufferIOFileClass::Dtor(v19); /*0x5352ae*/
    if ( v14 ) /*0x5352b5*/
    {
      _DWORD * v15 = __2_YAPAXI_Z(0x28u); /*0x5352b9*/
      if ( v15 ) /*0x5352c3*/
        DataGlobal_884E78 = (int)MixFileClass::FromFile(v15, Buffer, (int)&DataGlobal_886980); /*0x5352d6*/
      else
        DataGlobal_884E78 = 0; /*0x5352dd*/
    }
    House_Load(); /*0x5352e3*/
    Game::InitializeToolTipColor(v17); /*0x5352ec*/
  _DWORD v22[22]; // [esp+CCh] [ebp-6Ch] BYREF
    CCFileClass::Construct(v22, unk_827DC8); /*0x5352fd*/
    if ( CCINIClass::Load(&CCINIClass_INI_UIMD, (int)v22, 0, 0) ) /*0x535311*/
    {
      char v16 = g_GameMode_Current[0] && g_GameMode_Current[0] != 5; /*0x53532f*/
      SidebarClass::ReadButtonList(&CCINIClass_INI_UIMD, v16); /*0x53533d*/
      SidebarClass::LoadButtonSHPs(&DataGlobal_87F7E8); /*0x535347*/
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
} // namespace gamemd

// 0x627590
namespace gamemd {
unsigned int * MIXFile::Load(ObjectClass * aP1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
{
  ObjectClass *v3; // edx
  int i; // esi
  ObjectClass *v12; // edi
  char *eax15; // eax
  ObjectClass *v17; // edi
  int ecx21; // ecx
  ObjectClass *v21; // eax
  ObjectClass *v22; // edx
  ObjectClass *v23; // edi
  int eax27; // eax
  int ecx30; // ecx
  ObjectClass *v26; // eax
  ObjectClass *v27; // edx
  __int16 v31; // [esp+10h] [ebp-414h]
  ObjectClass aP2; // [esp+14h] [ebp-410h] BYREF

  MIXFile *v2 = this; /*0x627598*/
  *(_DWORD *)&aP2[8] = this; /*0x62759c*/
  v3 = (ObjectClass *)*this; /*0x6275a0*/
  if ( *this == -1 ) /*0x6275a6*/
    return 0; /*0x6275ab*/
  strcpy((char *)&aP2.uniqueId, aP1->__pad_0); /*0x6275d6*/
  strcat((char *)&aP2.uniqueId, (const char *)&off_7E1BC6 + 112 * (_DWORD)v3); /*0x627611*/
  strcat((char *)&aP2.uniqueId, stru_826598[0]); /*0x62763d*/
  strcat((char *)&aP2.uniqueId, *(const char **)&stru_830620[24132]); /*0x62766a*/
  _strupr((char *)&aP2.uniqueId); /*0x627678*/
  _BYTE aP3[768]; // [esp+124h] [ebp-300h] BYREF
  _BYTE * v5 = aP3; /*0x627680*/
  int v6 = 256; /*0x627687*/
  do /*0x627697*/
  {
    Struct::Zero3(v5); /*0x62768e*/
    v5 += 3; /*0x627693*/
    --v6; /*0x627696*/
  }
  while ( v6 ); /*0x627697*/
  const void * v7 = (const void *)SearchMIXFile((char *)&aP2.uniqueId, 0); /*0x62769f*/
  int v8 = 0; /*0x6276a4*/
  if ( !v7 ) /*0x6276a8*/
    return 0; /*0x6276ad*/
  qmemcpy(aP3, v7, sizeof(aP3)); /*0x6276c7*/
  for ( i = 0; i < 256; ++i ) /*0x6276c9*/
  {
    _BYTE * v10 = &aP3[2 * (i % 256) + i % 256]; /*0x6276e2*/
    v31 = *(_WORD *)v10; /*0x6276ea*/
    char v11 = v10[2]; /*0x6276ef*/
    *v10 = 4 * *(_WORD *)v10; /*0x6276f9*/
    v10[1] = 4 * HIBYTE(v31); /*0x627706*/
    v10[2] = 4 * v11; /*0x62770f*/
  }
  v12 = *(ObjectClass **)(v2[2] + 16); /*0x627719*/
  *(_DWORD *)&aP2[12] = v12; /*0x62771c*/
  int v13 = __2_YAPAXI_Z(0x18u); /*0x627720*/
  _DWORD * v14 = (_DWORD *)v13; /*0x627725*/
  if ( v13 ) /*0x62772c*/
  {
    *(_DWORD *)(v13 + 4) = 0; /*0x627730*/
    *(_DWORD *)(v13 + 8) = 20; /*0x627733*/
    *(_BYTE *)(v13 + 12) = 1; /*0x62773a*/
    *(_BYTE *)(v13 + 13) = 0; /*0x62773e*/
    *(_DWORD *)v13 = &vt_VectorClass_ColorScheme; /*0x627742*/
    *(_DWORD *)(v13 + 4) = __2_YAPAXI_Z(0x50u); /*0x627750*/
    *((_BYTE *)v14 + 13) = 1; /*0x627753*/
    *v14 = &vt_DynamicVectorClass_ColorScheme; /*0x627757*/
    v14[5] = 10; /*0x62775d*/
    v14[4] = 0; /*0x627764*/
  }
  else
  {
    v14 = 0; /*0x627769*/
  }
  *(_DWORD *)&aP2[4] = 0; /*0x62776d*/
  if ( (int)v12 > 0 ) /*0x627771*/
  {
    int v32 = 0; /*0x627777*/
    while ( 1 ) /*0x62779b*/
    {
      char * v15 = *(char **)(*(_DWORD *)(v2[1] + 4) + 4 * v8); /*0x62779b*/
      int v16 = v32 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&aP2[8] + 8) + 4); /*0x6277a1*/
      *(_WORD *)aP2[0] = *(_WORD *)v16; /*0x6277a6*/
      aP2[2] = *(_BYTE *)(v16 + 2); /*0x6277ae*/
      eax15 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x6277b2*/
      if ( eax15 ) /*0x6277bc*/
        v17 = (ObjectClass *)FontClass::InitMetrics( /*0x6277dc*/
                               eax15,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&DataGlobal_87F8E4[24220],
                               1,
                               0);
      else
        v17 = 0; /*0x6277e0*/
      int v19 = 2 * v8; /*0x6277e2*/
      *(_DWORD *)v17->__pad_0 = v19; /*0x6277e4*/
      int v20 = v14[2]; /*0x6277e6*/
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
      char * v24 = (char *)__2_YAPAXI_Z(0x33Cu); /*0x627824*/
      if ( v24 ) /*0x62782e*/
        v23 = (ObjectClass *)FontClass::InitMetrics( /*0x62784e*/
                               v24,
                               v15,
                               &aP2,
                               (ObjectClass *)aP3,
                               (int)&DataGlobal_87F8E4[24220],
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
      bool v30 = ++*(_DWORD *)&aP2[4] < *(_DWORD *)&aP2[12]; /*0x6278a0*/
      v32 += 3; /*0x6278a6*/
      if ( !v30 ) /*0x6278aa*/
        break; /*0x6278aa*/
      v8 = *(_DWORD *)&aP2[4]; /*0x62777d*/
      v2 = *(_DWORD **)&aP2[8]; /*0x627781*/
    }
  }
  return v14; /*0x6275a8*/
}
}
} // namespace gamemd
