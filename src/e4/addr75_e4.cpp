// E4 materialized pending bodies (auto-generated from full_export v3)
#define GAMEMD_E4_VECTOR_TREE_TRUTH 1  // G57a2: G42.55 tree-truth bridge pulls core/vector.hpp templates
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/VoxelSection_e4.hpp"
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
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AudioMixer_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/UnitClass_e4.hpp"
#include "e4/classes/VocClass_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/E4Recv_74BBF0_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/E4Recv_764B90_e4.hpp"
#include "e4/classes/HashTable_flat_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/BufferIOFile_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/E4Recv_74BCA0_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/E4Recv_771890_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/DialogClass_e4.hpp"
#include "e4/classes/SkirmishDialog_e4.hpp"
#include "e4/classes/E4Recv_765000_e4.hpp"
#include "e4/classes/ScoreScreen_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/E4Recv_7741C0_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/E4Recv_7AF3D0_e4.hpp"
#include "e4/classes/ProgressTimer_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"
#include "e4/classes/TriggerClass_e4.hpp"
#include "e4/classes/AudioPool_e4.hpp"
#include "e4/classes/AudioSource_e4.hpp"
#include "e4/classes/WDTClass_e4.hpp"
#include "e4/classes/AudioController_e4.hpp"
#include "e4/classes/DListNode_e4.hpp"
#include "classes/AudioMixer_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/INIClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/Surface_e4.hpp"  // G42.57w9 method-carrier supply
#include "classes/ThemeClass_e4.hpp"  // G42.57w9 method-carrier supply
#include "e4/minimal_carriers.hpp"  // G42.42q minimal carriers
#include "e4/classes/MovieClass_e4.hpp"  // w18j2 C3861 MovieClass:: supply
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { BOOL sub_75A120(int int a2, int *a3, int a4); }  // w18j2 raw 0x0075A120
// [w18j2] C3861 supply (raw-evidenced)
namespace gamemd { int RenderLoop(int p0, int p1, int p2); }  // x4:signals@0x432e40
// [w14e3] vocab extender (raw call-form evidence)
namespace gamemd { int sub_405130(int p0); }  // x4:signals@0x405130
namespace gamemd { int sub_405160(int p0); }  // x4:signals@0x405160
namespace gamemd { int sub_405140(int p0); }  // x4:signals@0x405140
namespace gamemd { int sub_4052E0(int p0); }  // x4:signals@0x4052e0
namespace gamemd { int GetStringByIndex(uint8_t* p0, int p1); }  // x4:signals@0x526cc0
namespace gamemd { int sub_4053E0(int p0); }  // x4:signals@0x4053e0
namespace gamemd { int sub_405430(int p0); }  // x4:signals@0x405430
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int InitializeTileAudioOcclusion(int p0, float* p1);  // x4:signals@0x756860
} // namespace gamemd

// 0x750920
namespace gamemd {  // G42.18 ns repair
AbstractClass * * VocClass_Play(int a1, int a2, float a3, int a4)
{
  AudioPool *v5; // ebx
  VocClass *v6; // esi
  ObjectClass *v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // edi

  if ( !VocClass_VoicesEnabled ) /*0x75092c*/
    return 0; /*0x75092e*/
  v5 = 0; /*0x750935*/
  if ( a1 >= 0 && a1 < g_VocPlayState ) /*0x750943*/
    v5 = (AudioPool *)**((unsigned int **)g_VocAudioConfig + a1); /*0x75094d*/
  v6 = 0; /*0x750953*/
  if ( a4 ) /*0x750957*/
  {
    v7 = (ObjectClass *)AudioSource::Get(a4); /*0x75095b*/
    v6 = (VocClass *)v7; /*0x750960*/
    if ( v7 ) /*0x750964*/
    {
      if ( (AudioPool *)sub_406310(v7) != v5 ) /*0x75096f*/
      {
        (v6)->Release(); /*0x750973*/
        v6 = 0; /*0x750978*/
      }
    }
  }
  if ( v5 ) /*0x75097d*/
  {
    (*((unsigned short *)&(v8))) = Math::RoundToInt(a3 * 16384.0); /*0x750989*/
    v9 = v8; /*0x75098e*/
    if ( v8 >= 0x4000 ) /*0x750996*/
      v9 = 0x4000; /*0x750998*/
    if ( v6 || (v6 = (VocClass *)(v5)->ProcessQueue()) != 0 ) /*0x7509ac*/
    {
      AudioMixer::PlayBuffer(v6, v9); /*0x7509b2*/
      AudioMixer::RequestOrEndBuffer((int)v6, a2); /*0x7509bd*/
    }
  }
  if ( a4 ) /*0x7509c5*/
    SetAudioSource((int)a4, v6, (int)v5); /*0x7509cc*/
  return (gamemd::AbstractClass **)(v6); /*0x750931*/
}
}  // G42.18 ns repair
// 0x750AC0
namespace gamemd {  // G42.18 ns repair
double ComputeAudioPosition(AudioMixer * aP0, unsigned int * a1, int a3)
{
  ObjectClass *v4; // edi
  int16_t v6; // ax
  char v7; // bl
  int v8; // ecx
  int v9; // eax
  double v11; // st7
  int v12; // eax
  int v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  double v17; // st7
  int v18; // eax
  float v19; // [esp+10h] [ebp-24h]
  float v20; // [esp+14h] [ebp-20h]
  float v21; // [esp+18h] [ebp-1Ch]
  float v22; // [esp+1Ch] [ebp-18h]
  float v23; // [esp+20h] [ebp-14h]
  float v24; // [esp+20h] [ebp-14h]
  float v25; // [esp+24h] [ebp-10h]
  int v26[2]; // [esp+2Ch] [ebp-8h] BYREF

  v4 = (ObjectClass *)a3; /*0x750ac9*/
  *a1 = 0; /*0x750acd*/
  v21 = 0.0; /*0x750ade*/
  v23 = (double)*(int *)g_Map_VisibleRectOffset * 0.5; /*0x750aec*/
  v25 = (double)*(int *)&g_DSurface_WindowOffset * 0.5; /*0x750afc*/
  v22 = v23 + v23; /*0x750b06*/
  a3 = 60 * sub_405130(v4); /*0x750b1a*/
  v20 = (float)a3; /*0x750b22*/
  v6 = sub_405160(v4); /*0x750b26*/
  v7 = v6; /*0x750b2b*/
  if ( (v6 & 0x800) == 0 ) /*0x750b30*/
    goto LABEL_7; /*0x750b30*/
  v8 = *aP0 / 256; /*0x750b4b*/
  v9 = aP0[1] / 256; /*0x750b4e*/
  (*((unsigned short *)&(a3))) = v8; /*0x750b58*/
  (*(((unsigned short *)&(a3)) + 1)) = v9; /*0x750b5d*/
  if ( (unsigned short)v8 == *(unsigned short *)&stru_B1D290.needsRedraw && (unsigned short)v9 == *(unsigned short *)&stru_B1D290.inOpenToppedTransport ) /*0x750b73*/
    return 0.0; /*0x750b82*/
  if ( (*((unsigned char *)((CellCoord *)((CellCoord *)&DataGlobal_87F7E8))->To_CellObj((int16_t *)&a3) + 300) & 0x18) == 0 ) /*0x750b9b*/
    return 0.0; /*0x750b9d*/
  LABEL_7:
  ((Coord *)((Coord *)g_TacticalClass_Instance))->To_Screen(aP0, v26); /*0x750bb9*/
  v11 = (double)v26[0] - v23; /*0x750bc2*/
  v19 = v11; /*0x750bc6*/
  (*((unsigned short *)&(v12))) = Math::RoundToInt(v11); /*0x750bca*/
  *(float *)&a3 = (float)(int)abs32(v12); /*0x750bdc*/
  (*((unsigned short *)&(v13))) = Math::RoundToInt((double)v26[1] - v25); /*0x750be8*/
  v14 = (double)(int)abs32(v13); /*0x750bf6*/
  if ( (v7 & 0x40) == 0 ) /*0x750bfd*/
  {
    v15 = *(float *)&a3 - v23; /*0x750c03*/
    *(float *)&a3 = v15; /*0x750c07*/
    v14 = v14 - v25; /*0x750c11*/
    if ( v15 < 0.0 ) /*0x750c1e*/
      *(float *)&a3 = 0.0; /*0x750c20*/
    if ( v14 < 0.0 ) /*0x750c33*/
      v14 = 0.0; /*0x750c37*/
  }
  v24 = v14 + v14; /*0x750c3f*/
  if ( *(float *)&a3 < (double)v20 && v24 < (double)v20 && v20 > 0.0 ) /*0x750c70*/
  {
    if ( *(float *)&a3 <= (double)v24 ) /*0x750c7f*/
      v16 = v24; /*0x750c87*/
    else
      v16 = *(float *)&a3; /*0x750c81*/
    v21 = (v20 - v16) / v20; /*0x750c95*/
  }
  if ( (v7 & 0x10) != 0 && sub_405140((float *)v4) > v21 ) /*0x750cb0*/
    v21 = sub_405140((float *)v4); /*0x750cb9*/
  if ( v21 < 0.05 ) /*0x750ccc*/
    return 0.0; /*0x750cce*/
  v17 = -v22; /*0x750ce2*/
  if ( v19 >= v17 ) /*0x750cef*/
  {
    if ( v19 > (double)v22 ) /*0x750d06*/
      v19 = v22; /*0x750d0c*/
  }
  else
  {
    v19 = v17; /*0x750cf1*/
  }
  (*((unsigned short *)&(v18))) = Math::RoundToInt(v19 * 8192.0 / v22 + 8192.0); /*0x750d24*/
  *a1 = v18; /*0x750d2e*/
  return v21; /*0x750b7b*/
}
}  // G42.18 ns repair
// 0x750D40
namespace gamemd {
VocClass * StartAudioController(AudioMixer * ecx0, AudioSource *a2)
{
  VocClass *result; // eax
  VocClass *v5; // esi
  int v6; // eax
  AudioPool *v7; // edi
  double v8; // st7
  int *v9; // eax
  unsigned int v10; // eax
  float v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h] BYREF

