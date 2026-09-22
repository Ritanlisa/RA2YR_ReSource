// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_750440_e4.hpp"
#include "e4/classes/E4Recv_752CB0_e4.hpp"
#include "e4/classes/E4Recv_7531A0_e4.hpp"
#include "e4/classes/E4Recv_754900_e4.hpp"
#include "e4/classes/E4Recv_755CB0_e4.hpp"
#include "e4/classes/E4Recv_7564A0_e4.hpp"
#include "e4/classes/E4Recv_7564E0_e4.hpp"
#include "e4/classes/E4Recv_756570_e4.hpp"
#include "e4/classes/E4Recv_756860_e4.hpp"
#include "e4/classes/E4Recv_7589F0_e4.hpp"
#include "e4/classes/E4Recv_758AD0_e4.hpp"
#include "e4/classes/E4Recv_758B70_e4.hpp"
#include "e4/classes/E4Recv_758E10_e4.hpp"
#include "e4/classes/E4Recv_759760_e4.hpp"
#include "e4/classes/E4Recv_759790_e4.hpp"
#include "e4/classes/E4Recv_759BC0_e4.hpp"
#include "e4/classes/E4Recv_75A120_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/Voxel_e4.hpp"

// 0x750920
namespace gamemd {
int VocClass_Play(int a1, int a2, float a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall VocClass_Play(int a1, int a2, float a3, int a4)
{

  if ( !VocClass_VoicesEnabled ) /*0x75092c*/
    return 0; /*0x75092e*/
  int v5 = 0; /*0x750935*/
  if ( a1 >= 0 && a1 < g_VocPlayState ) /*0x750943*/
    v5 = **((_DWORD **)g_VocAudioConfig + a1); /*0x75094d*/
  int v6 = 0; /*0x750953*/
  if ( a4 ) /*0x750957*/
  {
    int v7 = AudioSource::Get(a4); /*0x75095b*/
    v6 = v7; /*0x750960*/
    if ( v7 ) /*0x750964*/
    {
      if ( sub_406310(v7) != v5 ) /*0x75096f*/
      {
        VocClass::Release(v6); /*0x750973*/
        v6 = 0; /*0x750978*/
      }
    }
  }
  if ( v5 ) /*0x75097d*/
  {
    unsigned int v8 = Math::RoundToInt(a3 * 16384.0); /*0x75098e*/
    if ( v8 >= 0x4000 ) /*0x750996*/
      v8 = 0x4000; /*0x750998*/
    if ( v6 || (v6 = AudioPool::ProcessQueue(v5)) != 0 ) /*0x7509ac*/
    {
      AudioMixer::PlayBuffer(v6, v8); /*0x7509b2*/
      AudioMixer::RequestOrEndBuffer(v6, a2); /*0x7509bd*/
    }
  }
  if ( a4 ) /*0x7509c5*/
    SetAudioSource(v5); /*0x7509cc*/
  return v6; /*0x750931*/
}
}
} // namespace gamemd

// 0x750AC0
namespace gamemd {
double ComputeAudioPosition(AudioMixer * aP0, unsigned int * a1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
double __fastcall ComputeAudioPosition(AudioMixer *aP0, _DWORD *a1, int a3)
{
  __int16 v6; // ax

  float * v4 = (float *)a3; /*0x750ac9*/
  *a1 = 0; /*0x750acd*/
  float v18 = 0.0; /*0x750ade*/
  float v20 = (double)*(int *)&stru_87C374[44084] * 0.5; /*0x750aec*/
  float v22 = (double)*(int *)&stru_87C374[44088] * 0.5; /*0x750afc*/
  float v19 = v20 + v20; /*0x750b06*/
  a3 = 60 * sub_405130(v4); /*0x750b1a*/
  float v17 = (float)a3; /*0x750b22*/
  v6 = sub_405160(v4); /*0x750b26*/
  char v7 = v6; /*0x750b2b*/
  if ( (v6 & 0x800) == 0 ) /*0x750b30*/
    goto LABEL_7; /*0x750b30*/
  int v8 = aP0->AudioMixer_field_00 / 256; /*0x750b4b*/
  int v9 = aP0->AudioMixer_field_04 / 256; /*0x750b4e*/
  LOWORD(a3) = v8; /*0x750b58*/
  HIWORD(a3) = v9; /*0x750b5d*/
  if ( (_WORD)v8 == *(_WORD *)stru_B1D188[392] && (_WORD)v9 == *(_WORD *)&stru_B1D188[394] ) /*0x750b73*/
    return 0.0; /*0x750b82*/
  if ( (*((_BYTE *)CellCoord::To_CellObj(&stru_87C374[13428], (__int16 *)&a3) + 300) & 0x18) == 0 ) /*0x750b9b*/
    return 0.0; /*0x750b9d*/
LABEL_7:
  _DWORD v23[2]; // [esp+2Ch] [ebp-8h] BYREF
  Coord::To_Screen(*(_DWORD **)&stru_87C374[44976], aP0, (IUnknown *)v23); /*0x750bb9*/
  double v11 = (double)v23[0] - v20; /*0x750bc2*/
  float v16 = v11; /*0x750bc6*/
  *(float *)&a3 = (float)(int)abs32(Math::RoundToInt(v11)); /*0x750bdc*/
  double v12 = (double)(int)abs32(Math::RoundToInt((double)v23[1] - v22)); /*0x750bf6*/
  if ( (v7 & 0x40) == 0 ) /*0x750bfd*/
  {
    double v13 = *(float *)&a3 - v20; /*0x750c03*/
    *(float *)&a3 = v13; /*0x750c07*/
    v12 = v12 - v22; /*0x750c11*/
    if ( v13 < 0.0 ) /*0x750c1e*/
      *(float *)&a3 = 0.0; /*0x750c20*/
    if ( v12 < 0.0 ) /*0x750c33*/
      v12 = 0.0; /*0x750c37*/
  }
  float v21 = v12 + v12; /*0x750c3f*/
  if ( *(float *)&a3 < (double)v17 && v21 < (double)v17 && v17 > 0.0 ) /*0x750c70*/
  {
    if ( *(float *)&a3 <= (double)v21 ) /*0x750c7f*/
      double v14 = v21; /*0x750c87*/
    else
      v14 = *(float *)&a3; /*0x750c81*/
    v18 = (v17 - v14) / v17; /*0x750c95*/
  }
  if ( (v7 & 0x10) != 0 && sub_405140(v4) > v18 ) /*0x750cb0*/
    v18 = sub_405140(v4); /*0x750cb9*/
  if ( v18 < 0.05 ) /*0x750ccc*/
    return 0.0; /*0x750cce*/
  double v15 = -v19; /*0x750ce2*/
  if ( v16 >= v15 ) /*0x750cef*/
  {
    if ( v16 > (double)v19 ) /*0x750d06*/
      v16 = v19; /*0x750d0c*/
  }
  else
  {
    v16 = v15; /*0x750cf1*/
  }
  *a1 = Math::RoundToInt(v16 * 8192.0 / v19 + 8192.0); /*0x750d2e*/
  return v18; /*0x750b7b*/
}
}
} // namespace gamemd

// 0x750D40
namespace gamemd {
int * StartAudioController(AudioMixer * ecx0, int ** a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int *__fastcall StartAudioController(AudioMixer *ecx0, int **a2)
{
  int *result; // eax
  AudioMixer *eax2; // eax
  AudioMixer *v6; // edi
  result = 0; /*0x750d43*/
  if ( !a2 ) /*0x750d4d*/
    return result; /*0x750d4d*/
  int * v5 = AudioSource::Get(a2); /*0x750d5e*/
  eax2 = (AudioMixer *)VocClass::Check((int)a2); /*0x750d60*/
  v6 = eax2; /*0x750d65*/
  if ( !eax2 ) /*0x750d69*/
    goto LABEL_15; /*0x750d69*/
  unsigned int a1; // [esp+Ch] [ebp-4h] BYREF
  double v8 = ComputeAudioPosition(ecx0, &a1, (int)eax2); /*0x750d76*/
  if ( v8 <= 0.0 ) /*0x750d8a*/
  {
    if ( v5 ) /*0x750e01*/
    {
      VocClass::Release((int)v5); /*0x750e05*/
      v5 = 0; /*0x750e0a*/
    }
    goto LABEL_15; /*0x750e0a*/
  }
  if ( !v5 ) /*0x750d8e*/
  {
    if ( AudioMixer::SetVolume((int)v6) && stru_830620[89740] ) /*0x750da2*/
    {
      int * v9 = AudioPool::ProcessQueue(v6); /*0x750da6*/
      v5 = v9; /*0x750dab*/
      if ( !v9 ) /*0x750daf*/
        goto LABEL_15; /*0x750daf*/
      sub_4052E0(v9); /*0x750db3*/
    }
    if ( v5 ) /*0x750dba*/
      goto LABEL_10; /*0x750dba*/
LABEL_15:
    SetAudioSource((AudioMixer *)a2, v5, (int)v6); /*0x750e0c*/
    return v5; /*0x750e16*/
  }
LABEL_10:
  float v11 = v8; /*0x750dbc*/
  unsigned int v10 = Math::RoundToInt(v11 * 16384.0); /*0x750dc6*/
  if ( v10 >= 0x4000 ) /*0x750dd0*/
    v10 = 0x4000; /*0x750dd2*/
  AudioMixer::PlayBuffer(v5, v10); /*0x750ddb*/
  AudioMixer::RequestOrEndBuffer((int)v5, a1); /*0x750de6*/
  SetAudioSource((AudioMixer *)a2, v5, (int)v6); /*0x750df0*/
  return v5; /*0x750df9*/
}
}
} // namespace gamemd

// 0x751DD0
namespace gamemd {
char sub_751DD0(LPCSTR lpRootPathName, UINT * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall sub_751DD0(LPCSTR lpRootPathName, UINT *a2)
{
  DWORD v5; // eax
  DWORD SectorsPerCluster; // [esp+Ch] [ebp-18h] BYREF
  DWORD BytesPerSector; // [esp+10h] [ebp-14h] BYREF
  DWORD NumberOfFreeClusters; // [esp+14h] [ebp-10h] BYREF
  DWORD TotalNumberOfClusters; // [esp+18h] [ebp-Ch] BYREF
  DWORD FileSystemFlags; // [esp+1Ch] [ebp-8h] BYREF
  DWORD MaximumComponentLength; // [esp+20h] [ebp-4h] BYREF

  memset(a2, 0, 0x90u); /*0x751de4*/
  *a2 = GetDriveTypeA(lpRootPathName); /*0x751dec*/
  if ( !GetDiskFreeSpaceA( /*0x751e03*/
          lpRootPathName,
          &SectorsPerCluster,
          &BytesPerSector,
          &NumberOfFreeClusters,
          &TotalNumberOfClusters) )
    goto LABEL_2; /*0x751e0b*/
  v5 = BytesPerSector * SectorsPerCluster; /*0x751e2c*/
  bool v6 = NumberOfFreeClusters == 0; /*0x751e36*/
  a2[34] = NumberOfFreeClusters * BytesPerSector * SectorsPerCluster; /*0x751e38*/
  if ( !v6 ) /*0x751e3e*/
    return 0; /*0x751e42*/
  a2[35] = TotalNumberOfClusters * v5; /*0x751e4e*/
  if ( !GetVolumeInformationA( /*0x751e77*/
          lpRootPathName,
          (LPSTR)a2 + 4,
          0x40u,
          a2 + 17,
          &MaximumComponentLength,
          &FileSystemFlags,
          (LPSTR)a2 + 72,
          0x40u) )
  {
LABEL_2:
    Debug::Log(); /*0x751e0d*/
    return 0; /*0x751e23*/
  }
  return 1; /*0x751e1d*/
}
}
} // namespace gamemd