  result = 0; /*0x750d43*/
  if ( !a2 ) /*0x750d4d*/
    return result; /*0x750d4d*/
  v5 = (VocClass *)AudioSource::Get(a2); /*0x750d5e*/
  v6 = ((VocClass *)a2)->Check(); /*0x750d60*/
  v7 = (AudioPool *)v6; /*0x750d65*/
  if ( !v6 ) /*0x750d69*/
    goto LABEL_15; /*0x750d69*/
  v8 = ComputeAudioPosition(ecx0, &v12, v6); /*0x750d76*/
  if ( v8 <= 0.0 ) /*0x750d8a*/
  {
    if ( v5 ) /*0x750e01*/
    {
      (v5)->Release(); /*0x750e05*/
      v5 = 0; /*0x750e0a*/
    }
    goto LABEL_15; /*0x750e0a*/
  }
  if ( !v5 ) /*0x750d8e*/
  {
    if ( ((AudioMixer *)v7)->SetVolume() && VocClass_VoicesEnabled ) /*0x750da2*/
    {
      v9 = (v7)->ProcessQueue(); /*0x750da6*/
      v5 = (VocClass *)v9; /*0x750dab*/
      if ( !v9 ) /*0x750daf*/
        goto LABEL_15; /*0x750daf*/
      sub_4052E0((ObjectClass *)v9); /*0x750db3*/
    }
    if ( v5 ) /*0x750dba*/
  LABEL_15:
    SetAudioSource((int)a2, v5, (int)v7); /*0x750e0c*/
    return v5; /*0x750e16*/
  }
  v11 = v8; /*0x750dbc*/
  (*((unsigned short *)&(v10))) = Math::RoundToInt(v11 * 16384.0); /*0x750dc6*/
  if ( v10 >= 0x4000 ) /*0x750dd0*/
    v10 = 0x4000; /*0x750dd2*/
  AudioMixer::PlayBuffer(v5, v10); /*0x750ddb*/
  AudioMixer::RequestOrEndBuffer((int)v5, v12); /*0x750de6*/
  SetAudioSource((int)a2, v5, (int)v7); /*0x750df0*/
  return v5; /*0x750df9*/
}
}
// 0x751DD0
namespace gamemd {
char sub_751DD0(LPCSTR lpRootPathName, UINT * a2)
{
  DWORD v5; // eax
  bool v6; // zf
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
  v6 = NumberOfFreeClusters == 0; /*0x751e36*/
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
// 0x752480
namespace gamemd {
int ThemeManager_Update(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ebp
  int *v5; // ebx
  int i; // esi
  int *v7; // eax

  result = (int)g_InfantryDrawState; /*0x752480*/
  v4 = a2; /*0x752487*/
  if ( g_InfantryDrawState ) /*0x75248b*/
  {
    if ( a1 >= 0 && a1 < g_InfantrySelectState ) /*0x75249f*/
    {
      result = dword_B1D3D8; /*0x7524a5*/
      if ( !dword_B1D3D8 ) /*0x7524ac*/
      {
        v5 = (int *)*((unsigned int *)g_InfantryRenderPool + a1); /*0x7524b7*/
        result = dword_B1D4C4; /*0x7524ba*/
        if ( v5 != (int *)dword_B1D4C4 ) /*0x7524c1*/
        {
          if ( a2 == -1 ) /*0x7524ca*/
            v4 = v5->u32_4C; /*0x7524cc*/
          if ( a3 == -1 ) /*0x7524d4*/
            a3 = v5->u32_48; /*0x7524d9*/
          if ( dword_B1D4C4 && v4 == 2 ) /*0x7524e4*/
          {
            for ( i = ((AudioQueue *)(&stru_B1D3C8))->GetNext(); i; i = ((AudioQueue *)(&stru_B1D3C8))->GetNext() ) /*0x7524f5*/
            {
              LinkedList::Init((unsigned int **)i); /*0x7524f9*/
              *(unsigned int *)(*(unsigned int *)(i + 12) + 80) = 2; /*0x752502*/
              operator delete((void *)((void *)i)); /*0x752509*/
            }
            if ( dword_B1D4C4 ) /*0x752529*/
            {
              *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x75252b*/
              dword_B1D4C4 = 0; /*0x752532*/
            }
            if ( g_InfantryDrawState ) /*0x752544*/
              Audio::Release(g_InfantryDrawState); /*0x752546*/
            ThemeClass::ClearQueues(); /*0x75254b*/
            qword_B1D4D0 = 0; /*0x752552*/
          }
          v7 = (int *)((v5)->FindByData()); /*0x75255e*/
          if ( !v7 || v7[6] != v4 ) /*0x75256a*/
            Audio_Load((int)v5, v4, a3); /*0x752575*/
          UpdateThemes(); /*0x75257a*/
        }
      }
    }
  }
  return result; /*0x75257f*/
}
}
// 0x752760
namespace gamemd {
void ThemeClass_Update()
{
  uint64_t v0; // rdi
  uint64_t v1; // rax
  int v2; // eax
  unsigned int *v3; // esi
  int v4; // eax
  char *v5; // edi
  int v6; // eax
  int v7; // ebp
  const char *v8; // edi
  unsigned char v9[16]; // [esp+0h] [ebp-118h] BYREF
  int v10; // [esp+10h] [ebp-108h]
  int v11; // [esp+14h] [ebp-104h]
  char v12[5]; // [esp+18h] [ebp-100h] BYREF

  if ( byte_A8ED64 ) /*0x752773*/
    return; /*0x752773*/
  if ( !Audio::IsSoundEnabled() ) /*0x752779*/
    return; /*0x752779*/
  if ( !g_InfantryDrawState ) /*0x75278e*/
    return; /*0x75278e*/
  if ( Audio::IsSoundPlaying() ) /*0x752794*/
    return; /*0x752794*/
  v0 = qword_B1D4D0 + ThemeClass::GetValue(g_InfantryDrawState); /*0x7527b4*/
  (*((unsigned int *)&(v1))) = Audio::Callback(); /*0x7527be*/
  if ( v1 <= v0 || dword_B1D428 ) /*0x7527dc*/
    return; /*0x7527dc*/
  if ( dword_B1D4C4 ) /*0x7527e9*/
  {
    *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x7527eb*/
    dword_B1D4C4 = 0; /*0x7527f2*/
  }
  v11 = 0; /*0x7527fd*/
  v10 = 0; /*0x752801*/
  v2 = ((AudioQueue *)(&stru_B1D3C8))->GetNext(); /*0x752805*/
  v3 = (unsigned int *)v2; /*0x75280a*/
  if ( v2 ) /*0x75280e*/
  {
    LinkedList::Init(v2); /*0x752812*/
    if ( !dword_B1D4B8 ) /*0x75281e*/
      goto LABEL_22; /*0x75281e*/
    goto LABEL_11; /*0x75281e*/
  }
  v4 = ((AudioQueue *)(&stru_B1D3F0))->GetNext(); /*0x75283a*/
  v3 = (unsigned int *)v4; /*0x75283f*/
  if ( !v4 ) /*0x752843*/
  {
    v3 = (unsigned int *)(dword_B1D4B8); /*0x752866*/
    if ( dword_B1D4B8 ) /*0x75286e*/
    {
      dword_B1D4B8 = 0; /*0x752870*/
    }
    else
    {
      v5 = (char *)&stru_B1D474; /*0x752878*/
      while ( 1 ) /*0x75287f*/
      {
        v6 = ((AudioQueue *)(v5))->GetNext(); /*0x75287f*/
        v3 = (unsigned int *)v6; /*0x752884*/
        if ( v6 ) /*0x752888*/
          break; /*0x752888*/
        v5 -= 12; /*0x75288a*/
        if ( (int)v5 < (int)stru_B1D450 ) /*0x752893*/
          return; /*0x752893*/
      }
      LinkedList::Init(v6); /*0x7528a2*/
    }
    goto LABEL_22; /*0x752876*/
  }
  LinkedList::Init(v4); /*0x752847*/
  if ( dword_B1D4B8 ) /*0x752853*/
  {
  LABEL_11:
    operator delete((void *)(dword_B1D4B8)); /*0x752824*/
    dword_B1D4B8 = 0; /*0x75282d*/
  }
  LABEL_22:
  if ( v3 ) /*0x7528a9*/
  {
    v7 = v3->vtable4; /*0x7528af*/
    if ( v9 != (unsigned char *)-20 ) /*0x7528b8*/
      v11 = v3->nextArrayIndex; /*0x7528bd*/
    if ( v9 != (unsigned char *)-16 ) /*0x7528c7*/
      v10 = v3->abstractFlags; /*0x7528cc*/
    operator delete((void *)(v3)); /*0x7528d1*/
    if ( v7 ) /*0x7528db*/
    {
      *(unsigned int *)(v7 + 80) = 2; /*0x7528e1*/
      if ( dword_B1D4C8 ) /*0x7528ef*/
      {
        v8 = (const char *)(v7 + 53); /*0x7528f9*/
        if ( dword_B1D4C8 != 1 ) /*0x7528fc*/
          v8 = (const char *)(v7 + 44); /*0x7528fe*/
      }
      else
      {
        v8 = (const char *)(v7 + 62); /*0x7528f1*/
      }
      strcpy(v12, v8); /*0x75291d*/
      strcat(v12, g_Str_File__WAV); /*0x752949*/
      if ( ThreadAudioMixerMain(g_InfantryDrawState, 1) ) /*0x75295c*/
      {
        qword_B1D4D0 = 500; /*0x75296d*/
        dword_B1D4C4 = v7; /*0x75297d*/
        dword_B1D3B8 = v11; /*0x752983*/
        dword_B1D3E0 = v10; /*0x752988*/
        *(unsigned int *)(v7 + 80) = 0; /*0x75298e*/
      }
    }
  }
}
}
// 0x752A40
namespace gamemd {
void ThemeQueue_ClearPlaylist(int a1)
{
  int i; // esi

  if ( a1 >= 0 && a1 < g_InfantrySelectState ) /*0x752a4e*/
  {
    for ( i = (*((unsigned int *)g_InfantryRenderPool + a1))->FindByData(); /*0x752a61*/
          i;
          i = (*((unsigned int *)g_InfantryRenderPool + a1))->FindByData() )
    {
      if ( *(unsigned int *)(i + 4) != i ) /*0x752a66*/
        LinkedList::Init((unsigned int **)i); /*0x752a6a*/
      if ( (void *)i == dword_B1D4B8 ) /*0x752a75*/
        dword_B1D4B8 = 0; /*0x752a77*/
      *(unsigned int *)(*(unsigned int *)(i + 12) + 80) = 2; /*0x752a85*/
      operator delete((void *)((void *)i)); /*0x752a8c*/
    }
  }
}
}
// 0x752B70
namespace gamemd {
int TauntClass_Play(int a1)
{
  char v1; // al
  int result; // eax
  const char *v3; // [esp-8h] [ebp-1Ch]
  int v4; // [esp-4h] [ebp-18h]
  char Buffer[20]; // [esp+0h] [ebp-14h] BYREF

  if ( !dword_B1D4D8 ) /*0x752b7a*/
    return 0; /*0x752b7a*/
  if ( unk_B1D480 ) /*0x752b87*/
    return 0; /*0x752b87*/
  v1 = a1 & 0xF; /*0x752b8f*/
  if ( (a1 & 0xF) == 0 || (a1 & 0xFu) > 8 ) /*0x752b9b*/
    return 0; /*0x752c63*/
  switch ( (a1 >> 4) & 0xF ) /*0x752bb0*/
  {
    case 0: /*0x752bb0*/
      v4 = v1; /*0x752bba*/
      v3 = (const char *)(aTauntsTauam02i); /*0x752bbb*/
      goto LABEL_16; /*0x752bc0*/
    case 1: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauko%02i.wav", v1); /*0x752bd0*/
      goto LABEL_17; /*0x752bd0*/
    case 2: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taufr%02i.wav", v1); /*0x752be0*/
      goto LABEL_17; /*0x752be0*/
    case 3: /*0x752bb0*/
      v4 = v1; /*0x752be5*/
      v3 = aTauntsTauge02i; /*0x752be6*/
      goto LABEL_16; /*0x752beb*/
    case 4: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taubr%02i.wav", v1); /*0x752bfb*/
      goto LABEL_17; /*0x752bfb*/
    case 5: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauli%02i.wav", v1); /*0x752c0b*/
      goto LABEL_17; /*0x752c0b*/
    case 6: /*0x752bb0*/
      v4 = v1; /*0x752c10*/
      v3 = aTauntsTauir02i; /*0x752c11*/
      goto LABEL_16; /*0x752c16*/
    case 7: /*0x752bb0*/
      sprintf(Buffer, "taunts\\taucu%02i.wav", v1); /*0x752c26*/
      goto LABEL_17; /*0x752c26*/
    case 8: /*0x752bb0*/
      sprintf(Buffer, "taunts\\tauru%02i.wav", v1); /*0x752c36*/
      goto LABEL_17; /*0x752c36*/
    case 9: /*0x752bb0*/
      v4 = v1; /*0x752c3b*/
      v3 = aTauntsTauyu02i; /*0x752c3c*/
  LABEL_16:
      sprintf(Buffer, v3, v4); /*0x752c41*/
  LABEL_17:
      result = (int)(ThreadAudioMixerMain(dword_B1D4D8, Buffer, 0)); /*0x752c4b*/
      break; /*0x752c62*/
    default:
      return 0;
  }
  return result; /*0x752c5f*/
}
}
// 0x752CB0
namespace gamemd {
int E4Recv_752CB0::sub_752CB0(const char * a2)
{

  int v3; // eax

  this->owningHouseIndex = 1065353216; /*0x752cbe*/
  strcpy((char *)this, a2); /*0x752cd4*/
  LOBYTE(this->fallRate) = 0; /*0x752cdf*/
  BYTE1(this->attachedTag) = 0; /*0x752ce2*/
  BYTE2(this->ambientSoundController[0]) = 0; /*0x752ce5*/
  this->ambientSoundController[3] = 1; /*0x752ce8*/
  this->ambientSoundController[4] = 0; /*0x752cef*/
  this->customSound_controller[0] = 2; /*0x752cf2*/
  if ( g_InfantrySelectState < dword_B1D4A8 /*0x752d2e*/
    || (byte_B1D4AD || !dword_B1D4A8)
    && dword_B1D4B4 > 0
    && (*(unsigned __int8 (**)(int *, int, unsigned int))(dword_B1D4A0 + 8))(
         &dword_B1D4A0,
         dword_B1D4A8 + dword_B1D4B4,
         0) )
  {
    v3 = g_InfantrySelectState++; /*0x752d3b*/
    *((unsigned int *)g_InfantryRenderPool + v3) = (unsigned int)(this); /*0x752d4a*/
  }
  return (int)this; /*0x752d4d*/

}
}
// 0x753000
namespace gamemd {
int CCINIClass::InitFromINIEVA()
{
  ObjectClass *v1; // edi
  int KeyCount; // eax
  int v3; // ebp
  int v4; // esi
  uint8_t *StringByIndex; // eax
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  void *v9; // ecx
  int v11; // [esp+0h] [ebp-E4h] BYREF
  int i; // [esp+10h] [ebp-D4h]
  int v13; // [esp+14h] [ebp-D0h]
  int v14; // [esp+18h] [ebp-CCh]
  char Destination[200]; // [esp+1Ch] [ebp-C8h] BYREF

  v1 = (gamemd::ObjectClass *)(this); /*0x75300a*/
  v13 = (int)this; /*0x753011*/
  (*((unsigned char *)&(KeyCount))) = INIClass::BinarySearchSection((int)this, g_INI_Key_DialogList) != 0; /*0x75301c*/
  if ( (unsigned char)KeyCount ) /*0x753023*/
  {
    KeyCount = INIClass::GetKeyCount((char *)v1, g_INI_Key_DialogList); /*0x753030*/
    v3 = KeyCount; /*0x753035*/
    v4 = 0; /*0x753037*/
    v14 = KeyCount; /*0x75303b*/
    for ( i = 0; v4 < v3; i = v4 ) /*0x753043*/
    {
      StringByIndex = (uint8_t *)INIClass::GetStringByIndex((char *)v1, g_INI_Key_DialogList, v4); /*0x753060*/
      KeyCount = (/*0x75306d*/ (INIClass *)v1)->GetString(g_INI_Key_DialogList, StringByIndex, &g_INI_DefaultBuffer, Destination, 200);
      if ( KeyCount ) /*0x753074*/
      {
        if ( &v11 == (int *)-28 ) /*0x753080*/
          goto LABEL_10; /*0x753080*/
        v6 = 0; /*0x753087*/
        if ( g_InfantrySelectState <= 0 ) /*0x75308b*/
          goto LABEL_10; /*0x75308b*/
        while ( _strcmpi(Destination, *((char **)g_InfantryRenderPool + v6)) ) /*0x7530a6*/
        {
          if ( ++v6 >= g_InfantrySelectState ) /*0x7530b0*/
            goto LABEL_10; /*0x7530b0*/
        }
        if ( v6 == -1 ) /*0x7530b7*/
        {
  LABEL_10:
          v7 = operator new(0x54u); /*0x7530bd*/
          if ( v7 ) /*0x7530cb*/
          {
            *(unsigned int *)(v7 + 40) = 1065353216; /*0x7530da*/
            strcpy((char *)v7, Destination); /*0x7530f0*/
            *(unsigned char *)(v7 + 44) = 0; /*0x7530f9*/
            *(unsigned char *)(v7 + 53) = 0; /*0x7530fc*/
            *(unsigned char *)(v7 + 62) = 0; /*0x7530ff*/
            *(unsigned int *)(v7 + 72) = 1; /*0x753102*/
            *(unsigned int *)(v7 + 76) = 0; /*0x753109*/
            *(unsigned int *)(v7 + 80) = 2; /*0x75310c*/
            if ( g_InfantrySelectState < dword_B1D4A8 /*0x753146*/
              || (byte_B1D4AD || !dword_B1D4A8)
              && dword_B1D4B4 > 0
              && (*(uint8_t (__thiscall **)(int *, int, unsigned int))(dword_B1D4A0 + 8))(
                   &dword_B1D4A0,
                   dword_B1D4A8 + dword_B1D4B4,
                   0) )
            {
              v8 = g_InfantrySelectState++; /*0x753153*/
              *((unsigned int *)g_InfantryRenderPool + v8) = v7; /*0x753162*/
            }
            v1 = (ObjectClass *)v13; /*0x753165*/
            v9 = (void *)v7; /*0x753169*/
          }
          else
          {
            v9 = 0; /*0x75316d*/
          }
        }
        else
        {
          v9 = (void *)*((unsigned int *)g_InfantryRenderPool + v6); /*0x753177*/
        }
        (*((unsigned char *)&(KeyCount))) = (v9)->LoadFromINI((uint8_t ***)v1); /*0x75317b*/
        v4 = i; /*0x753180*/
        v3 = v14; /*0x753184*/
      }
      ++v4; /*0x753188*/
    }
  }
  return KeyCount; /*0x753195*/
}
}
// 0x7531A0
namespace gamemd {
int E4Recv_7531A0::EVA_LoadINI()
{
  int result; // eax
  void *v2; // esi
  int v3; // eax
  ObjectClass *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this; /*0x7531a0*/
  if ( dword_B1D4C4 ) /*0x7531a8*/
  {
    *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x7531aa*/
    dword_B1D4C4 = 0; /*0x7531b1*/
  }
  if ( g_InfantryDrawState ) /*0x7531c3*/
    Audio::Release(g_InfantryDrawState); /*0x7531c5*/
  ThemeClass::ClearQueues(); /*0x7531ca*/
  for ( result = g_InfantrySelectState; g_InfantrySelectState > 0; result = g_InfantrySelectState ) /*0x7531d6*/
  {
    v2 = *(void **)g_InfantryRenderPool; /*0x7531de*/
    if ( *(unsigned int *)g_InfantryRenderPool ) /*0x7531de*/
    {
      v4 = *(ObjectClass **)g_InfantryRenderPool; /*0x7531f4*/
      v3 = (*(int (__thiscall **)(int *, ObjectClass **))(dword_B1D4A0 + 16))(&dword_B1D4A0, &v4); /*0x7531f8*/
      if ( v3 != -1 && v3 < g_InfantrySelectState && v3 < --g_InfantrySelectState ) /*0x753213*/
      {
        do /*0x75322b*/
        {
          ++v3; /*0x75321b*/
          *((unsigned int *)g_InfantryRenderPool + v3 - 1) = *((unsigned int *)g_InfantryRenderPool + v3); /*0x75321f*/
        }
        while ( v3 < g_InfantrySelectState ); /*0x75322b*/
      }
      operator delete((void *)(v2)); /*0x75322e*/
    }
  }
  return result; /*0x753241*/
}
}
// 0x7532A0
namespace gamemd {
bool sub_7532A0(std::codecvt_base * a1)
{
  if ( (int)a1 < 0 || (int)a1 >= g_InfantrySelectState ) /*0x7532aa*/
    return _do_always_noconv_codecvt_base_std__MBE_NXZ_21(a1); /*0x7532a2*/
  else
    return *(unsigned int *)(*((unsigned int *)g_InfantryRenderPool + (unsigned int)a1) + 80) == 2; /*0x7532ba*/
}
}
// 0x7540F0
namespace gamemd {
int TransformVoxelVertex(VoxelSection *a1, VoxelSection *a2, VoxelSection *aP2, float *a4)
{
  int Info; // eax
  VoxelSection **v7; // esi
  unsigned int *v8; // ecx
  int v9; // ebp
  int v10; // edx
  int v11; // edx
  float *v12; // edi
  VoxelSection **v13; // ebx
  float *v14; // eax
  VoxelSection *v15; // edx
  int v17; // [esp+10h] [ebp-Ch] BYREF
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]
  float *v20; // [esp+20h] [ebp+4h]

  Info = VoxelSection::GetInfo(a1, (int)a2, (int)aP2); /*0x754101*/
  v18 = 1176256512; /*0x75411b*/
  v19 = 1176256512; /*0x754123*/
  v7 = (VoxelSection **)(136 * stru_B2D804.Buffer_field_1C + 11721048); /*0x75412b*/
  v17 = -971227136; /*0x754136*/
  v8 = (unsigned int *)(136 * stru_B2D804.Buffer_field_1C + 11721064); /*0x75413e*/
  v7[2] = aP2; /*0x754141*/
  v9 = 0; /*0x754144*/
  *v8 = 1176256512; /*0x754149*/
  v10 = v18; /*0x75414b*/
  v18 = -971227136; /*0x75414f*/
  v7[1] = a2; /*0x754157*/
  v8[1] = v10; /*0x75415a*/
  v11 = v19; /*0x75415d*/
  v19 = -971227136; /*0x754161*/
  *v7 = a1; /*0x754169*/
  v8[2] = v11; /*0x75416b*/
  v12 = &v7->u32_B; /*0x754175*/
  v20 = (float *)(Info + 64); /*0x754178*/
  v7[7] = (VoxelSection *)v17; /*0x75417c*/
  v7[8] = (VoxelSection *)v18; /*0x754182*/
  v7[9] = (VoxelSection *)v19; /*0x754189*/
  do /*0x754238*/
  {
    v13 = (VoxelSection **)(v12 - 1); /*0x754199*/
    v14 = TransformMatrix3x4Point((float *)&v17, a4, v20); /*0x75419c*/
    *(v12 - 1) = *v14; /*0x7541a5*/
    *v12 = v14[1]; /*0x7541aa*/
    v12[1] = v14[2]; /*0x7541b0*/
    *v12 = -*v12; /*0x7541b7*/
    if ( *(v12 - 1) < (double)v7->u32_10 ) /*0x7541c3*/
      v7[4] = *v13; /*0x7541c7*/
    if ( *(float *)v13 > (double)v7->u32_1C ) /*0x7541d4*/
      v7[7] = *v13; /*0x7541d8*/
    if ( *v12 < (double)v7->u32_14 ) /*0x7541e5*/
      v7[5] = *(VoxelSection **)v12; /*0x7541e9*/
    if ( *v12 > (double)v7->q020 ) /*0x7541f6*/
      v7[8] = *(VoxelSection **)v12; /*0x7541fa*/
    if ( v12[1] < (double)v7->u32_18 ) /*0x754208*/
    {
      v15 = (VoxelSection *)v12->u32_4; /*0x75420a*/
      v7[3] = (VoxelSection *)v9; /*0x75420d*/
      v7[6] = v15; /*0x754210*/
    }
    if ( v12[1] > (double)v7->__pad_024 ) /*0x75421e*/
      v7[9] = (VoxelSection *)v12->u32_4; /*0x754223*/
    ++v9; /*0x75422a*/
    v12 += 3; /*0x75422e*/
    v20 += 3; /*0x754234*/
  }
  while ( v9 < 8 ); /*0x754238*/
  if ( v7->u32_10 < (double)*(float *)&dword_B2D5E0 ) /*0x75424c*/
    dword_B2D5E0 = (int)v7[4]; /*0x754251*/
  if ( v7->u32_14 < (double)*(float *)&dword_B2D5E4 ) /*0x754265*/
    dword_B2D5E4 = (int)v7[5]; /*0x75426a*/
  if ( v7->u32_18 < (double)*(float *)&dword_B2D5E8 ) /*0x75427e*/
    dword_B2D5E8 = (int)v7[6]; /*0x754283*/
  if ( v7->u32_1C > (double)*(float *)&stru_B2D93C.Buffer_field_0C ) /*0x754296*/
    stru_B2D93C.Buffer_field_0C = (int)v7[7]; /*0x75429b*/
  if ( v7->q020 > (double)*(float *)&stru_B2D93C.Buffer_field_10 ) /*0x7542af*/
    stru_B2D93C.Buffer_field_10 = (int)v7[8]; /*0x7542b4*/
  if ( v7->__pad_024 > (double)*(float *)&stru_B2D93C.Buffer_field_14 ) /*0x7542c8*/
    stru_B2D93C.Buffer_field_14 = (int)v7[9]; /*0x7542cd*/
  return ++stru_B2D804.Buffer_field_1C; /*0x7542d7*/
}
}
// 0x7542F0
namespace gamemd {
int InitializeAudioOcclusion(IUnknown * aP0, unsigned int *a1, unsigned int *a2)
{
  int v3; // edi
  unsigned int **v5; // esi
  int v6; // ebp
  unsigned int *v7; // ecx
  char *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  char *v12; // edi
  char *v13; // ecx
  int v14; // ebp
  int v15; // edx
  unsigned int ***v16; // esi
  int v17; // edi
  int v18; // esi
  unsigned int ***v19; // edi
  int v20; // eax
  int v21; // ecx
  double v22; // st7
  int v23; // eax
  int v24; // edx
  int v25; // esi
  int v26; // esi
  int v27; // eax
  double v28; // st7
  int v29; // esi
  int result; // eax
  int v31; // [esp+10h] [ebp-14h]
  float v33; // [esp+18h] [ebp-Ch] BYREF
  float v34; // [esp+1Ch] [ebp-8h]
  float v35; // [esp+20h] [ebp-4h]

  v3 = 0; /*0x75430e*/
  v33 = (*(float *)&dword_B2D5E0 + *(float *)&dword_B2D948) * 0.5; /*0x754318*/
  v34 = (*(float *)&dword_B2D5E4 + *(float *)&dword_B2D94C) * 0.5; /*0x75432e*/
  v35 = (*(float *)&dword_B2D5E8 + *(float *)&dword_B2D950) * 0.5; /*0x754344*/
  if ( dword_B2FB70 > 0 ) /*0x754348*/
  {
    v5 = (unsigned int **)&unk_B3FF78; /*0x75434a*/
    do /*0x754367*/
    {
      InitializeTileAudioOcclusion(*v5, (int)v5, &v33); /*0x754357*/
      ++v3; /*0x754361*/
      v5 += 18; /*0x754362*/
    }
    while ( v3 < dword_B2FB70 ); /*0x754367*/
  }
  v6 = dword_B2D820; /*0x754369*/
  if ( dword_B2D820 > 0 ) /*0x754371*/
  {
    v7 = &unk_B2FE78; /*0x754373*/
    v8 = (char *)&unk_B2D958; /*0x754378*/
    v9 = dword_B2D820; /*0x75437d*/
    do /*0x75438a*/
    {
      *v7 = v8; /*0x75437f*/
      v8 += 136; /*0x754381*/
      ++v7; /*0x754386*/
      --v9; /*0x754389*/
    }
    while ( v9 ); /*0x75438a*/
  }
  v10 = v6 - 1; /*0x75438c*/
  if ( v6 - 1 > 0 ) /*0x754391*/
  {
    v11 = 1; /*0x754393*/
    v12 = (char *)&unk_B2FE78; /*0x754398*/
    v31 = 1; /*0x75439d*/
    do /*0x7543df*/
    {
      if ( v11 < v6 ) /*0x7543a3*/
      {
        v13 = v12 + 4; /*0x7543a5*/
        v14 = v6 - v11; /*0x7543a8*/
        do /*0x7543c3*/
        {
          v15 = *(unsigned int *)v12; /*0x7543aa*/
          if ( *(float *)(*&v12->u32_90) > (double)*(float *)(*(unsigned int *)v13 + 36) ) /*0x7543b9*/
          {
            *(unsigned int *)v12 = *(unsigned int *)v13; /*0x7543bb*/
            *(unsigned int *)v13 = v15; /*0x7543bd*/
          }
          v13 += 4; /*0x7543bf*/
          --v14; /*0x7543c2*/
        }
        while ( v14 ); /*0x7543c3*/
        v11 = v31; /*0x7543c5*/
        v6 = dword_B2D820; /*0x7543c9*/
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
      v16 = (unsigned int ***)(4 * v10 + 11730552); /*0x7543ee*/
      v17 = v10 + 1; /*0x7543f5*/
      do /*0x75440b*/
      {
        (**v16)->ProcessColor(*v16, &v33); /*0x754402*/
        --v16; /*0x754407*/
        --v17; /*0x75440a*/
      }
      while ( v17 ); /*0x75440b*/
    }
  }
  else
  {
    v18 = 0; /*0x75440f*/
    if ( v6 > 0 ) /*0x754413*/
    {
      v19 = (unsigned int ***)&unk_B2FE78; /*0x754415*/
      do /*0x754434*/
      {
        (**v19)->ProcessColor(*v19, &v33); /*0x754424*/
        ++v18; /*0x75442e*/
        ++v19; /*0x75442f*/
      }
      while ( v18 < dword_B2D820 ); /*0x754434*/
    }
  }
  aP0[2] = Math::RoundToInt(*(float *)&dword_B2D948 - *(float *)&dword_B2D5E0); /*0x754447*/
  v20 = Math::RoundToInt(*(float *)&dword_B2D94C - *(float *)&dword_B2D5E4); /*0x754456*/
  v21 = aP0[2]; /*0x75445b*/
  aP0[3] = v20; /*0x75445e*/
  v22 = v33; /*0x754467*/
  v23 = aP0[3]; /*0x754476*/
  *aP0 = 128 - v21 / 2; /*0x754478*/
  v24 = 128 - v23 / 2; /*0x754487*/
  aP0[3] = v23 + 8; /*0x754489*/
  v25 = *aP0; /*0x75448c*/
  aP0[1] = v24; /*0x75448e*/
  aP0[2] = v21 + 8; /*0x75449c*/
  *aP0 = v25 - 4; /*0x75449f*/
  aP0[1] = v24 - 4; /*0x7544a1*/
  dword_B2FB60 = *aP0; /*0x7544a6*/
  dword_B2FB64 = aP0[1]; /*0x7544af*/
  dword_B2FB68 = aP0[2]; /*0x7544b8*/
  dword_B2FB6C = aP0[3]; /*0x7544c1*/
  v26 = aP0[2] / 2; /*0x7544cf*/
  v27 = Math::RoundToInt(v22); /*0x7544d1*/
  v28 = v34; /*0x7544dc*/
  *a1 = v27 - v26; /*0x7544e0*/
  v29 = aP0[3] / 2; /*0x7544ea*/
  result = Math::RoundToInt(v28) - v29; /*0x7544f5*/
  *a2 = result; /*0x7544fa*/
  return result; /*0x7544f7*/
}
}
// 0x757120
namespace gamemd {
char RenderVoxels(void * a1, void * a2, void * a3, void * a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  unsigned short *v6; // eax
  int16_t v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  unsigned char *v12; // esi
  uint8_t *v13; // esi
  uint8_t v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  int16_t v27; // [esp+20h] [ebp-1Ch]
  int16_t v28; // [esp+24h] [ebp-18h]
  int16_t v29; // [esp+28h] [ebp-14h]
  int16_t v30; // [esp+2Ch] [ebp-10h]
  int16_t v31; // [esp+30h] [ebp-Ch]
  int16_t v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x757120*/
  g_VoxelOffsetTable[0] = 0; /*0x757127*/
  v5 = 1; /*0x757141*/
  if ( *((unsigned char *)a4 + 50) > 1u ) /*0x757146*/
  {
    v6 = (unsigned short *)(g_VoxelOffsetTable + 2); /*0x757148*/
    do /*0x75716f*/
    {
      v7 = *(v6 - 1); /*0x75714d*/
      v6 += 2; /*0x757151*/
      *(v6 - 1) = *((unsigned short *)a4 + 21) + v7; /*0x757158*/
      ++v5; /*0x757164*/
      *v6 = *(v6 - 2) + *((unsigned short *)a4 + 22); /*0x757165*/
    }
    while ( v5 < *((uint8_t *)a4 + 50) ); /*0x75716f*/
  }
  (*((unsigned short *)&(a3))) = *((unsigned short *)a4 + 12); /*0x757175*/
  (*((unsigned short *)&(a2))) = *((unsigned short *)a4 + 13); /*0x757179*/
  (*((unsigned short *)&(a4))) = *((unsigned short *)a4 + 14); /*0x75717d*/
  result = *((unsigned char *)v4 + 49); /*0x757182*/
  v26 = 0; /*0x757185*/
  if ( result ) /*0x75718f*/
  {
    do /*0x757347*/
    {
      (*(((unsigned short *)&(v9)) + 1)) = (*(((unsigned short *)&(a4)) + 1)); /*0x757196*/
      v32 = (int16_t)a4; /*0x75719d*/
      v33 = v4[3]; /*0x7571a6*/
      v30 = a3; /*0x7571aa*/
      v31 = a2; /*0x7571ae*/
      v25 = 0; /*0x7571b2*/
      if ( *((unsigned char *)v4 + 48) ) /*0x7571a1*/
      {
        do /*0x757306*/
        {
          v29 = (int16_t)a4; /*0x7571c7*/
          v10 = (int *)*v4; /*0x7571cb*/
          v27 = a3; /*0x7571cd*/
          v28 = a2; /*0x7571d1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7571d5*/
          if ( v11 != (int *)-1 ) /*0x7571db*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7571e4*/
            v11 = (int *)*((uint8_t *)v4 + 50); /*0x7571e8*/
            v22 = v11; /*0x7571ed*/
            if ( *((unsigned char *)v4 + 50) ) /*0x7571e8*/
            {
              do /*0x7572c6*/
              {
                (*((unsigned char *)&(v10))) = *v12; /*0x7571f7*/
                v13 = v12 + 1; /*0x7571f9*/
                v14 = (uint8_t)v10; /*0x7571fe*/
                (*((unsigned short *)&(v10))) = *((unsigned short *)v4 + 23) * (uint8_t)v10; /*0x757206*/
                (*((unsigned short *)&(a1))) = g_VoxelOffsetTable[v14]; /*0x757210*/
                a3 += (int)a1; /*0x757218*/
                (*((unsigned short *)&(a1))) = (*(((unsigned short *)&(g_VoxelOffsetTable[v14])) + 1)); /*0x75721a*/
                a2 += (int)a1; /*0x757222*/
                a1 = (int *)((char *)a4 + (unsigned int)v10); /*0x757228*/
                v10 = (int *)((char *)v22 - v14); /*0x75722e*/
                v15 = *v13; /*0x757232*/
                v16 = (char *)(v13 + 1); /*0x757234*/
                a4 = a1; /*0x757237*/
                v22 = v10; /*0x75723b*/
                if ( v15 ) /*0x75723f*/
                {
                  v24 = v15; /*0x757243*/
                  v22 = (int *)((char *)v10 - v15); /*0x757247*/
                  do /*0x7572bd*/
                  {
                    v23 = *v16; /*0x75724f*/
                    v17 = (((unsigned char *)&(a3))[1]); /*0x757260*/
                    v18 = v17 | a2 & 0xFF00; /*0x757263*/
                    v16 += 2; /*0x757276*/
                    if ( (uint16_t)((uint16_t)a4 >> 8) > (uint8_t)byte_B1D5E0[v18] ) /*0x75727c*/
                    {
                      byte_B1D5E0[v18] = (((unsigned char *)&(a4))[1]); /*0x757282*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x757288*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75728e*/
                      byte_B1D5E1[v18] = (((unsigned char *)&(a4))[1]); /*0x757294*/
                    }
                    (*((unsigned short *)&(v18))) = *((unsigned short *)v4 + 21); /*0x75729a*/
                    (*((unsigned short *)&(v17))) = *((unsigned short *)v4 + 22); /*0x75729e*/
                    a3 += v18; /*0x7572a2*/
                    (*((unsigned short *)&(v18))) = *((unsigned short *)v4 + 23); /*0x7572a4*/
                    a2 += v17; /*0x7572a8*/
                    v10 = (int *)((char *)a4 + v18); /*0x7572ae*/
                    v19 = v24 == 1; /*0x7572b4*/
                    a4 = (int *)((char *)a4 + v18); /*0x7572b5*/
                    --v24; /*0x7572b9*/
                  }
                  while ( !v19 ); /*0x7572bd*/
                }
                (*(((unsigned short *)&(v11)) + 1)) = (*(((unsigned short *)&(v22)) + 1)); /*0x7572bf*/
                v12 = v16 + 1; /*0x7572c3*/
              }
              while ( v22 ); /*0x7572c6*/
            }
          }
          (*((unsigned short *)&(v11))) = v29 + *((unsigned short *)v4 + 17); /*0x7572d3*/
          (*((unsigned short *)&(a3))) = v27 + *((unsigned short *)v4 + 15); /*0x7572e0*/
          (*((unsigned short *)&(a2))) = v28 + *((unsigned short *)v4 + 16); /*0x7572e5*/
          a4 = v11; /*0x7572ea*/
          v20 = *((uint8_t *)v4 + 48); /*0x7572f5*/
          v4[3] += v4[4]; /*0x7572f8*/
          v9 = (int *)++v25; /*0x7572ff*/
        }
        while ( v25 < v20 ); /*0x757306*/
      }
      (*((unsigned short *)&(v9))) = v32 + *((unsigned short *)v4 + 20); /*0x757314*/
      (*((unsigned short *)&(a3))) = v30 + *((unsigned short *)v4 + 18); /*0x757321*/
      (*((unsigned short *)&(a2))) = v31 + *((unsigned short *)v4 + 19); /*0x757326*/
      a4 = v9; /*0x75732b*/
      v21 = *((uint8_t *)v4 + 49); /*0x757336*/
      v4[3] = v33 + v4[5]; /*0x757339*/
      result = ++v26; /*0x757340*/
    }
    while ( v26 < v21 ); /*0x757347*/
  }
  return result; /*0x75734e*/
}
}
// 0x757360
namespace gamemd {
char ProcessVoxelDepthSamples(unsigned int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  unsigned short *v6; // eax
  int16_t v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  uint8_t *v12; // esi
  int v13; // eax
  uint8_t *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  uint8_t v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  int16_t v25; // [esp+24h] [ebp-1Ch]
  int16_t v26; // [esp+28h] [ebp-18h]
  int16_t v27; // [esp+2Ch] [ebp-14h]
  int16_t v28; // [esp+30h] [ebp-10h]
  int16_t v29; // [esp+34h] [ebp-Ch]
  int16_t v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x757360*/
  g_VoxelOffsetTable[0] = 0; /*0x757369*/
  v5 = 1; /*0x757380*/
  if ( *(unsigned char *)(a4 + 50) > 1u ) /*0x757385*/
  {
    v6 = (unsigned short *)(g_VoxelOffsetTable + 2); /*0x757387*/
    do /*0x7573ae*/
    {
      v7 = *(unsigned short *)(a4 + 42) + *(v6 - 1); /*0x757392*/
      v6 += 2; /*0x757396*/
      *(v6 - 1) = v7; /*0x757399*/
      ++v5; /*0x7573a5*/
      *v6 = *(unsigned short *)(a4 + 44) + *(v6 - 2); /*0x7573a6*/
      a1 = *(uint8_t *)(a4 + 50); /*0x7573a9*/
    }
    while ( v5 < a1 ); /*0x7573ae*/
  }
  (*((unsigned short *)&(a3))) = *(unsigned short *)(a4 + 24); /*0x7573b4*/
  (*((unsigned short *)&(a2))) = *(unsigned short *)(a4 + 26); /*0x7573b8*/
  (*((unsigned short *)&(a4))) = *(unsigned short *)(a4 + 28); /*0x7573bc*/
  result = *(unsigned char *)(v4 + 49); /*0x7573c1*/
  v24 = 0; /*0x7573c4*/
  if ( result ) /*0x7573ca*/
  {
    do /*0x757585*/
    {
      v28 = a3; /*0x7573d7*/
      v31 = *(unsigned int *)(v4 + 12); /*0x7573db*/
      (*(((unsigned short *)&(v9)) + 1)) = (*(((unsigned short *)&(a4)) + 1)); /*0x7573df*/
      v30 = a4; /*0x7573e3*/
      v29 = a2; /*0x7573ec*/
      v23 = 0; /*0x7573f0*/
      if ( *(unsigned char *)(v4 + 48) ) /*0x7573e7*/
      {
        do /*0x757544*/
        {
          v27 = a4; /*0x757401*/
          v10 = *(unsigned int *)(v4 + 4); /*0x757405*/
          v25 = a3; /*0x757408*/
          v26 = a2; /*0x75740c*/
          v11 = *(unsigned int *)(v10 + 4 * *(unsigned int *)(v4 + 12)); /*0x757410*/
          if ( v11 != -1 ) /*0x757416*/
          {
            v12 = (uint8_t *)(v11 + *(unsigned int *)(v4 + 8)); /*0x75741f*/
            v11 = *(uint8_t *)(v4 + 50); /*0x757423*/
            v19 = v11; /*0x757428*/
            if ( *(unsigned char *)(v4 + 50) ) /*0x757423*/
            {
              do /*0x757504*/
              {
                v13 = *v12; /*0x757434*/
                v14 = v12 - 1; /*0x757436*/
                if ( v13 ) /*0x757439*/
                {
                  v22 = v13; /*0x757443*/
                  v19 -= v13; /*0x757449*/
                  do /*0x7574bf*/
                  {
                    v20 = *(v14 - 1); /*0x757453*/
                    v14 -= 2; /*0x757464*/
                    v15 = (((unsigned char *)&(a3))[1]); /*0x757465*/
                    v16 = v15 | a2 & 0xFF00; /*0x757468*/
                    if ( (uint16_t)(((unsigned char *)&(a4))[1]) > (uint8_t)byte_B1D5E0[v16] ) /*0x75747e*/
                    {
                      byte_B1D5E0[v16] = (((unsigned char *)&(a4))[1]); /*0x757484*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x75748a*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x757490*/
                      byte_B1D5E1[v16] = (((unsigned char *)&(a4))[1]); /*0x757496*/
                    }
                    (*((unsigned short *)&(v16))) = *(unsigned short *)(v4 + 42); /*0x75749c*/
                    (*((unsigned short *)&(v15))) = *(unsigned short *)(v4 + 44); /*0x7574a0*/
                    a3 += v16; /*0x7574a4*/
                    (*((unsigned short *)&(v16))) = *(unsigned short *)(v4 + 46); /*0x7574a6*/
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
                (*((unsigned short *)&(v10))) = *(unsigned short *)(v4 + 46) * v21; /*0x7574d2*/
                v11 = v21; /*0x7574d7*/
                (*((unsigned short *)&(a1))) = g_VoxelOffsetTable[v21]; /*0x7574dc*/
                a3 += a1; /*0x7574e4*/
                (*((unsigned short *)&(a1))) = (*(((unsigned short *)&(g_VoxelOffsetTable[v21])) + 1)); /*0x7574e6*/
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
          (*((unsigned short *)&(v11))) = v27 + *(unsigned short *)(v4 + 34); /*0x757511*/
          (*((unsigned short *)&(a3))) = v25 + *(unsigned short *)(v4 + 30); /*0x75751e*/
          (*((unsigned short *)&(a2))) = v26 + *(unsigned short *)(v4 + 32); /*0x757523*/
          a4 = v11; /*0x757528*/
          *(unsigned int *)(v4 + 12) += *(unsigned int *)(v4 + 16); /*0x757535*/
          v9 = v23 + 1; /*0x75753d*/
          v23 = v9; /*0x757540*/
        }
        while ( v9 < *(uint8_t *)(v4 + 48) ); /*0x757544*/
      }
      (*((unsigned short *)&(v9))) = v30 + *(unsigned short *)(v4 + 40); /*0x757552*/
      (*((unsigned short *)&(a3))) = v28 + *(unsigned short *)(v4 + 36); /*0x75755f*/
      (*((unsigned short *)&(a2))) = v29 + *(unsigned short *)(v4 + 38); /*0x757564*/
      a4 = v9; /*0x757569*/
      v18 = *(uint8_t *)(v4 + 49); /*0x757574*/
      *(unsigned int *)(v4 + 12) = v31 + *(unsigned int *)(v4 + 20); /*0x757577*/
      result = ++v24; /*0x75757e*/
    }
    while ( v24 < v18 ); /*0x757585*/
  }
  return result; /*0x75758b*/
}
}
// 0x757980
namespace gamemd {
char ProcessVoxelColorScanline(unsigned int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // esi
  unsigned short *v7; // eax
  int16_t v8; // dx
  unsigned int v9; // eax
  int v10; // eax
  uint8_t *v11; // esi
  uint8_t v12; // al
  uint8_t *v13; // esi
  int v14; // eax
  uint8_t *v15; // esi
  int v16; // eax
  uint16_t v17; // dx
  uint8_t v18; // bl
  uint8_t *v19; // esi
  uint8_t v20; // bp
  bool v21; // zf
  unsigned int v22; // eax
  uint8_t v24; // [esp+10h] [ebp-34h]
  unsigned int v25; // [esp+14h] [ebp-30h]
  int v26; // [esp+18h] [ebp-2Ch]
  int v27; // [esp+1Ch] [ebp-28h]
  unsigned int v28; // [esp+20h] [ebp-24h]
  unsigned int v29; // [esp+24h] [ebp-20h]
  int16_t v30; // [esp+28h] [ebp-1Ch]
  int16_t v31; // [esp+2Ch] [ebp-18h]
  int16_t v32; // [esp+30h] [ebp-14h]
  int16_t v33; // [esp+34h] [ebp-10h]
  int16_t v34; // [esp+38h] [ebp-Ch]
  int16_t v35; // [esp+3Ch] [ebp-8h]
  int v36; // [esp+40h] [ebp-4h]
  int v37; // [esp+48h] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757987*/
  v6 = 1; /*0x7579a1*/
  if ( *(unsigned char *)(a5 + 50) > 1u ) /*0x7579a6*/
  {
    v7 = (unsigned short *)(g_VoxelOffsetTable + 2); /*0x7579a8*/
    do /*0x7579cf*/
    {
      v8 = *(v7 - 1); /*0x7579ad*/
      v7 += 2; /*0x7579b1*/
      *(v7 - 1) = *(unsigned short *)(a5 + 42) + v8; /*0x7579b8*/
      ++v6; /*0x7579c4*/
      *v7 = *(unsigned short *)(a5 + 44) + *(v7 - 2); /*0x7579c5*/
      a1 = *(uint8_t *)(a5 + 50); /*0x7579ca*/
    }
    while ( v6 < a1 ); /*0x7579cf*/
  }
  (*((unsigned char *)&(v9))) = *(unsigned char *)(a5 + 49); /*0x7579d1*/
  (*((unsigned short *)&(a4))) = *(unsigned short *)(a5 + 24); /*0x7579d4*/
  (*((unsigned short *)&(a3))) = *(unsigned short *)(a5 + 26); /*0x7579d8*/
  (*((unsigned short *)&(a1))) = *(unsigned short *)(a5 + 28); /*0x7579dc*/
  v29 = 0; /*0x7579e2*/
  if ( (unsigned char)v9 ) /*0x7579ea*/
  {
    do /*0x757bd7*/
    {
      v33 = a4; /*0x7579f4*/
      v36 = *(unsigned int *)(a5 + 12); /*0x7579f8*/
      v34 = a3; /*0x757a01*/
      v35 = a1; /*0x757a05*/
      v28 = 0; /*0x757a09*/
      if ( *(unsigned char *)(a5 + 48) ) /*0x7579fc*/
      {
        do /*0x757b9a*/
        {
          v30 = a4; /*0x757a1c*/
          v31 = a3; /*0x757a20*/
          v10 = *(unsigned int *)(*(unsigned int *)a5 + 4 * *(unsigned int *)(a5 + 12)); /*0x757a24*/
          v32 = a1; /*0x757a27*/
          if ( v10 != -1 ) /*0x757a2e*/
          {
            v11 = (uint8_t *)(v10 + *(unsigned int *)(a5 + 8)); /*0x757a37*/
            v37 = *(uint8_t *)(a5 + 50); /*0x757a40*/
            if ( *(unsigned char *)(a5 + 50) ) /*0x757a3b*/
            {
              do /*0x757b5e*/
              {
                v12 = *v11; /*0x757a4a*/
                v13 = v11 + 1; /*0x757a4c*/
                (*((unsigned short *)&(a2))) = g_VoxelOffsetTable[v12]; /*0x757a5a*/
                a4 += a2; /*0x757a62*/
                (*((unsigned short *)&(a2))) = (*(((unsigned short *)&(g_VoxelOffsetTable[v12])) + 1)); /*0x757a64*/
                a3 += a2; /*0x757a6c*/
                (*((unsigned short *)&(a2))) = *(unsigned short *)(a5 + 46) * v12; /*0x757a74*/
                a1 += a2; /*0x757a79*/
                a2 = v37 - v12; /*0x757a7f*/
                v14 = *v13; /*0x757a83*/
                v15 = v13 + 1; /*0x757a85*/
                v26 = a3; /*0x757a88*/
                v25 = a1; /*0x757a8c*/
                v37 = a2; /*0x757a90*/
                if ( v14 ) /*0x757a94*/
                {
                  v27 = v14; /*0x757a9c*/
                  v37 = a2 - v14; /*0x757aa0*/
                  do /*0x757b51*/
                  {
                    a2 = (((unsigned char *)&(a4))[1]); /*0x757ab3*/
                    v16 = a2 | a3 & 0xFF00; /*0x757ab6*/
                    v17 = (((unsigned char *)&(a1))[1]); /*0x757ab8*/
                    if ( v17 <= (uint8_t)byte_B1D5E0[v16] ) /*0x757ac7*/
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
                      byte_B1D5E0[v16] = v17; /*0x757adf*/
                      byte_B1D5E1[v16] = v17; /*0x757aeb*/
                      a2 = (uint8_t)g_VoxelShadeTable[v24] << 8; /*0x757b05*/
                      (*((unsigned char *)&(a2))) = g_VoxelColorPalette[a2 + v20]; /*0x757b0e*/
                      a3 = v26; /*0x757b15*/
                      g_VoxelRenderBuffer[v16] = a2; /*0x757b19*/
                      g_VoxelDepthBuffer[v16] = a2; /*0x757b1f*/
                    }
                    (*((unsigned short *)&(v16))) = *(unsigned short *)(a5 + 42); /*0x757b2a*/
                    a4 += v16; /*0x757b32*/
                    (*((unsigned short *)&(v16))) = *(unsigned short *)(a5 + 44); /*0x757b34*/
                    a3 += v16; /*0x757b38*/
                    (*((unsigned short *)&(v16))) = *(unsigned short *)(a5 + 46); /*0x757b3a*/
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
          (*((unsigned short *)&(a4))) = v30 + *(unsigned short *)(a5 + 30); /*0x757b76*/
          (*((unsigned short *)&(a3))) = v31 + *(unsigned short *)(a5 + 32); /*0x757b7b*/
          (*((unsigned short *)&(a1))) = v32 + *(unsigned short *)(a5 + 34); /*0x757b80*/
          v22 = *(uint8_t *)(a5 + 48); /*0x757b89*/
          *(unsigned int *)(a5 + 12) += *(unsigned int *)(a5 + 16); /*0x757b8c*/
          ++v28; /*0x757b96*/
        }
        while ( v28 < v22 ); /*0x757b9a*/
      }
      (*((unsigned short *)&(a4))) = v33 + *(unsigned short *)(a5 + 36); /*0x757bb3*/
      (*((unsigned short *)&(a3))) = v34 + *(unsigned short *)(a5 + 38); /*0x757bb8*/
      (*((unsigned short *)&(a1))) = v35 + *(unsigned short *)(a5 + 40); /*0x757bbd*/
      *(unsigned int *)(a5 + 12) = v36 + *(unsigned int *)(a5 + 20); /*0x757bc8*/
      v9 = *(uint8_t *)(a5 + 49); /*0x757bcd*/
      ++v29; /*0x757bd3*/
    }
    while ( v29 < v9 ); /*0x757bd7*/
  }
  return v9; /*0x757bde*/
}
}
// 0x757BF0
namespace gamemd {
char VoxelDrawScanline(unsigned int a1, int a2, int a3, int a4)
{
  unsigned int v5; // esi
  unsigned short *v6; // eax
  int16_t v7; // di
  int v8; // eax
  int v9; // edx
  int v10; // eax
  uint8_t *v11; // esi
  int v12; // eax
  uint8_t *v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  bool v17; // zf
  unsigned int v18; // edx
  bool v19; // cf
  unsigned int v21; // [esp+10h] [ebp-38h]
  uint8_t v22; // [esp+14h] [ebp-34h]
  int v23; // [esp+18h] [ebp-30h]
  uint8_t v24; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  unsigned int v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  int16_t v28; // [esp+2Ch] [ebp-1Ch]
  int16_t v29; // [esp+30h] [ebp-18h]
  int16_t v30; // [esp+34h] [ebp-14h]
  int16_t v31; // [esp+38h] [ebp-10h]
  int16_t v32; // [esp+3Ch] [ebp-Ch]
  int16_t v33; // [esp+40h] [ebp-8h]
  int v34; // [esp+44h] [ebp-4h]
  int v35; // [esp+4Ch] [ebp+4h]

  g_VoxelOffsetTable[0] = 0; /*0x757bf9*/
  v5 = 1; /*0x757c10*/
  if ( *(unsigned char *)(a4 + 50) > 1u ) /*0x757c15*/
  {
    v6 = (unsigned short *)(g_VoxelOffsetTable + 2); /*0x757c17*/
    do /*0x757c3e*/
    {
      v7 = *(unsigned short *)(a4 + 42) + *(v6 - 1); /*0x757c22*/
      v6 += 2; /*0x757c26*/
      *(v6 - 1) = v7; /*0x757c29*/
      ++v5; /*0x757c35*/
      *v6 = *(v6 - 2) + *(unsigned short *)(a4 + 44); /*0x757c36*/
      a1 = *(uint8_t *)(a4 + 50); /*0x757c39*/
    }
    while ( v5 < a1 ); /*0x757c3e*/
  }
  (*((unsigned char *)&(v8))) = *(unsigned char *)(a4 + 49); /*0x757c40*/
  (*((unsigned short *)&(a1))) = *(unsigned short *)(a4 + 26); /*0x757c43*/
  (*((unsigned short *)&(a2))) = *(unsigned short *)(a4 + 28); /*0x757c47*/
  (*((unsigned short *)&(a3))) = *(unsigned short *)(a4 + 24); /*0x757c4b*/
  v21 = a1; /*0x757c51*/
  v35 = a2; /*0x757c55*/
  v27 = 0; /*0x757c59*/
  if ( (unsigned char)v8 ) /*0x757c5d*/
  {
    do /*0x757e5d*/
    {
      v31 = a3; /*0x757c6a*/
      v34 = *(unsigned int *)(a4 + 12); /*0x757c6e*/
      v32 = a1; /*0x757c77*/
      v33 = a2; /*0x757c7b*/
      v26 = 0; /*0x757c7f*/
      if ( *(unsigned char *)(a4 + 48) ) /*0x757c72*/
      {
        do /*0x757e18*/
        {
          v9 = *(unsigned int *)(a4 + 12); /*0x757c89*/
          v28 = a3; /*0x757c8f*/
          v29 = a1; /*0x757c93*/
          v10 = *(unsigned int *)(*(unsigned int *)(a4 + 4) + 4 * v9); /*0x757c97*/
          v30 = a2; /*0x757c9a*/
          if ( v10 != -1 ) /*0x757ca1*/
          {
            v11 = (uint8_t *)(v10 + *(unsigned int *)(a4 + 8)); /*0x757caa*/
            v23 = *(uint8_t *)(a4 + 50); /*0x757cb3*/
            if ( *(unsigned char *)(a4 + 50) ) /*0x757cae*/
            {
              do /*0x757dd4*/
              {
                v12 = *v11; /*0x757cbf*/
                v13 = v11 - 1; /*0x757cc1*/
                if ( v12 ) /*0x757cc4*/
                {
                  v25 = v12; /*0x757cce*/
                  v23 -= v12; /*0x757cd4*/
                  do /*0x757d89*/
                  {
                    v9 = (((unsigned char *)&(a3))[1]); /*0x757ce7*/
                    v14 = v9 | a1 & 0xFF00; /*0x757cea*/
                    (*((unsigned short *)&(v9))) = (((unsigned char *)&(a2))[1]); /*0x757cef*/
                    if ( (uint16_t)(((unsigned char *)&(a2))[1]) <= (uint8_t)byte_B1D5E0[v14] ) /*0x757cfe*/
                    {
                      v13 -= 2; /*0x757d5f*/
                    }
                    else
                    {
                      v24 = *v13; /*0x757d03*/
                      v13 -= 2; /*0x757d11*/
                      v15 = (uint8_t)g_VoxelShadeTable[v24] << 8; /*0x757d31*/
                      v16 = v13[1]; /*0x757d34*/
                      byte_B1D5E0[v14] = v9; /*0x757d3a*/
                      byte_B1D5E1[v14] = v9; /*0x757d40*/
                      (*((unsigned char *)&(v15))) = g_VoxelColorPalette[v15 + v16]; /*0x757d46*/
                      g_VoxelRenderBuffer[v14] = v15; /*0x757d4d*/
                      g_VoxelDepthBuffer[v14] = v15; /*0x757d53*/
                      a1 = v21; /*0x757d59*/
                    }
                    (*((unsigned short *)&(v14))) = *(unsigned short *)(a4 + 42); /*0x757d62*/
                    (*((unsigned short *)&(v9))) = *(unsigned short *)(a4 + 44); /*0x757d6a*/
                    a3 += v14; /*0x757d6e*/
                    (*((unsigned short *)&(v14))) = *(unsigned short *)(a4 + 46); /*0x757d70*/
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
                (*((unsigned short *)&(v9))) = g_VoxelOffsetTable[v22]; /*0x757da1*/
                a3 += v9; /*0x757da9*/
                (*((unsigned short *)&(v9))) = (*(((unsigned short *)&(g_VoxelOffsetTable[v22])) + 1)); /*0x757dab*/
                a1 += v9; /*0x757db3*/
                (*((unsigned short *)&(v9))) = *(unsigned short *)(a4 + 46) * v22; /*0x757dbb*/
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
          (*((unsigned short *)&(a3))) = v28 + *(unsigned short *)(a4 + 30); /*0x757dec*/
          (*((unsigned short *)&(a1))) = v29 + *(unsigned short *)(a4 + 32); /*0x757df1*/
          (*((unsigned short *)&(a2))) = v30 + *(unsigned short *)(a4 + 34); /*0x757df6*/
          v18 = *(uint8_t *)(a4 + 48); /*0x757dff*/
          *(unsigned int *)(a4 + 12) += *(unsigned int *)(a4 + 16); /*0x757e02*/
          v21 = a1; /*0x757e09*/
          v35 = a2; /*0x757e0e*/
          ++v26; /*0x757e14*/
        }
        while ( v26 < v18 ); /*0x757e18*/
      }
      (*((unsigned short *)&(a3))) = v31 + *(unsigned short *)(a4 + 36); /*0x757e31*/
      (*((unsigned short *)&(a1))) = v32 + *(unsigned short *)(a4 + 38); /*0x757e36*/
      (*((unsigned short *)&(a2))) = v33 + *(unsigned short *)(a4 + 40); /*0x757e3b*/
      v8 = v34 + *(unsigned int *)(a4 + 20); /*0x757e40*/
      v21 = a1; /*0x757e4c*/
      v19 = v27 + 1 < (unsigned int)*(uint8_t *)(a4 + 49); /*0x757e50*/
      v35 = a2; /*0x757e52*/
      *(unsigned int *)(a4 + 12) = v8; /*0x757e56*/
      ++v27; /*0x757e59*/
    }
    while ( v19 ); /*0x757e5d*/
  }
  return v8; /*0x757e63*/
}
}
// 0x7581F0
namespace gamemd {
char ProcessVoxelColorSamples(int * a1, int a2, int a3, int * a4)
{
  int *v4; // ecx
  unsigned int v5; // esi
  unsigned short *v6; // eax
  int16_t v7; // dx
  char result; // al
  int *v9; // eax
  int *v10; // edx
  int *v11; // eax
  unsigned char *v12; // esi
  uint8_t *v13; // esi
  uint8_t v14; // al
  int v15; // eax
  char *v16; // esi
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  unsigned int v20; // edx
  unsigned int v21; // edx
  int *v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  unsigned int v25; // [esp+18h] [ebp-24h]
  unsigned int v26; // [esp+1Ch] [ebp-20h]
  int16_t v27; // [esp+20h] [ebp-1Ch]
  int16_t v28; // [esp+24h] [ebp-18h]
  int16_t v29; // [esp+28h] [ebp-14h]
  int16_t v30; // [esp+2Ch] [ebp-10h]
  int16_t v31; // [esp+30h] [ebp-Ch]
  int16_t v32; // [esp+34h] [ebp-8h]
  int v33; // [esp+38h] [ebp-4h]

  v4 = a4; /*0x7581f0*/
  g_VoxelOffsetTable[0] = 0; /*0x7581f7*/
  v5 = 1; /*0x758211*/
  if ( *((unsigned char *)a4 + 50) > 1u ) /*0x758216*/
  {
    v6 = (unsigned short *)(g_VoxelOffsetTable + 2); /*0x758218*/
    do /*0x75823f*/
    {
      v7 = *(v6 - 1); /*0x75821d*/
      v6 += 2; /*0x758221*/
      *(v6 - 1) = *((unsigned short *)a4 + 21) + v7; /*0x758228*/
      ++v5; /*0x758234*/
      *v6 = *((unsigned short *)a4 + 22) + *(v6 - 2); /*0x758235*/
    }
    while ( v5 < *((uint8_t *)a4 + 50) ); /*0x75823f*/
  }
  (*((unsigned short *)&(a3))) = *((unsigned short *)a4 + 12); /*0x758245*/
  (*((unsigned short *)&(a2))) = *((unsigned short *)a4 + 13); /*0x758249*/
  (*((unsigned short *)&(a4))) = *((unsigned short *)a4 + 14); /*0x75824d*/
  result = *((unsigned char *)v4 + 49); /*0x758252*/
  v26 = 0; /*0x758255*/
  if ( result ) /*0x75825f*/
  {
    do /*0x758415*/
    {
      (*(((unsigned short *)&(v9)) + 1)) = (*(((unsigned short *)&(a4)) + 1)); /*0x758266*/
      v32 = (int16_t)a4; /*0x75826d*/
      v33 = v4[3]; /*0x758276*/
      v30 = a3; /*0x75827a*/
      v31 = a2; /*0x75827e*/
      v25 = 0; /*0x758282*/
      if ( *((unsigned char *)v4 + 48) ) /*0x758271*/
      {
        do /*0x7583d4*/
        {
          v29 = (int16_t)a4; /*0x758297*/
          v10 = (int *)*v4; /*0x75829b*/
          v27 = a3; /*0x75829d*/
          v28 = a2; /*0x7582a1*/
          v11 = *(int **)(*v4 + 4 * v4[3]); /*0x7582a5*/
          if ( v11 != (int *)-1 ) /*0x7582ab*/
          {
            v12 = (char *)v11 + v4[2]; /*0x7582b4*/
            v11 = (int *)*((uint8_t *)v4 + 50); /*0x7582b8*/
            v22 = v11; /*0x7582bd*/
            if ( *((unsigned char *)v4 + 50) ) /*0x7582b8*/
            {
              do /*0x758394*/
              {
                (*((unsigned char *)&(v10))) = *v12; /*0x7582c7*/
                v13 = v12 + 1; /*0x7582c9*/
                v14 = (uint8_t)v10; /*0x7582ce*/
                (*((unsigned short *)&(v10))) = *((unsigned short *)v4 + 23) * (uint8_t)v10; /*0x7582d6*/
                (*((unsigned short *)&(a1))) = g_VoxelOffsetTable[v14]; /*0x7582e0*/
                a3 += (int)a1; /*0x7582e8*/
                (*((unsigned short *)&(a1))) = (*(((unsigned short *)&(g_VoxelOffsetTable[v14])) + 1)); /*0x7582ea*/
                a2 += (int)a1; /*0x7582f2*/
                a1 = (int *)((char *)a4 + (unsigned int)v10); /*0x7582f8*/
                v10 = (int *)((char *)v22 - v14); /*0x7582fe*/
                v15 = *v13; /*0x758302*/
                v16 = (char *)(v13 + 1); /*0x758304*/
                a4 = a1; /*0x758307*/
                v22 = v10; /*0x75830b*/
                if ( v15 ) /*0x75830f*/
                {
                  v24 = v15; /*0x758313*/
                  v22 = (int *)((char *)v10 - v15); /*0x758317*/
                  do /*0x75838b*/
                  {
                    v23 = *v16; /*0x75831f*/
                    v17 = (((unsigned char *)&(a3))[1]); /*0x758330*/
                    v18 = v17 | a2 & 0xFF00; /*0x758333*/
                    ++v16; /*0x758346*/
                    if ( (uint16_t)((uint16_t)a4 >> 8) > (uint8_t)byte_B1D5E0[v18] ) /*0x75834a*/
                    {
                      byte_B1D5E0[v18] = (((unsigned char *)&(a4))[1]); /*0x758350*/
                      g_VoxelRenderBuffer[v18] = v23; /*0x758356*/
                      g_VoxelDepthBuffer[v18] = v23; /*0x75835c*/
                      byte_B1D5E1[v18] = (((unsigned char *)&(a4))[1]); /*0x758362*/
                    }
                    (*((unsigned short *)&(v18))) = *((unsigned short *)v4 + 21); /*0x758368*/
                    (*((unsigned short *)&(v17))) = *((unsigned short *)v4 + 22); /*0x75836c*/
                    a3 += v18; /*0x758370*/
                    (*((unsigned short *)&(v18))) = *((unsigned short *)v4 + 23); /*0x758372*/
                    a2 += v17; /*0x758376*/
                    v10 = (int *)((char *)a4 + v18); /*0x75837c*/
                    v19 = v24 == 1; /*0x758382*/
                    a4 = (int *)((char *)a4 + v18); /*0x758383*/
                    --v24; /*0x758387*/
                  }
                  while ( !v19 ); /*0x75838b*/
                }
                (*(((unsigned short *)&(v11)) + 1)) = (*(((unsigned short *)&(v22)) + 1)); /*0x75838d*/
                v12 = v16 + 1; /*0x758391*/
              }
              while ( v22 ); /*0x758394*/
            }
          }
          (*((unsigned short *)&(v11))) = v29 + *((unsigned short *)v4 + 17); /*0x7583a1*/
          (*((unsigned short *)&(a3))) = v27 + *((unsigned short *)v4 + 15); /*0x7583ae*/
          (*((unsigned short *)&(a2))) = v28 + *((unsigned short *)v4 + 16); /*0x7583b3*/
          a4 = v11; /*0x7583b8*/
          v20 = *((uint8_t *)v4 + 48); /*0x7583c3*/
          v4[3] += v4[4]; /*0x7583c6*/
          v9 = (int *)++v25; /*0x7583cd*/
        }
        while ( v25 < v20 ); /*0x7583d4*/
      }
      (*((unsigned short *)&(v9))) = v32 + *((unsigned short *)v4 + 20); /*0x7583e2*/
      (*((unsigned short *)&(a3))) = v30 + *((unsigned short *)v4 + 18); /*0x7583ef*/
      (*((unsigned short *)&(a2))) = v31 + *((unsigned short *)v4 + 19); /*0x7583f4*/
      a4 = v9; /*0x7583f9*/
      v21 = *((uint8_t *)v4 + 49); /*0x758404*/
      v4[3] = v33 + v4[5]; /*0x758407*/
      result = ++v26; /*0x75840e*/
    }
    while ( v26 < v21 ); /*0x758415*/
  }
  return result; /*0x75841c*/
}
}
// 0x758430
namespace gamemd {
char ProcessVoxelScanSamples(unsigned int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  unsigned short *v6; // eax
  int16_t v7; // di
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  char *v12; // esi
  int v13; // eax
  char *v14; // esi
  int v15; // edx
  int v16; // eax
  bool v17; // zf
  unsigned int v18; // edx
  unsigned int v19; // [esp+10h] [ebp-30h]
  char v20; // [esp+14h] [ebp-2Ch]
  uint8_t v21; // [esp+14h] [ebp-2Ch]
  int v22; // [esp+18h] [ebp-28h]
  unsigned int v23; // [esp+1Ch] [ebp-24h]
  unsigned int v24; // [esp+20h] [ebp-20h]
  int16_t v25; // [esp+24h] [ebp-1Ch]
  int16_t v26; // [esp+28h] [ebp-18h]
  int16_t v27; // [esp+2Ch] [ebp-14h]
  int16_t v28; // [esp+30h] [ebp-10h]
  int16_t v29; // [esp+34h] [ebp-Ch]
  int16_t v30; // [esp+38h] [ebp-8h]
  int v31; // [esp+3Ch] [ebp-4h]

  v4 = a4; /*0x758430*/
  g_VoxelOffsetTable[0] = 0; /*0x758439*/
  v5 = 1; /*0x758450*/
  if ( *(unsigned char *)(a4 + 50) > 1u ) /*0x758455*/
  {
    v6 = (unsigned short *)(g_VoxelOffsetTable + 2); /*0x758457*/
    do /*0x75847e*/
    {
      v7 = *(unsigned short *)(a4 + 42) + *(v6 - 1); /*0x758462*/
      v6 += 2; /*0x758466*/
      *(v6 - 1) = v7; /*0x758469*/
      ++v5; /*0x758475*/
      *v6 = *(unsigned short *)(a4 + 44) + *(v6 - 2); /*0x758476*/
      a1 = *(uint8_t *)(a4 + 50); /*0x758479*/
    }
    while ( v5 < a1 ); /*0x75847e*/
  }
  (*((unsigned short *)&(a3))) = *(unsigned short *)(a4 + 24); /*0x758484*/
  (*((unsigned short *)&(a2))) = *(unsigned short *)(a4 + 26); /*0x758488*/
  (*((unsigned short *)&(a4))) = *(unsigned short *)(a4 + 28); /*0x75848c*/
  result = *(unsigned char *)(v4 + 49); /*0x758491*/
  v24 = 0; /*0x758494*/
  if ( result ) /*0x75849a*/
  {
    do /*0x758653*/
    {
      v28 = a3; /*0x7584a7*/
      v31 = *(unsigned int *)(v4 + 12); /*0x7584ab*/
      (*(((unsigned short *)&(v9)) + 1)) = (*(((unsigned short *)&(a4)) + 1)); /*0x7584af*/
      v30 = a4; /*0x7584b3*/
      v29 = a2; /*0x7584bc*/
      v23 = 0; /*0x7584c0*/
      if ( *(unsigned char *)(v4 + 48) ) /*0x7584b7*/
      {
        do /*0x758612*/
        {
          v27 = a4; /*0x7584d1*/
          v10 = *(unsigned int *)(v4 + 4); /*0x7584d5*/
          v25 = a3; /*0x7584d8*/
          v26 = a2; /*0x7584dc*/
          v11 = *(unsigned int *)(v10 + 4 * *(unsigned int *)(v4 + 12)); /*0x7584e0*/
          if ( v11 != -1 ) /*0x7584e6*/
          {
            v12 = (char *)(v11 + *(unsigned int *)(v4 + 8)); /*0x7584ef*/
            v11 = *(uint8_t *)(v4 + 50); /*0x7584f3*/
            v19 = v11; /*0x7584f8*/
            if ( *(unsigned char *)(v4 + 50) ) /*0x7584f3*/
            {
              do /*0x7585d2*/
              {
                v13 = (uint8_t)*v12; /*0x758504*/
                v14 = v12 - 1; /*0x758506*/
                if ( v13 ) /*0x758509*/
                {
                  v22 = v13; /*0x758513*/
                  v19 -= v13; /*0x758519*/
                  do /*0x75858d*/
                  {
                    v20 = *v14; /*0x758521*/
                    v15 = (((unsigned char *)&(a3))[1]); /*0x758532*/
                    v16 = v15 | a2 & 0xFF00; /*0x758535*/
                    --v14; /*0x758548*/
                    if ( (uint16_t)(((unsigned char *)&(a4))[1]) > (uint8_t)byte_B1D5E0[v16] ) /*0x75854c*/
                    {
                      byte_B1D5E0[v16] = (((unsigned char *)&(a4))[1]); /*0x758552*/
                      g_VoxelRenderBuffer[v16] = v20; /*0x758558*/
                      g_VoxelDepthBuffer[v16] = v20; /*0x75855e*/
                      byte_B1D5E1[v16] = (((unsigned char *)&(a4))[1]); /*0x758564*/
                    }
                    (*((unsigned short *)&(v16))) = *(unsigned short *)(v4 + 42); /*0x75856a*/
                    (*((unsigned short *)&(v15))) = *(unsigned short *)(v4 + 44); /*0x75856e*/
                    a3 += v16; /*0x758572*/
                    (*((unsigned short *)&(v16))) = *(unsigned short *)(v4 + 46); /*0x758574*/
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
                (*((unsigned short *)&(v10))) = *(unsigned short *)(v4 + 46) * v21; /*0x7585a0*/
                v11 = v21; /*0x7585a5*/
                (*((unsigned short *)&(a1))) = g_VoxelOffsetTable[v21]; /*0x7585aa*/
                a3 += a1; /*0x7585b2*/
                (*((unsigned short *)&(a1))) = (*(((unsigned short *)&(g_VoxelOffsetTable[v21])) + 1)); /*0x7585b4*/
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
          (*((unsigned short *)&(v11))) = v27 + *(unsigned short *)(v4 + 34); /*0x7585df*/
          (*((unsigned short *)&(a3))) = v25 + *(unsigned short *)(v4 + 30); /*0x7585ec*/
          (*((unsigned short *)&(a2))) = v26 + *(unsigned short *)(v4 + 32); /*0x7585f1*/
          a4 = v11; /*0x7585f6*/
          *(unsigned int *)(v4 + 12) += *(unsigned int *)(v4 + 16); /*0x758603*/
          v9 = v23 + 1; /*0x75860b*/
          v23 = v9; /*0x75860e*/
        }
        while ( v9 < *(uint8_t *)(v4 + 48) ); /*0x758612*/
      }
      (*((unsigned short *)&(v9))) = v30 + *(unsigned short *)(v4 + 40); /*0x758620*/
      (*((unsigned short *)&(a3))) = v28 + *(unsigned short *)(v4 + 36); /*0x75862d*/
      (*((unsigned short *)&(a2))) = v29 + *(unsigned short *)(v4 + 38); /*0x758632*/
      a4 = v9; /*0x758637*/
      v18 = *(uint8_t *)(v4 + 49); /*0x758642*/
      *(unsigned int *)(v4 + 12) = v31 + *(unsigned int *)(v4 + 20); /*0x758645*/
      result = ++v24; /*0x75864c*/
    }
    while ( v24 < v18 ); /*0x758653*/
  }
  return result; /*0x758659*/
}
}
// 0x758AD0
namespace gamemd {
AbstractClass * * E4Recv_758AD0::sub_758AD0(int * a2)
{

  int v3; // ebx
  void *vtable2; // eax
  void *vtable1; // edx
  void *vtable3; // ecx
  int v7; // edx
  unsigned int v9[4]; // [esp+Ch] [ebp-10h] BYREF

  v3 = 0; /*0x758ae2*/
  if ( !(*(int (**)(int *, int))(*a2 + 28))(a2, 2) ) /*0x758ae4*/
    goto LABEL_5; /*0x758ae4*/
  vtable2 = this->M8; /*0x758aed*/
  vtable1 = this->M4; /*0x758af0*/
  v9[0] = this->AbstractClass; /*0x758af3*/
  vtable3 = this->M12; /*0x758af7*/
  v9[2] = vtable2; /*0x758afa*/
  v9[1] = vtable1; /*0x758afe*/
  v7 = *a2; /*0x758b02*/
  v9[3] = vtable3; /*0x758b08*/
  if ( (*(int (**)(int *, unsigned int *, int))(v7 + 48))(a2, v9, 16) != 16 /*0x758b4a*/
    || (*(int (**)(int *, int, int))(*a2 + 48))(a2, this->?, 768) != 768
    || (*(int (**)(int *, int, int))(*a2 + 48))(a2, this->?, (int)this->? << 8) != (int)this->? << 8 )
  {
LABEL_5:
    v3 = 1; /*0x758b4c*/
  }
  (*(void (**)(int *))(*a2 + 52))(a2); /*0x758b55*/
  return v3; /*0x758b58*/

}
}
// 0x759180
namespace gamemd {
int sub_759180()
{
  AsyncIO_Instance = 0; /*0x759187*/
  dword_B45B60 = 0; /*0x75918c*/
  byte_B45B64 = 1; /*0x759191*/
  byte_B45B65 = 0; /*0x759198*/
  dword_B45B58 = (int)&vt_DynamicVectorClass; /*0x75919d*/
  dword_B45B6C = 10; /*0x7591a7*/
  g_AsyncIOState = 0; /*0x7591b1*/
  return atexit(sub_7591C0); /*0x7591bc*/
}
}
// 0x7591C0
namespace gamemd {
void sub_7591C0()
{
  dword_B45B58 = (int)&vt_VectorClass; /*0x7591c8*/
  if ( AsyncIO_Instance && byte_B45B65 ) /*0x7591dc*/
  {
    operator delete((void *)(AsyncIO_Instance)); /*0x7591df*/
    AsyncIO_Instance = 0; /*0x7591e7*/
  }
  byte_B45B65 = 0; /*0x7591ed*/
  dword_B45B60 = 0; /*0x7591f3*/
}
}
// 0x759790
namespace gamemd {
int E4Recv_759790::sub_759790()
{
  return Surface::CreateSurfacePalette(Surface *)this->u32_10 + 156);
}
}
// 0x75A120
namespace gamemd {
int E4Recv_75A120::sub_75A120(int a2, int * a3, int a4)
{
  BOOL result; // eax
  bool v6; // zf
  int v7; // eax
  int v9; // esi
  int v10; // esi
  int v11; // eax

  result = 1; /*0x75a127*/
  switch ( a2 ) /*0x75a136*/
  {
    case 1: /*0x75a136*/
    case 2: /*0x75a136*/
      goto LABEL_14;
    case 3: /*0x75a136*/
      a2 = 0; /*0x75a143*/
      a3 = 0; /*0x75a147*/
      if ( !LookupFileInfoCache((const char *)this->u32_1C0 + 4), 0, &a3, &a2, 0) ) /*0x75a15e*/
        goto LABEL_5; /*0x75a15e*/
      v6 = this->M4.vt_slot_32(a3[3], 1) == 0; /*0x75a17c*/
      v7 = this->M4; /*0x75a17e*/
      a2 = a2; /*0x75a180*/
      this->M112 = !v6; /*0x75a186*/
      result = (*(int (__thiscall **)(int, int, int))(v7 + 40))(&this->M4, a2, 1) == 0; /*0x75a191*/
      break; /*0x75a193*/
    case 4: /*0x75a136*/
      (*(void (__thiscall **)(int))(this->M4 + 52))&this->u32_10; /*0x75a273*/
      this->M112 = 0; /*0x75a278*/
      return 0; /*0x75a276*/
    case 5: /*0x75a136*/
      a4 = a4; /*0x75a1a0*/
      return this->M4.vt_slot_36(a3, a4) != a4; /*0x75a1b3*/
    case 6: /*0x75a136*/
  LABEL_5:
      result = 1; /*0x75a1b6*/
      break; /*0x75a1bc*/
    case 7: /*0x75a136*/
      result = this->M4.vt_slot_40(a4, a3) == 0; /*0x75a1d7*/
      break; /*0x75a1d8*/
    case 8: /*0x75a136*/
      if ( a4 <= 0 ) /*0x75a1e1*/
      {
        v10 = &this->M4; /*0x75a21c*/
        result = this->M4.vt_slot_40(a4, a3) == 0; /*0x75a22a*/
        if ( !result ) /*0x75a22b*/
        {
          result = (*(int (__thiscall **)(int, int *, int))(this->u32_28)(v10, &a4, 1) != 1; /*0x75a240*/
          if ( !result ) /*0x75a242*/
            result = (*(int (__thiscall **)(int, int, int))(this->u32_2C)(v10, -1, 1) == 0; /*0x75a254*/
        }
      }
      else
      {
        v9 = &this->M4; /*0x75a1ea*/
        result = this->M4.vt_slot_40(a4 - 1, a3) == 0; /*0x75a1f9*/
        if ( !result ) /*0x75a1fa*/
          result = (*(int (__thiscall **)(int, int *, int))(this->u32_28)(v9, &a4, 1) != 1; /*0x75a210*/
      }
      break; /*0x75a212*/
    case 9: /*0x75a136*/
      v11 = (*(int (__thiscall **)(int))(this->M4 + 44))&this->u32_10; /*0x75a25e*/
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
// 0x75A2F0
namespace gamemd {
unsigned int * * sub_75A2F0(int a1, int a2, unsigned int * Block, size_t Size)
{
  unsigned int *result; // eax

  switch ( a2 ) /*0x75a2fc*/
  {
    case 2: /*0x75a2fc*/
      result = malloc(Size); /*0x75a308*/
      break; /*0x75a310*/
    case 3: /*0x75a2fc*/
      free(Block); /*0x75a316*/
      result = 0; /*0x75a31e*/
      break; /*0x75a320*/
    case 4: /*0x75a2fc*/
    case 5: /*0x75a2fc*/
      result = Block; /*0x75a321*/
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
// 0x75A350
namespace gamemd {
int sub_75A350(int a1, int a2, unsigned char * a3, unsigned int a4)
{
  int v4; // ebx
  int i; // eax
  int result; // eax

  v4 = *(unsigned int *)(a1 + 172); /*0x75a359*/
  switch ( a2 ) /*0x75a367*/
  {
    case 2: /*0x75a367*/
      for ( i = 0; i < 256; ++i ) /*0x75a374*/
        a3[i] *= 4; /*0x75a37c*/
      memcpy((void *)(v4 + 516), a3, 0x300u); /*0x75a392*/
      *(unsigned char *)(v4 + 1320) = 1; /*0x75a395*/
      result = 0; /*0x75a39d*/
      break; /*0x75a3a0*/
    case 3: /*0x75a367*/
      if ( *(unsigned int *)(v4 + 1296) != -1 ) /*0x75a3a8*/
        sub_748380((uint16_t *)a3, a4 >> 1); /*0x75a3b4*/
      *(unsigned int *)(v4 + 1356) = *(unsigned int *)(v4 + 1284); /*0x75a3c1*/
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
// 0x75A7D0
namespace gamemd {
int AnimSystem_Reset(int a1)
{
  byte_B45BA8[a1 >> 3] |= 1 << (a1 & 7); /*0x75a7dc*/
  return a1 >> 3; /*0x75a7e2*/
}
int sub_75F230(unsigned int * a1, unsigned int * a2)
{
  int v2; // esi
  int v3; // edi
  double v4; // st7
  double v5; // st6
  int v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // [esp+10h] [ebp-8h]

  v2 = *a2 - *a1; /*0x75f239*/
  v3 = a1[1] - a2[1]; /*0x75f246*/
  v11 = Math::SinCos(0.3926990816987241); /*0x75f25a*/
  v4 = v11 / Math::ArcTan2(0.3926990816987241); /*0x75f26d*/
  if ( !v2 ) /*0x75f276*/
    goto LABEL_11; /*0x75f276*/
  v5 = (double)v3 / (double)v2; /*0x75f280*/
  if ( v5 >= 1.0 / v4 ) /*0x75f299*/
  {
    if ( v5 >= v4 ) /*0x75f2ba*/
      goto LABEL_8; /*0x75f2ba*/
  }
  else if ( v5 >= v4 ) /*0x75f29e*/
  {
    v6 = (v2 <= 0) - 1; /*0x75f2a8*/
    (v6) = ((v6) & ~0xFF) | ((unsigned int)(v6 & 0xFC) & 0xFF); /*0x75f2ac*/
    return v6 + 5; /*0x75f2b6*/
  }
  if ( v5 >= -v4 ) /*0x75f2c9*/
  {
    v8 = (v2 <= 0) - 1; /*0x75f2d3*/
    (v8) = ((v8) & ~0xFF) | ((unsigned int)(v8 & 0xFC) & 0xFF); /*0x75f2d7*/
    return v8 + 6; /*0x75f2e1*/
  }
  LABEL_8:
  if ( v5 < -v4 && v5 >= -1.0 / v4 ) /*0x75f304*/
  {
    v9 = (v2 <= 0) - 1; /*0x75f30e*/
    (v9) = ((v9) & ~0xFF) | ((unsigned int)(v9 & 0xFC) & 0xFF); /*0x75f310*/
    return v9 + 7; /*0x75f318*/
  }
  LABEL_11:
  v10 = (v3 <= 0) - 1; /*0x75f31d*/
  (v10) = ((v10) & ~0xFF) | ((unsigned int)(v10 & 0xFC) & 0xFF); /*0x75f326*/
  return v10 + 4; /*0x75f2b3*/
}
}
// 0x7500F0
namespace gamemd {
int sub_7500F0()
{
  dword_B1D300 = 0; /*0x7500f2*/
  dword_B1D304 = 0; /*0x7500f7*/
  dword_B1D308 = 0; /*0x7500fc*/
  dword_B1D30C = 0; /*0x750101*/
  return 0; /*0x750106*/
}
} // namespace gamemd

// 0x750110
namespace gamemd {
void sub_750110()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75011c*/
  dbl_B1D318 = Math::Sqrt(v0 + v0); /*0x75012e*/
}
} // namespace gamemd

// 0x750140
namespace gamemd {
void sub_750140()
{
  dbl_B1D398 = dbl_B1D318 / 60.0; /*0x75014c*/
}
} // namespace gamemd

// 0x750160
namespace gamemd {
void sub_750160()
{
  dbl_B1D360 = 1.0 / dbl_B1D398; /*0x75016c*/
}
} // namespace gamemd

// 0x750180
namespace gamemd {
void sub_750180()
{
  dbl_B1D358 = 0.0174532925199433 * 45.0; /*0x75018c*/
}
} // namespace gamemd

// 0x7501A0
namespace gamemd {
void sub_7501A0()
{
  dbl_B1D330 = 0.0174532925199433 * 60.0; /*0x7501ac*/
}
} // namespace gamemd

// 0x7501C0
namespace gamemd {
void sub_7501C0()
{
  dbl_B1D2F8 = 0.0174532925199433 * 90.0; /*0x7501cc*/
}
} // namespace gamemd

// 0x7501E0
namespace gamemd {
long long sub_7501E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D2F8 - dbl_B1D330); /*0x7501f2*/
  result = Math::RoundToInt(v0 * dbl_B1D318 * 0.5); /*0x750206*/
  dword_B1D3A0 = result; /*0x75020b*/
  return result; /*0x750210*/
}
} // namespace gamemd

// 0x750220
namespace gamemd {
void sub_750220()
{
  dbl_B1D338 = Math::ArcTan((double)dword_B1D3A0 * 0.00390625); /*0x750237*/
}
} // namespace gamemd

// 0x750250
namespace gamemd {
void sub_750250()
{
  dbl_B1D350 = Math::ArcTan((double)(2 * dword_B1D3A0) / dbl_B1D318); /*0x750272*/
}
} // namespace gamemd

// 0x750280
namespace gamemd {
long long sub_750280()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D3A0) + 0.5); /*0x75029b*/
  dword_B1D390 = result; /*0x7502a0*/
  return result; /*0x7502a6*/
}
} // namespace gamemd

// 0x7502B0
namespace gamemd {
int sub_7502B0()
{
  word_B1D310 = 0; /*0x7502b2*/
  word_B1D312 = 0; /*0x7502b8*/
  return 0; /*0x7502be*/
}
} // namespace gamemd

// 0x7502C0
namespace gamemd {
int sub_7502C0()
{
  dword_B1D340 = 0; /*0x7502c2*/
  dword_B1D344 = 0; /*0x7502c7*/
  dword_B1D348 = 0; /*0x7502cc*/
  return 0; /*0x7502d1*/
}
} // namespace gamemd

// 0x7502E0
namespace gamemd {
int sub_7502E0()
{
  dword_B1D370 = 0; /*0x7502e5*/
  dword_B1D368 = 128; /*0x7502ef*/
  dword_B1D36C = 128; /*0x7502f4*/
  return 128; /*0x7502f9*/
}
} // namespace gamemd

// 0x750300
namespace gamemd {
int sub_750300()
{
  g_VocAudioConfig = 0; /*0x750307*/
  dword_B1D380 = 0; /*0x75030c*/
  byte_B1D384 = 1; /*0x750311*/
  byte_B1D385 = 0; /*0x750318*/
  dword_B1D378 = (int)&vt_DynamicVectorClass; /*0x75031d*/
  dword_B1D38C = 10; /*0x750327*/
  g_VocPlayState = 0; /*0x750331*/
  return atexit(sub_750340); /*0x75033c*/
}
} // namespace gamemd

// 0x750340
namespace gamemd {
void sub_750340()
{
  dword_B1D378 = (int)&vt_VectorClass; /*0x750348*/
  if ( g_VocAudioConfig && byte_B1D385 ) /*0x75035c*/
  {
    operator delete((void *)(g_VocAudioConfig)); /*0x75035f*/
    g_VocAudioConfig = 0; /*0x750367*/
  }
  byte_B1D385 = 0; /*0x75036d*/
  dword_B1D380 = 0; /*0x750373*/
}
} // namespace gamemd

// 0x7509E0
namespace gamemd {
int * StartAudioControllerAt(int aP0, unsigned int *a2, int **a1)
{
  int *v5; // esi
  unsigned int *v6; // edi
  int v7; // ebp
  int *v8; // eax
  double v9; // st7
  unsigned int v10; // eax
  unsigned int v11; // ebx

  if ( !VocClass_VoicesEnabled ) /*0x7509ea*/
    return 0; /*0x7509ec*/
  v5 = 0; /*0x7509f5*/
  v6 = 0; /*0x7509f7*/
  if ( aP0 >= 0 && aP0 < g_VocPlayState ) /*0x750a03*/
    v6 = (unsigned int *)**((unsigned int **)g_VocAudioConfig + aP0); /*0x750a0d*/
  v7 = (int)a1; /*0x750a0f*/
  if ( a1 ) /*0x750a15*/
  {
    v8 = AudioSource::Get(a1); /*0x750a19*/
    v5 = v8; /*0x750a1e*/
    if ( v8 ) /*0x750a22*/
    {
      if ( (unsigned int *)sub_406310(v8) != v6 ) /*0x750a2d*/
      {
        VocClass::Release((int)v5); /*0x750a31*/
        v5 = 0; /*0x750a36*/
      }
    }
  }
  if ( v6 ) /*0x750a3a*/
  {
    v9 = ComputeAudioPosition(a2, &a1, *(float *)&v6); /*0x750a43*/
    if ( v9 <= 0.0 ) /*0x750a53*/
    {
      if ( v5 ) /*0x750a9a*/
      {
        VocClass::Release((int)v5); /*0x750a9e*/
        v5 = 0; /*0x750aa3*/
      }
    }
    else
    {
      (*((unsigned short *)&(v10))) = Math::RoundToInt(v9 * 16384.0); /*0x750a5b*/
      v11 = v10; /*0x750a60*/
      if ( v10 >= 0x4000 ) /*0x750a68*/
        v11 = 0x4000; /*0x750a6a*/
      if ( v5 || (v5 = AudioPool::ProcessQueue(v6)) != 0 ) /*0x750a7e*/
      {
        AudioMixer::PlayBuffer(v5, v11); /*0x750a84*/
        AudioMixer::RequestOrEndBuffer((int)v5, (unsigned int)a1); /*0x750a8f*/
      }
    }
  }
  if ( v7 ) /*0x750aa7*/
    SetAudioSource(v7, v5, (int)v6); /*0x750aae*/
  return v5; /*0x7509ee*/
}
} // namespace gamemd

// 0x750E20
namespace gamemd {
int PlayAudioAt2(IUnknown * aP0, unsigned int * a1, int a3)
{
  int *result; // eax
  int v6; // esi
  int *started; // edi
  int v8; // eax

  if ( aP0 < 0 ) /*0x750e29*/
    return 0; /*0x750e2d*/
  result = LinkedList::Next((int **)dword_B1D3A4); /*0x750e39*/
  v6 = (int)result; /*0x750e3e*/
  if ( result ) /*0x750e42*/
  {
    AudioController::Init(result + 3); /*0x750e50*/
    DListNode::InitEmpty((unsigned int *)v6); /*0x750e57*/
    *(unsigned int *)(v6 + 48) = 0; /*0x750e5c*/
    *(unsigned int *)(v6 + 32) = *a1; /*0x750e6b*/
    *(unsigned int *)(v6 + 36) = a1[1]; /*0x750e70*/
    *(unsigned int *)(v6 + 40) = a1[2]; /*0x750e76*/
    *(unsigned int *)(v6 + 44) = a3; /*0x750e7f*/
    started = StartAudioControllerAt(aP0, (unsigned int *)(v6 + 32), (int **)(v6 + 12)); /*0x750e8e*/
    InsertAfterDListNode((int)unk_B1D320, (unsigned int *)v6); /*0x750e90*/
    v8 = ++dword_B1D3A8; /*0x750ea0*/
    if ( dword_B1D3A8 > dword_B1D3AC ) /*0x750ea9*/
      dword_B1D3AC = v8; /*0x750eab*/
    return started; /*0x750eb0*/
  }
  return result; /*0x750e2b*/
}
} // namespace gamemd

// 0x750EC0
namespace gamemd {
int VocClass_Update()
{
  int result; // eax
  int v1; // esi
  int v2; // ebx
  int v3; // eax

  result = ((AudioQueue *)(&unk_B1D320))->GetNext(); /*0x750ec6*/
  v1 = result; /*0x750ecb*/
  if ( result ) /*0x750ecf*/
  {
    do /*0x750f30*/
    {
      v2 = ((AudioQueue *)(v1))->GetNextAlt(); /*0x750eda*/
      if ( !v1->u32_30 ) /*0x750edc*/
        StartAudioController(v1 + 32, v1 + 12); /*0x750ee9*/
      result = AudioSource::Get(v1 + 12); /*0x750ef3*/
      if ( !result ) /*0x750efa*/
      {
        v3 = VocClass::Check(v1 + 12); /*0x750efe*/
        if ( !v3 || (result = AudioMixer::SetVolume(v3)) == 0 ) /*0x750f10*/
        {
          LinkedList::Init(v1); /*0x750f14*/
          result = PushFrontLinkedListAlt(dword_B1D3A4, v1); /*0x750f21*/
          --dword_B1D3A8; /*0x750f26*/
        }
      }
      v1 = v2; /*0x750f2e*/
    }
    while ( v2 ); /*0x750f30*/
  }
  return result; /*0x750f34*/
}
} // namespace gamemd

// 0x750F40
namespace gamemd {
int sub_750F40(unsigned int * a1, int a2)
{
  int result; // eax
  int *i; // esi

  result = ((AudioQueue *)(unk_B1D320))->GetNext(); /*0x750f4c*/
  for ( i = (int *)result; result; i = (int *)result ) /*0x750f55*/
  {
    if ( (a2 & i->q02C) != 0 && i->u32_20 == *a1 && i->u32_24 == a1[1] && i->u32_28 == a1[2] ) /*0x750f77*/
      AudioFile::Stop(i + 3); /*0x750f7c*/
    result = ((AudioQueue *)(i))->GetNextAlt(); /*0x750f83*/
  }
  return result; /*0x750f8e*/
}
} // namespace gamemd

// 0x751040
namespace gamemd {
int sub_751040()
{
  int result; // eax
  int i; // esi
  int *v2; // eax

  result = ((AudioQueue *)(unk_B1D320))->GetNext(); /*0x751046*/
  for ( i = result; result; i = result ) /*0x75104f*/
  {
    ++i->u32_30; /*0x751055*/
    v2 = AudioSource::Get(&i->u32_C); /*0x75105b*/
    if ( v2 ) /*0x751062*/
      sub_4053E0((int)v2); /*0x751066*/
    result = ((AudioQueue *)((int *)i))->GetNextAlt(); /*0x75106d*/
  }
  return result; /*0x751078*/
}
} // namespace gamemd

// 0x751080
namespace gamemd {
int sub_751080()
{
  int result; // eax
  int i; // esi
  int v2; // eax
  int *v3; // eax

  result = ((AudioQueue *)(unk_B1D320))->GetNext(); /*0x751086*/
  for ( i = result; result; i = result ) /*0x75108f*/
  {
    if ( i->u32_30 ) /*0x751091*/
    {
      v2 = i->u32_30 - 1; /*0x75109b*/
      i->u32_30 = v2; /*0x75109e*/
      if ( v2 < 0 ) /*0x7510a1*/
        i->u32_30 = 0; /*0x7510a3*/
      v3 = AudioSource::Get(&i->u32_C); /*0x7510ad*/
      if ( v3 ) /*0x7510b4*/
        sub_405430((int)v3); /*0x7510b8*/
    }
    result = ((AudioQueue *)((int *)i))->GetNextAlt(); /*0x7510bf*/
  }
  return result; /*0x7510ca*/
}
} // namespace gamemd

// 0x7518C0
namespace gamemd {
void VocClass_SetEnabled(char a1)
{
  VocClass_VoicesEnabled = a1; /*0x7518c0*/
}
} // namespace gamemd

// 0x751EA0
namespace gamemd {
HANDLE sub_751EA0(const CHAR * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4)
{
  const char *v4; // edi
  HANDLE result; // eax
  void *v7; // esi
  HANDLE v9; // [esp+10h] [ebp-248h]
  CHAR FileName[260]; // [esp+14h] [ebp-244h] BYREF
  struct _WIN32_FIND_DATAA FindFileData; // [esp+118h] [ebp-140h] BYREF

  v4 = a1; /*0x751eb0*/
  result = FindFirstFileA(a1, &FindFileData); /*0x751eba*/
  v7 = result; /*0x751ec0*/
  v9 = result; /*0x751ec5*/
  if ( result != (HANDLE)-1 ) /*0x751ec9*/
  {
    do /*0x751fef*/
    {
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 ) /*0x751edf*/
      {
        if ( _strcmpi(FindFileData.cFileName, asc_826598) ) /*0x751ef2*/
        {
          if ( _strcmpi(FindFileData.cFileName, asc_846610) ) /*0x751f0f*/
          {
            ++*a2; /*0x751f29*/
            strcpy(FileName, v4); /*0x751f43*/
            FileName[strlen(FileName) - 1] = 0; /*0x751f61*/
            strcat(FileName, FindFileData.cFileName); /*0x751f7f*/
            strcat(FileName, asc_84660C); /*0x751fab*/
            sub_751EA0(a3, a4); /*0x751fc2*/
            v7 = v9; /*0x751fc7*/
            v4 = a1; /*0x751fcb*/
          }
        }
      }
      else
      {
        ++*a3; /*0x751fdb*/
        *a4 += FindFileData.nFileSizeLow; /*0x751fe4*/
      }
    }
    while ( FindNextFileA(v7, &FindFileData) ); /*0x751fef*/
    return (HANDLE)FindClose(v7); /*0x751ffe*/
  }
  return result; /*0x752005*/
}
} // namespace gamemd

// 0x752020
namespace gamemd {
void sub_752020()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75202c*/
  dbl_B1D3E8 = Math::Sqrt(v0 + v0); /*0x75203e*/
}
} // namespace gamemd

// 0x752050
namespace gamemd {
void sub_752050()
{
  dbl_B1D490 = dbl_B1D3E8 / 60.0; /*0x75205c*/
}
} // namespace gamemd

// 0x752070
namespace gamemd {
void sub_752070()
{
  dbl_B1D438 = 1.0 / dbl_B1D490; /*0x75207c*/
}
} // namespace gamemd

// 0x752090
namespace gamemd {
void sub_752090()
{
  dbl_B1D430 = 0.0174532925199433 * 45.0; /*0x75209c*/
}
} // namespace gamemd

// 0x7520B0
namespace gamemd {
void sub_7520B0()
{
  dbl_B1D400 = 0.0174532925199433 * 60.0; /*0x7520bc*/
}
} // namespace gamemd

// 0x7520D0
namespace gamemd {
void sub_7520D0()
{
  dbl_B1D3C0 = 0.0174532925199433 * 90.0; /*0x7520dc*/
}
} // namespace gamemd

// 0x7520F0
namespace gamemd {
long long sub_7520F0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B1D3C0 - dbl_B1D400); /*0x752102*/
  result = Math::RoundToInt(v0 * dbl_B1D3E8 * 0.5); /*0x752116*/
  dword_B1D498 = result; /*0x75211b*/
  return result; /*0x752120*/
}
} // namespace gamemd

// 0x752130
namespace gamemd {
void sub_752130()
{
  dbl_B1D408 = Math::ArcTan((double)dword_B1D498 * 0.00390625); /*0x752147*/
}
} // namespace gamemd

// 0x752160
namespace gamemd {
void sub_752160()
{
  dbl_B1D420 = Math::ArcTan((double)(2 * dword_B1D498) / dbl_B1D3E8); /*0x752182*/
}
} // namespace gamemd

// 0x752190
namespace gamemd {
long long sub_752190()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B1D498) + 0.5); /*0x7521ab*/
  dword_B1D488 = result; /*0x7521b0*/
  return result; /*0x7521b6*/
}
} // namespace gamemd

// 0x7521C0
namespace gamemd {
int sub_7521C0()
{
  word_B1D3D4 = 0; /*0x7521c2*/
  word_B1D3D6 = 0; /*0x7521c8*/
  return 0; /*0x7521ce*/
}
} // namespace gamemd

// 0x7521D0
namespace gamemd {
int sub_7521D0()
{
  dword_B1D410 = 0; /*0x7521d2*/
  dword_B1D414 = 0; /*0x7521d7*/
  dword_B1D418 = 0; /*0x7521dc*/
  return 0; /*0x7521e1*/
}
} // namespace gamemd

// 0x7521F0
namespace gamemd {
int sub_7521F0()
{
  dword_B1D448 = 0; /*0x7521f5*/
  dword_B1D440 = 128; /*0x7521ff*/
  dword_B1D444 = 128; /*0x752204*/
  return 128; /*0x752209*/
}
} // namespace gamemd

// 0x752210
namespace gamemd {
int sub_752210()
{
  g_InfantryRenderPool = 0; /*0x752217*/
  dword_B1D4A8 = 0; /*0x75221c*/
  byte_B1D4AC = 1; /*0x752221*/
  byte_B1D4AD = 0; /*0x752228*/
  dword_B1D4A0 = (int)&vt_DynamicVectorClass; /*0x75222d*/
  dword_B1D4B4 = 10; /*0x752237*/
  g_InfantrySelectState = 0; /*0x752241*/
  return atexit(sub_752250); /*0x75224c*/
}
} // namespace gamemd

// 0x752250
namespace gamemd {
void sub_752250()
{
  dword_B1D4A0 = (int)&vt_VectorClass; /*0x752258*/
  if ( g_InfantryRenderPool && byte_B1D4AD ) /*0x75226c*/
  {
    operator delete((void *)(g_InfantryRenderPool)); /*0x75226f*/
    g_InfantryRenderPool = 0; /*0x752277*/
  }
  byte_B1D4AD = 0; /*0x75227d*/
  dword_B1D4A8 = 0; /*0x752283*/
}
} // namespace gamemd

// 0x7529A0
namespace gamemd {
void ThemeClass_Stop(char a1)
{
  if ( dword_B1D4C4 ) /*0x7529aa*/
  {
    *(unsigned int *)(dword_B1D4C4 + 80) = 2; /*0x7529ac*/
    dword_B1D4C4 = 0; /*0x7529b3*/
  }
  if ( g_InfantryDrawState ) /*0x7529c5*/
    Audio::Release(g_InfantryDrawState); /*0x7529c7*/
  if ( a1 ) /*0x7529cf*/
    ThemeClass::ClearQueues(); /*0x7529d1*/
}
} // namespace gamemd

// 0x752CA0
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ()
{
  if ( dword_B1D4D8 ) /*0x752ca8*/
    Audio::Release(dword_B1D4D8); /*0x752caa*/
}
} // namespace gamemd

// 0x7532BE
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_21()
{
  return 1; /*0x7532c0*/
}
} // namespace gamemd

// 0x7533A0
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_22()
{
  return 1; /*0x7533a2*/
}
} // namespace gamemd

// 0x753510
namespace gamemd {
void ____F_m_badAllocExceptionPtr___ExceptionPtr__0V__shared_ptr___ExceptionPtr___tr1_std__A__YAXXZ_1()
{
  if ( dword_B1D4D8 ) /*0x753518*/
    AudioMixer::ProcessAudioFrame((int)dword_B1D4D8); /*0x75351a*/
}
} // namespace gamemd

// 0x7539B0
namespace gamemd {
int sub_7539B0()
{
  dword_B2D810 = 0; /*0x7539b2*/
  dword_B2D814 = 0; /*0x7539b7*/
  dword_B2D818 = 0; /*0x7539bc*/
  dword_B2D81C = 0; /*0x7539c1*/
  return 0; /*0x7539c6*/
}
} // namespace gamemd

// 0x7539D0
namespace gamemd {
int sub_7539D0()
{
  dword_B2D92C = 256; /*0x7539e4*/
  dword_B2D930 = 256; /*0x7539e9*/
  dword_B2D934 = 0; /*0x7539ee*/
  dword_B2D928 = (int)&XSurface_Vtable; /*0x7539f8*/
  dword_B2D938 = 1; /*0x753a02*/
  Buffer::Init(stru_B2D93C, (int)g_VoxelRenderBuffer, 0x10000); /*0x753a0c*/
  dword_B2D928 = (int)&BSurface_Vtable; /*0x753a16*/
  return atexit(sub_753A30); /*0x753a26*/
}
} // namespace gamemd

// 0x753A30
namespace gamemd {
void sub_753A30()
{
  Vector::Clear((int)&stru_B2D93C); /*0x753a35*/
  dword_B2D928 = (int)&Surface_Vtable; /*0x753a3a*/
}
} // namespace gamemd

// 0x753A50
namespace gamemd {
int sub_753A50()
{
  dword_B2D7F4 = 256; /*0x753a64*/
  dword_B2D7F8 = 256; /*0x753a69*/
  dword_B2D7FC = 0; /*0x753a6e*/
  dword_B2D7F0 = (int)&XSurface_Vtable; /*0x753a78*/
  dword_B2D800 = 1; /*0x753a82*/
  Buffer::Init(stru_B2D804, (int)byte_B1D5E0, 0x10000); /*0x753a8c*/
  dword_B2D7F0 = (int)&BSurface_Vtable; /*0x753a96*/
  return atexit(sub_753AB0); /*0x753aa6*/
}
} // namespace gamemd

// 0x753AB0
namespace gamemd {
void sub_753AB0()
{
  Vector::Clear((int)&stru_B2D804); /*0x753ab5*/
  dword_B2D7F0 = (int)&Surface_Vtable; /*0x753aba*/
}
} // namespace gamemd

// 0x753AF0
namespace gamemd {
int sub_753AF0()
{
  dword_B2FB60 = 0; /*0x753af2*/
  dword_B2FB64 = 0; /*0x753af7*/
  dword_B2FB68 = 255; /*0x753b01*/
  dword_B2FB6C = 255; /*0x753b06*/
  return 255; /*0x753b0b*/
}
} // namespace gamemd

// 0x753B10
namespace gamemd {
int sub_753B10()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&dword_B2D980; /*0x753b12*/
  v1 = 64; /*0x753b17*/
  do /*0x753b32*/
  {
    result = Array::ForEach((int)v0, 12, 8, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b26*/
    v0 += 136; /*0x753b2b*/
    --v1; /*0x753b31*/
  }
  while ( v1 ); /*0x753b32*/
  return result; /*0x753b34*/
}
} // namespace gamemd

// 0x753B40
namespace gamemd {
int sub_753B40()
{
  char *v0; // esi
  int v1; // edi
  int result; // eax

  v0 = (char *)&dword_B3FF84; /*0x753b42*/
  v1 = 64; /*0x753b47*/
  do /*0x753b5f*/
  {
    result = Array::ForEach((int)v0, 12, 4, (int (__thiscall *)(int))__0Iostream_init_QAE_XZ_8); /*0x753b56*/
    v0 += 72; /*0x753b5b*/
    --v1; /*0x753b5e*/
  }
  while ( v1 ); /*0x753b5f*/
  return result; /*0x753b61*/
}
} // namespace gamemd

// 0x753BF0
namespace gamemd {
char * sub_753BF0(char a1, char a2, int a3, int a4, char a5, char a6, char a7, char a8)
{
  unsigned short *v8; // esi
  char *result; // eax
  int v10; // ebx
  int v11; // ebp

  v8 = &unk_B2D5EC; /*0x753bf6*/
  result = (char *)&unk_B2FB79; /*0x753bfd*/
  do /*0x753c4a*/
  {
    (*((unsigned char *)&(a3))) = (uint8_t)*(result - 1) >> a2; /*0x753c07*/
    result += 3; /*0x753c0b*/
    ++v8; /*0x753c0e*/
    (*((unsigned short *)&(a4))) = (uint8_t)a3; /*0x753c11*/
    (*((unsigned short *)&(a3))) = (uint8_t)((uint8_t)*(result - 2) >> a7); /*0x753c24*/
    v10 = a3 << a8; /*0x753c28*/
    v11 = v10 | (a4 << a1); /*0x753c2e*/
    (*((unsigned short *)&(v10))) = (uint8_t)((uint8_t)*(result - 3) >> a5); /*0x753c39*/
    a3 = v10 << a6; /*0x753c3d*/
    a4 = a3 | v11; /*0x753c3f*/
    *(v8 - 1) = a4; /*0x753c46*/
  }
  while ( result < byte_B2FE79 ); /*0x753c4a*/
  return result; /*0x753c4c*/
}
}
// 0x753C60
namespace gamemd {
char * sub_753C60()
{
  return g_VoxelRenderBuffer; /*0x753c65*/
}
} // namespace gamemd

// 0x753C80
namespace gamemd {
char globalHelper_053C80(unsigned int * a1, SomeVoxelCache * edx0, SomeVoxelCache * aP2, float * a4, float * a2)
{
  float *v7; // eax
  int Info; // eax
  float *v10; // [esp+0h] [ebp-88h]
  float v11[3]; // [esp+10h] [ebp-78h] BYREF
  int v12[3]; // [esp+1Ch] [ebp-6Ch] BYREF
  float v13[12]; // [esp+28h] [ebp-60h] BYREF
  float v14[12]; // [esp+58h] [ebp-30h] BYREF

  memcpy(v13, InvertMatrix3x3Signs(v14, a4), sizeof(v13)); /*0x753cad*/
  v7 = (float *)Matrix3x3::TransformPoint(v12, a2, v10); /*0x753cb9*/
  v11[0] = *v7; /*0x753cc0*/
  v11[1] = v7[1]; /*0x753cc7*/
  v11[2] = v7[2]; /*0x753cd9*/
  Info = VoxelSection::GetInfo(a1, edx0, aP2); /*0x753cdd*/
  return GlobalHelper_053C80_Helper(v11, *(uint8_t *)(Info + 163)); /*0x753cf3*/
}
} // namespace gamemd

// 0x753F90
namespace gamemd {
char * globalHelper_053F90(unsigned int * a0, ObjectClass * aP1, SomeVoxelCache * aP2, float * a3, float * a4, float * a5, int a7, int a8, int a9)
{
  int Info; // eax
  int v12; // ebp
  VoxelSection **v13; // ecx
  float *v14; // esi
  float *v15; // ebx
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  float v20; // [esp+10h] [ebp-24h]
  float v21; // [esp+14h] [ebp-20h]
  float v22; // [esp+18h] [ebp-1Ch]
  float v23[3]; // [esp+1Ch] [ebp-18h] BYREF
  float v24[3]; // [esp+28h] [ebp-Ch] BYREF

  Info = VoxelSection::GetInfo(a0, (int)aP1, (int)aP2); /*0x753fa1*/
  v12 = 4; /*0x753fac*/
  v13 = (VoxelSection **)(72 * dword_B2FB70 + 11796344); /*0x753fb8*/
  v13[15] = a7; /*0x753fbf*/
  v13[16] = a8; /*0x753fc6*/
  *v13 = a0; /*0x753fcd*/
  v13[1] = aP1; /*0x753fd3*/
  v13[2] = aP2; /*0x753fd6*/
  v13[17] = a9; /*0x753fd9*/
  v14 = &v13->u32_3; /*0x753fdc*/
  v15 = (float *)(Info + 64); /*0x753fdf*/
  do /*0x7540c6*/
  {
    v16 = TransformMatrix3x4Point(v23, a4, v15); /*0x753feb*/
    *v14 = *v16; /*0x753ff5*/
    v14[1] = v16[1]; /*0x753ffa*/
    v14[2] = v16[2]; /*0x754004*/
    v14[2] = 0.0; /*0x75400b*/
    v17 = TransformMatrix3x4Point(v24, a3, v14); /*0x754012*/
    *v14 = *v17; /*0x75401b*/
    v14[1] = v17[1]; /*0x754020*/
    v14[2] = v17[2]; /*0x754026*/
    v20 = *a5 + *v14; /*0x75402d*/
    v21 = v14[1] + a5[1]; /*0x75403b*/
    v18 = a5[2] + v14[2]; /*0x754042*/
    *v14 = v20; /*0x754049*/
    v22 = v18; /*0x75404b*/
    v14[1] = v21; /*0x754053*/
    v14[2] = v22; /*0x754056*/
    v14[1] = -v14[1]; /*0x75405e*/
    if ( *v14 < (double)*(float *)&dword_B2D5E0 ) /*0x75406e*/
      dword_B2D5E0 = *(unsigned int *)v14; /*0x754072*/
    if ( v14[1] < (double)*(float *)&dword_B2D5E4 ) /*0x754085*/
      dword_B2D5E4 = v14->vtable2; /*0x75408a*/
    if ( *v14 > (double)*(float *)&stru_B2D93C.Buffer_field_0C ) /*0x75409d*/
      stru_B2D93C.Buffer_field_0C = *(int *)v14; /*0x7540a1*/
    if ( v14[1] > (double)*(float *)&stru_B2D93C.Buffer_field_10 ) /*0x7540b5*/
      stru_B2D93C.Buffer_field_10 = (int)v14[1]; /*0x7540ba*/
    v15 += 3; /*0x7540bf*/
    v14 += 3; /*0x7540c2*/
    --v12; /*0x7540c5*/
  }
  while ( v12 ); /*0x7540c6*/
  return ++dword_B2FB70; /*0x7540d1*/
}
} // namespace gamemd

// 0x754740
namespace gamemd {
int sub_754740(int a1, int a2, unsigned int a3, int a4)
{
  int result; // eax
  char *v5; // esi
  int v6; // edx
  char *v7; // edi

  if ( a1 < 0 || a2 < 0 || (int)(a1 + a3) > 255 || (result = a2 + a4, a2 + a4 > 255) ) /*0x754763*/
  {
    memset(g_VoxelRenderBuffer, 0, 0x10000u); /*0x7547ac*/
    return 0; /*0x7547a5*/
  }
  else if ( a2 <= result ) /*0x754767*/
  {
    v5 = &g_VoxelRenderBuffer[256 * a2 + a1]; /*0x754773*/
    v6 = a4 + 1; /*0x75477a*/
    do /*0x754797*/
    {
      result = 0; /*0x75477e*/
      memset(v5, 0, 4 * (a3 >> 2)); /*0x754787*/
      v7 = &v5[4 * (a3 >> 2)]; /*0x754787*/
      v5 += 256; /*0x75478b*/
      --v6; /*0x754794*/
      memset(v7, 0, a3 & 3); /*0x754795*/
    }
    while ( v6 ); /*0x754797*/
  }
  return result; /*0x75479b*/
}
} // namespace gamemd

// 0x754900
namespace gamemd {
Iostream_init * E4Recv_754900::__0Iostream_init_QAE_XZ_8()
{
  return this; /*0x754902*/
}
} // namespace gamemd

// 0x754910
namespace gamemd {
void sub_754910()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75491c*/
  dbl_B43EF8 = Math::Sqrt(v0 + v0); /*0x75492e*/
}
} // namespace gamemd

// 0x754940
namespace gamemd {
void sub_754940()
{
  dbl_B45180 = dbl_B43EF8 / 60.0; /*0x75494c*/
}
} // namespace gamemd

// 0x754960
namespace gamemd {
void sub_754960()
{
  dbl_B450A0 = 1.0 / dbl_B45180; /*0x75496c*/
}
} // namespace gamemd

// 0x754980
namespace gamemd {
void sub_754980()
{
  dbl_B44498 = 0.0174532925199433 * 45.0; /*0x75498c*/
}
} // namespace gamemd

// 0x7549A0
namespace gamemd {
void sub_7549A0()
{
  dbl_B43F00 = 0.0174532925199433 * 60.0; /*0x7549ac*/
}
} // namespace gamemd

// 0x7549C0
namespace gamemd {
void sub_7549C0()
{
  dbl_B43ED8 = 0.0174532925199433 * 90.0; /*0x7549cc*/
}
} // namespace gamemd

// 0x7549E0
namespace gamemd {
long long sub_7549E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B43ED8 - dbl_B43F00); /*0x7549f2*/
  result = Math::RoundToInt(v0 * dbl_B43EF8 * 0.5); /*0x754a06*/
  dword_B45578 = result; /*0x754a0b*/
  return result; /*0x754a10*/
}
} // namespace gamemd

// 0x754A20
namespace gamemd {
void sub_754A20()
{
  dbl_B43F08 = Math::ArcTan((double)dword_B45578 * 0.00390625); /*0x754a37*/
}
} // namespace gamemd

// 0x754A50
namespace gamemd {
void sub_754A50()
{
  dbl_B44310 = Math::ArcTan((double)(2 * dword_B45578) / dbl_B43EF8); /*0x754a72*/
}
} // namespace gamemd

// 0x754A80
namespace gamemd {
long long sub_754A80()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45578) + 0.5); /*0x754a9b*/
  dword_B45178 = result; /*0x754aa0*/
  return result; /*0x754aa6*/
}
} // namespace gamemd

// 0x754AB0
namespace gamemd {
int sub_754AB0()
{
  word_B43EF0 = 0; /*0x754ab2*/
  word_B43EF2 = 0; /*0x754ab8*/
  return 0; /*0x754abe*/
}
} // namespace gamemd

// 0x754AC0
namespace gamemd {
int sub_754AC0()
{
  dword_B44300 = 0; /*0x754ac2*/
  dword_B44304 = 0; /*0x754ac7*/
  dword_B44308 = 0; /*0x754acc*/
  return 0; /*0x754ad1*/
}
} // namespace gamemd

// 0x754AE0
namespace gamemd {
int sub_754AE0()
{
  dword_B450B0 = 0; /*0x754ae5*/
  dword_B450A8 = 128; /*0x754aef*/
  dword_B450AC = 128; /*0x754af4*/
  return 128; /*0x754af9*/
}
} // namespace gamemd

// 0x754B00
namespace gamemd {
int sub_754B00()
{
  dword_B43EE0 = 0; /*0x754b02*/
  dword_B43EE4 = 0; /*0x754b07*/
  dword_B43EE8 = 0; /*0x754b0c*/
  dword_B43EEC = 0; /*0x754b11*/
  return 0; /*0x754b16*/
}
} // namespace gamemd

// 0x754B40
namespace gamemd {
unsigned int * sub_754B40()
{
  unsigned int *v0; // esi
  int v1; // edi
  unsigned int *result; // eax

  v0 = &stru_B44348; /*0x754b42*/
  v1 = 21; /*0x754b47*/
  do /*0x754b62*/
  {
    result = ((Int4 *)(v0))->Set(0, 0, 0, 1065353216); /*0x754b59*/
    v0 += 4; /*0x754b5e*/
    --v1; /*0x754b61*/
  }
  while ( v1 ); /*0x754b62*/
  return result; /*0x754b64*/
}
} // namespace gamemd

// 0x754B70
namespace gamemd {
unsigned int * sub_754B70()
{
  unsigned int *v0; // esi
  int v1; // edi
  unsigned int *result; // eax

  v0 = &stru_B43188; /*0x754b72*/
  v1 = 21; /*0x754b77*/
  do /*0x754b92*/
  {
    result = ((Int4 *)(v0))->Set(0, 0, 0, 1065353216); /*0x754b89*/
    v0 += 4; /*0x754b8e*/
    --v1; /*0x754b91*/
  }
  while ( v1 ); /*0x754b92*/
  return result; /*0x754b94*/
}
} // namespace gamemd

// 0x7559B0
namespace gamemd {
char * AudioData_Copy(char * a1, int a2)
{
  memcpy(a1, (char *)&stru_B45188 + 48 * a2, 0x30u); /*0x7559c7*/
  return a1; /*0x7559c9*/
}
} // namespace gamemd

// 0x7559D0
namespace gamemd {
float * sub_7559D0(float * a1, float * a2, void * a3, double a4)
{
  float *result; // eax
  float *v5; // eax
  float v6; // [esp+0h] [ebp-4Ch]
  unsigned int v7[4]; // [esp+Ch] [ebp-40h] BYREF
  float v8[12]; // [esp+1Ch] [ebp-30h] BYREF

  result = a2; /*0x7559d3*/
  if ( a1 == a2 ) /*0x7559d9*/
  {
    memcpy(a3, (char *)&stru_B43F10 + 48 * (unsigned int)a2, 0x30u); /*0x7559f0*/
  }
  else
  {
    v6 = a4; /*0x755a04*/
    v5 = (float *)Math::QuaternionSlerp(v7, &stru_B44348[4 * (unsigned int)a1], &stru_B44348[4 * (unsigned int)a2], v6); /*0x755a1a*/
    result = ToQuaternionMatrix(v8, v5); /*0x755a25*/
    memcpy(a3, result, 0x30u); /*0x755a35*/
  }
  return result; /*0x7559f2*/
}
} // namespace gamemd

// 0x755A40
namespace gamemd {
void * VoxelAnim_InterpolatePose(void * a1, int a2, int a3, double a4)
{
  int v5; // eax
  const void *v6; // esi
  float v8; // [esp+0h] [ebp-50h]
  unsigned char v9[48]; // [esp+20h] [ebp-30h] BYREF

  if ( a2 == a3 ) /*0x755a4e*/
  {
    memcpy(a1, (char *)&stru_B45188 + 48 * a3, 0x30u); /*0x755aa7*/
    return a1; /*0x755aaa*/
  }
  else
  {
    v8 = a4; /*0x755a5c*/
    v5 = Math::QuaternionSlerp((int)&stru_B43188 + 16 * a3, v8); /*0x755a6e*/
    v6 = (const void *)ToQuaternionMatrix(v9, v5); /*0x755a83*/
    memcpy(a1, v6, 0x30u); /*0x755a89*/
    return a1; /*0x755a87*/
  }
}
} // namespace gamemd

// 0x755AC0
namespace gamemd {
int sub_755AC0(int a1)
{
  return dword_8467FC[a1]; /*0x755ac7*/
}
char sub_755AD0(unsigned int * a1, int * a2)
{
  double v2; // st7
  unsigned int v4; // [esp+14h] [ebp-4h]

  v4 = *a1; /*0x755ad8*/
  v2 = Math::CalcAngle((double)(int)a1[1] - (double)a2[1], (double)*a2 - (double)(int)*a1); /*0x755afa*/
  (v4) = ((v4) & ~0xFFFF) | ((unsigned int)(Math::RoundToInt((v2 - 1.570796326794897) * -10430.06004058427)) & 0xFFFF); /*0x755b10*/
  return 32 - (((v4 >> 7) + 1) >> 1); /*0x755b26*/
}
} // namespace gamemd

// 0x755BF0
namespace gamemd {
float * sub_755BF0(float * a1, int a2, int a3)
{
  double v4; // st7
  int v5; // edx
  double v6; // st7
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-8h]
  float v9; // [esp+8h] [ebp-4h]

  v4 = flt_B432D8[3 * a2] * 1.5; /*0x755bff*/
  v5 = 12 * a2 + 11809496; /*0x755c05*/
  v7 = v4; /*0x755c0c*/
  v8 = *(float *)(v5 + 4) * 1.5; /*0x755c1d*/
  v6 = *(float *)(v5 + 8) * 1.5; /*0x755c24*/
  *a1 = v7; /*0x755c2c*/
  v9 = v6; /*0x755c32*/
  a1[1] = v8; /*0x755c36*/
  a1[2] = v9; /*0x755c3d*/
  return a1; /*0x755c40*/
}
} // namespace gamemd

// 0x755C50
namespace gamemd {
int j_TechnoClass_ClearArrays()
{
  return TechnoClass::ClearArrays();
}
} // namespace gamemd

// 0x755C90
namespace gamemd {
int sub_755C90()
{
  dword_B45580 = 0; /*0x755c92*/
  dword_B45584 = 0; /*0x755c97*/
  dword_B45588 = 0; /*0x755c9c*/
  dword_B4558C = 0; /*0x755ca1*/
  return 0; /*0x755ca6*/
}
} // namespace gamemd

// 0x755CB0
namespace gamemd {
unsigned int * E4Recv_755CB0::sub_755CB0()
{

  LOBYTE(this->AbstractClass) = 0; /*0x755cb4*/
  this->M4 = 0; /*0x755cb6*/
  this->M8 = 0; /*0x755cb9*/
  this->M12 = 0; /*0x755cbc*/
  this->M16 = 0; /*0x755cbf*/
  this->M20 = 0; /*0x755cc2*/
  this->q018 = 0; /*0x755cc5*/
  return &this->AbstractClass; /*0x755cc8*/

}
} // namespace gamemd

// 0x7564A0
namespace gamemd {
int E4Recv_7564A0::sub_7564A0(int a2)
{

  return this->M16 + 12 * a2; /*0x7564ad*/

}
} // namespace gamemd

// 0x7564E0
namespace gamemd {
float * E4Recv_7564E0::sub_7564E0(float * a2, int a3, int a4)
{

  int uniqueId; // edx
  int abstractFlags; // ecx
  int v6; // eax
  double v7; // st7
  float *v8; // eax
  double v9; // st6
  float v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+4h] [ebp-14h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]

  uniqueId = this->M16; /*0x7564e7*/
  abstractFlags = this->M20; /*0x7564ea*/
  v6 = 41 * (a4 + *(unsigned int *)(uniqueId + 12 * a3)); /*0x7564fc*/
  v7 = *(float *)(abstractFlags + 4 * v6 + 112) + *(float *)(abstractFlags + 4 * v6 + 88); /*0x756503*/
  v8 = (float *)(abstractFlags + 164 * (a4 + *(unsigned int *)(uniqueId + 12 * a3))); /*0x75650b*/
  v14 = v8[29] + v8[23]; /*0x756511*/
  v9 = v8[30] + v8[24]; /*0x756518*/
  v15 = v9; /*0x756521*/
  v11 = v7 * 0.5; /*0x75652b*/
  *a2 = v11; /*0x75653d*/
  v12 = v14 * 0.5; /*0x75653f*/
  a2[1] = v12; /*0x756551*/
  v13 = v15 * 0.5; /*0x756554*/
  a2[2] = v13; /*0x75655c*/
  return a2; /*0x75655f*/

}
} // namespace gamemd

// 0x756570
namespace gamemd {
int E4Recv_756570::sub_756570()
{

  return (int)this->M12 + 164 * (int)this->M12 + 12 * (int)this->M12 + 28; /*0x75658c*/

}
} // namespace gamemd

// 0x7589F0
namespace gamemd {
BOOL E4Recv_7589F0::sub_7589F0(int a2)
{

  BOOL v4; // ebx

  (*(void (**)(int, int))(*(unsigned int *)a2 + 28))(a2, 1); /*0x758a01*/
  v4 = (*(int (**)(int, int, int))(*(unsigned int *)a2 + 36))(a2, this->M16, 768) != 768; /*0x758a1b*/
  (*(void (**)(int))(*(unsigned int *)a2 + 52))(a2); /*0x758a24*/
  return v4; /*0x758a27*/

}
} // namespace gamemd

// 0x758E10
namespace gamemd {
char E4Recv_758E10::sub_758E10(float a2, float a3, float a4)
{

  unsigned __int8 *uniqueId; // ecx
  char v5; // bl
  int i; // edx
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float v11; // [esp+4h] [ebp-8h]

  uniqueId = (unsigned __int8 *)this->M16; /*0x758e13*/
  v5 = 0; /*0x758e17*/
  v11 = 100000.0; /*0x758e19*/
  for ( i = 0; i < 256; ++i ) /*0x758e21*/
  {
    v7 = a3 - (double)uniqueId[1]; /*0x758e49*/
    v8 = a4 - (double)uniqueId[2]; /*0x758e51*/
    v9 = v8 * v8 + v7 * v7 + (a2 - (double)*uniqueId) * (a2 - (double)*uniqueId); /*0x758e63*/
    if ( v9 < v11 ) /*0x758e74*/
    {
      v11 = v9; /*0x758e76*/
      v5 = i; /*0x758e7a*/
    }
    uniqueId += 3; /*0x758e81*/
  }
  return v5; /*0x758e8e*/

}
} // namespace gamemd

// 0x758F70
namespace gamemd {
int sub_758F70()
{
  dword_B45B18 = 0; /*0x758f72*/
  dword_B45B1C = 0; /*0x758f77*/
  dword_B45B20 = 0; /*0x758f7c*/
  dword_B45B24 = 0; /*0x758f81*/
  return 0; /*0x758f86*/
}
} // namespace gamemd

// 0x758F90
namespace gamemd {
void sub_758F90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x758f9c*/
  dbl_B45B30 = Math::Sqrt(v0 + v0); /*0x758fae*/
}
} // namespace gamemd

// 0x758FC0
namespace gamemd {
void sub_758FC0()
{
  dbl_B45B98 = dbl_B45B30 / 60.0; /*0x758fcc*/
}
} // namespace gamemd

// 0x758FE0
namespace gamemd {
void sub_758FE0()
{
  dbl_B45B80 = 1.0 / dbl_B45B98; /*0x758fec*/
}
} // namespace gamemd

// 0x759000
namespace gamemd {
void sub_759000()
{
  dbl_B45B78 = 0.0174532925199433 * 45.0; /*0x75900c*/
}
} // namespace gamemd

// 0x759020
namespace gamemd {
void sub_759020()
{
  dbl_B45B38 = 0.0174532925199433 * 60.0; /*0x75902c*/
}
} // namespace gamemd

// 0x759040
namespace gamemd {
void sub_759040()
{
  dbl_B45B10 = 0.0174532925199433 * 90.0; /*0x75904c*/
}
} // namespace gamemd

// 0x759060
namespace gamemd {
long long sub_759060()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45B10 - dbl_B45B38); /*0x759072*/
  result = Math::RoundToInt(v0 * dbl_B45B30 * 0.5); /*0x759086*/
  dword_B45BA0 = result; /*0x75908b*/
  return result; /*0x759090*/
}
} // namespace gamemd

// 0x7590A0
namespace gamemd {
void sub_7590A0()
{
  dbl_B45B40 = Math::ArcTan((double)dword_B45BA0 * 0.00390625); /*0x7590b7*/
}
} // namespace gamemd

// 0x7590D0
namespace gamemd {
void sub_7590D0()
{
  dbl_B45B70 = Math::ArcTan((double)(2 * dword_B45BA0) / dbl_B45B30); /*0x7590f2*/
}
} // namespace gamemd

// 0x759100
namespace gamemd {
long long sub_759100()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45BA0) + 0.5); /*0x75911b*/
  dword_B45B94 = result; /*0x759120*/
  return result; /*0x759126*/
}
} // namespace gamemd