// 0x752480
namespace gamemd {
void ThemeManager_Update(int a1, int a2, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall ThemeManager_Update(int a1, int a2, int a3)
{
  int i; // esi

  int v3 = a2; /*0x752487*/
  if ( g_InfantryDrawState ) /*0x75248b*/
  {
    if ( a1 >= 0 && a1 < g_InfantrySelectState && !DataGlobal_B1D3D8 ) /*0x7524ac*/
    {
      int v4 = *((_DWORD *)g_InfantryRenderPool + a1); /*0x7524b7*/
      if ( v4 != DataGlobal_B1D4C4 ) /*0x7524c1*/
      {
        if ( a2 == -1 ) /*0x7524ca*/
          v3 = *(_DWORD *)(v4 + 76); /*0x7524cc*/
        if ( a3 == -1 ) /*0x7524d4*/
          a3 = *(_DWORD *)(v4 + 72); /*0x7524d9*/
        if ( DataGlobal_B1D4C4 && v3 == 2 ) /*0x7524e4*/
        {
          for ( i = AudioQueue::GetNext(&DataGlobal_B1D3C8); i; i = AudioQueue::GetNext(&DataGlobal_B1D3C8) ) /*0x7524f5*/
          {
            LinkedList::Init((_DWORD **)i); /*0x7524f9*/
            *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752502*/
            __3_YAXPAX_Z((void *)i); /*0x752509*/
          }
          if ( DataGlobal_B1D4C4 ) /*0x752529*/
          {
            *(_DWORD *)(DataGlobal_B1D4C4 + 80) = 2; /*0x75252b*/
            DataGlobal_B1D4C4 = 0; /*0x752532*/
          }
          if ( g_InfantryDrawState ) /*0x752544*/
            Audio::Release(g_InfantryDrawState); /*0x752546*/
          ThemeClass::ClearQueues(); /*0x75254b*/
          DataGlobal_B1D4D0 = 0; /*0x752552*/
        }
        int v6 = AudioQueue::FindByData(v4); /*0x75255e*/
        if ( !v6 || *(_DWORD *)(v6 + 24) != v3 ) /*0x75256a*/
          Audio_Load(a3); /*0x752575*/
        UpdateThemes(); /*0x75257a*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x752760
namespace gamemd {
void ThemeClass_Update()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void ThemeClass_Update()
{

  if ( DataGlobal_A8ED64 ) /*0x752773*/
    return; /*0x752773*/
  if ( !Audio::IsSoundEnabled() ) /*0x752779*/
    return; /*0x752779*/
  if ( !g_InfantryDrawState ) /*0x75278e*/
    return; /*0x75278e*/
  if ( Audio::IsSoundPlaying() ) /*0x752794*/
    return; /*0x752794*/
  unsigned __int64 v0 = DataGlobal_B1D4D0 + ThemeClass::GetValue(g_InfantryDrawState); /*0x7527b4*/
  unsigned __int64 v1; // rax
  LODWORD(v1) = Audio::Callback(); /*0x7527be*/
  if ( v1 <= v0 || DataGlobal_B1D428 ) /*0x7527dc*/
    return; /*0x7527dc*/
  if ( DataGlobal_B1D4C4 ) /*0x7527e9*/
  {
    *(_DWORD *)(DataGlobal_B1D4C4 + 80) = 2; /*0x7527eb*/
    DataGlobal_B1D4C4 = 0; /*0x7527f2*/
  }
  int v11 = 0; /*0x7527fd*/
  int v10 = 0; /*0x752801*/
  int v2 = AudioQueue::GetNext(&DataGlobal_B1D3C8); /*0x752805*/
  _DWORD * v3 = (_DWORD *)v2; /*0x75280a*/
  if ( v2 ) /*0x75280e*/
  {
    LinkedList::Init(v2); /*0x752812*/
    if ( !DataGlobal_B1D4B8 ) /*0x75281e*/
      goto LABEL_22; /*0x75281e*/
    goto LABEL_11; /*0x75281e*/
  }
  int v4 = AudioQueue::GetNext(&DataGlobal_B1D3F0); /*0x75283a*/
  v3 = (_DWORD *)v4; /*0x75283f*/
  if ( !v4 ) /*0x752843*/
  {
    v3 = DataGlobal_B1D4B8; /*0x752866*/
    if ( DataGlobal_B1D4B8 ) /*0x75286e*/
    {
      DataGlobal_B1D4B8 = 0; /*0x752870*/
    }
    else
    {
  int v6; // eax
      char * v5 = (char *)&DataGlobal_B1D474; /*0x752878*/
      while ( 1 ) /*0x75287f*/
      {
        v6 = AudioQueue::GetNext(v5); /*0x75287f*/
        v3 = (_DWORD *)v6; /*0x752884*/
        if ( v6 ) /*0x752888*/
          break; /*0x752888*/
        v5 -= 12; /*0x75288a*/
        if ( (int)v5 < (int)DataGlobal_B1D450 ) /*0x752893*/
          return; /*0x752893*/
      }
      LinkedList::Init(v6); /*0x7528a2*/
    }
    goto LABEL_22; /*0x752876*/
  }
  LinkedList::Init(v4); /*0x752847*/
  if ( DataGlobal_B1D4B8 ) /*0x752853*/
  {
LABEL_11:
    __3_YAXPAX_Z(DataGlobal_B1D4B8); /*0x752824*/
    DataGlobal_B1D4B8 = 0; /*0x75282d*/
  }
LABEL_22:
  if ( v3 ) /*0x7528a9*/
  {
    int v7 = v3[3]; /*0x7528af*/
  _BYTE v9[16]; // [esp+0h] [ebp-118h] BYREF
    if ( v9 != (_BYTE *)-20 ) /*0x7528b8*/
      v11 = v3[6]; /*0x7528bd*/
    if ( v9 != (_BYTE *)-16 ) /*0x7528c7*/
      v10 = v3[5]; /*0x7528cc*/
    __3_YAXPAX_Z(v3); /*0x7528d1*/
    if ( v7 ) /*0x7528db*/
    {
  const char *v8; // edi
      *(_DWORD *)(v7 + 80) = 2; /*0x7528e1*/
      if ( DataGlobal_B1D4C8 ) /*0x7528ef*/
      {
        v8 = (const char *)(v7 + 53); /*0x7528f9*/
        if ( DataGlobal_B1D4C8 != 1 ) /*0x7528fc*/
          v8 = (const char *)(v7 + 44); /*0x7528fe*/
      }
      else
      {
        v8 = (const char *)(v7 + 62); /*0x7528f1*/
      }
  char v12[5]; // [esp+18h] [ebp-100h] BYREF
      strcpy(v12, v8); /*0x75291d*/
      strcat(v12, g_Str_File__WAV); /*0x752949*/
      if ( ThreadAudioMixerMain(g_InfantryDrawState, 1) ) /*0x75295c*/
      {
        DataGlobal_B1D4D0 = 500; /*0x75296d*/
        DataGlobal_B1D4C4 = v7; /*0x75297d*/
        DataGlobal_B1D3B8 = v11; /*0x752983*/
        DataGlobal_B1D3E0 = v10; /*0x752988*/
        *(_DWORD *)(v7 + 80) = 0; /*0x75298e*/
      }
    }
  }
}
}
} // namespace gamemd

// 0x752A40
namespace gamemd {
void ThemeQueue_ClearPlaylist(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __fastcall ThemeQueue_ClearPlaylist(int a1)
{
  int i; // esi

  if ( a1 >= 0 && a1 < g_InfantrySelectState ) /*0x752a4e*/
  {
    for ( i = AudioQueue::FindByData(*((_DWORD *)g_InfantryRenderPool + a1)); /*0x752a61*/
          i;
          i = AudioQueue::FindByData(*((_DWORD *)g_InfantryRenderPool + a1)) )
    {
      if ( *(_DWORD *)(i + 4) != i ) /*0x752a66*/
        LinkedList::Init((_DWORD **)i); /*0x752a6a*/
      if ( (void *)i == DataGlobal_B1D4B8 ) /*0x752a75*/
        DataGlobal_B1D4B8 = 0; /*0x752a77*/
      *(_DWORD *)(*(_DWORD *)(i + 12) + 80) = 2; /*0x752a85*/
      __3_YAXPAX_Z((void *)i); /*0x752a8c*/
    }
  }
}
}
} // namespace gamemd

// 0x752B70
namespace gamemd {
int TauntClass_Play(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall TauntClass_Play(int a1)
{
  int result; // eax
  char Buffer[20]; // [esp+0h] [ebp-14h] BYREF

  if ( !DataGlobal_B1D4D8 ) /*0x752b7a*/
    return 0; /*0x752b7a*/
  if ( DataGlobal_B1D480 ) /*0x752b87*/
    return 0; /*0x752b87*/
  char v1 = a1 & 0xF; /*0x752b8f*/
  if ( (a1 & 0xF) == 0 || (a1 & 0xFu) > 8 ) /*0x752b9b*/
    return 0; /*0x752c63*/
  switch ( (a1 >> 4) & 0xF ) /*0x752bb0*/
  {
    case 0: /*0x752bb0*/
      int v4 = v1; /*0x752bba*/
      const char * v3 = aTauntsTauam02i; /*0x752bbb*/
      goto LABEL_16; /*0x752bc0*/
    case 1: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauko%02i.wav", v1); /*0x752bd0*/
      goto LABEL_17; /*0x752bd0*/
    case 2: /*0x752bb0*/
      sprintf(Buffer, DataGlobal_846740, v1); /*0x752be0*/
      goto LABEL_17; /*0x752be0*/
    case 3: /*0x752bb0*/
      v4 = v1; /*0x752be5*/
      v3 = DataGlobal_846728; /*0x752be6*/
      goto LABEL_16; /*0x752beb*/
    case 4: /*0x752bb0*/
      sprintf(Buffer, DataGlobal_846710, v1); /*0x752bfb*/
      goto LABEL_17; /*0x752bfb*/
    case 5: /*0x752bb0*/
      sprintf(Buffer, DataGlobal_8466F8, v1); /*0x752c0b*/
      goto LABEL_17; /*0x752c0b*/
    case 6: /*0x752bb0*/
      v4 = v1; /*0x752c10*/
      v3 = DataGlobal_8466E0; /*0x752c11*/
      goto LABEL_16; /*0x752c16*/
    case 7: /*0x752bb0*/
      sprintf(Buffer, DataGlobal_8466C8, v1); /*0x752c26*/
      goto LABEL_17; /*0x752c26*/
    case 8: /*0x752bb0*/
      sprintf(Buffer, DataGlobal_8466B0, v1); /*0x752c36*/
      goto LABEL_17; /*0x752c36*/
    case 9: /*0x752bb0*/
      v4 = v1; /*0x752c3b*/
      v3 = stru_846698; /*0x752c3c*/
LABEL_16:
      sprintf(Buffer, v3, v4); /*0x752c41*/
LABEL_17:
      result = ThreadAudioMixerMain(DataGlobal_B1D4D8, Buffer, 0); /*0x752c4b*/
      break; /*0x752c62*/
    default:
      return 0;
  }
  return result; /*0x752c5f*/
}
}
} // namespace gamemd

// 0x752CB0
namespace gamemd {
int E4Recv_752CB0::sub_752CB0(const char * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_752CB0(int this, const char *a2)
{

  this->M40 = 1065353216; /*0x752cbe*/
  strcpy((char *)this, a2); /*0x752cd4*/
  *(_BYTE *)(this + 44) = 0; /*0x752cdf*/
  *(_BYTE *)(this + 53) = 0; /*0x752ce2*/
  *(_BYTE *)(this + 62) = 0; /*0x752ce5*/
  this->M72 = 1; /*0x752ce8*/
  this->M76 = 0; /*0x752cef*/
  this->M80 = 2; /*0x752cf2*/
  if ( g_InfantrySelectState < DataGlobal_B1D4A8 /*0x752d2e*/
    || (DataGlobal_B1D4AD || !DataGlobal_B1D4A8)
    && DataGlobal_B1D4B4 > 0
    && (*(unsigned __int8 (__thiscall **)(int *, int, _DWORD))(DataGlobal_B1D4A0 + 8))(
         &DataGlobal_B1D4A0,
         DataGlobal_B1D4A8 + DataGlobal_B1D4B4,
         0) )
  {
    int v3 = g_InfantrySelectState++; /*0x752d3b*/
    *((_DWORD *)g_InfantryRenderPool + v3) = this; /*0x752d4a*/
  }
  return this; /*0x752d4d*/
}
}
} // namespace gamemd

// 0x753000
namespace gamemd {
char CCINIClass::InitFromINIEVA()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void InitFromINIEVA(CCINIClass *this)
{
  CCINIClass *v1; // edi
  unsigned int KeyCount; // eax
  CCINIClass *v4; // esi
  unsigned __int8 *StringByIndex; // eax
  CCINIClass *v11; // [esp+0h] [ebp-E4h] BYREF
  CCINIClass *i; // [esp+10h] [ebp-D4h]
  CCINIClass *aP1; // [esp+14h] [ebp-D0h]
  INIClass Destination[3]; // [esp+1Ch] [ebp-C8h] BYREF

  v1 = this; /*0x75300a*/
  aP1 = this; /*0x753011*/
  LOBYTE(KeyCount) = INIClass::BinarySearchSection((int)this, &g_INI_Key_DialogList) != 0; /*0x75301c*/
  if ( (_BYTE)KeyCount ) /*0x753023*/
  {
    KeyCount = INIClass::GetKeyCount(v1->__pad_0, &g_INI_Key_DialogList); /*0x753030*/
    int v3 = KeyCount; /*0x753035*/
    v4 = 0; /*0x753037*/
    unsigned int v14 = KeyCount; /*0x75303b*/
    for ( i = 0; (int)v4 < v3; i = v4 ) /*0x753043*/
    {
      StringByIndex = (unsigned __int8 *)INIClass::GetStringByIndex( /*0x753060*/
                                           v1->__pad_0,
                                           (CCINIClass *)&g_INI_Key_DialogList,
                                           v4);
      KeyCount = INIClass::GetString( /*0x75306d*/
                   (unsigned __int8 ***)v1,
                   &g_INI_Key_DialogList,
                   StringByIndex,
                   (INIClass *)&DataGlobal_87F8E4[42624],
                   Destination,
                   200);
      if ( KeyCount ) /*0x753074*/
      {
  int v9; // ecx
        if ( &v11 == (CCINIClass **)-28 ) /*0x753080*/
          goto LABEL_10; /*0x753080*/
        int v6 = 0; /*0x753087*/
        if ( *(int *)&g_OverlayTypeConfig[89272] <= 0 ) /*0x75308b*/
          goto LABEL_10; /*0x75308b*/
        while ( _strcmpi(Destination[0].__pad_0, *(char **)(*(_DWORD *)&g_OverlayTypeConfig[89260] + 4 * v6)) ) /*0x7530a6*/
        {
          if ( ++v6 >= *(int *)&g_OverlayTypeConfig[89272] ) /*0x7530b0*/
            goto LABEL_10; /*0x7530b0*/
        }
        if ( v6 == -1 ) /*0x7530b7*/
        {
LABEL_10:
          int v7 = __2_YAPAXI_Z(0x54u); /*0x7530bd*/
          if ( v7 ) /*0x7530cb*/
          {
            *(_DWORD *)(v7 + 40) = 1065353216; /*0x7530da*/
            strcpy((char *)v7, Destination[0].__pad_0); /*0x7530f0*/
            *(_BYTE *)(v7 + 44) = 0; /*0x7530f9*/
            *(_BYTE *)(v7 + 53) = 0; /*0x7530fc*/
            *(_BYTE *)(v7 + 62) = 0; /*0x7530ff*/
            *(_DWORD *)(v7 + 72) = 1; /*0x753102*/
            *(_DWORD *)(v7 + 76) = 0; /*0x753109*/
            *(_DWORD *)(v7 + 80) = 2; /*0x75310c*/
            if ( *(int *)&g_OverlayTypeConfig[89272] < *(int *)&g_OverlayTypeConfig[89264] /*0x753146*/
              || (g_OverlayTypeConfig[89269] || !*(_DWORD *)&g_OverlayTypeConfig[89264])
              && *(int *)&g_OverlayTypeConfig[89276] > 0
              && (*(unsigned __int8 (__thiscall **)(char *, int, _DWORD))(*(_DWORD *)&g_OverlayTypeConfig[89256]
                                                                        + 8))(
                   &g_OverlayTypeConfig[89256],
                   *(_DWORD *)&g_OverlayTypeConfig[89264] + *(_DWORD *)&g_OverlayTypeConfig[89276],
                   0) )
            {
              int v8 = (*(_DWORD *)&g_OverlayTypeConfig[89272])++; /*0x753153*/
              *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[89260] + 4 * v8) = v7; /*0x753162*/
            }
            v1 = aP1; /*0x753165*/
            v9 = v7; /*0x753169*/
          }
          else
          {
            v9 = 0; /*0x75316d*/
          }
        }
        else
        {
          v9 = *(_DWORD *)(*(_DWORD *)&g_OverlayTypeConfig[89260] + 4 * v6); /*0x753177*/
        }
        LOBYTE(KeyCount) = AudioEvent::LoadFromINI(v9, v1); /*0x75317b*/
        v4 = i; /*0x753180*/
        v3 = v14; /*0x753184*/
      }
      v4 = (CCINIClass *)((char *)v4 + 1); /*0x753188*/
    }
  }
  return KeyCount; /*0x753195*/
}
}
} // namespace gamemd

// 0x7531A0
namespace gamemd {
int E4Recv_7531A0::EVA_LoadINI()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void EVA_LoadINI(void *this)
{
  int result; // eax

  E4Recv_7531A0 *v4 = this; /*0x7531a0*/
  if ( DataGlobal_B1D4C4 ) /*0x7531a8*/
  {
    *(_DWORD *)(DataGlobal_B1D4C4 + 80) = 2; /*0x7531aa*/
    DataGlobal_B1D4C4 = 0; /*0x7531b1*/
  }
  if ( g_InfantryDrawState ) /*0x7531c3*/
    Audio::Release(g_InfantryDrawState); /*0x7531c5*/
  ThemeClass::ClearQueues(v4); /*0x7531ca*/
  for ( result = g_InfantrySelectState; g_InfantrySelectState > 0; result = g_InfantrySelectState ) /*0x7531d6*/
  {
    void * v2 = *(void **)g_InfantryRenderPool; /*0x7531de*/
    if ( *(_DWORD *)g_InfantryRenderPool ) /*0x7531de*/
    {
      v4 = *(void **)g_InfantryRenderPool; /*0x7531f4*/
      int v3 = (*(int (__thiscall **)(int *, void **))(DataGlobal_B1D4A0 + 16))(&DataGlobal_B1D4A0, &v4); /*0x7531f8*/
      if ( v3 != -1 && v3 < g_InfantrySelectState && v3 < --g_InfantrySelectState ) /*0x753213*/
      {
        do /*0x75322b*/
        {
          ++v3; /*0x75321b*/
          *((_DWORD *)g_InfantryRenderPool + v3 - 1) = *((_DWORD *)g_InfantryRenderPool + v3); /*0x75321f*/
        }
        while ( v3 < g_InfantrySelectState ); /*0x75322b*/
      }
      __3_YAXPAX_Z(v2); /*0x75322e*/
    }
  }
  return result; /*0x753241*/
}
}
} // namespace gamemd

// 0x7532A0
namespace gamemd {
bool sub_7532A0(std::codecvt_base * a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
bool __fastcall sub_7532A0(std::codecvt_base *a1)
{
  if ( (int)a1 < 0 || (int)a1 >= g_InfantrySelectState ) /*0x7532aa*/
    return _do_always_noconv_codecvt_base_std__MBE_NXZ_21(a1); /*0x7532a2*/
  else
    return *(_DWORD *)(*((_DWORD *)g_InfantryRenderPool + (_DWORD)a1) + 80) == 2; /*0x7532ba*/
}
}
} // namespace gamemd

// 0x7540F0
namespace gamemd {
int TransformVoxelVertex(unsigned int * a1, SomeVoxelCache * a2, SomeVoxelCache * aP2, float * a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall TransformVoxelVertex(_DWORD *a1, SomeVoxelCache *a2, SomeVoxelCache *aP2, float *a4)
{
  int Info; // eax
  float *aP2a; // [esp+20h] [ebp+4h]

  Info = VoxelSection::GetInfo(a1, a2, aP2); /*0x754101*/
  int v18 = 1176256512; /*0x75411b*/
  int v19 = 1176256512; /*0x754123*/
  float * v7 = (float *)(136 * DataGlobal_B2D820 + 11721048); /*0x75412b*/
  int v17 = -971227136; /*0x754136*/
  _DWORD * v8 = (_DWORD *)(136 * DataGlobal_B2D820 + 11721064); /*0x75413e*/
  *((_DWORD *)v7 + 2) = aP2; /*0x754141*/
  int v9 = 0; /*0x754144*/
  *v8 = 1176256512; /*0x754149*/
  int v10 = v18; /*0x75414b*/
  v18 = -971227136; /*0x75414f*/
  *((_DWORD *)v7 + 1) = a2; /*0x754157*/
  v8[1] = v10; /*0x75415a*/
  int v11 = v19; /*0x75415d*/
  v19 = -971227136; /*0x754161*/
  *(_DWORD *)v7 = a1; /*0x754169*/
  v8[2] = v11; /*0x75416b*/
  float * v12 = v7 + 11; /*0x754175*/
  aP2a = (float *)(Info + 64); /*0x754178*/
  *((_DWORD *)v7 + 7) = v17; /*0x75417c*/
  *((_DWORD *)v7 + 8) = v18; /*0x754182*/
  *((_DWORD *)v7 + 9) = v19; /*0x754189*/
  do /*0x754238*/
  {
    float * v13 = v12 - 1; /*0x754199*/
    float * v14 = TransformMatrix3x4Point((float *)&v17, a4, aP2a); /*0x75419c*/
    *(v12 - 1) = *v14; /*0x7541a5*/
    *v12 = v14[1]; /*0x7541aa*/
    v12[1] = v14[2]; /*0x7541b0*/
    *v12 = -*v12; /*0x7541b7*/
    if ( *(v12 - 1) < (double)v7[4] ) /*0x7541c3*/
      v7[4] = *v13; /*0x7541c7*/
    if ( *v13 > (double)v7[7] ) /*0x7541d4*/
      v7[7] = *v13; /*0x7541d8*/
    if ( *v12 < (double)v7[5] ) /*0x7541e5*/
      v7[5] = *v12; /*0x7541e9*/
    if ( *v12 > (double)v7[8] ) /*0x7541f6*/
      v7[8] = *v12; /*0x7541fa*/
    if ( v12[1] < (double)v7[6] ) /*0x754208*/
    {
      int v15 = *((_DWORD *)v12 + 1); /*0x75420a*/
      *((_DWORD *)v7 + 3) = v9; /*0x75420d*/
      *((_DWORD *)v7 + 6) = v15; /*0x754210*/
    }
    if ( v12[1] > (double)v7[9] ) /*0x75421e*/
      v7[9] = v12[1]; /*0x754223*/
    ++v9; /*0x75422a*/
    v12 += 3; /*0x75422e*/
    aP2a += 3; /*0x754234*/
  }
  while ( v9 < 8 ); /*0x754238*/
  if ( v7[4] < (double)*(float *)&DataGlobal_B2D5E0 ) /*0x75424c*/
    DataGlobal_B2D5E0 = *((_DWORD *)v7 + 4); /*0x754251*/
  if ( v7[5] < (double)*(float *)&DataGlobal_B2D5E4 ) /*0x754265*/
    DataGlobal_B2D5E4 = *((_DWORD *)v7 + 5); /*0x75426a*/
  if ( v7[6] < (double)*(float *)&DataGlobal_B2D5E8 ) /*0x75427e*/
    DataGlobal_B2D5E8 = *((_DWORD *)v7 + 6); /*0x754283*/
  if ( v7[7] > (double)*(float *)&DataGlobal_B2D948 ) /*0x754296*/
    DataGlobal_B2D948 = *((_DWORD *)v7 + 7); /*0x75429b*/
  if ( v7[8] > (double)*(float *)&DataGlobal_B2D94C ) /*0x7542af*/
    DataGlobal_B2D94C = *((_DWORD *)v7 + 8); /*0x7542b4*/
  if ( v7[9] > (double)*(float *)&DataGlobal_B2D950 ) /*0x7542c8*/
    DataGlobal_B2D950 = *((_DWORD *)v7 + 9); /*0x7542cd*/
  return ++DataGlobal_B2D820; /*0x7542d7*/
}
}
} // namespace gamemd

// 0x7542F0
namespace gamemd {
int InitializeAudioOcclusion(IUnknown * aP0, unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall InitializeAudioOcclusion(IUnknown *aP0, _DWORD *a1, _DWORD *a2)
{
  _DWORD **v5; // esi
  _DWORD ***v16; // esi
  int result; // eax

  int v3 = 0; /*0x75430e*/
  float v33 = (*(float *)&stru_B1D188[66648] + *(float *)&stru_B1D188[67520]) * 0.5; /*0x754318*/
  float v34 = (*(float *)&stru_B1D188[66652] + *(float *)&stru_B1D188[67524]) * 0.5; /*0x75432e*/
  float v35 = (*(float *)&stru_B1D188[66656] + *(float *)&stru_B1D188[67528]) * 0.5; /*0x754344*/
  if ( *(int *)&stru_B1D188[76264] > 0 ) /*0x754348*/
  {
    v5 = (_DWORD **)&unk_B3FF78; /*0x75434a*/
    do /*0x754367*/
    {
      InitializeTileAudioOcclusion(*v5, (int)v5, &v33); /*0x754357*/
      ++v3; /*0x754361*/
      v5 += 18; /*0x754362*/
    }
    while ( v3 < *(int *)&stru_B1D188[76264] ); /*0x754367*/
  }
  int v6 = *(_DWORD *)&stru_B1D188[67224]; /*0x754369*/
  if ( *(int *)&stru_B1D188[67224] > 0 ) /*0x754371*/
  {
    char * v7 = &stru_B1D188[77040]; /*0x754373*/
    char * v8 = &stru_B1D188[67536]; /*0x754378*/
    int v9 = *(_DWORD *)&stru_B1D188[67224]; /*0x75437d*/
    do /*0x75438a*/
    {
      *(_DWORD *)v7 = v8; /*0x75437f*/
      v8 += 136; /*0x754381*/
      v7 += 4; /*0x754386*/
      --v9; /*0x754389*/
    }
    while ( v9 ); /*0x75438a*/
  }
  int v10 = v6 - 1; /*0x75438c*/
  if ( v6 - 1 > 0 ) /*0x754391*/
  {
    int v11 = 1; /*0x754393*/
    char * v12 = &stru_B1D188[77040]; /*0x754398*/
    int v31 = 1; /*0x75439d*/
    do /*0x7543df*/
    {
      if ( v11 < v6 ) /*0x7543a3*/
      {
        char * v13 = v12 + 4; /*0x7543a5*/
        int v14 = v6 - v11; /*0x7543a8*/
        do /*0x7543c3*/
        {
          int v15 = *(_DWORD *)v12; /*0x7543aa*/
          if ( *(float *)(*(_DWORD *)v12 + 36) > (double)*(float *)(*(_DWORD *)v13 + 36) ) /*0x7543b9*/
          {
            *(_DWORD *)v12 = *(_DWORD *)v13; /*0x7543bb*/
            *(_DWORD *)v13 = v15; /*0x7543bd*/
          }
          v13 += 4; /*0x7543bf*/
          --v14; /*0x7543c2*/
        }
        while ( v14 ); /*0x7543c3*/
        v11 = v31; /*0x7543c5*/
        v6 = *(_DWORD *)&stru_B1D188[67224]; /*0x7543c9*/
      }
      ++v11; /*0x7543cf*/
      v10 = v6 - 1; /*0x7543d0*/
      v12 += 4; /*0x7543d3*/
      v31 = v11; /*0x7543d6*/
    }
    while ( v11 - 1 < v6 - 1 ); /*0x7543df*/
  }
  if ( dword_B43180 ) /*0x7543e8*/
  {
    if ( v10 >= 0 ) /*0x7543ec*/
    {
      v16 = (_DWORD ***)(4 * v10 + 11730552); /*0x7543ee*/
      int v17 = v10 + 1; /*0x7543f5*/
      do /*0x75440b*/
      {
        Voxel::ProcessColor(**v16, *v16, &v33); /*0x754402*/
        --v16; /*0x754407*/
        --v17; /*0x75440a*/
      }
      while ( v17 ); /*0x75440b*/
    }
  }
  else
  {
    int v18 = 0; /*0x75440f*/
    if ( v6 > 0 ) /*0x754413*/
    {
      char * v19 = &stru_B1D188[77040]; /*0x754415*/
      do /*0x754434*/
      {
        Voxel::ProcessColor(**(_DWORD ***)v19, *(_DWORD **)v19, &v33); /*0x754424*/
        ++v18; /*0x75442e*/
        v19 += 4; /*0x75442f*/
      }
      while ( v18 < *(int *)&stru_B1D188[67224] ); /*0x754434*/
    }
  }
  aP0->field_8 = Math::RoundToInt(*(float *)&stru_B1D188[67520] - *(float *)&stru_B1D188[66648]); /*0x754447*/
  int v20 = Math::RoundToInt(*(float *)&stru_B1D188[67524] - *(float *)&stru_B1D188[66652]); /*0x754456*/
  int v21 = aP0->field_8; /*0x75445b*/
  aP0->field_C = v20; /*0x75445e*/
  double v22 = v33; /*0x754467*/
  int v23 = aP0->field_C; /*0x754476*/
  aP0->field_0 = 128 - v21 / 2; /*0x754478*/
  int v24 = 128 - v23 / 2; /*0x754487*/
  aP0->field_C = v23 + 8; /*0x754489*/
  int v25 = aP0->field_0; /*0x75448c*/
  aP0->field_4 = v24; /*0x75448e*/
  aP0->field_8 = v21 + 8; /*0x75449c*/
  aP0->field_0 = v25 - 4; /*0x75449f*/
  aP0->field_4 = v24 - 4; /*0x7544a1*/
  *(_DWORD *)&stru_B1D188[76248] = aP0->field_0; /*0x7544a6*/
  *(_DWORD *)&stru_B1D188[76252] = aP0->field_4; /*0x7544af*/
  *(_DWORD *)&stru_B1D188[76256] = aP0->field_8; /*0x7544b8*/
  *(_DWORD *)&stru_B1D188[76260] = aP0->field_C; /*0x7544c1*/
  int v26 = aP0->field_8 / 2; /*0x7544cf*/
  int v27 = Math::RoundToInt(v22); /*0x7544d1*/
  double v28 = v34; /*0x7544dc*/
  *a1 = v27 - v26; /*0x7544e0*/
  int v29 = aP0->field_C / 2; /*0x7544ea*/
  result = Math::RoundToInt(v28) - v29; /*0x7544f5*/
  *a2 = result; /*0x7544fa*/
  return result; /*0x7544f7*/
}
}
} // namespace gamemd