// 0x759130
namespace gamemd {
int sub_759130()
{
  word_B45B28 = 0; /*0x759132*/
  word_B45B2A = 0; /*0x759138*/
  return 0; /*0x75913e*/
}
} // namespace gamemd

// 0x759140
namespace gamemd {
int sub_759140()
{
  dword_B45B48 = 0; /*0x759142*/
  dword_B45B4C = 0; /*0x759147*/
  dword_B45B50 = 0; /*0x75914c*/
  return 0; /*0x759151*/
}
} // namespace gamemd

// 0x759160
namespace gamemd {
int sub_759160()
{
  dword_B45B90 = 0; /*0x759165*/
  dword_B45B88 = 128; /*0x75916f*/
  dword_B45B8C = 128; /*0x759174*/
  return 128; /*0x759179*/
}
} // namespace gamemd

// 0x759200
namespace gamemd {
char sub_759200()
{
  MSG Msg; // [esp+0h] [ebp-1Ch] BYREF

  ++dword_AA0430; /*0x759210*/
  if ( !GameLoopMessagePump(&Msg, 0, 0, 0, 0) ) /*0x759223*/
    return 1; /*0x759223*/
  if ( IsMessageDialog(&Msg, 0, 0, 0) ) /*0x75922f*/
  {
    TranslateMessage(&Msg); /*0x75923d*/
    DispatchMessageA(&Msg); /*0x759248*/
    return 1; /*0x759253*/
  }
  return 0; /*0x759250*/
}
} // namespace gamemd