// 0x757120
namespace gamemd {
int RenderVoxels()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall Voxel_Render@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  __int16 v7; // dx
  char result; // al
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]

  int * v4 = a4; /*0x757120*/
  g_VoxelOffsetTable[0] = 0; /*0x757127*/
  unsigned int v5 = 1; /*0x757141*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x757146*/
  {
    _WORD * v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757148*/
    do /*0x75716f*/
    {
      v7 = *(v6 - 1); /*0x75714d*/
      v6 += 2; /*0x757151*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x757158*/
      ++v5; /*0x757164*/
      *v6 = *(v6 - 2) + *((_WORD *)a4 + 22); /*0x757165*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75716f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x757175*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x757179*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75717d*/
  result = *((_BYTE *)v4 + 49); /*0x757182*/
  unsigned int v26 = 0; /*0x757185*/
  if ( result ) /*0x75718f*/
  {
  unsigned int v21; // edx
    do /*0x757347*/
    {
  int *v9; // eax
      HIWORD(v9) = HIWORD(a4); /*0x757196*/
      v32 = (__int16)a4; /*0x75719d*/
      int v33 = v4[3]; /*0x7571a6*/
      v30 = a3; /*0x7571aa*/
      v31 = a2; /*0x7571ae*/
      unsigned int v25 = 0; /*0x7571b2*/
      if ( *((_BYTE *)v4 + 48) ) /*0x7571a1*/
      {
  unsigned int v20; // edx
        do /*0x757306*/
        {
          v29 = (__int16)a4; /*0x7571c7*/
          int * v10 = (int *)*v4; /*0x7571cb*/
          v27 = a3; /*0x7571cd*/
          v28 = a2; /*0x7571d1*/
          int * v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7571d5*/
          if ( v11 != (int *)-1 ) /*0x7571db*/
          {
            _BYTE * v12 = (char *)v11 + v4[2]; /*0x7571e4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7571e8*/
            int * v22 = v11; /*0x7571ed*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7571e8*/
            {
              do /*0x7572c6*/
              {
                LOBYTE(v10) = *v12; /*0x7571f7*/
                v13 = v12 + 1; /*0x7571f9*/
                v14 = (unsigned __int8)v10; /*0x7571fe*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x757206*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x757210*/
                a3 += (int)a1; /*0x757218*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x75721a*/
                a2 += (int)a1; /*0x757222*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x757228*/
                v10 = (int *)((char *)v22 - v14); /*0x75722e*/
                int v15 = *v13; /*0x757232*/
                char * v16 = (char *)(v13 + 1); /*0x757234*/
                a4 = a1; /*0x757237*/
                v22 = v10; /*0x75723b*/
                if ( v15 ) /*0x75723f*/
                {
  bool v19; // zf
                  int v24 = v15; /*0x757243*/
                  v22 = (int *)((char *)v10 - v15); /*0x757247*/
                  do /*0x7572bd*/
                  {
                    char v23 = *v16; /*0x75724f*/
                    int v17 = BYTE1(a3); /*0x757260*/
                    int v18 = v17 | a2 & 0xFF00; /*0x757263*/
                    v16 += 2; /*0x757276*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)DataGlobal_B1D5E0[v18] ) /*0x75727c*/
                    {
                      DataGlobal_B1D5E0[v18] = BYTE1(a4); /*0x757282*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x757288*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75728e*/
                      DataGlobal_B1D5E1[v18] = BYTE1(a4); /*0x757294*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x75729a*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75729e*/
                    a3 += v18; /*0x7572a2*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x7572a4*/
                    a2 += v17; /*0x7572a8*/
                    v10 = (int *)((char *)a4 + v18); /*0x7572ae*/
                    v19 = v24 == 1; /*0x7572b4*/
                    a4 = (int *)((char *)a4 + v18); /*0x7572b5*/
                    --v24; /*0x7572b9*/
                  }
                  while ( !v19 ); /*0x7572bd*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x7572bf*/
                v12 = v16 + 1; /*0x7572c3*/
              }
              while ( v22 ); /*0x7572c6*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7572d3*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7572e0*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7572e5*/
          a4 = v11; /*0x7572ea*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7572f5*/
          v4[3] += v4[4]; /*0x7572f8*/
          v9 = (int *)++v25; /*0x7572ff*/
        }
        while ( v25 < v20 ); /*0x757306*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x757314*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x757321*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x757326*/
      a4 = v9; /*0x75732b*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x757336*/
      v4[3] = v33 + v4[5]; /*0x757339*/
      result = ++v26; /*0x757340*/
    }
    while ( v26 < v21 ); /*0x757347*/
  }
  return result; /*0x75734e*/
}
}
} // namespace gamemd

// 0x757360
namespace gamemd {
int ProcessVoxelDepthSamples()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelDepthSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  __int16 v7; // di
  char result; // al
  unsigned __int8 *v12; // esi
  unsigned __int8 *v14; // esi
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]

  unsigned int v4 = a4; /*0x757360*/
  g_VoxelOffsetTable[0] = 0; /*0x757369*/
  unsigned int v5 = 1; /*0x757380*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757385*/
  {
    _WORD * v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757387*/
    do /*0x7573ae*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757392*/
      v6 += 2; /*0x757396*/
      *(v6 - 1) = v7; /*0x757399*/
      ++v5; /*0x7573a5*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x7573a6*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x7573a9*/
    }
    while ( v5 < a1 ); /*0x7573ae*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x7573b4*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x7573b8*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x7573bc*/
  result = *(_BYTE *)(v4 + 49); /*0x7573c1*/
  unsigned int v24 = 0; /*0x7573c4*/
  if ( result ) /*0x7573ca*/
  {
  unsigned int v18; // edx
    do /*0x757585*/
    {
      v28 = a3; /*0x7573d7*/
      int v31 = *(_DWORD *)(v4 + 12); /*0x7573db*/
  unsigned int v9; // eax
      HIWORD(v9) = HIWORD(a4); /*0x7573df*/
      v30 = a4; /*0x7573e3*/
      v29 = a2; /*0x7573ec*/
      unsigned int v23 = 0; /*0x7573f0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7573e7*/
      {
        do /*0x757544*/
        {
          v27 = a4; /*0x757401*/
          unsigned int v10 = *(_DWORD *)(v4 + 4); /*0x757405*/
          v25 = a3; /*0x757408*/
          v26 = a2; /*0x75740c*/
          unsigned int v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x757410*/
          if ( v11 != -1 ) /*0x757416*/
          {
            v12 = (unsigned __int8 *)(v11 + *(_DWORD *)(v4 + 8)); /*0x75741f*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x757423*/
            unsigned int v19 = v11; /*0x757428*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x757423*/
            {
  bool v17; // zf
              do /*0x757504*/
              {
                int v13 = *v12; /*0x757434*/
                v14 = v12 - 1; /*0x757436*/
                if ( v13 ) /*0x757439*/
                {
                  int v22 = v13; /*0x757443*/
                  v19 -= v13; /*0x757449*/
                  do /*0x7574bf*/
                  {
                    char v20 = *(v14 - 1); /*0x757453*/
                    v14 -= 2; /*0x757464*/
                    int v15 = BYTE1(a3); /*0x757465*/
                    int v16 = v15 | a2 & 0xFF00; /*0x757468*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)DataGlobal_B1D5E0[v16] ) /*0x75747e*/
                    {
                      DataGlobal_B1D5E0[v16] = BYTE1(a4); /*0x757484*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x75748a*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x757490*/
                      DataGlobal_B1D5E1[v16] = BYTE1(a4); /*0x757496*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75749c*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x7574a0*/
                    a3 += v16; /*0x7574a4*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x7574a6*/
                    a2 += v15; /*0x7574aa*/
                    v10 = v16 + a4; /*0x7574b0*/
                    v17 = v22 == 1; /*0x7574b6*/
                    a4 += v16; /*0x7574b7*/
                    --v22; /*0x7574bb*/
                  }
                  while ( !v17 ); /*0x7574bf*/
                }
                v21 = *(v14 - 1); /*0x7574c5*/
                v12 = v14 - 2; /*0x7574c9*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7574d2*/
                v11 = v21; /*0x7574d7*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7574dc*/
                a3 += a1; /*0x7574e4*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7574e6*/
                a2 += a1; /*0x7574ee*/
                a1 = v10 + a4; /*0x7574f4*/
                v10 = v19 - v21; /*0x7574fa*/
                v17 = v19 == v21; /*0x7574fa*/
                a4 = a1; /*0x7574fc*/
                v19 = v10; /*0x757500*/
              }
              while ( !v17 ); /*0x757504*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x757511*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x75751e*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x757523*/
          a4 = v11; /*0x757528*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x757535*/
          v9 = v23 + 1; /*0x75753d*/
          v23 = v9; /*0x757540*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x757544*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x757552*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75755f*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x757564*/
      a4 = v9; /*0x757569*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x757574*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x757577*/
      result = ++v24; /*0x75757e*/
    }
    while ( v24 < v18 ); /*0x757585*/
  }
  return result; /*0x75758b*/
}
}
} // namespace gamemd

// 0x757980
namespace gamemd {
int ProcessVoxelColorScanline()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelColorScanline@<al>(unsigned int a1@<edx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, int a5)
{
  __int16 v8; // dx
  unsigned __int8 *v11; // esi
  unsigned __int8 v12; // al
  unsigned __int8 *v13; // esi
  unsigned __int8 *v15; // esi
  unsigned __int16 v17; // dx
  unsigned __int8 v18; // bl
  unsigned __int8 *v19; // esi
  unsigned __int8 v20; // bp
  unsigned __int8 v24; // [esp+10h] [ebp-34h]
  __int16 v30; // [esp+28h] [ebp-1Ch]
  __int16 v31; // [esp+2Ch] [ebp-18h]
  __int16 v32; // [esp+30h] [ebp-14h]
  __int16 v33; // [esp+34h] [ebp-10h]
  __int16 v34; // [esp+38h] [ebp-Ch]
  __int16 v35; // [esp+3Ch] [ebp-8h]

  g_VoxelOffsetTable[0] = 0; /*0x757987*/
  unsigned int v6 = 1; /*0x7579a1*/
  if ( *(_BYTE *)(a5 + 50) > 1u ) /*0x7579a6*/
  {
    _WORD * v7 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x7579a8*/
    do /*0x7579cf*/
    {
      v8 = *(v7 - 1); /*0x7579ad*/
      v7 += 2; /*0x7579b1*/
      *(v7 - 1) = *(_WORD *)(a5 + 42) + v8; /*0x7579b8*/
      ++v6; /*0x7579c4*/
      *v7 = *(_WORD *)(a5 + 44) + *(v7 - 2); /*0x7579c5*/
      a1 = *(unsigned __int8 *)(a5 + 50); /*0x7579ca*/
    }
    while ( v6 < a1 ); /*0x7579cf*/
  }
  unsigned int v9; // eax
  LOBYTE(v9) = *(_BYTE *)(a5 + 49); /*0x7579d1*/
  LOWORD(a4) = *(_WORD *)(a5 + 24); /*0x7579d4*/
  LOWORD(a3) = *(_WORD *)(a5 + 26); /*0x7579d8*/
  LOWORD(a1) = *(_WORD *)(a5 + 28); /*0x7579dc*/
  unsigned int v29 = 0; /*0x7579e2*/
  if ( (_BYTE)v9 ) /*0x7579ea*/
  {
    do /*0x757bd7*/
    {
      v33 = a4; /*0x7579f4*/
      int v36 = *(_DWORD *)(a5 + 12); /*0x7579f8*/
      v34 = a3; /*0x757a01*/
      v35 = a1; /*0x757a05*/
      unsigned int v28 = 0; /*0x757a09*/
      if ( *(_BYTE *)(a5 + 48) ) /*0x7579fc*/
      {
  unsigned int v22; // eax
        do /*0x757b9a*/
        {
          v30 = a4; /*0x757a1c*/
          v31 = a3; /*0x757a20*/
          int v10 = *(_DWORD *)(*(_DWORD *)a5 + 4 * *(_DWORD *)(a5 + 12)); /*0x757a24*/
          v32 = a1; /*0x757a27*/
          if ( v10 != -1 ) /*0x757a2e*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a5 + 8)); /*0x757a37*/
            int v37 = *(unsigned __int8 *)(a5 + 50); /*0x757a40*/
            if ( *(_BYTE *)(a5 + 50) ) /*0x757a3b*/
            {
              do /*0x757b5e*/
              {
                v12 = *v11; /*0x757a4a*/
                v13 = v11 + 1; /*0x757a4c*/
                LOWORD(a2) = g_VoxelOffsetTable[v12]; /*0x757a5a*/
                a4 += a2; /*0x757a62*/
                LOWORD(a2) = HIWORD(g_VoxelOffsetTable[v12]); /*0x757a64*/
                a3 += a2; /*0x757a6c*/
                LOWORD(a2) = *(_WORD *)(a5 + 46) * v12; /*0x757a74*/
                a1 += a2; /*0x757a79*/
                a2 = v37 - v12; /*0x757a7f*/
                int v14 = *v13; /*0x757a83*/
                v15 = v13 + 1; /*0x757a85*/
                int v26 = a3; /*0x757a88*/
                unsigned int v25 = a1; /*0x757a8c*/
                v37 = a2; /*0x757a90*/
                if ( v14 ) /*0x757a94*/
                {
  bool v21; // zf
                  int v27 = v14; /*0x757a9c*/
                  v37 = a2 - v14; /*0x757aa0*/
                  do /*0x757b51*/
                  {
                    a2 = BYTE1(a4); /*0x757ab3*/
                    int v16 = a2 | a3 & 0xFF00; /*0x757ab6*/
                    v17 = BYTE1(a1); /*0x757ab8*/
                    if ( v17 <= (unsigned __int8)DataGlobal_B1D5E0[v16] ) /*0x757ac7*/
                    {
                      v15 += 2; /*0x757b27*/
                    }
                    else
                    {
                      v18 = *v15; /*0x757ac9*/
                      v19 = v15 + 1; /*0x757acb*/
                      v20 = v18; /*0x757ad2*/
                      v24 = *v19; /*0x757ad6*/
                      v15 = v19 + 1; /*0x757ada*/
                      DataGlobal_B1D5E0[v16] = v17; /*0x757adf*/
                      DataGlobal_B1D5E1[v16] = v17; /*0x757aeb*/
                      a2 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757b05*/
                      LOBYTE(a2) = g_VoxelColorPalette[a2 + v20]; /*0x757b0e*/
                      a3 = v26; /*0x757b15*/
                      g_VoxelRenderBuffer[v16] = a2; /*0x757b19*/
                      g_VoxelDepthBuffer[v16] = a2; /*0x757b1f*/
                    }
                    LOWORD(v16) = *(_WORD *)(a5 + 42); /*0x757b2a*/
                    a4 += v16; /*0x757b32*/
                    LOWORD(v16) = *(_WORD *)(a5 + 44); /*0x757b34*/
                    a3 += v16; /*0x757b38*/
                    LOWORD(v16) = *(_WORD *)(a5 + 46); /*0x757b3a*/
                    a1 = v16 + v25; /*0x757b3e*/
                    v21 = v27 == 1; /*0x757b44*/
                    v26 = a3; /*0x757b45*/
                    v25 += v16; /*0x757b49*/
                    --v27; /*0x757b4d*/
                  }
                  while ( !v21 ); /*0x757b51*/
                }
                v11 = v15 + 1; /*0x757b5b*/
              }
              while ( v37 ); /*0x757b5e*/
            }
          }
          LOWORD(a4) = v30 + *(_WORD *)(a5 + 30); /*0x757b76*/
          LOWORD(a3) = v31 + *(_WORD *)(a5 + 32); /*0x757b7b*/
          LOWORD(a1) = v32 + *(_WORD *)(a5 + 34); /*0x757b80*/
          v22 = *(unsigned __int8 *)(a5 + 48); /*0x757b89*/
          *(_DWORD *)(a5 + 12) += *(_DWORD *)(a5 + 16); /*0x757b8c*/
          ++v28; /*0x757b96*/
        }
        while ( v28 < v22 ); /*0x757b9a*/
      }
      LOWORD(a4) = v33 + *(_WORD *)(a5 + 36); /*0x757bb3*/
      LOWORD(a3) = v34 + *(_WORD *)(a5 + 38); /*0x757bb8*/
      LOWORD(a1) = v35 + *(_WORD *)(a5 + 40); /*0x757bbd*/
      *(_DWORD *)(a5 + 12) = v36 + *(_DWORD *)(a5 + 20); /*0x757bc8*/
      v9 = *(unsigned __int8 *)(a5 + 49); /*0x757bcd*/
      ++v29; /*0x757bd3*/
    }
    while ( v29 < v9 ); /*0x757bd7*/
  }
  return v9; /*0x757bde*/
}
}
} // namespace gamemd

// 0x757BF0
namespace gamemd {
int VoxelDrawScanline()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall VoxelDrawScanline@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, int a4)
{
  __int16 v7; // di
  unsigned __int8 *v11; // esi
  unsigned __int8 *v13; // esi
  unsigned __int8 v22; // [esp+14h] [ebp-34h]
  unsigned __int8 v24; // [esp+1Ch] [ebp-2Ch]
  __int16 v28; // [esp+2Ch] [ebp-1Ch]
  __int16 v29; // [esp+30h] [ebp-18h]
  __int16 v30; // [esp+34h] [ebp-14h]
  __int16 v31; // [esp+38h] [ebp-10h]
  __int16 v32; // [esp+3Ch] [ebp-Ch]
  __int16 v33; // [esp+40h] [ebp-8h]

  g_VoxelOffsetTable[0] = 0; /*0x757bf9*/
  unsigned int v5 = 1; /*0x757c10*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x757c15*/
  {
    _WORD * v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x757c17*/
    do /*0x757c3e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x757c22*/
      v6 += 2; /*0x757c26*/
      *(v6 - 1) = v7; /*0x757c29*/
      ++v5; /*0x757c35*/
      *v6 = *(v6 - 2) + *(_WORD *)(a4 + 44); /*0x757c36*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x757c39*/
    }
    while ( v5 < a1 ); /*0x757c3e*/
  }
  int v8; // eax
  LOBYTE(v8) = *(_BYTE *)(a4 + 49); /*0x757c40*/
  LOWORD(a1) = *(_WORD *)(a4 + 26); /*0x757c43*/
  LOWORD(a2) = *(_WORD *)(a4 + 28); /*0x757c47*/
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x757c4b*/
  unsigned int v21 = a1; /*0x757c51*/
  int v35 = a2; /*0x757c55*/
  int v27 = 0; /*0x757c59*/
  if ( (_BYTE)v8 ) /*0x757c5d*/
  {
  bool v19; // cf
    do /*0x757e5d*/
    {
      v31 = a3; /*0x757c6a*/
      int v34 = *(_DWORD *)(a4 + 12); /*0x757c6e*/
      v32 = a1; /*0x757c77*/
      v33 = a2; /*0x757c7b*/
      unsigned int v26 = 0; /*0x757c7f*/
      if ( *(_BYTE *)(a4 + 48) ) /*0x757c72*/
      {
  unsigned int v18; // edx
        do /*0x757e18*/
        {
          int v9 = *(_DWORD *)(a4 + 12); /*0x757c89*/
          v28 = a3; /*0x757c8f*/
          v29 = a1; /*0x757c93*/
          int v10 = *(_DWORD *)(*(_DWORD *)(a4 + 4) + 4 * v9); /*0x757c97*/
          v30 = a2; /*0x757c9a*/
          if ( v10 != -1 ) /*0x757ca1*/
          {
            v11 = (unsigned __int8 *)(v10 + *(_DWORD *)(a4 + 8)); /*0x757caa*/
            int v23 = *(unsigned __int8 *)(a4 + 50); /*0x757cb3*/
            if ( *(_BYTE *)(a4 + 50) ) /*0x757cae*/
            {
  bool v17; // zf
              do /*0x757dd4*/
              {
                int v12 = *v11; /*0x757cbf*/
                v13 = v11 - 1; /*0x757cc1*/
                if ( v12 ) /*0x757cc4*/
                {
                  int v25 = v12; /*0x757cce*/
                  v23 -= v12; /*0x757cd4*/
                  do /*0x757d89*/
                  {
                    v9 = BYTE1(a3); /*0x757ce7*/
                    int v14 = v9 | a1 & 0xFF00; /*0x757cea*/
                    LOWORD(v9) = BYTE1(a2); /*0x757cef*/
                    if ( (unsigned __int16)BYTE1(a2) <= (unsigned __int8)DataGlobal_B1D5E0[v14] ) /*0x757cfe*/
                    {
                      v13 -= 2; /*0x757d5f*/
                    }
                    else
                    {
                      v24 = *v13; /*0x757d03*/
                      v13 -= 2; /*0x757d11*/
                      int v15 = (unsigned __int8)g_VoxelShadeTable[v24] << 8; /*0x757d31*/
                      int v16 = v13[1]; /*0x757d34*/
                      DataGlobal_B1D5E0[v14] = v9; /*0x757d3a*/
                      DataGlobal_B1D5E1[v14] = v9; /*0x757d40*/
                      LOBYTE(v15) = g_VoxelColorPalette[v15 + v16]; /*0x757d46*/
                      g_VoxelRenderBuffer[v14] = v15; /*0x757d4d*/
                      g_VoxelDepthBuffer[v14] = v15; /*0x757d53*/
                      a1 = v21; /*0x757d59*/
                    }
                    LOWORD(v14) = *(_WORD *)(a4 + 42); /*0x757d62*/
                    LOWORD(v9) = *(_WORD *)(a4 + 44); /*0x757d6a*/
                    a3 += v14; /*0x757d6e*/
                    LOWORD(v14) = *(_WORD *)(a4 + 46); /*0x757d70*/
                    a1 += v9; /*0x757d74*/
                    a2 = v14 + v35; /*0x757d76*/
                    v17 = v25 == 1; /*0x757d7c*/
                    v21 = a1; /*0x757d7d*/
                    v35 += v14; /*0x757d81*/
                    --v25; /*0x757d85*/
                  }
                  while ( !v17 ); /*0x757d89*/
                }
                v22 = *(v13 - 1); /*0x757d93*/
                v11 = v13 - 2; /*0x757d97*/
                LOWORD(v9) = g_VoxelOffsetTable[v22]; /*0x757da1*/
                a3 += v9; /*0x757da9*/
                LOWORD(v9) = HIWORD(g_VoxelOffsetTable[v22]); /*0x757dab*/
                a1 += v9; /*0x757db3*/
                LOWORD(v9) = *(_WORD *)(a4 + 46) * v22; /*0x757dbb*/
                a2 += v9; /*0x757dc0*/
                v9 = v23 - v22; /*0x757dc6*/
                v17 = v23 == v22; /*0x757dc6*/
                v21 = a1; /*0x757dc8*/
                v35 = a2; /*0x757dcc*/
                v23 = v9; /*0x757dd0*/
              }
              while ( !v17 ); /*0x757dd4*/
            }
          }
          LOWORD(a3) = v28 + *(_WORD *)(a4 + 30); /*0x757dec*/
          LOWORD(a1) = v29 + *(_WORD *)(a4 + 32); /*0x757df1*/
          LOWORD(a2) = v30 + *(_WORD *)(a4 + 34); /*0x757df6*/
          v18 = *(unsigned __int8 *)(a4 + 48); /*0x757dff*/
          *(_DWORD *)(a4 + 12) += *(_DWORD *)(a4 + 16); /*0x757e02*/
          v21 = a1; /*0x757e09*/
          v35 = a2; /*0x757e0e*/
          ++v26; /*0x757e14*/
        }
        while ( v26 < v18 ); /*0x757e18*/
      }
      LOWORD(a3) = v31 + *(_WORD *)(a4 + 36); /*0x757e31*/
      LOWORD(a1) = v32 + *(_WORD *)(a4 + 38); /*0x757e36*/
      LOWORD(a2) = v33 + *(_WORD *)(a4 + 40); /*0x757e3b*/
      v8 = v34 + *(_DWORD *)(a4 + 20); /*0x757e40*/
      v21 = a1; /*0x757e4c*/
      v19 = v27 + 1 < (unsigned int)*(unsigned __int8 *)(a4 + 49); /*0x757e50*/
      v35 = a2; /*0x757e52*/
      *(_DWORD *)(a4 + 12) = v8; /*0x757e56*/
      ++v27; /*0x757e59*/
    }
    while ( v19 ); /*0x757e5d*/
  }
  return v8; /*0x757e63*/
}
}
} // namespace gamemd

// 0x7581F0
namespace gamemd {
int ProcessVoxelColorSamples()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelColorSamples@<al>(int *a1@<ebx>, int a2@<ebp>, int a3@<edi>, int *a4)
{
  __int16 v7; // dx
  char result; // al
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // al
  __int16 v27; // [esp+20h] [ebp-1Ch]
  __int16 v28; // [esp+24h] [ebp-18h]
  __int16 v29; // [esp+28h] [ebp-14h]
  __int16 v30; // [esp+2Ch] [ebp-10h]
  __int16 v31; // [esp+30h] [ebp-Ch]
  __int16 v32; // [esp+34h] [ebp-8h]

  int * v4 = a4; /*0x7581f0*/
  g_VoxelOffsetTable[0] = 0; /*0x7581f7*/
  unsigned int v5 = 1; /*0x758211*/
  if ( *((_BYTE *)a4 + 50) > 1u ) /*0x758216*/
  {
    _WORD * v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758218*/
    do /*0x75823f*/
    {
      v7 = *(v6 - 1); /*0x75821d*/
      v6 += 2; /*0x758221*/
      *(v6 - 1) = *((_WORD *)a4 + 21) + v7; /*0x758228*/
      ++v5; /*0x758234*/
      *v6 = *((_WORD *)a4 + 22) + *(v6 - 2); /*0x758235*/
    }
    while ( v5 < *((unsigned __int8 *)a4 + 50) ); /*0x75823f*/
  }
  LOWORD(a3) = *((_WORD *)a4 + 12); /*0x758245*/
  LOWORD(a2) = *((_WORD *)a4 + 13); /*0x758249*/
  LOWORD(a4) = *((_WORD *)a4 + 14); /*0x75824d*/
  result = *((_BYTE *)v4 + 49); /*0x758252*/
  unsigned int v26 = 0; /*0x758255*/
  if ( result ) /*0x75825f*/
  {
  unsigned int v21; // edx
    do /*0x758415*/
    {
  int *v9; // eax
      HIWORD(v9) = HIWORD(a4); /*0x758266*/
      v32 = (__int16)a4; /*0x75826d*/
      int v33 = v4[3]; /*0x758276*/
      v30 = a3; /*0x75827a*/
      v31 = a2; /*0x75827e*/
      unsigned int v25 = 0; /*0x758282*/
      if ( *((_BYTE *)v4 + 48) ) /*0x758271*/
      {
  unsigned int v20; // edx
        do /*0x7583d4*/
        {
          v29 = (__int16)a4; /*0x758297*/
          int * v10 = (int *)*v4; /*0x75829b*/
          v27 = a3; /*0x75829d*/
          v28 = a2; /*0x7582a1*/
          int * v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7582a5*/
          if ( v11 != (int *)-1 ) /*0x7582ab*/
          {
            _BYTE * v12 = (char *)v11 + v4[2]; /*0x7582b4*/
            v11 = (int *)*((unsigned __int8 *)v4 + 50); /*0x7582b8*/
            int * v22 = v11; /*0x7582bd*/
            if ( *((_BYTE *)v4 + 50) ) /*0x7582b8*/
            {
              do /*0x758394*/
              {
                LOBYTE(v10) = *v12; /*0x7582c7*/
                v13 = v12 + 1; /*0x7582c9*/
                v14 = (unsigned __int8)v10; /*0x7582ce*/
                LOWORD(v10) = *((_WORD *)v4 + 23) * (unsigned __int8)v10; /*0x7582d6*/
                LOWORD(a1) = g_VoxelOffsetTable[v14]; /*0x7582e0*/
                a3 += (int)a1; /*0x7582e8*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v14]); /*0x7582ea*/
                a2 += (int)a1; /*0x7582f2*/
                a1 = (int *)((char *)a4 + (_DWORD)v10); /*0x7582f8*/
                v10 = (int *)((char *)v22 - v14); /*0x7582fe*/
                int v15 = *v13; /*0x758302*/
                char * v16 = (char *)(v13 + 1); /*0x758304*/
                a4 = a1; /*0x758307*/
                v22 = v10; /*0x75830b*/
                if ( v15 ) /*0x75830f*/
                {
  bool v19; // zf
                  int v24 = v15; /*0x758313*/
                  v22 = (int *)((char *)v10 - v15); /*0x758317*/
                  do /*0x75838b*/
                  {
                    char v23 = *v16; /*0x75831f*/
                    int v17 = BYTE1(a3); /*0x758330*/
                    int v18 = v17 | a2 & 0xFF00; /*0x758333*/
                    ++v16; /*0x758346*/
                    if ( (unsigned __int16)((unsigned __int16)a4 >> 8) > (unsigned __int8)DataGlobal_B1D5E0[v18] ) /*0x75834a*/
                    {
                      DataGlobal_B1D5E0[v18] = BYTE1(a4); /*0x758350*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x758356*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75835c*/
                      DataGlobal_B1D5E1[v18] = BYTE1(a4); /*0x758362*/
                    }
                    LOWORD(v18) = *((_WORD *)v4 + 21); /*0x758368*/
                    LOWORD(v17) = *((_WORD *)v4 + 22); /*0x75836c*/
                    a3 += v18; /*0x758370*/
                    LOWORD(v18) = *((_WORD *)v4 + 23); /*0x758372*/
                    a2 += v17; /*0x758376*/
                    v10 = (int *)((char *)a4 + v18); /*0x75837c*/
                    v19 = v24 == 1; /*0x758382*/
                    a4 = (int *)((char *)a4 + v18); /*0x758383*/
                    --v24; /*0x758387*/
                  }
                  while ( !v19 ); /*0x75838b*/
                }
                HIWORD(v11) = HIWORD(v22); /*0x75838d*/
                v12 = v16 + 1; /*0x758391*/
              }
              while ( v22 ); /*0x758394*/
            }
          }
          LOWORD(v11) = v29 + *((_WORD *)v4 + 17); /*0x7583a1*/
          LOWORD(a3) = v27 + *((_WORD *)v4 + 15); /*0x7583ae*/
          LOWORD(a2) = v28 + *((_WORD *)v4 + 16); /*0x7583b3*/
          a4 = v11; /*0x7583b8*/
          v20 = *((unsigned __int8 *)v4 + 48); /*0x7583c3*/
          v4[3] += v4[4]; /*0x7583c6*/
          v9 = (int *)++v25; /*0x7583cd*/
        }
        while ( v25 < v20 ); /*0x7583d4*/
      }
      LOWORD(v9) = v32 + *((_WORD *)v4 + 20); /*0x7583e2*/
      LOWORD(a3) = v30 + *((_WORD *)v4 + 18); /*0x7583ef*/
      LOWORD(a2) = v31 + *((_WORD *)v4 + 19); /*0x7583f4*/
      a4 = v9; /*0x7583f9*/
      v21 = *((unsigned __int8 *)v4 + 49); /*0x758404*/
      v4[3] = v33 + v4[5]; /*0x758407*/
      result = ++v26; /*0x75840e*/
    }
    while ( v26 < v21 ); /*0x758415*/
  }
  return result; /*0x75841c*/
}
}
} // namespace gamemd

// 0x758430
namespace gamemd {
int ProcessVoxelScanSamples()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __usercall ProcessVoxelScanSamples@<al>(unsigned int a1@<ebx>, int a2@<ebp>, int a3@<edi>, unsigned int a4)
{
  __int16 v7; // di
  char result; // al
  unsigned __int8 v21; // [esp+14h] [ebp-2Ch]
  __int16 v25; // [esp+24h] [ebp-1Ch]
  __int16 v26; // [esp+28h] [ebp-18h]
  __int16 v27; // [esp+2Ch] [ebp-14h]
  __int16 v28; // [esp+30h] [ebp-10h]
  __int16 v29; // [esp+34h] [ebp-Ch]
  __int16 v30; // [esp+38h] [ebp-8h]

  unsigned int v4 = a4; /*0x758430*/
  g_VoxelOffsetTable[0] = 0; /*0x758439*/
  unsigned int v5 = 1; /*0x758450*/
  if ( *(_BYTE *)(a4 + 50) > 1u ) /*0x758455*/
  {
    _WORD * v6 = (_WORD *)(g_VoxelOffsetTable + 2); /*0x758457*/
    do /*0x75847e*/
    {
      v7 = *(_WORD *)(a4 + 42) + *(v6 - 1); /*0x758462*/
      v6 += 2; /*0x758466*/
      *(v6 - 1) = v7; /*0x758469*/
      ++v5; /*0x758475*/
      *v6 = *(_WORD *)(a4 + 44) + *(v6 - 2); /*0x758476*/
      a1 = *(unsigned __int8 *)(a4 + 50); /*0x758479*/
    }
    while ( v5 < a1 ); /*0x75847e*/
  }
  LOWORD(a3) = *(_WORD *)(a4 + 24); /*0x758484*/
  LOWORD(a2) = *(_WORD *)(a4 + 26); /*0x758488*/
  LOWORD(a4) = *(_WORD *)(a4 + 28); /*0x75848c*/
  result = *(_BYTE *)(v4 + 49); /*0x758491*/
  unsigned int v24 = 0; /*0x758494*/
  if ( result ) /*0x75849a*/
  {
  unsigned int v18; // edx
    do /*0x758653*/
    {
      v28 = a3; /*0x7584a7*/
      int v31 = *(_DWORD *)(v4 + 12); /*0x7584ab*/
  unsigned int v9; // eax
      HIWORD(v9) = HIWORD(a4); /*0x7584af*/
      v30 = a4; /*0x7584b3*/
      v29 = a2; /*0x7584bc*/
      unsigned int v23 = 0; /*0x7584c0*/
      if ( *(_BYTE *)(v4 + 48) ) /*0x7584b7*/
      {
        do /*0x758612*/
        {
          v27 = a4; /*0x7584d1*/
          unsigned int v10 = *(_DWORD *)(v4 + 4); /*0x7584d5*/
          v25 = a3; /*0x7584d8*/
          v26 = a2; /*0x7584dc*/
          unsigned int v11 = *(_DWORD *)(v10 + 4 * *(_DWORD *)(v4 + 12)); /*0x7584e0*/
          if ( v11 != -1 ) /*0x7584e6*/
          {
            char * v12 = (char *)(v11 + *(_DWORD *)(v4 + 8)); /*0x7584ef*/
            v11 = *(unsigned __int8 *)(v4 + 50); /*0x7584f3*/
            unsigned int v19 = v11; /*0x7584f8*/
            if ( *(_BYTE *)(v4 + 50) ) /*0x7584f3*/
            {
  bool v17; // zf
              do /*0x7585d2*/
              {
                int v13 = (unsigned __int8)*v12; /*0x758504*/
                char * v14 = v12 - 1; /*0x758506*/
                if ( v13 ) /*0x758509*/
                {
                  int v22 = v13; /*0x758513*/
                  v19 -= v13; /*0x758519*/
                  do /*0x75858d*/
                  {
                    char v20 = *v14; /*0x758521*/
                    int v15 = BYTE1(a3); /*0x758532*/
                    int v16 = v15 | a2 & 0xFF00; /*0x758535*/
                    --v14; /*0x758548*/
                    if ( (unsigned __int16)BYTE1(a4) > (unsigned __int8)DataGlobal_B1D5E0[v16] ) /*0x75854c*/
                    {
                      DataGlobal_B1D5E0[v16] = BYTE1(a4); /*0x758552*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x758558*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x75855e*/
                      DataGlobal_B1D5E1[v16] = BYTE1(a4); /*0x758564*/
                    }
                    LOWORD(v16) = *(_WORD *)(v4 + 42); /*0x75856a*/
                    LOWORD(v15) = *(_WORD *)(v4 + 44); /*0x75856e*/
                    a3 += v16; /*0x758572*/
                    LOWORD(v16) = *(_WORD *)(v4 + 46); /*0x758574*/
                    a2 += v15; /*0x758578*/
                    v10 = v16 + a4; /*0x75857e*/
                    v17 = v22 == 1; /*0x758584*/
                    a4 += v16; /*0x758585*/
                    --v22; /*0x758589*/
                  }
                  while ( !v17 ); /*0x75858d*/
                }
                v21 = *(v14 - 1); /*0x758593*/
                v12 = v14 - 2; /*0x758597*/
                LOWORD(v10) = *(_WORD *)(v4 + 46) * v21; /*0x7585a0*/
                v11 = v21; /*0x7585a5*/
                LOWORD(a1) = g_VoxelOffsetTable[v21]; /*0x7585aa*/
                a3 += a1; /*0x7585b2*/
                LOWORD(a1) = HIWORD(g_VoxelOffsetTable[v21]); /*0x7585b4*/
                a2 += a1; /*0x7585bc*/
                a1 = v10 + a4; /*0x7585c2*/
                v10 = v19 - v21; /*0x7585c8*/
                v17 = v19 == v21; /*0x7585c8*/
                a4 = a1; /*0x7585ca*/
                v19 = v10; /*0x7585ce*/
              }
              while ( !v17 ); /*0x7585d2*/
            }
          }
          LOWORD(v11) = v27 + *(_WORD *)(v4 + 34); /*0x7585df*/
          LOWORD(a3) = v25 + *(_WORD *)(v4 + 30); /*0x7585ec*/
          LOWORD(a2) = v26 + *(_WORD *)(v4 + 32); /*0x7585f1*/
          a4 = v11; /*0x7585f6*/
          *(_DWORD *)(v4 + 12) += *(_DWORD *)(v4 + 16); /*0x758603*/
          v9 = v23 + 1; /*0x75860b*/
          v23 = v9; /*0x75860e*/
        }
        while ( v9 < *(unsigned __int8 *)(v4 + 48) ); /*0x758612*/
      }
      LOWORD(v9) = v30 + *(_WORD *)(v4 + 40); /*0x758620*/
      LOWORD(a3) = v28 + *(_WORD *)(v4 + 36); /*0x75862d*/
      LOWORD(a2) = v29 + *(_WORD *)(v4 + 38); /*0x758632*/
      a4 = v9; /*0x758637*/
      v18 = *(unsigned __int8 *)(v4 + 49); /*0x758642*/
      *(_DWORD *)(v4 + 12) = v31 + *(_DWORD *)(v4 + 20); /*0x758645*/
      result = ++v24; /*0x75864c*/
    }
    while ( v24 < v18 ); /*0x758653*/
  }
  return result; /*0x758659*/
}
}
} // namespace gamemd

// 0x758AD0
namespace gamemd {
int E4Recv_758AD0::sub_758AD0(int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_758AD0(_DWORD *this, int *a2)
{

  int v3 = 0; /*0x758ae2*/
  if ( !(*(int (__thiscall **)(int *, int))(*a2 + 28))(a2, 2) ) /*0x758ae4*/
    goto LABEL_5; /*0x758ae4*/
  int v4 = *(this + 2); /*0x758aed*/
  int v5 = *(this + 1); /*0x758af0*/
  _DWORD v9[4]; // [esp+Ch] [ebp-10h] BYREF
  v9[0] = *this; /*0x758af3*/
  int v6 = *(this + 3); /*0x758af7*/
  v9[2] = v4; /*0x758afa*/
  v9[1] = v5; /*0x758afe*/
  int v7 = *a2; /*0x758b02*/
  v9[3] = v6; /*0x758b08*/
  if ( (*(int (__thiscall **)(int *, _DWORD *, int))(v7 + 48))(a2, v9, 16) != 16 /*0x758b4a*/
    || (*(int (__thiscall **)(int *, _DWORD, int))(*a2 + 48))(a2, *(this + 4), 768) != 768
    || (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 48))(a2, *(this + 5), *(this + 2) << 8) != *(this + 2) << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758b4c*/
  }
  (*(void (__thiscall **)(int *))(*a2 + 52))(a2); /*0x758b55*/
  return v3; /*0x758b58*/
}
}
} // namespace gamemd

// 0x759180
namespace gamemd {
int sub_759180()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_759180()
{
  AsyncIO_Instance = 0; /*0x759187*/
  dword_B45B60 = 0; /*0x75918c*/
  byte_B45B64 = 1; /*0x759191*/
  byte_B45B65 = 0; /*0x759198*/
  dword_B45B58 = (int)&vt_DynamicVectorClass_MovieHandle; /*0x75919d*/
  dword_B45B6C = 10; /*0x7591a7*/
  g_AsyncIOState = 0; /*0x7591b1*/
  return atexit(sub_7591C0); /*0x7591bc*/
}
}
} // namespace gamemd

// 0x7591C0
namespace gamemd {
void sub_7591C0()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_7591C0()
{
  dword_B45B58 = (int)&vt_VectorClass_MovieHandle; /*0x7591c8*/
  if ( AsyncIO_Instance && byte_B45B65 ) /*0x7591dc*/
  {
    __3_YAXPAX_Z(AsyncIO_Instance); /*0x7591df*/
    AsyncIO_Instance = 0; /*0x7591e7*/
  }
  byte_B45B65 = 0; /*0x7591ed*/
  dword_B45B60 = 0; /*0x7591f3*/
}
}
} // namespace gamemd

// 0x759790
namespace gamemd {
LPDIRECTDRAW E4Recv_759790::sub_759790()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
LPDIRECTDRAW __thiscall sub_759790(int this)
{
  return Surface::CreateSurfacePalette((void *)(this + 516));
}
}
} // namespace gamemd

// 0x75A120
namespace gamemd {
BOOL E4Recv_75A120::sub_75A120(int a2, int * a3, int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void sub_75A120(int this, int a2, int *a3, int a4)
{
  BOOL result; // eax

  result = 1; /*0x75a127*/
  switch ( a2 ) /*0x75a136*/
  {
    case 1: /*0x75a136*/
    case 2: /*0x75a136*/
      goto LABEL_14;
    case 3: /*0x75a136*/
      a2 = 0; /*0x75a143*/
      a3 = 0; /*0x75a147*/
      if ( !LookupFileInfoCache((const char *)(this + 113), 0, &a3, &a2, 0) ) /*0x75a15e*/
        goto LABEL_5; /*0x75a15e*/
      bool v6 = (*(int (__thiscall **)(int, int, int))(this->M4 + 32))(this + 4, a3[3], 1) == 0; /*0x75a17c*/
      int v7 = this->M4; /*0x75a17e*/
      int v12 = a2; /*0x75a180*/
      *(_BYTE *)(this + 112) = !v6; /*0x75a186*/
      result = (*(int (__thiscall **)(int, int, int))(v7 + 40))(this + 4, v12, 1) == 0; /*0x75a191*/
      break; /*0x75a193*/
    case 4: /*0x75a136*/
      (*(void (__thiscall **)(int))(this->M4 + 52))(this + 4); /*0x75a273*/
      *(_BYTE *)(this + 112) = 0; /*0x75a278*/
      return 0; /*0x75a276*/
    case 5: /*0x75a136*/
      int v8 = a4; /*0x75a1a0*/
      return (*(int (__thiscall **)(int, int *, int))(this->M4 + 36))(this + 4, a3, a4) != v8; /*0x75a1b3*/
    case 6: /*0x75a136*/
LABEL_5:
      result = 1; /*0x75a1b6*/
      break; /*0x75a1bc*/
    case 7: /*0x75a136*/
      result = (*(int (__thiscall **)(int, int, int *))(this->M4 + 40))(this + 4, a4, a3) == 0; /*0x75a1d7*/
      break; /*0x75a1d8*/
    case 8: /*0x75a136*/
      if ( a4 <= 0 ) /*0x75a1e1*/
      {
        int v10 = this + 4; /*0x75a21c*/
        result = (*(int (__thiscall **)(int, int, int *))(this->M4 + 40))(this + 4, a4, a3) == 0; /*0x75a22a*/
        if ( !result ) /*0x75a22b*/
        {
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v10 + 36))(v10, &a4, 1) != 1; /*0x75a240*/
          if ( !result ) /*0x75a242*/
            result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 40))(v10, -1, 1) == 0; /*0x75a254*/
        }
      }
      else
      {
        int v9 = this + 4; /*0x75a1ea*/
        result = (*(int (__thiscall **)(int, int, int *))(this->M4 + 40))(this + 4, a4 - 1, a3) == 0; /*0x75a1f9*/
        if ( !result ) /*0x75a1fa*/
          result = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)v9 + 36))(v9, &a4, 1) != 1; /*0x75a210*/
      }
      break; /*0x75a212*/
    case 9: /*0x75a136*/
      int v11 = (*(int (__thiscall **)(int))(this->M4 + 44))(this + 4); /*0x75a25e*/
      *a3 = v11; /*0x75a265*/
LABEL_14:
      result = 0; /*0x75a267*/
      break; /*0x75a267*/
    default:
      return result;
  }
  return result; /*0x75a192*/
}
}
} // namespace gamemd