// 0x759760
namespace gamemd {
unsigned char * E4Recv_759760::sub_759760(const void * a2)
{
  memcpy(&this->reloadTimer[2], a2, 0x300u); /*0x759773*/
  this->u32_528 = 1; /*0x759776*/
  return this; /*0x759775*/
}
} // namespace gamemd

// 0x759BC0
namespace gamemd {
unsigned int E4Recv_759BC0::sub_759BC0(signed int a2)
{

  signed int v2; // edi
  unsigned int result; // eax

  v2 = a2; /*0x759bc2*/
  if ( a2 == -1 ) /*0x759bcb*/
    v2 = this->threatPosed - 1; /*0x759bd3*/
  if ( this->empLockRemaining != v2 ) /*0x759bda*/
  {
    if ( ProcessAudioStreamBuffer(this->reloadTimer[1], v2, 0) != -6 ) /*0x759bee*/
      this->empLockRemaining = v2; /*0x759bf0*/
    this->empLockRemaining = v2; /*0x759bf6*/
  }
  MovieClass::RenderLoop((char *)this, v2, 0); /*0x759c01*/
  result = this->empLockRemaining; /*0x759c06*/
  if ( result >= this->threatPosed ) /*0x759c14*/
    this->empLockRemaining = 0; /*0x759c16*/
  return result; /*0x759c20*/

}
} // namespace gamemd

// 0x75A100
namespace gamemd {
bool sub_75A100(int a1, int a2, unsigned int * a3, int a4)
{
  return VoxelRenderer::InitializeBuffers(*(unsigned int *)(a1 + 172), a2, a3, a4); /*0x75a11e*/
}
}
// 0x75A2B0
namespace gamemd {
bool sub_75A2B0(int a1, int a2, int * a3, int a4)
{
  return sub_75A120(*(unsigned int *)(a1 + 172), a2, a3, a4); /*0x75a2ce*/
}
} // namespace gamemd

// 0x75A400
namespace gamemd {
int ReturnNull2()
{
  return 0; /*0x75a402*/
}
} // namespace gamemd

// 0x75A410
namespace gamemd {
void nullsub_257()
{
  ; /*0x75a410*/
}
} // namespace gamemd

// 0x75A420
namespace gamemd {
void nullsub_258()
{
  ; /*0x75a420*/
}
} // namespace gamemd

// 0x75A810
namespace gamemd {
bool BitArray_Test(int a1)
{
  int result; // eax

  result = a1 >> 3; /*0x75a81b*/
  (*((unsigned char *)&(result))) = ((uint8_t)(1 << (a1 & 7)) & (uint8_t)byte_B45BA8[a1 >> 3]) != 0; /*0x75a824*/
  return result; /*0x75a827*/
}
} // namespace gamemd