// 0x75A2F0
namespace gamemd {
CCINIClass * sub_75A2F0(int a1, int a2, unsigned int * Block, size_t Size)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
CCINIClass *sub_75A2F0(int a1, int a2, _DWORD *Block, size_t Size)
{
  CCINIClass *result; // eax

  switch ( a2 ) /*0x75a2fc*/
  {
    case 2: /*0x75a2fc*/
      result = (CCINIClass *)malloc((AbstractClass *)Size); /*0x75a308*/
      break; /*0x75a310*/
    case 3: /*0x75a2fc*/
      free(Block); /*0x75a316*/
      result = 0; /*0x75a31e*/
      break; /*0x75a320*/
    case 4: /*0x75a2fc*/
    case 5: /*0x75a2fc*/
      result = (CCINIClass *)Block; /*0x75a321*/
      break; /*0x75a325*/
    case 6: /*0x75a2fc*/
      *Block = -1; /*0x75a32a*/
      goto LABEL_6; /*0x75a32a*/
    default:
LABEL_6:
      result = 0; /*0x75a330*/
      break; /*0x75a330*/
  }
  return result; /*0x75a310*/
}
}
} // namespace gamemd

// 0x75A350
namespace gamemd {
int sub_75A350(int a1, int a2, unsigned char * a3, unsigned int a4)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int sub_75A350(int a1, int a2, _BYTE *a3, unsigned int a4)
{
  int i; // eax
  int result; // eax

  int v4 = *(_DWORD *)(a1 + 172); /*0x75a359*/
  switch ( a2 ) /*0x75a367*/
  {
    case 2: /*0x75a367*/
      for ( i = 0; i < 256; ++i ) /*0x75a374*/
        a3[i] *= 4; /*0x75a37c*/
      qmemcpy((void *)(v4 + 516), a3, 0x300u); /*0x75a392*/
      *(_BYTE *)(v4 + 1320) = 1; /*0x75a395*/
      result = 0; /*0x75a39d*/
      break; /*0x75a3a0*/
    case 3: /*0x75a367*/
      if ( *(_DWORD *)(v4 + 1296) != -1 ) /*0x75a3a8*/
        sub_748380((unsigned __int16 *)a3, a4 >> 1); /*0x75a3b4*/
      *(_DWORD *)(v4 + 1356) = *(_DWORD *)(v4 + 1284); /*0x75a3c1*/
      result = 0; /*0x75a3bf*/
      break; /*0x75a3c8*/
    case 6: /*0x75a367*/
      result = (*(int (**)(void))(v4 + 1344))(); /*0x75a3c9*/
      break; /*0x75a3d0*/
    case 7: /*0x75a367*/
      (*(void (**)(void))(v4 + 1348))(); /*0x75a3d1*/
      goto LABEL_10; /*0x75a3d1*/
    default:
LABEL_10:
      result = 0; /*0x75a3d7*/
      break; /*0x75a3d7*/
  }
  return result; /*0x75a39f*/
}
}
} // namespace gamemd

// 0x75A7D0
namespace gamemd {
int AnimSystem_Reset(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall AnimSystem_Reset(int a1)
{
  byte_B45BA8[a1 >> 3] |= 1 << (a1 & 7); /*0x75a7dc*/
  return a1 >> 3; /*0x75a7e2*/
}
}
} // namespace gamemd

// 0x75F230
namespace gamemd {
int sub_75F230(unsigned int * a1, unsigned int * a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __fastcall sub_75F230(_DWORD *a1, _DWORD *a2)
{

  int v2 = *a2 - *a1; /*0x75f239*/
  int v3 = a1[1] - a2[1]; /*0x75f246*/
  double v11 = Math::SinCos(0.3926990816987241); /*0x75f25a*/
  double v4 = v11 / Math::ArcTan2(0.3926990816987241); /*0x75f26d*/
  if ( !v2 ) /*0x75f276*/
    goto LABEL_11; /*0x75f276*/
  double v5 = (double)v3 / (double)v2; /*0x75f280*/
  if ( v5 >= 1.0 / v4 ) /*0x75f299*/
  {
    if ( v5 >= v4 ) /*0x75f2ba*/
      goto LABEL_8; /*0x75f2ba*/
  }
  else if ( v5 >= v4 ) /*0x75f29e*/
  {
    int v6 = (v2 <= 0) - 1; /*0x75f2a8*/
    LOBYTE(v6) = v6 & 0xFC; /*0x75f2ac*/
    return v6 + 5; /*0x75f2b6*/
  }
  if ( v5 >= -v4 ) /*0x75f2c9*/
  {
    int v8 = (v2 <= 0) - 1; /*0x75f2d3*/
    LOBYTE(v8) = v8 & 0xFC; /*0x75f2d7*/
    return v8 + 6; /*0x75f2e1*/
  }
LABEL_8:
  if ( v5 < -v4 && v5 >= -1.0 / v4 ) /*0x75f304*/
  {
    int v9 = (v2 <= 0) - 1; /*0x75f30e*/
    LOBYTE(v9) = v9 & 0xFC; /*0x75f310*/
    return v9 + 7; /*0x75f318*/
  }
LABEL_11:
  int v10 = (v3 <= 0) - 1; /*0x75f31d*/
  LOBYTE(v10) = v10 & 0xFC; /*0x75f326*/
  return v10 + 4; /*0x75f2b3*/
}
}
} // namespace gamemd