// 0x75A880
namespace gamemd {
int sub_75A880()
{
  dword_B45BB8 = 0; /*0x75a882*/
  dword_B45BBC = 0; /*0x75a887*/
  dword_B45BC0 = 0; /*0x75a88c*/
  dword_B45BC4 = 0; /*0x75a891*/
  return 0; /*0x75a896*/
}
} // namespace gamemd

// 0x75A8A0
namespace gamemd {
void sub_75A8A0()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75a8ac*/
  dbl_B45BD0 = Math::Sqrt(v0 + v0); /*0x75a8be*/
}
} // namespace gamemd

// 0x75A8D0
namespace gamemd {
void sub_75A8D0()
{
  dbl_B45C20 = dbl_B45BD0 / 60.0; /*0x75a8dc*/
}
} // namespace gamemd

// 0x75A8F0
namespace gamemd {
void sub_75A8F0()
{
  dbl_B45C08 = 1.0 / dbl_B45C20; /*0x75a8fc*/
}
} // namespace gamemd

// 0x75A910
namespace gamemd {
void sub_75A910()
{
  dbl_B45C00 = 0.0174532925199433 * 45.0; /*0x75a91c*/
}
} // namespace gamemd

// 0x75A930
namespace gamemd {
void sub_75A930()
{
  dbl_B45BD8 = 0.0174532925199433 * 60.0; /*0x75a93c*/
}
} // namespace gamemd

// 0x75A950
namespace gamemd {
void sub_75A950()
{
  dbl_B45BB0 = 0.0174532925199433 * 90.0; /*0x75a95c*/
}
} // namespace gamemd

// 0x75A970
namespace gamemd {
long long sub_75A970()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45BB0 - dbl_B45BD8); /*0x75a982*/
  result = Math::RoundToInt(v0 * dbl_B45BD0 * 0.5); /*0x75a996*/
  dword_B45C28 = result; /*0x75a99b*/
  return result; /*0x75a9a0*/
}
} // namespace gamemd

// 0x75A9B0
namespace gamemd {
void sub_75A9B0()
{
  dbl_B45BE0 = Math::ArcTan((double)dword_B45C28 * 0.00390625); /*0x75a9c7*/
}
} // namespace gamemd

// 0x75A9E0
namespace gamemd {
void sub_75A9E0()
{
  dbl_B45BF8 = Math::ArcTan((double)(2 * dword_B45C28) / dbl_B45BD0); /*0x75aa02*/
}
} // namespace gamemd

// 0x75AA10
namespace gamemd {
long long sub_75AA10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C28) + 0.5); /*0x75aa2b*/
  dword_B45C1C = result; /*0x75aa30*/
  return result; /*0x75aa36*/
}
} // namespace gamemd