// 0x7500F0
namespace gamemd {
int sub_7500F0()
{
{
    DataGlobal_B1D300 = 0;
    DataGlobal_B1D304 = 0;
    DataGlobal_B1D308 = 0;
    DataGlobal_B1D30C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x750110
namespace gamemd {
void sub_750110()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B1D318 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x750140
namespace gamemd {
void sub_750140()
{
{
    DataGlobal_B1D398 = DataGlobal_B1D318 / 60.0;
}
}
} // namespace gamemd

// 0x750160
namespace gamemd {
void sub_750160()
{
{
    DataGlobal_B1D360 = 1.0 / DataGlobal_B1D398;
}
}
} // namespace gamemd

// 0x750180
namespace gamemd {
void sub_750180()
{
{
    DataGlobal_B1D358 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7501A0
namespace gamemd {
void sub_7501A0()
{
{
    DataGlobal_B1D330 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7501C0
namespace gamemd {
void sub_7501C0()
{
{
    DataGlobal_B1D2F8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7501E0
namespace gamemd {
long long sub_7501E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B1D2F8 - DataGlobal_B1D330);
    result = Math::RoundToInt(v0 * DataGlobal_B1D318 * 0.5);
    DataGlobal_B1D3A0 = result;
    return result;
}
}
} // namespace gamemd

// 0x750220
namespace gamemd {
void sub_750220()
{
{
    DataGlobal_B1D338 = Math::ArcTan((double)DataGlobal_B1D3A0 * 0.00390625);
}
}
} // namespace gamemd

// 0x750250
namespace gamemd {
void sub_750250()
{
{
    DataGlobal_B1D350 = Math::ArcTan((double)(2 * DataGlobal_B1D3A0) / DataGlobal_B1D318);
}
}
} // namespace gamemd

// 0x750280
namespace gamemd {
long long sub_750280()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1D3A0) + 0.5);
    DataGlobal_B1D390 = result;
    return result;
}
}
} // namespace gamemd

// 0x7502B0
namespace gamemd {
int sub_7502B0()
{
{
    DataGlobal_B1D310 = 0;
    DataGlobal_B1D312 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7502C0
namespace gamemd {
int sub_7502C0()
{
{
    DataGlobal_B1D340 = 0;
    DataGlobal_B1D344 = 0;
    DataGlobal_B1D348 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7502E0
namespace gamemd {
int sub_7502E0()
{
{
    DataGlobal_B1D370 = 0;
    DataGlobal_B1D368 = 128;
    DataGlobal_B1D36C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x750300
namespace gamemd {
int sub_750300()
{
{
    g_VocAudioConfig = 0;
    DataGlobal_B1D380 = 0;
    DataGlobal_B1D384 = 1;
    DataGlobal_B1D385 = 0;
    DataGlobal_B1D378 = (int)&vt_DynamicVectorClass_VocClass;
    DataGlobal_B1D38C = 10;
    g_VocPlayState = 0;
    return atexit(sub_750340);
}
}
} // namespace gamemd

// 0x750340
namespace gamemd {
void sub_750340()
{
{
    DataGlobal_B1D378 = (int)&vt_VectorClass_VocClass;
    if ( g_VocAudioConfig && DataGlobal_B1D385 )
  {
    __3_YAXPAX_Z(g_VocAudioConfig);
    g_VocAudioConfig = 0;
  }
    DataGlobal_B1D385 = 0;
    DataGlobal_B1D380 = 0;
}
}
} // namespace gamemd

// 0x7509E0
namespace gamemd {
int StartAudioControllerAt(AudioController * aP0, int a2, int a1)
{
{
    int *v5;
    int *v6;
    AudioMixer *v7;
    int *eax7;
    double v9;
    CCINIClass *v8;
    if ( !DataGlobal_830620[89740] )
    return 0;
    v5 = 0;
    v6 = 0;
    if ( (int)aP0 >= 0 && (int)aP0 < *(int *)&DataGlobal_B1D188[512] )
    v6 = **(int ***)(*(int *)&DataGlobal_B1D188[500] + 4 * (int)aP0);
    v7 = (AudioMixer *)a1;
    if ( a1 )
  {
    eax7 = AudioSource::Get((int **)a1);
    v5 = eax7;
    if ( eax7 )
    {
    if ( (int *)sub_406310(eax7) != v6 )
      {
    VocClass::Release((int)v5);
    v5 = 0;
      }
    }
  }
    if ( v6 )
  {
    v9 = ComputeAudioPosition((AudioMixer *)a2, &a1, (int)v6);
    if ( v9 <= 0.0 )
    {
    if ( v5 )
      {
    VocClass::Release((int)v5);
    v5 = 0;
      }
    }
    else
    {
    v8 = (CCINIClass *)Math::RoundToInt(v9 * 16384.0);
    if ( (unsigned int)v8 >= 0x4000 )
    v8 = (CCINIClass *)0x4000;
    if ( v5 || (v5 = AudioPool::ProcessQueue(v6)) != 0 )
      {
    AudioMixer::PlayBuffer(v5, (unsigned int)v8);
    AudioMixer::RequestOrEndBuffer((int)v5, a1);
      }
    }
  }
    if ( v7 )
    SetAudioSource(v7, v5, (int)v6);
    return (int)v5;
}
}
} // namespace gamemd

// 0x750E20
namespace gamemd {
int PlayAudioAt2(IUnknown * aP0, unsigned int * a1, int a3)
{
{
    int result;
    int *v6;
    int started;
    int v8;
    if ( (int)aP0 < 0 )
    return 0;
    result = (int)LinkedList::Next((int **)DataGlobal_B1D188.field_21C);
    v6 = (int *)result;
    if ( result )
  {
    AudioController::Init((int *)(result + 12));
    DListNode::InitEmpty(v6);
    v6[12] = 0;
    v6[8] = *a1;
    v6[9] = *((int*)(a1) + 1);
    v6[10] = *((int*)(a1) + 2);
    v6[11] = a3;
    started = StartAudioControllerAt((AudioController *)aP0, (int)(v6 + 8), (int)(v6 + 3));
    InsertAfterDListNode((int)&DataGlobal_B1D188[408], v6);
    v8 = ++*(int *)DataGlobal_B1D188[544];
    if ( *(int *)DataGlobal_B1D188[544] > *(int *)&DataGlobal_B1D188[548] )
    *(int *)&DataGlobal_B1D188[548] = v8;
    return started;
  }
    return result;
}
}
} // namespace gamemd

// 0x750EC0
namespace gamemd {
int VocClass_Update()
{
{
    int result;
    int v1;
    int v2;
    int v3;
    result = AudioQueue::GetNext(&DataGlobal_B1D320);
    v1 = result;
    if ( result )
  {
    do
    {
    v2 = AudioQueue::GetNextAlt(v1);
    if ( !*(int *)(v1 + 48) )
    StartAudioController(v1 + 32, v1 + 12);
    result = AudioSource::Get(v1 + 12);
    if ( !result )
      {
    v3 = VocClass::Check(v1 + 12);
    if ( !v3 || (result = AudioMixer::SetVolume(v3)) == 0 )
        {
    LinkedList::Init(v1);
    result = PushFrontLinkedListAlt(DataGlobal_B1D3A4, v1);
    --DataGlobal_B1D3A8;
        }
      }
    v1 = v2;
    }
    while ( v2 );
  }
    return result;
}
}
} // namespace gamemd

// 0x750F40
namespace gamemd {
int sub_750F40(unsigned int * a1, int a2)
{
{
    int result;
    int *i;
    result = AudioQueue::GetNext(DataGlobal_B1D320);
    for ( i = (int *)result; result; i = (int *)result )
  {
    if ( (a2 & i[11]) != 0 && i[8] == *a1 && i[9] == *((int*)(a1) + 1) && i[10] == *((int*)(a1) + 2) )
    AudioFile::Stop(i + 3);
    result = AudioQueue::GetNextAlt(i);
  }
    return result;
}
}
} // namespace gamemd

// 0x751040
namespace gamemd {
int sub_751040()
{
{
    int result;
    int i;
    int *v2;
    result = AudioQueue::GetNext(DataGlobal_B1D320);
    for ( i = result; result; i = result )
  {
    ++*(int *)(i + 48);
    v2 = AudioSource::Get((int **)(i + 12));
    if ( v2 )
    sub_4053E0((int)v2);
    result = AudioQueue::GetNextAlt((int *)i);
  }
    return result;
}
}
} // namespace gamemd

// 0x751080
namespace gamemd {
int sub_751080()
{
{
    int result;
    int i;
    int v2;
    int *v3;
    result = AudioQueue::GetNext(DataGlobal_B1D320);
    for ( i = result; result; i = result )
  {
    if ( *(int *)(i + 48) )
    {
    v2 = *(int *)(i + 48) - 1;
    *(int *)(i + 48) = v2;
    if ( v2 < 0 )
    *(int *)(i + 48) = 0;
    v3 = AudioSource::Get((int **)(i + 12));
    if ( v3 )
    sub_405430((int)v3);
    }
    result = AudioQueue::GetNextAlt((int *)i);
  }
    return result;
}
}
} // namespace gamemd

// 0x7518C0
namespace gamemd {
void VocClass_SetEnabled(char a1)
{
{
    VocClass_VoicesEnabled = a1;
}
}
} // namespace gamemd

// 0x751EA0
namespace gamemd {
HANDLE sub_751EA0(const CHAR * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
{
    const char *v4;
    HANDLE result;
    void *v7;
    HANDLE v9;
    CHAR FileName[260];
    struct _WIN32_FIND_DATAA FindFileData;
    v4 = a1;
    result = FindFirstFileA(a1, &FindFileData);
    v7 = result;
    v9 = result;
    if ( result != (HANDLE)-1 )
  {
    do
    {
    if ( (FindFileData.dwFileAttributes & 0x10) != 0 )
      {
    if ( _strcmpi(FindFileData.cFileName, DataGlobal_826598) )
        {
    if ( _strcmpi(FindFileData.cFileName, DataGlobal_846610) )
          {
    ++*a2;
    strcpy(FileName, v4);
    FileName[strlen(FileName) - 1] = 0;
    strcat(FileName, FindFileData.cFileName);
    strcat(FileName, DataGlobal_84660C);
    sub_751EA0(a3, a4);
    v7 = v9;
    v4 = a1;
          }
        }
      }
    else
      {
    ++*a3;
    *a4 += FindFileData.nFileSizeLow;
      }
    }
    while ( FindNextFileA(v7, &FindFileData) );
    return (HANDLE)FindClose(v7);
  }
    return result;
}
}
} // namespace gamemd

// 0x752020
namespace gamemd {
void sub_752020()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B1D3E8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x752050
namespace gamemd {
void sub_752050()
{
{
    DataGlobal_B1D490 = DataGlobal_B1D3E8 / 60.0;
}
}
} // namespace gamemd

// 0x752070
namespace gamemd {
void sub_752070()
{
{
    DataGlobal_B1D438 = 1.0 / DataGlobal_B1D490;
}
}
} // namespace gamemd

// 0x752090
namespace gamemd {
void sub_752090()
{
{
    DataGlobal_B1D430 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7520B0
namespace gamemd {
void sub_7520B0()
{
{
    DataGlobal_B1D400 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7520D0
namespace gamemd {
void sub_7520D0()
{
{
    DataGlobal_B1D3C0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7520F0
namespace gamemd {
long long sub_7520F0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B1D3C0 - DataGlobal_B1D400);
    result = Math::RoundToInt(v0 * DataGlobal_B1D3E8 * 0.5);
    DataGlobal_B1D498 = result;
    return result;
}
}
} // namespace gamemd

// 0x752130
namespace gamemd {
void sub_752130()
{
{
    DataGlobal_B1D408 = Math::ArcTan((double)DataGlobal_B1D498 * 0.00390625);
}
}
} // namespace gamemd

// 0x752160
namespace gamemd {
void sub_752160()
{
{
    DataGlobal_B1D420 = Math::ArcTan((double)(2 * DataGlobal_B1D498) / DataGlobal_B1D3E8);
}
}
} // namespace gamemd

// 0x752190
namespace gamemd {
long long sub_752190()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B1D498) + 0.5);
    DataGlobal_B1D488 = result;
    return result;
}
}
} // namespace gamemd

// 0x7521C0
namespace gamemd {
int sub_7521C0()
{
{
    DataGlobal_B1D3D4 = 0;
    DataGlobal_B1D3D6 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7521D0
namespace gamemd {
int sub_7521D0()
{
{
    DataGlobal_B1D410 = 0;
    DataGlobal_B1D414 = 0;
    DataGlobal_B1D418 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7521F0
namespace gamemd {
int sub_7521F0()
{
{
    DataGlobal_B1D448 = 0;
    DataGlobal_B1D440 = 128;
    DataGlobal_B1D444 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x752210
namespace gamemd {
int sub_752210()
{
{
    g_InfantryRenderPool = 0;
    DataGlobal_B1D4A8 = 0;
    DataGlobal_B1D4AC = 1;
    DataGlobal_B1D4AD = 0;
    DataGlobal_B1D4A0 = (int)&vt_DynamicVectorClass_VoxClass;
    DataGlobal_B1D4B4 = 10;
    g_InfantrySelectState = 0;
    return atexit(sub_752250);
}
}
} // namespace gamemd

// 0x752250
namespace gamemd {
void sub_752250()
{
{
    DataGlobal_B1D4A0 = (int)&vt_VectorClass_VoxClass;
    if ( g_InfantryRenderPool && DataGlobal_B1D4AD )
  {
    __3_YAXPAX_Z(g_InfantryRenderPool);
    g_InfantryRenderPool = 0;
  }
    DataGlobal_B1D4AD = 0;
    DataGlobal_B1D4A8 = 0;
}
}
} // namespace gamemd

// 0x7529A0
namespace gamemd {
void ThemeClass_Stop(char a1)
{
{
    if ( DataGlobal_B1D4C4 )
  {
    *(int *)(DataGlobal_B1D4C4 + 80) = 2;
    DataGlobal_B1D4C4 = 0;
  }
    if ( g_InfantryDrawState )
    Audio::Release(g_InfantryDrawState);
    if ( a1 )
    ThemeClass::ClearQueues();
}
}
} // namespace gamemd

// 0x752CA0
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ()
{
{
    if ( DataGlobal_B1D4D8 )
    Audio::Release(DataGlobal_B1D4D8);
}
}
} // namespace gamemd

// 0x7532BE
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_21()
{
return 1;
}
} // namespace gamemd

// 0x7533A0
namespace gamemd {
char _do_always_noconv_codecvt_base_std__MBE_NXZ_22()
{
return 1;
}
} // namespace gamemd

// 0x753510
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1()
{
{
    if ( DataGlobal_B1D4D8 )
    AudioMixer::ProcessAudioFrame((int)DataGlobal_B1D4D8);
}
}
} // namespace gamemd

// 0x7539B0
namespace gamemd {
int sub_7539B0()
{
{
    DataGlobal_B2D810 = 0;
    DataGlobal_B2D814 = 0;
    DataGlobal_B2D818 = 0;
    DataGlobal_B2D81C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x7539D0
namespace gamemd {
int sub_7539D0()
{
{
    DataGlobal_B2D92C = 256;
    DataGlobal_B2D930 = 256;
    DataGlobal_B2D934 = 0;
    DataGlobal_B2D928 = (int)&XSurface_Vtable;
    DataGlobal_B2D938 = 1;
    Buffer::Init(DataGlobal_B2D93C, (int)g_VoxelRenderBuffer, 0x10000);
    DataGlobal_B2D928 = (int)&BSurface_Vtable;
    return atexit(sub_753A30);
}
}
} // namespace gamemd

// 0x753A30
namespace gamemd {
void sub_753A30()
{
{
    Vector::Clear((int)&DataGlobal_B2D93C);
    DataGlobal_B2D928 = (int)&Surface_Vtable;
}
}
} // namespace gamemd

// 0x753A50
namespace gamemd {
int sub_753A50()
{
{
    DataGlobal_B2D7F4 = 256;
    DataGlobal_B2D7F8 = 256;
    DataGlobal_B2D7FC = 0;
    DataGlobal_B2D7F0 = (int)&XSurface_Vtable;
    DataGlobal_B2D800 = 1;
    Buffer::Init(DataGlobal_B2D804, (int)DataGlobal_B1D5E0, 0x10000);
    DataGlobal_B2D7F0 = (int)&BSurface_Vtable;
    return atexit(sub_753AB0);
}
}
} // namespace gamemd

// 0x753AB0
namespace gamemd {
void sub_753AB0()
{
{
    Vector::Clear((int)&DataGlobal_B2D804);
    DataGlobal_B2D7F0 = (int)&Surface_Vtable;
}
}
} // namespace gamemd

// 0x753AF0
namespace gamemd {
int sub_753AF0()
{
{
    DataGlobal_B2FB60 = 0;
    DataGlobal_B2FB64 = 0;
    DataGlobal_B2FB68 = 255;
    DataGlobal_B2FB6C = 255;
    return 255;
}
}
} // namespace gamemd

// 0x753B10
namespace gamemd {
int sub_753B10()
{
{
    char *v0;
    int v1;
    int result;
    v0 = (char *)&DataGlobal_B2D980;
    v1 = 64;
    do
  {
    result = Array::ForEach((int)v0, 12, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8);
    v0 += 136;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x753B40
namespace gamemd {
int sub_753B40()
{
{
    char *v0;
    int v1;
    int result;
    v0 = (char *)&DataGlobal_B3FF84;
    v1 = 64;
    do
  {
    result = Array::ForEach((int)v0, 12, 4, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8);
    v0 += 72;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x753BF0
namespace gamemd {
int sub_753BF0()
 {
// [IDA decompile] original pseudocode - translation pending (final goal)
char *__userpurge sub_753BF0@<eax>(
        char a1@<dl>,
        char a2@<cl>,
        int a3@<ebx>,
        int a4@<ebp>,
        char a5,
        char a6,
        char a7,
        char a8)
{
  char *result; // eax

  _WORD * v8 = &DataGlobal_B2D5EC; /*0x753bf6*/
  result = (char *)&DataGlobal_B2FB79; /*0x753bfd*/
  do /*0x753c4a*/
  {
    LOBYTE(a3) = (unsigned __int8)*(result - 1) >> a2; /*0x753c07*/
    result += 3; /*0x753c0b*/
    ++v8; /*0x753c0e*/
    LOWORD(a4) = (unsigned __int8)a3; /*0x753c11*/
    LOWORD(a3) = (unsigned __int8)((unsigned __int8)*(result - 2) >> a7); /*0x753c24*/
    int v10 = a3 << a8; /*0x753c28*/
    int v11 = v10 | (a4 << a1); /*0x753c2e*/
    LOWORD(v10) = (unsigned __int8)((unsigned __int8)*(result - 3) >> a5); /*0x753c39*/
    a3 = v10 << a6; /*0x753c3d*/
    a4 = a3 | v11; /*0x753c3f*/
    *(v8 - 1) = a4; /*0x753c46*/
  }
  while ( result < DataGlobal_B2FE79 ); /*0x753c4a*/
  return result; /*0x753c4c*/
}
}
} // namespace gamemd

// 0x753C60
namespace gamemd {
char * sub_753C60()
{
{
    return g_VoxelRenderBuffer;
}
}
} // namespace gamemd

// 0x753C80
namespace gamemd {
char globalHelper_053C80(unsigned int * a1, SomeVoxelCache * edx0, SomeVoxelCache * aP2, float * a4, float * a2)
{
{
    float *v7;
    int Info;
    float v10[3];
    float v11[3];
    float v12[12];
    float v13[12];
    qmemcpy(v12, InvertMatrix3x3Signs(v13, a4), sizeof(v12));
    v7 = Matrix3x3::TransformPoint(v12, (IUnknown *)v11, a2);
    v10[0] = *v7;
    v10[1] = v7[1];
    v10[2] = v7[2];
    Info = VoxelSection::GetInfo(a1, edx0, aP2);
    return GlobalHelper_053C80_Helper(v10, *(unsigned char *)(Info + 163));
}
}
} // namespace gamemd

// 0x753F90
namespace gamemd {
char * globalHelper_053F90(unsigned int * a0, ObjectClass * aP1, SomeVoxelCache * aP2, float * a3, float * a4, float * a5, int a7, int a8, int a9)
{
{
    int Info;
    int v12;
    int v13;
    Tactical *v14;
    Tactical *v15;
    float *v16;
    float *v17;
    double v18;
    float v20;
    float v21;
    float v22;
    float v23[3];
    float v24[3];
    Info = VoxelSection::GetInfo(a0, (SomeVoxelCache *)aP1, aP2);
    v12 = 4;
    v13 = 72 * *(int *)&DataGlobal_B1D188[76264] + 11796344;
    *(int *)(v13 + 60) = a7;
    *(int *)(v13 + 64) = a8;
    *(int *)v13 = a0;
    *(int *)(v13 + 4) = aP1;
    *(int *)(v13 + 8) = aP2;
    *(int *)(v13 + 68) = a9;
    v14 = (Tactical *)(v13 + 12);
    v15 = (Tactical *)(Info + 64);
    do
  {
    v16 = TransformMatrix3x4Point((AbstractClass *)v23, (IUnknown *)a4, (IUnknown *)v15);
    *(float *)v14->__pad_0 = *v16;
    *(float *)&v14->field_2[2] = v16[1];
    v14->field_8 = (void *)v16[2];
    v14->field_8 = 0;
    v17 = TransformMatrix3x4Point((AbstractClass *)v24, (IUnknown *)a3, (IUnknown *)v14);
    *(float *)v14->__pad_0 = *v17;
    *(float *)&v14->field_2[2] = v17[1];
    v14->field_8 = (void *)v17[2];
    v20 = *a5 + *(float *)v14->__pad_0;
    v21 = *(float *)&v14->field_2[2] + *((int*)(a5) + 1);
    v18 = *((int*)(a5) + 2) + *(float *)&v14->field_8;
    *(float *)v14->__pad_0 = v20;
    v22 = v18;
    *(float *)&v14->field_2[2] = v21;
    *(float *)&v14->field_8 = v22;
    *(float *)&v14->field_2[2] = -*(float *)&v14->field_2[2];
    if ( *(float *)v14->__pad_0 < (double)*(float *)&DataGlobal_B1D188[66648] )
    *(int *)&DataGlobal_B1D188[66648] = *(int *)v14->__pad_0;
    if ( *(float *)&v14->field_2[2] < (double)*(float *)&DataGlobal_B1D188[66652] )
    *(int *)&DataGlobal_B1D188[66652] = *(int *)&v14->field_2[2];
    if ( *(float *)v14->__pad_0 > (double)*(float *)&DataGlobal_B1D188[67520] )
    *(int *)&DataGlobal_B1D188[67520] = *(int *)v14->__pad_0;
    if ( *(float *)&v14->field_2[2] > (double)*(float *)&DataGlobal_B1D188[67524] )
    *(int *)&DataGlobal_B1D188[67524] = *(int *)&v14->field_2[2];
    v15 = (Tactical *)((char *)(v15) + 12);
    v14 = (Tactical *)((char *)(v14) + 12);
    --v12;
  }
    while ( v12 );
    return (char *)++*(int *)&DataGlobal_B1D188[76264];
}
}
} // namespace gamemd

// 0x754740
namespace gamemd {
int sub_754740(int a1, int a2, unsigned int a3, int a4)
{
{
    int result;
    char *v5;
    int v6;
    char *v7;
    if ( a1 < 0 || a2 < 0 || (int)(a1 + a3) > 255 || (result = a2 + a4, a2 + a4 > 255) )
  {
    memset(g_VoxelRenderBuffer, 0, 0x10000u);
    return 0;
  }
    else if ( a2 <= result )
  {
    v5 = &g_VoxelRenderBuffer[256 * a2 + a1];
    v6 = a4 + 1;
    do
    {
    result = 0;
    memset(v5, 0, 4 * (a3 >> 2));
    v7 = &v5[4 * (a3 >> 2)];
    v5 += 256;
    --v6;
    memset(v7, 0, a3 & 3);
    }
    while ( v6 );
  }
    return result;
}
}
} // namespace gamemd

// 0x754900
namespace gamemd {
Iostream_init * E4Recv_754900::__0Iostream_init_QAE_XZ_8()
{
{
    return this;
}
}
} // namespace gamemd

// 0x754910
namespace gamemd {
void sub_754910()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B43EF8 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x754940
namespace gamemd {
void sub_754940()
{
{
    DataGlobal_B45180 = DataGlobal_B43EF8 / 60.0;
}
}
} // namespace gamemd

// 0x754960
namespace gamemd {
void sub_754960()
{
{
    DataGlobal_B450A0 = 1.0 / DataGlobal_B45180;
}
}
} // namespace gamemd

// 0x754980
namespace gamemd {
void sub_754980()
{
{
    DataGlobal_B44498 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x7549A0
namespace gamemd {
void sub_7549A0()
{
{
    DataGlobal_B43F00 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x7549C0
namespace gamemd {
void sub_7549C0()
{
{
    DataGlobal_B43ED8 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x7549E0
namespace gamemd {
long long sub_7549E0()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B43ED8 - DataGlobal_B43F00);
    result = Math::RoundToInt(v0 * DataGlobal_B43EF8 * 0.5);
    DataGlobal_B45578 = result;
    return result;
}
}
} // namespace gamemd

// 0x754A20
namespace gamemd {
void sub_754A20()
{
{
    DataGlobal_B43F08 = Math::ArcTan((double)DataGlobal_B45578 * 0.00390625);
}
}
} // namespace gamemd

// 0x754A50
namespace gamemd {
void sub_754A50()
{
{
    DataGlobal_B44310 = Math::ArcTan((double)(2 * DataGlobal_B45578) / DataGlobal_B43EF8);
}
}
} // namespace gamemd

// 0x754A80
namespace gamemd {
long long sub_754A80()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B45578) + 0.5);
    DataGlobal_B45178 = result;
    return result;
}
}
} // namespace gamemd

// 0x754AB0
namespace gamemd {
int sub_754AB0()
{
{
    DataGlobal_B43EF0 = 0;
    DataGlobal_B43EF2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x754AC0
namespace gamemd {
int sub_754AC0()
{
{
    DataGlobal_B44300 = 0;
    DataGlobal_B44304 = 0;
    DataGlobal_B44308 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x754AE0
namespace gamemd {
int sub_754AE0()
{
{
    DataGlobal_B450B0 = 0;
    DataGlobal_B450A8 = 128;
    DataGlobal_B450AC = 128;
    return 128;
}
}
} // namespace gamemd

// 0x754B00
namespace gamemd {
int sub_754B00()
{
{
    DataGlobal_B43EE0 = 0;
    DataGlobal_B43EE4 = 0;
    DataGlobal_B43EE8 = 0;
    DataGlobal_B43EEC = 0;
    return 0;
}
}
} // namespace gamemd

// 0x754B40
namespace gamemd {
unsigned int * sub_754B40()
{
{
    int *v0;
    int v1;
    int *result;
    v0 = &DataGlobal_B44348;
    v1 = 21;
    do
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216);
    v0 += 4;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x754B70
namespace gamemd {
unsigned int * sub_754B70()
{
{
    int *v0;
    int v1;
    int *result;
    v0 = &DataGlobal_B43188;
    v1 = 21;
    do
  {
    result = Int4::Set(v0, 0, 0, 0, 1065353216);
    v0 += 4;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x7559B0
namespace gamemd {
char * AudioData_Copy(char * a1, int a2)
{
{
    qmemcpy(a1, (char *)&DataGlobal_B45188 + 48 * a2, 0x30u);
    return a1;
}
}
} // namespace gamemd

// 0x7559D0
namespace gamemd {
float * sub_7559D0(float * a1, float * a2, void * a3, double a4)
{
{
    float *result;
    float *v5;
    float v6;
    int v7[4];
    float v8[12];
    result = a2;
    if ( a1 == a2 )
  {
    qmemcpy(a3, (char *)&DataGlobal_B43F10 + 48 * (int)a2, 0x30u);
  }
    else
  {
    v6 = a4;
    v5 = (float *)Math::QuaternionSlerp(v7, &DataGlobal_B44348[4 * (int)a1], &DataGlobal_B44348[4 * (int)a2], v6);
    result = ToQuaternionMatrix(v8, v5);
    qmemcpy(a3, result, 0x30u);
  }
    return result;
}
}
} // namespace gamemd

// 0x755A40
namespace gamemd {
void * VoxelAnim_InterpolatePose(void * a1, int a2, int a3, double a4)
{
{
    int v5;
    const void *v6;
    float v8;
    char v9[48];
    if ( a2 == a3 )
  {
    qmemcpy(a1, (char *)&DataGlobal_B45188 + 48 * a3, 0x30u);
    return a1;
  }
    else
  {
    v8 = a4;
    v5 = Math::QuaternionSlerp((int)&DataGlobal_B43188 + 16 * a3, v8);
    v6 = (const void *)ToQuaternionMatrix(v9, v5);
    qmemcpy(a1, v6, 0x30u);
    return a1;
  }
}
}
} // namespace gamemd

// 0x755AC0
namespace gamemd {
int sub_755AC0(int a1)
{
{
    return DataGlobal_8467FC[a1];
}
}
} // namespace gamemd

// 0x755AD0
namespace gamemd {
char sub_755AD0(unsigned int * a1, int * a2)
{
{
    double v2;
    unsigned int v4;
    v4 = *a1;
    v2 = Math::CalcAngle((double)(int)*((int*)(a1) + 1) - (double)*((int*)(a2) + 1), (double)*a2 - (double)(int)*a1);
    LOWORD(v4) = Math::RoundToInt((v2 - 1.570796326794897) * -10430.06004058427);
    return 32 - (((v4 >> 7) + 1) >> 1);
}
}
} // namespace gamemd

// 0x755BF0
namespace gamemd {
float * sub_755BF0(float * a1, int a2, int a3)
{
{
    double v4;
    int v5;
    double v6;
    float v7;
    float v8;
    float v9;
    v4 = DataGlobal_B432D8[3 * a2] * 1.5;
    v5 = 12 * a2 + 11809496;
    v7 = v4;
    v8 = *(float *)(v5 + 4) * 1.5;
    v6 = *(float *)(v5 + 8) * 1.5;
    *a1 = v7;
    v9 = v6;
    *((int*)(a1) + 1) = v8;
    *((int*)(a1) + 2) = v9;
    return a1;
}
}
} // namespace gamemd

// 0x755C50
namespace gamemd {
int j_TechnoClass_ClearArrays()
{
    int j_TechnoClass_ClearArrays()
{
    return TechnoClass::ClearArrays();
}
}
} // namespace gamemd

// 0x755C90
namespace gamemd {
int sub_755C90()
{
{
    DataGlobal_B45580 = 0;
    DataGlobal_B45584 = 0;
    DataGlobal_B45588 = 0;
    DataGlobal_B4558C = 0;
    return 0;
}
}
} // namespace gamemd

// 0x755CB0
namespace gamemd {
unsigned int * E4Recv_755CB0::sub_755CB0()
{
{
    *(char *)this = 0;
    this->M4 = 0;
    this->M8 = 0;
    this->M12 = 0;
    this->M16 = 0;
    this->M20 = 0;
    this->M24 = 0;
    return this;
}
}
} // namespace gamemd

// 0x7564A0
namespace gamemd {
int E4Recv_7564A0::sub_7564A0(int a2)
{
{
    return this->M16 + 12 * a2;
}
}
} // namespace gamemd

// 0x7564E0
namespace gamemd {
float * E4Recv_7564E0::sub_7564E0(float * a2, int a3, int a4)
{
{
    int v4;
    int v5;
    int v6;
    double v7;
    float *v8;
    double v9;
    float v11;
    float v12;
    float v13;
    float v14;
    float v15;
    v4 = this->M16;
    v5 = this->M20;
    v6 = 41 * (a4 + *(int *)(v4 + 12 * a3));
    v7 = *(float *)(v5 + 4 * v6 + 112) + *(float *)(v5 + 4 * v6 + 88);
    v8 = (float *)(v5 + 164 * (a4 + *(int *)(v4 + 12 * a3)));
    v14 = v8[29] + v8[23];
    v9 = v8[30] + v8[24];
    v15 = v9;
    v11 = v7 * 0.5;
    *a2 = v11;
    v12 = v14 * 0.5;
    *((int*)(a2) + 1) = v12;
    v13 = v15 * 0.5;
    *((int*)(a2) + 2) = v13;
    return a2;
}
}
} // namespace gamemd

// 0x756570
namespace gamemd {
int E4Recv_756570::sub_756570()
{
{
    return 12 *(void**)this->M4 + 164 *(void**)this->M8 + this->M12 + 28;
}
}
} // namespace gamemd

// 0x7589F0
namespace gamemd {
BOOL E4Recv_7589F0::sub_7589F0(int a2)
{
{
    int v4;
    (*(void (__thiscall **)(int, int))(*(int *)(a2) + 28))(a2, 1);
    v4 = (*(int (__thiscall **)(int, int, int))(*(int *)(a2) + 36))(a2, this->M16, 768) != 768;
    (*(void (__thiscall **)(int))(*(int *)(a2) + 52))(a2);
    return v4;
}
}
} // namespace gamemd

// 0x758E10
namespace gamemd {
char E4Recv_758E10::sub_758E10(float a2, float a3, float a4)
{
{
    unsigned char *v4;
    char v5;
    int i;
    double v7;
    double v8;
    double v9;
    float v11;
    v4 = (unsigned char *)this->M16;
    v5 = 0;
    v11 = 100000.0;
    for ( i = 0; i < 256; ++i )
  {
    v7 = a3 - (double)v4[1];
    v8 = a4 - (double)v4[2];
    v9 = v8 * v8 + v7 * v7 + (a2 - (double)*v4) * (a2 - (double)*v4);
    if ( v9 < v11 )
    {
    v11 = v9;
    v5 = i;
    }
    v4 += 3;
  }
    return v5;
}
}
} // namespace gamemd

// 0x758F70
namespace gamemd {
int sub_758F70()
{
{
    DataGlobal_B45B18 = 0;
    DataGlobal_B45B1C = 0;
    DataGlobal_B45B20 = 0;
    DataGlobal_B45B24 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x758F90
namespace gamemd {
void sub_758F90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B45B30 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x758FC0
namespace gamemd {
void sub_758FC0()
{
{
    DataGlobal_B45B98 = DataGlobal_B45B30 / 60.0;
}
}
} // namespace gamemd

// 0x758FE0
namespace gamemd {
void sub_758FE0()
{
{
    DataGlobal_B45B80 = 1.0 / DataGlobal_B45B98;
}
}
} // namespace gamemd

// 0x759000
namespace gamemd {
void sub_759000()
{
{
    DataGlobal_B45B78 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x759020
namespace gamemd {
void sub_759020()
{
{
    DataGlobal_B45B38 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x759040
namespace gamemd {
void sub_759040()
{
{
    DataGlobal_B45B10 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x759060
namespace gamemd {
long long sub_759060()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B45B10 - DataGlobal_B45B38);
    result = Math::RoundToInt(v0 * DataGlobal_B45B30 * 0.5);
    DataGlobal_B45BA0 = result;
    return result;
}
}
} // namespace gamemd

// 0x7590A0
namespace gamemd {
void sub_7590A0()
{
{
    DataGlobal_B45B40 = Math::ArcTan((double)DataGlobal_B45BA0 * 0.00390625);
}
}
} // namespace gamemd

// 0x7590D0
namespace gamemd {
void sub_7590D0()
{
{
    DataGlobal_B45B70 = Math::ArcTan((double)(2 * DataGlobal_B45BA0) / DataGlobal_B45B30);
}
}
} // namespace gamemd

// 0x759100
namespace gamemd {
long long sub_759100()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B45BA0) + 0.5);
    DataGlobal_B45B94 = result;
    return result;
}
}
} // namespace gamemd

// 0x759130
namespace gamemd {
int sub_759130()
{
{
    DataGlobal_B45B28 = 0;
    DataGlobal_B45B2A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x759140
namespace gamemd {
int sub_759140()
{
{
    DataGlobal_B45B48 = 0;
    DataGlobal_B45B4C = 0;
    DataGlobal_B45B50 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x759160
namespace gamemd {
int sub_759160()
{
{
    DataGlobal_B45B90 = 0;
    DataGlobal_B45B88 = 128;
    DataGlobal_B45B8C = 128;
    return 128;
}
}
} // namespace gamemd

// 0x759200
namespace gamemd {
char sub_759200()
{
{
    MSG Msg;
    ++DataGlobal_AA0430;
    if ( !GameLoopMessagePump(&Msg, 0, 0, 0, 0) )
    return 1;
    if ( IsMessageDialog(&Msg, 0, 0, 0) )
  {
    TranslateMessage(&Msg);
    DispatchMessageA(&Msg);
    return 1;
  }
    return 0;
}
}
} // namespace gamemd

// 0x759760
namespace gamemd {
unsigned char * E4Recv_759760::sub_759760(const void * a2)
{
{
    qmemcpy(this + 516, a2, 0x300u);
    this->M1320 = 1;
    return this;
}
}
} // namespace gamemd

// 0x759BC0
namespace gamemd {
unsigned int E4Recv_759BC0::sub_759BC0(signed int a2)
{
{
    signed int v2;
    unsigned int result;
    v2 = a2;
    if ( a2 == -1 )
    v2 = this->M1288 - 1;
    if ( this->M1284 != v2 )
  {
    if ( ProcessAudioStreamBuffer(this->M512, v2, 0) != -6 )
    this->M1284 = v2;
    this->M1284 = v2;
  }
    MovieClass::RenderLoop((char *)this, v2, 0);
    result = this->M1284;
    if ( result >= this->M1288 )
    this->M1284 = 0;
    return result;
}
}
} // namespace gamemd

// 0x75A100
namespace gamemd {
BOOL sub_75A100(int a1, int a2, unsigned int * a3, int a4)
{
{
    return VoxelRenderer::InitializeBuffers(*(int *)(a1 + 172), a2, a3, a4);
}
}
} // namespace gamemd

// 0x75A2B0
namespace gamemd {
BOOL sub_75A2B0(int a1, int a2, int * a3, int a4)
{
{
    return sub_75A120(*(int *)(a1 + 172), a2, a3, a4);
}
}
} // namespace gamemd

// 0x75A400
namespace gamemd {
int ReturnNull2()
{
return 0;
}
} // namespace gamemd

// 0x75A410
namespace gamemd {
void nullsub_257()
{
  ;
}
} // namespace gamemd

// 0x75A420
namespace gamemd {
void nullsub_258()
{
  ;
}
} // namespace gamemd

// 0x75A810
namespace gamemd {
bool BitArray_Test(int a1)
{
{
    return ((unsigned char)(1 << (a1 & 7)) & (unsigned char)DataGlobal_B45BA8[a1 >> 3]) != 0;
}
}
} // namespace gamemd

// 0x75A880
namespace gamemd {
int sub_75A880()
{
{
    DataGlobal_B45BB8 = 0;
    DataGlobal_B45BBC = 0;
    DataGlobal_B45BC0 = 0;
    DataGlobal_B45BC4 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75A8A0
namespace gamemd {
void sub_75A8A0()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B45BD0 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x75A8D0
namespace gamemd {
void sub_75A8D0()
{
{
    DataGlobal_B45C20 = DataGlobal_B45BD0 / 60.0;
}
}
} // namespace gamemd

// 0x75A8F0
namespace gamemd {
void sub_75A8F0()
{
{
    DataGlobal_B45C08 = 1.0 / DataGlobal_B45C20;
}
}
} // namespace gamemd

// 0x75A910
namespace gamemd {
void sub_75A910()
{
{
    DataGlobal_B45C00 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x75A930
namespace gamemd {
void sub_75A930()
{
{
    DataGlobal_B45BD8 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x75A950
namespace gamemd {
void sub_75A950()
{
{
    DataGlobal_B45BB0 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x75A970
namespace gamemd {
long long sub_75A970()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B45BB0 - DataGlobal_B45BD8);
    result = Math::RoundToInt(v0 * DataGlobal_B45BD0 * 0.5);
    DataGlobal_B45C28 = result;
    return result;
}
}
} // namespace gamemd

// 0x75A9B0
namespace gamemd {
void sub_75A9B0()
{
{
    DataGlobal_B45BE0 = Math::ArcTan((double)DataGlobal_B45C28 * 0.00390625);
}
}
} // namespace gamemd

// 0x75A9E0
namespace gamemd {
void sub_75A9E0()
{
{
    DataGlobal_B45BF8 = Math::ArcTan((double)(2 * DataGlobal_B45C28) / DataGlobal_B45BD0);
}
}
} // namespace gamemd

// 0x75AA10
namespace gamemd {
long long sub_75AA10()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B45C28) + 0.5);
    DataGlobal_B45C1C = result;
    return result;
}
}
} // namespace gamemd

// 0x75AA40
namespace gamemd {
int sub_75AA40()
{
{
    DataGlobal_B45BC8 = 0;
    DataGlobal_B45BCA = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75AA50
namespace gamemd {
int sub_75AA50()
{
{
    g_AsyncMovieState = 0;
    g_MovieFrameState1 = 0;
    g_MovieFrameState2 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75AA70
namespace gamemd {
int sub_75AA70()
{
{
    DataGlobal_B45C18 = 0;
    DataGlobal_B45C10 = 128;
    DataGlobal_B45C14 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x75CC90
namespace gamemd {
void sub_75CC90()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B45C40 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x75CCC0
namespace gamemd {
void sub_75CCC0()
{
{
    DataGlobal_B45C90 = DataGlobal_B45C40 / 60.0;
}
}
} // namespace gamemd

// 0x75CCE0
namespace gamemd {
void sub_75CCE0()
{
{
    DataGlobal_B45C78 = 1.0 / DataGlobal_B45C90;
}
}
} // namespace gamemd

// 0x75CD00
namespace gamemd {
void sub_75CD00()
{
{
    DataGlobal_B45C70 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x75CD20
namespace gamemd {
void sub_75CD20()
{
{
    DataGlobal_B45C48 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x75CD40
namespace gamemd {
void sub_75CD40()
{
{
    DataGlobal_B45C30 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x75CD60
namespace gamemd {
long long sub_75CD60()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B45C30 - DataGlobal_B45C48);
    result = Math::RoundToInt(v0 * DataGlobal_B45C40 * 0.5);
    DataGlobal_B45C98 = result;
    return result;
}
}
} // namespace gamemd

// 0x75CDA0
namespace gamemd {
void sub_75CDA0()
{
{
    DataGlobal_B45C50 = Math::ArcTan((double)DataGlobal_B45C98 * 0.00390625);
}
}
} // namespace gamemd

// 0x75CDD0
namespace gamemd {
void sub_75CDD0()
{
{
    DataGlobal_B45C68 = Math::ArcTan((double)(2 * DataGlobal_B45C98) / DataGlobal_B45C40);
}
}
} // namespace gamemd

// 0x75CE00
namespace gamemd {
long long sub_75CE00()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B45C98) + 0.5);
    DataGlobal_B45C8C = result;
    return result;
}
}
} // namespace gamemd

// 0x75CE30
namespace gamemd {
int sub_75CE30()
{
{
    DataGlobal_B45C38 = 0;
    DataGlobal_B45C3A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75CE40
namespace gamemd {
int sub_75CE40()
{
{
    DataGlobal_B45C58 = 0;
    DataGlobal_B45C5C = 0;
    DataGlobal_B45C60 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75CE60
namespace gamemd {
int sub_75CE60()
{
{
    DataGlobal_B45C88 = 0;
    DataGlobal_B45C80 = 128;
    DataGlobal_B45C84 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x75E080
namespace gamemd {
int WarheadTypeClass__vt_03_(int a1, unsigned int * a2)
{
  if ( !a2 )
    return -2147467261;
  *a2 = -1463464540;
  a2[1] = 298979195;
  a2[2] = 1610642049;
  a2[3] = -1252326136;
  return 0;
}
} // namespace gamemd

// 0x75E740
namespace gamemd {
void sub_75E740()
{
{
    long double v0;
    v0 = pow(256.0, 2.0);
    DataGlobal_B45D80 = Math::Sqrt(v0 + v0);
}
}
} // namespace gamemd

// 0x75E770
namespace gamemd {
void sub_75E770()
{
{
    DataGlobal_B725C0 = DataGlobal_B45D80 / 60.0;
}
}
} // namespace gamemd

// 0x75E790
namespace gamemd {
void sub_75E790()
{
{
    DataGlobal_B46688 = 1.0 / DataGlobal_B725C0;
}
}
} // namespace gamemd

// 0x75E7B0
namespace gamemd {
void sub_75E7B0()
{
{
    DataGlobal_B46680 = 0.0174532925199433 * 45.0;
}
}
} // namespace gamemd

// 0x75E7D0
namespace gamemd {
void sub_75E7D0()
{
{
    DataGlobal_B45D90 = 0.0174532925199433 * 60.0;
}
}
} // namespace gamemd

// 0x75E7F0
namespace gamemd {
void sub_75E7F0()
{
{
    DataGlobal_B45D60 = 0.0174532925199433 * 90.0;
}
}
} // namespace gamemd

// 0x75E810
namespace gamemd {
long long sub_75E810()
{
{
    double v0;
    __int64 result;
    v0 = Math::Sin(DataGlobal_B45D60 - DataGlobal_B45D90);
    result = Math::RoundToInt(v0 * DataGlobal_B45D80 * 0.5);
    DataGlobal_B725C8 = result;
    return result;
}
}
} // namespace gamemd

// 0x75E850
namespace gamemd {
void sub_75E850()
{
{
    DataGlobal_B45D98 = Math::ArcTan((double)DataGlobal_B725C8 * 0.00390625);
}
}
} // namespace gamemd

// 0x75E880
namespace gamemd {
void sub_75E880()
{
{
    DataGlobal_B46640 = Math::ArcTan((double)(2 * DataGlobal_B725C8) / DataGlobal_B45D80);
}
}
} // namespace gamemd

// 0x75E8B0
namespace gamemd {
long long sub_75E8B0()
{
{
    __int64 result;
    result = Math::RoundToInt((double)(4 * DataGlobal_B725C8) + 0.5);
    DataGlobal_B725BC = result;
    return result;
}
}
} // namespace gamemd

// 0x75E8E0
namespace gamemd {
int sub_75E8E0()
{
{
    DataGlobal_B45D78 = 0;
    DataGlobal_B45D7A = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75E8F0
namespace gamemd {
int sub_75E8F0()
{
{
    DataGlobal_B46248 = 0;
    DataGlobal_B4624C = 0;
    DataGlobal_B46250 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75E910
namespace gamemd {
int sub_75E910()
{
{
    DataGlobal_B46698 = 0;
    DataGlobal_B46690 = 128;
    DataGlobal_B46694 = 128;
    return 128;
}
}
} // namespace gamemd

// 0x75E930
namespace gamemd {
int sub_75E930()
{
{
    DataGlobal_B45D68 = 0;
    DataGlobal_B45D6C = 0;
    DataGlobal_B45D70 = 0;
    DataGlobal_B45D74 = 0;
    return 0;
}
}
} // namespace gamemd

// 0x75EF30
namespace gamemd {
int sub_75EF30(unsigned short * a1, int a2)
{
{
    int v2;
    int v3;
    int result;
    v2 = (unsigned char)((unsigned char)(*a1 >> g_BitShift_Red) << g_BitShift_Green_0) + (char)(a2 >> 2);
    v3 = (unsigned char)((unsigned char)(*a1 >> g_BitShift_Blue) << g_BitMask_Red) + ((96 * a2) >> 8);
    if ( v3 > 255 )
    v3 = 255;
    if ( v2 > 255 )
    v2 = 255;
    result = v3 >> g_BitMask_Red << g_BitShift_Blue;
    *a1 = result | ((int)(unsigned char)((unsigned char)(*a1 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
    | (v2 >> g_BitShift_Green_0 << g_BitShift_Red);
    return result;
}
}
} // namespace gamemd