// 0x75AA40
namespace gamemd {
int sub_75AA40()
{
  word_B45BC8 = 0; /*0x75aa42*/
  word_B45BCA = 0; /*0x75aa48*/
  return 0; /*0x75aa4e*/
}
} // namespace gamemd

// 0x75AA50
namespace gamemd {
int sub_75AA50()
{
  g_AsyncMovieState = 0; /*0x75aa52*/
  g_MovieFrameState1 = 0; /*0x75aa57*/
  g_MovieFrameState2 = 0; /*0x75aa5c*/
  return 0; /*0x75aa61*/
}
} // namespace gamemd

// 0x75AA70
namespace gamemd {
int sub_75AA70()
{
  dword_B45C18 = 0; /*0x75aa75*/
  dword_B45C10 = 128; /*0x75aa7f*/
  dword_B45C14 = 128; /*0x75aa84*/
  return 128; /*0x75aa89*/
}
} // namespace gamemd

// 0x75CC90
namespace gamemd {
void sub_75CC90()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75cc9c*/
  dbl_B45C40 = Math::Sqrt(v0 + v0); /*0x75ccae*/
}
} // namespace gamemd

// 0x75CCC0
namespace gamemd {
void sub_75CCC0()
{
  dbl_B45C90 = dbl_B45C40 / 60.0; /*0x75cccc*/
}
} // namespace gamemd

// 0x75CCE0
namespace gamemd {
void sub_75CCE0()
{
  dbl_B45C78 = 1.0 / dbl_B45C90; /*0x75ccec*/
}
} // namespace gamemd

// 0x75CD00
namespace gamemd {
void sub_75CD00()
{
  dbl_B45C70 = 0.0174532925199433 * 45.0; /*0x75cd0c*/
}
} // namespace gamemd

// 0x75CD20
namespace gamemd {
void sub_75CD20()
{
  dbl_B45C48 = 0.0174532925199433 * 60.0; /*0x75cd2c*/
}
} // namespace gamemd

// 0x75CD40
namespace gamemd {
void sub_75CD40()
{
  dbl_B45C30 = 0.0174532925199433 * 90.0; /*0x75cd4c*/
}
} // namespace gamemd

// 0x75CD60
namespace gamemd {
long long sub_75CD60()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45C30 - dbl_B45C48); /*0x75cd72*/
  result = Math::RoundToInt(v0 * dbl_B45C40 * 0.5); /*0x75cd86*/
  dword_B45C98 = result; /*0x75cd8b*/
  return result; /*0x75cd90*/
}
} // namespace gamemd

// 0x75CDA0
namespace gamemd {
void sub_75CDA0()
{
  dbl_B45C50 = Math::ArcTan((double)dword_B45C98 * 0.00390625); /*0x75cdb7*/
}
} // namespace gamemd

// 0x75CDD0
namespace gamemd {
void sub_75CDD0()
{
  dbl_B45C68 = Math::ArcTan((double)(2 * dword_B45C98) / dbl_B45C40); /*0x75cdf2*/
}
} // namespace gamemd

// 0x75CE00
namespace gamemd {
long long sub_75CE00()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B45C98) + 0.5); /*0x75ce1b*/
  dword_B45C8C = result; /*0x75ce20*/
  return result; /*0x75ce26*/
}
} // namespace gamemd

// 0x75CE30
namespace gamemd {
int sub_75CE30()
{
  word_B45C38 = 0; /*0x75ce32*/
  word_B45C3A = 0; /*0x75ce38*/
  return 0; /*0x75ce3e*/
}
} // namespace gamemd

// 0x75CE40
namespace gamemd {
int sub_75CE40()
{
  dword_B45C58 = 0; /*0x75ce42*/
  dword_B45C5C = 0; /*0x75ce47*/
  dword_B45C60 = 0; /*0x75ce4c*/
  return 0; /*0x75ce51*/
}
} // namespace gamemd

// 0x75CE60
namespace gamemd {
int sub_75CE60()
{
  dword_B45C88 = 0; /*0x75ce65*/
  dword_B45C80 = 128; /*0x75ce6f*/
  dword_B45C84 = 128; /*0x75ce74*/
  return 128; /*0x75ce79*/
}
} // namespace gamemd

// 0x75E080
namespace gamemd {
int WarheadTypeClass__vt_03_(int a1, unsigned int * a2)
{
  if ( !a2 ) /*0x75e086*/
    return -2147467261; /*0x75e088*/
  *a2 = -1463464540; /*0x75e096*/
  a2[1] = 298979195; /*0x75e09e*/
  a2[2] = 1610642049; /*0x75e0a7*/
  a2[3] = unk_7E984C; /*0x75e0b0*/
  return 0; /*0x75e08d*/
}
} // namespace gamemd

// 0x75E740
namespace gamemd {
void sub_75E740()
{
  long double v0; // st7

  v0 = pow(256.0, 2.0); /*0x75e74c*/
  dbl_B45D80 = Math::Sqrt(v0 + v0); /*0x75e75e*/
}
} // namespace gamemd

// 0x75E770
namespace gamemd {
void sub_75E770()
{
  dbl_B725C0 = dbl_B45D80 / 60.0; /*0x75e77c*/
}
} // namespace gamemd

// 0x75E790
namespace gamemd {
void sub_75E790()
{
  dbl_B46688 = 1.0 / dbl_B725C0; /*0x75e79c*/
}
} // namespace gamemd

// 0x75E7B0
namespace gamemd {
void sub_75E7B0()
{
  dbl_B46680 = 0.0174532925199433 * 45.0; /*0x75e7bc*/
}
} // namespace gamemd

// 0x75E7D0
namespace gamemd {
void sub_75E7D0()
{
  dbl_B45D90 = 0.0174532925199433 * 60.0; /*0x75e7dc*/
}
} // namespace gamemd

// 0x75E7F0
namespace gamemd {
void sub_75E7F0()
{
  dbl_B45D60 = 0.0174532925199433 * 90.0; /*0x75e7fc*/
}
} // namespace gamemd

// 0x75E810
namespace gamemd {
long long sub_75E810()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_B45D60 - dbl_B45D90); /*0x75e822*/
  result = Math::RoundToInt(v0 * dbl_B45D80 * 0.5); /*0x75e836*/
  dword_B725C8 = result; /*0x75e83b*/
  return result; /*0x75e840*/
}
} // namespace gamemd

// 0x75E850
namespace gamemd {
void sub_75E850()
{
  dbl_B45D98 = Math::ArcTan((double)dword_B725C8 * 0.00390625); /*0x75e867*/
}
} // namespace gamemd

// 0x75E880
namespace gamemd {
void sub_75E880()
{
  dbl_B46640 = Math::ArcTan((double)(2 * dword_B725C8) / dbl_B45D80); /*0x75e8a2*/
}
} // namespace gamemd

// 0x75E8B0
namespace gamemd {
long long sub_75E8B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_B725C8) + 0.5); /*0x75e8cb*/
  dword_B725BC = result; /*0x75e8d0*/
  return result; /*0x75e8d6*/
}
} // namespace gamemd

// 0x75E8E0
namespace gamemd {
int sub_75E8E0()
{
  word_B45D78 = 0; /*0x75e8e2*/
  word_B45D7A = 0; /*0x75e8e8*/
  return 0; /*0x75e8ee*/
}
} // namespace gamemd

// 0x75E8F0
namespace gamemd {
int sub_75E8F0()
{
  dword_B46248 = 0; /*0x75e8f2*/
  dword_B4624C = 0; /*0x75e8f7*/
  dword_B46250 = 0; /*0x75e8fc*/
  return 0; /*0x75e901*/
}
} // namespace gamemd

// 0x75E910
namespace gamemd {
int sub_75E910()
{
  dword_B46698 = 0; /*0x75e915*/
  dword_B46690 = 128; /*0x75e91f*/
  dword_B46694 = 128; /*0x75e924*/
  return 128; /*0x75e929*/
}
} // namespace gamemd

// 0x75E930
namespace gamemd {
int sub_75E930()
{
  dword_B45D68 = 0; /*0x75e932*/
  dword_B45D6C = 0; /*0x75e937*/
  dword_B45D70 = 0; /*0x75e93c*/
  dword_B45D74 = 0; /*0x75e941*/
  return 0; /*0x75e946*/
}
} // namespace gamemd

// 0x75EF30
namespace gamemd {
int sub_75EF30(unsigned short * a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax

  v2 = (uint8_t)((uint8_t)(*a1 >> g_BitShift_Red) << g_BitShift_Green_0) + (char)(a2 >> 2); /*0x75efa7*/
  v3 = (uint8_t)((uint8_t)(*a1 >> g_BitShift_Blue) << g_BitMask_Red) + ((96 * a2) >> 8); /*0x75efbf*/
  if ( v3 > 255 ) /*0x75efc6*/
    v3 = 255; /*0x75efc8*/
  if ( v2 > 255 ) /*0x75efe0*/
    v2 = 255; /*0x75efe2*/
  result = v3 >> g_BitMask_Red << g_BitShift_Blue; /*0x75f00f*/
  *a1 = result /*0x75f013*/
      | ((int)(uint8_t)((uint8_t)(*a1 >> g_BitMask_Green) << g_BitMask_Blue) >> g_BitMask_Blue << g_BitMask_Green)
      | (v2 >> g_BitShift_Green_0 << g_BitShift_Red);
  return result; /*0x75f016*/
}
} // namespace gamemd
