// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_554400_e4.hpp"
#include "e4/classes/E4Recv_556510_e4.hpp"
#include "e4/classes/E4Recv_556520_e4.hpp"
#include "e4/classes/E4Recv_557380_e4.hpp"
#include "e4/classes/E4Recv_5581A0_e4.hpp"
#include "e4/classes/E4Recv_558810_e4.hpp"
#include "e4/classes/E4Recv_5595F0_e4.hpp"
#include "e4/classes/E4Recv_55B720_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Scenario_e4.hpp"
#include "e4/classes/ScriptAction_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Block_e4.hpp"
#include "e4/classes/BuildingTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ColorStruct_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/Color_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/PingPongBuffer_e4.hpp"
#include "e4/classes/StructTable_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/ListClass_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/SaveLoadDialog_e4.hpp"
#include "e4/classes/LightConvertClass_e4.hpp"  // G42.36 C2027 supply

// 0x550080
namespace gamemd {
void ObjectClass::sub_550080(ObjectClass ** Block)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00550080.json)
}
} // namespace ra2

// 0x550150
namespace gamemd {
void sub_550150()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00550150.json)
}
}
// 0x5509F0
namespace gamemd {
int PrepareTacticalClassCellTransform(BuildingTypeClass * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005509F0.json)
}
}
// 0x551C60
namespace gamemd {
void int LCW_BitStreamIO(unsigned char * a1, unsigned int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x551C60)
}
}
// 0x551E50
namespace gamemd {
int DecompressCoreLCW(Pipe * aP0, unsigned char * a1, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551E50.json)
}
}
// 0x552640
namespace gamemd {
unsigned int sub_552640(unsigned char * a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  uint8_t v5; // al
  unsigned char *v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  uint8_t v10; // al
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int *v17; // ecx
  int v18; // ebx
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // edi
  unsigned char *v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // ecx
  unsigned int v31; // ebx
  unsigned char *v32; // ecx
  int v33; // edi
  int v34; // eax
  int v35; // edi

  v3 = a2; /*0x552649*/
  v4 = a2; /*0x55264f*/
  while ( 1 ) /*0x552699*/
  {
    while ( 1 ) /*0x552660*/
    {
      while ( 1 ) /*0x552657*/
      {
        v5 = *a1++; /*0x552657*/
        if ( (v5 & 0x80u) != 0 ) /*0x552660*/
          break; /*0x552660*/
        v6 = (unsigned char *)(v4 - ((v5 & 0xF) << 8) - *a1++); /*0x552681*/
        if ( v5 >> 4 != -3 ) /*0x552689*/
        {
          v7 = (v5 >> 4) + 3; /*0x55268b*/
          do /*0x552693*/
          {
            *(unsigned char *)v4++ = *v6++; /*0x55268e*/
            --v7; /*0x552692*/
          }
          while ( v7 ); /*0x552693*/
        }
      }
      if ( (v5 & 0x40) == 0 ) /*0x552699*/
        break; /*0x552699*/
      if ( v5 == 0xFE ) /*0x5526bb*/
      {
        v10 = a1[2]; /*0x5526cc*/
        v11 = *a1 + (a1[1] << 8); /*0x5526d6*/
        a1 += 3; /*0x5526e9*/
        v12 = 16843009 * v10; /*0x5526fd*/
        v13 = (v4 & 3) - 4; /*0x552708*/
        v14 = v13 + v11; /*0x55270a*/
        if ( v4 < v4 - (v4 & 3) + 4 ) /*0x552712*/
        {
          IDA_LOBYTE(v13) = v10; /*0x552714*/
          IDA_BYTE1(v13) = v10; /*0x552718*/
          v15 = v13 << 16; /*0x552722*/
          IDA_LOWORD(v15) = v13; /*0x552727*/
          v16 = (4 - (v4 & 3)) >> 2; /*0x55272a*/
          memset32((void *)v4, v15, v16); /*0x55272d*/
          memset((void *)(v4 + 4 * v16), v13, (4 - (v4 & 3)) & 3); /*0x552734*/
          v4 += 4 - (v4 & 3); /*0x552740*/
          v10 = v13; /*0x552742*/
        }
        v17 = (unsigned int *)v4; /*0x552746*/
        IDA_HIWORD(v18) = IDA_HIWORD(v14); /*0x552748*/
        for ( v4 += v14 & 0xFFFFFFFC; (unsigned int)v17 < v4; v17 += 2 ) /*0x55274f*/
        {
          *v17 = v12; /*0x552751*/
          v17[1] = v12; /*0x552753*/
        }
        v19 = v4 + (v14 & 3); /*0x552760*/
        if ( v4 < v19 ) /*0x552764*/
        {
          IDA_LOBYTE(v18) = v10; /*0x55276a*/
          IDA_BYTE1(v18) = v10; /*0x55276e*/
          v20 = v18 << 16; /*0x552776*/
          IDA_LOWORD(v20) = v18; /*0x55277f*/
          v21 = (v19 - v4) >> 2; /*0x552782*/
          memset32((void *)v4, v20, v21); /*0x552785*/
          memset((void *)(v4 + 4 * v21), v18, ((unsigned char)v19 - (unsigned char)v4) & 3); /*0x55278c*/
          v4 = v19; /*0x552790*/
        }
        v3 = a2; /*0x552653*/
      }
      else if ( v5 == 0xFF ) /*0x552799*/
      {
        v22 = *a1 + (a1[1] << 8); /*0x5527a7*/
        v23 = a1[3]; /*0x5527b0*/
        v24 = a1[2]; /*0x5527b4*/
        a1 += 4; /*0x5527b7*/
        v25 = (v23 << 8) + v3; /*0x5527bd*/
        v26 = v22; /*0x5527bf*/
        v27 = (unsigned char *)(v25 + v24); /*0x5527c1*/
        v28 = v22 - 1; /*0x5527c3*/
        if ( v26 ) /*0x5527c6*/
        {
          v29 = v28 + 1; /*0x5527cc*/
          do /*0x5527d6*/
          {
            *(unsigned char *)v4++ = *v27++; /*0x5527d1*/
            --v29; /*0x5527d5*/
          }
          while ( v29 ); /*0x5527d6*/
        }
      }
      else
      {
        v30 = *a1; /*0x5527eb*/
        v31 = (a1[1] << 8) + v3; /*0x5527f3*/
        a1 += 2; /*0x5527f5*/
        v32 = (unsigned char *)(v31 + v30); /*0x5527f8*/
        v33 = (v5 & 0x3F) + 3; /*0x5527fa*/
        v34 = (v5 & 0x3F) + 2; /*0x5527fc*/
        if ( v33 ) /*0x5527ff*/
        {
          v35 = v34 + 1; /*0x552805*/
          do /*0x55280f*/
          {
            *(unsigned char *)v4++ = *v32++; /*0x55280a*/
            --v35; /*0x55280e*/
          }
          while ( v35 ); /*0x55280f*/
        }
      }
    }
    if ( v5 == 0x80 ) /*0x55269b*/
      break; /*0x55269b*/
    v8 = v5 & 0x3F; /*0x5526a6*/
    if ( v8 ) /*0x5526ab*/
    {
      v9 = v8; /*0x5526ad*/
      do /*0x5526b5*/
      {
        *(unsigned char *)v4++ = *a1++; /*0x5526b0*/
        --v9; /*0x5526b4*/
      }
      while ( v9 ); /*0x5526b5*/
    }
  }
  return v4 - v3; /*0x552818*/
}
}
// 0x554400
namespace gamemd {
ObjectClass * * sub_554400(int a2, int a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554400.json)
}
}
// 0x554D50
namespace gamemd {
void UpdateDeferredLightSurfaces(int a1, char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554D50.json)
}
}
// 0x557380
namespace gamemd {
int sub_557380(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00557380.json)
}
}
// 0x557B10
namespace gamemd {
ControlClass * * ListClass::CheckListClass__vt_19_(char a2, int a3, unsigned int * a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00557B10.json)
}
// 0x558810
namespace gamemd {
int ShowSaveLoadDialog(CampaignScore * aP1, void *a2_1)
{
    (void)aP1; (void)a2_1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558810.json)
}
}
// 0x55B720
namespace gamemd {
int sub_55B720()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055B720.json)
}
}
// 0x55BC00
namespace gamemd {
void CompressLCWBuffer(Pipe * aP0, int edx0, unsigned char * a2, unsigned int * a3, int a5)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055BC00.json)
}
}
// 0x55C0E0
namespace gamemd {
int DecodeBlockLCW(AbstractClass * aP0, int aP1, unsigned char *a2, unsigned int *a3, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055C0E0.json)
}
}
// 0x55CFD0
namespace gamemd {
AbstractClass * * Game_Frame_Check()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55CFD0)
}
}
// 0x55D360
namespace gamemd {
void GameFrameLoop()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055D360.json)
}
}
// 0x55F1E0
namespace gamemd {
BitFont * * DrawHUD()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55F1E0)
}
}
// 0x55F970
namespace gamemd {
void* unknown_libname_21()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55F970)
}
}
// 0x55FDB0
namespace gamemd {
AbstractClass * * Options_Screen_DlgProc(HWND hWnd, WPARAM wParam, unsigned int a3, HWND a4)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55FDB0)
}
}
// 0x5509E0
namespace gamemd {
void nullsub_21()
{
  ; /*0x5509e0*/
}
} // namespace gamemd

// 0x5512C0
namespace gamemd {
void nullsub_22()
{
  ; /*0x5512c0*/
}
} // namespace gamemd

// 0x5517A0
namespace gamemd {
void sub_5517A0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005517A0.json)
}
} // namespace gamemd

// 0x5517D0
namespace gamemd {
void sub_5517D0()
{
  dbl_ABC930 = dbl_ABC8E0 / 60.0; /*0x5517dc*/
}
} // namespace gamemd

// 0x5517F0
namespace gamemd {
void sub_5517F0()
{
  dbl_ABC918 = 1.0 / dbl_ABC930; /*0x5517fc*/
}
} // namespace gamemd

// 0x551810
namespace gamemd {
void sub_551810()
{
  dbl_ABC910 = 0.0174532925199433 * 45.0; /*0x55181c*/
}
} // namespace gamemd

// 0x551830
namespace gamemd {
void sub_551830()
{
  dbl_ABC8E8 = 0.0174532925199433 * 60.0; /*0x55183c*/
}
} // namespace gamemd

// 0x551850
namespace gamemd {
void sub_551850()
{
  dbl_ABC8C0 = 0.0174532925199433 * 90.0; /*0x55185c*/
}
} // namespace gamemd

// 0x551870
namespace gamemd {
long long sub_551870()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC8C0 - dbl_ABC8E8); /*0x551882*/
  result = Math::RoundToInt(v0 * dbl_ABC8E0 * 0.5); /*0x551896*/
  dword_ABC938 = result; /*0x55189b*/
  return result; /*0x5518a0*/
}
} // namespace gamemd

// 0x5518B0
namespace gamemd {
void sub_5518B0()
{
  dbl_ABC8F0 = Math::ArcTan((double)dword_ABC938 * 0.00390625); /*0x5518c7*/
}
} // namespace gamemd

// 0x5518E0
namespace gamemd {
void sub_5518E0()
{
  dbl_ABC908 = Math::ArcTan((double)(2 * dword_ABC938) / dbl_ABC8E0); /*0x551902*/
}
} // namespace gamemd

// 0x551910
namespace gamemd {
long long sub_551910()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC938) + 0.5); /*0x55192b*/
  dword_ABC92C = result; /*0x551930*/
  return result; /*0x551936*/
}
} // namespace gamemd

// 0x551940
namespace gamemd {
int sub_551940()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551940.json)
}
} // namespace gamemd

// 0x551950
namespace gamemd {
int sub_551950()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551950.json)
}
} // namespace gamemd

// 0x551970
namespace gamemd {
int sub_551970()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551970.json)
}
} // namespace gamemd

// 0x551990
namespace gamemd {
int sub_551990()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551990.json)
}
} // namespace gamemd

// 0x552830
namespace gamemd {
int sub_552830()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00552830.json)
}
} // namespace gamemd

// 0x552850
namespace gamemd {
void sub_552850()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00552850.json)
}
} // namespace gamemd

// 0x552880
namespace gamemd {
void sub_552880()
{
  dbl_ABC9B0 = dbl_ABC960 / 60.0; /*0x55288c*/
}
} // namespace gamemd

// 0x5528A0
namespace gamemd {
void sub_5528A0()
{
  dbl_ABC998 = 1.0 / dbl_ABC9B0; /*0x5528ac*/
}
} // namespace gamemd

// 0x5528C0
namespace gamemd {
void sub_5528C0()
{
  dbl_ABC990 = 0.0174532925199433 * 45.0; /*0x5528cc*/
}
} // namespace gamemd

// 0x5528E0
namespace gamemd {
void sub_5528E0()
{
  dbl_ABC968 = 0.0174532925199433 * 60.0; /*0x5528ec*/
}
} // namespace gamemd

// 0x552900
namespace gamemd {
void sub_552900()
{
  dbl_ABC940 = 0.0174532925199433 * 90.0; /*0x55290c*/
}
} // namespace gamemd

// 0x552920
namespace gamemd {
long long sub_552920()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC940 - dbl_ABC968); /*0x552932*/
  result = Math::RoundToInt(v0 * dbl_ABC960 * 0.5); /*0x552946*/
  dword_ABC9B8 = result; /*0x55294b*/
  return result; /*0x552950*/
}
} // namespace gamemd

// 0x552960
namespace gamemd {
void sub_552960()
{
  dbl_ABC970 = Math::ArcTan((double)dword_ABC9B8 * 0.00390625); /*0x552977*/
}
} // namespace gamemd

// 0x552990
namespace gamemd {
void sub_552990()
{
  dbl_ABC988 = Math::ArcTan((double)(2 * dword_ABC9B8) / dbl_ABC960); /*0x5529b2*/
}
} // namespace gamemd

// 0x5529C0
namespace gamemd {
long long sub_5529C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABC9B8) + 0.5); /*0x5529db*/
  dword_ABC9AC = result; /*0x5529e0*/
  return result; /*0x5529e6*/
}
} // namespace gamemd

// 0x5529F0
namespace gamemd {
int sub_5529F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005529F0.json)
}
} // namespace gamemd

// 0x552A00
namespace gamemd {
int sub_552A00()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00552A00.json)
}
} // namespace gamemd

// 0x552A20
namespace gamemd {
int sub_552A20()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00552A20.json)
}
} // namespace gamemd

// 0x554430
namespace gamemd {
void sub_554430()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554430.json)
}
} // namespace gamemd

// 0x554460
namespace gamemd {
void sub_554460()
{
  dbl_ABCA68 = dbl_ABC9E8 / 60.0; /*0x55446c*/
}
} // namespace gamemd

// 0x554480
namespace gamemd {
void sub_554480()
{
  dbl_ABCA38 = 1.0 / dbl_ABCA68; /*0x55448c*/
}
} // namespace gamemd

// 0x5544A0
namespace gamemd {
void sub_5544A0()
{
  dbl_ABCA30 = 0.0174532925199433 * 45.0; /*0x5544ac*/
}
} // namespace gamemd

// 0x5544C0
namespace gamemd {
void sub_5544C0()
{
  dbl_ABC9F0 = 0.0174532925199433 * 60.0; /*0x5544cc*/
}
} // namespace gamemd

// 0x5544E0
namespace gamemd {
void sub_5544E0()
{
  dbl_ABC9C8 = 0.0174532925199433 * 90.0; /*0x5544ec*/
}
} // namespace gamemd

// 0x554500
namespace gamemd {
long long sub_554500()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABC9C8 - dbl_ABC9F0); /*0x554512*/
  result = Math::RoundToInt(v0 * dbl_ABC9E8 * 0.5); /*0x554526*/
  dword_ABCA70 = result; /*0x55452b*/
  return result; /*0x554530*/
}
} // namespace gamemd

// 0x554540
namespace gamemd {
void sub_554540()
{
  dbl_ABC9F8 = Math::ArcTan((double)dword_ABCA70 * 0.00390625); /*0x554557*/
}
} // namespace gamemd

// 0x554570
namespace gamemd {
void sub_554570()
{
  dbl_ABCA28 = Math::ArcTan((double)(2 * dword_ABCA70) / dbl_ABC9E8); /*0x554592*/
}
} // namespace gamemd

// 0x5545A0
namespace gamemd {
long long sub_5545A0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCA70) + 0.5); /*0x5545bb*/
  dword_ABCA64 = result; /*0x5545c0*/
  return result; /*0x5545c6*/
}
} // namespace gamemd

// 0x5545D0
namespace gamemd {
int sub_5545D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005545D0.json)
}
} // namespace gamemd

// 0x5545E0
namespace gamemd {
int sub_5545E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005545E0.json)
}
} // namespace gamemd

// 0x554600
namespace gamemd {
int sub_554600()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554600.json)
}
} // namespace gamemd

// 0x554620
namespace gamemd {
int sub_554620()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554620.json)
}
} // namespace gamemd

// 0x554640
namespace gamemd {
int sub_554640()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554640.json)
}
} // namespace gamemd

// 0x554680
namespace gamemd {
void sub_554680()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554680.json)
}
} // namespace gamemd

// 0x5546C0
namespace gamemd {
int sub_5546C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005546C0.json)
}
} // namespace gamemd

// 0x554700
namespace gamemd {
void sub_554700()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00554700.json)
}
} // namespace gamemd

// 0x5558C0
namespace gamemd {
int sub_5558C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005558C0.json)
}
} // namespace gamemd

// 0x555AC0
namespace gamemd {
int * Color_QuantizeRGB(int * a1, int * a2, int * a3)
{
  int v4; // eax
  int v5; // eax
  int *result; // eax
  int v7; // ecx

  v4 = *a1; /*0x555ac4*/
  if ( *a1 >= 1000 ) /*0x555acb*/
    v4 = 1000; /*0x555acd*/
  *a1 = v4; /*0x555ad2*/
  v5 = *a2; /*0x555ad4*/
  if ( *a2 >= 1000 ) /*0x555adb*/
    v5 = 1000; /*0x555add*/
  *a2 = v5; /*0x555ae2*/
  result = a3; /*0x555ae4*/
  v7 = *a3; /*0x555ae8*/
  if ( *a3 >= 1000 ) /*0x555af0*/
    v7 = 1000; /*0x555af2*/
  *a3 = v7; /*0x555af7*/
  *a1 &= (*a1 <= 0) - 1; /*0x555b05*/
  *a2 &= (*a2 <= 0) - 1; /*0x555b13*/
  *a3 &= (*a3 <= 0) - 1; /*0x555b21*/
  if ( dword_A8EB78 ) /*0x555b2c*/
  {
    if ( dword_A8EB78 == 1 ) /*0x555b2f*/
    {
      *a1 &= 0xFFFFFFC0; /*0x555b53*/
      *a2 &= 0xFFFFFFC0; /*0x555b5b*/
      *a3 &= 0xFFFFFFC0; /*0x555b63*/
    }
    else if ( dword_A8EB78 == 2 ) /*0x555b32*/
    {
      *a1 &= 0xFFFFFFE0; /*0x555b39*/
      *a2 &= 0xFFFFFFE0; /*0x555b41*/
      *a3 &= 0xFFFFFFE0; /*0x555b49*/
    }
  }
  else
  {
    *a1 &= 0xFFFFFF80; /*0x555b6d*/
    *a2 &= 0xFFFFFF80; /*0x555b74*/
    *a3 &= 0xFFFFFF80; /*0x555b7b*/
  }
  return result; /*0x555b40*/
}
} // namespace gamemd

// 0x555B90
namespace gamemd {
int sub_555B90()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555B90.json)
}
} // namespace gamemd

// 0x555BB0
namespace gamemd {
void sub_555BB0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555BB0.json)
}
} // namespace gamemd

// 0x555BE0
namespace gamemd {
void sub_555BE0()
{
  dbl_ABCB08 = dbl_ABCAB8 / 60.0; /*0x555bec*/
}
} // namespace gamemd

// 0x555C00
namespace gamemd {
void sub_555C00()
{
  dbl_ABCAF0 = 1.0 / dbl_ABCB08; /*0x555c0c*/
}
} // namespace gamemd

// 0x555C20
namespace gamemd {
void sub_555C20()
{
  dbl_ABCAE8 = 0.0174532925199433 * 45.0; /*0x555c2c*/
}
} // namespace gamemd

// 0x555C40
namespace gamemd {
void sub_555C40()
{
  dbl_ABCAC0 = 0.0174532925199433 * 60.0; /*0x555c4c*/
}
} // namespace gamemd

// 0x555C60
namespace gamemd {
void sub_555C60()
{
  dbl_ABCA98 = 0.0174532925199433 * 90.0; /*0x555c6c*/
}
} // namespace gamemd

// 0x555C80
namespace gamemd {
long long sub_555C80()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCA98 - dbl_ABCAC0); /*0x555c92*/
  result = Math::RoundToInt(v0 * dbl_ABCAB8 * 0.5); /*0x555ca6*/
  dword_ABCB10 = result; /*0x555cab*/
  return result; /*0x555cb0*/
}
} // namespace gamemd

// 0x555CC0
namespace gamemd {
void sub_555CC0()
{
  dbl_ABCAC8 = Math::ArcTan((double)dword_ABCB10 * 0.00390625); /*0x555cd7*/
}
} // namespace gamemd

// 0x555CF0
namespace gamemd {
void sub_555CF0()
{
  dbl_ABCAE0 = Math::ArcTan((double)(2 * dword_ABCB10) / dbl_ABCAB8); /*0x555d12*/
}
} // namespace gamemd

// 0x555D20
namespace gamemd {
long long sub_555D20()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCB10) + 0.5); /*0x555d3b*/
  dword_ABCB04 = result; /*0x555d40*/
  return result; /*0x555d46*/
}
} // namespace gamemd

// 0x555D50
namespace gamemd {
int sub_555D50()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555D50.json)
}
} // namespace gamemd

// 0x555D60
namespace gamemd {
int sub_555D60()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555D60.json)
}
} // namespace gamemd

// 0x555D80
namespace gamemd {
int sub_555D80()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00555D80.json)
}
} // namespace gamemd

// 0x556510
namespace gamemd {
int sub_556510()
{
     return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00556510.json)
}
} // namespace gamemd

// 0x556520
namespace gamemd {
LightConvertClass * LightConvertClass::sub_556520(unsigned int * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556520.json)
}
} // namespace gamemd

// 0x556790
namespace gamemd {
void sub_556790()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556790.json)
}
} // namespace gamemd

// 0x5567C0
namespace gamemd {
void sub_5567C0()
{
  dbl_ABCBA0 = dbl_ABCB38 / 60.0; /*0x5567cc*/
}
} // namespace gamemd

// 0x5567E0
namespace gamemd {
void sub_5567E0()
{
  dbl_ABCB70 = 1.0 / dbl_ABCBA0; /*0x5567ec*/
}
} // namespace gamemd

// 0x556800
namespace gamemd {
void sub_556800()
{
  dbl_ABCB68 = 0.0174532925199433 * 45.0; /*0x55680c*/
}
} // namespace gamemd

// 0x556820
namespace gamemd {
void sub_556820()
{
  dbl_ABCB40 = 0.0174532925199433 * 60.0; /*0x55682c*/
}
} // namespace gamemd

// 0x556840
namespace gamemd {
void sub_556840()
{
  dbl_ABCB18 = 0.0174532925199433 * 90.0; /*0x55684c*/
}
} // namespace gamemd

// 0x556860
namespace gamemd {
long long sub_556860()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCB18 - dbl_ABCB40); /*0x556872*/
  result = Math::RoundToInt(v0 * dbl_ABCB38 * 0.5); /*0x556886*/
  dword_ABCBA8 = result; /*0x55688b*/
  return result; /*0x556890*/
}
} // namespace gamemd

// 0x5568A0
namespace gamemd {
void sub_5568A0()
{
  dbl_ABCB48 = Math::ArcTan((double)dword_ABCBA8 * 0.00390625); /*0x5568b7*/
}
} // namespace gamemd

// 0x5568D0
namespace gamemd {
void sub_5568D0()
{
  dbl_ABCB60 = Math::ArcTan((double)(2 * dword_ABCBA8) / dbl_ABCB38); /*0x5568f2*/
}
} // namespace gamemd

// 0x556900
namespace gamemd {
long long sub_556900()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCBA8) + 0.5); /*0x55691b*/
  dword_ABCB9C = result; /*0x556920*/
  return result; /*0x556926*/
}
} // namespace gamemd

// 0x556930
namespace gamemd {
int sub_556930()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556930.json)
}
} // namespace gamemd

// 0x556940
namespace gamemd {
int sub_556940()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556940.json)
}
} // namespace gamemd

// 0x556960
namespace gamemd {
int sub_556960()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556960.json)
}
} // namespace gamemd

// 0x556980
namespace gamemd {
int sub_556980()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00556980.json)
}
} // namespace gamemd

// 0x5569A0
namespace gamemd {
int sub_5569A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005569A0.json)
}
} // namespace gamemd

// 0x5569E0
namespace gamemd {
void sub_5569E0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005569E0.json)
}
} // namespace gamemd

// 0x557210
namespace gamemd {
int sub_557210()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00557210.json)
}
} // namespace gamemd

// 0x5581A0
namespace gamemd {
int sub_5581A0(GaugeClass * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005581A0.json)
}
} // namespace gamemd

// 0x5584F0
namespace gamemd {
size_t sub_5584F0(char * a1, void * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005584F0.json)
}
} // namespace gamemd

// 0x558530
namespace gamemd {
int sub_558530()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558530.json)
}
} // namespace gamemd

// 0x558550
namespace gamemd {
void sub_558550()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558550.json)
}
} // namespace gamemd

// 0x558580
namespace gamemd {
void sub_558580()
{
  dbl_ABCC30 = dbl_ABCBE0 / 60.0; /*0x55858c*/
}
} // namespace gamemd

// 0x5585A0
namespace gamemd {
void sub_5585A0()
{
  dbl_ABCC18 = 1.0 / dbl_ABCC30; /*0x5585ac*/
}
} // namespace gamemd

// 0x5585C0
namespace gamemd {
void sub_5585C0()
{
  dbl_ABCC10 = 0.0174532925199433 * 45.0; /*0x5585cc*/
}
} // namespace gamemd

// 0x5585E0
namespace gamemd {
void sub_5585E0()
{
  dbl_ABCBE8 = 0.0174532925199433 * 60.0; /*0x5585ec*/
}
} // namespace gamemd

// 0x558600
namespace gamemd {
void sub_558600()
{
  dbl_ABCBC0 = 0.0174532925199433 * 90.0; /*0x55860c*/
}
} // namespace gamemd

// 0x558620
namespace gamemd {
long long sub_558620()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCBC0 - dbl_ABCBE8); /*0x558632*/
  result = Math::RoundToInt(v0 * dbl_ABCBE0 * 0.5); /*0x558646*/
  dword_ABCC38 = result; /*0x55864b*/
  return result; /*0x558650*/
}
} // namespace gamemd

// 0x558660
namespace gamemd {
void sub_558660()
{
  dbl_ABCBF0 = Math::ArcTan((double)dword_ABCC38 * 0.00390625); /*0x558677*/
}
} // namespace gamemd

// 0x558690
namespace gamemd {
void sub_558690()
{
  dbl_ABCC08 = Math::ArcTan((double)(2 * dword_ABCC38) / dbl_ABCBE0); /*0x5586b2*/
}
} // namespace gamemd

// 0x5586C0
namespace gamemd {
long long sub_5586C0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCC38) + 0.5); /*0x5586db*/
  dword_ABCC2C = result; /*0x5586e0*/
  return result; /*0x5586e6*/
}
} // namespace gamemd

// 0x5586F0
namespace gamemd {
int sub_5586F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005586F0.json)
}
} // namespace gamemd

// 0x558700
namespace gamemd {
int sub_558700()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558700.json)
}
} // namespace gamemd

// 0x558720
namespace gamemd {
int sub_558720()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558720.json)
}
} // namespace gamemd

// 0x5588E0
namespace gamemd {
LRESULT sub_5588E0(HWND hDlg, int a2, HWND hWnd, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005588E0.json)
}
} // namespace gamemd

// 0x558A30
namespace gamemd {
int sub_558A30(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558A30.json)
}
} // namespace gamemd

// 0x558B90
namespace gamemd {
int sub_558B90(HWND hWnd, unsigned int a2, unsigned int a3, HWND a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558B90.json)
}
} // namespace gamemd

// 0x558CB0
namespace gamemd {
int sub_558CB0(HWND hWnd, unsigned int a2, unsigned int a3, int * a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00558CB0.json)
}
} // namespace gamemd

// 0x5595F0
namespace gamemd {
int sub_5595F0(char * Buffer)
{
    (void)Buffer; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005595F0.json)
}
} // namespace gamemd

// 0x559D30
namespace gamemd {
int sub_559D30(const void * a1, const void * a2)
{
  return -CompareFileTime((const FILETIME *)(*(unsigned int *)a1 + 428), (const FILETIME *)(*(unsigned int *)a2 + 428)); /*0x559d51*/
}
} // namespace gamemd

// 0x55A4B0
namespace gamemd {
int sub_55A4B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055A4B0.json)
}
} // namespace gamemd

// 0x55A4D0
namespace gamemd {
void sub_55A4D0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055A4D0.json)
}
} // namespace gamemd

// 0x55A500
namespace gamemd {
void sub_55A500()
{
  dbl_ABCCB0 = dbl_ABCC60 / 60.0; /*0x55a50c*/
}
} // namespace gamemd

// 0x55A520
namespace gamemd {
void sub_55A520()
{
  dbl_ABCC98 = 1.0 / dbl_ABCCB0; /*0x55a52c*/
}
} // namespace gamemd

// 0x55A540
namespace gamemd {
void sub_55A540()
{
  dbl_ABCC90 = 0.0174532925199433 * 45.0; /*0x55a54c*/
}
} // namespace gamemd

// 0x55A560
namespace gamemd {
void sub_55A560()
{
  dbl_ABCC68 = 0.0174532925199433 * 60.0; /*0x55a56c*/
}
} // namespace gamemd

// 0x55A580
namespace gamemd {
void sub_55A580()
{
  dbl_ABCC40 = 0.0174532925199433 * 90.0; /*0x55a58c*/
}
} // namespace gamemd

// 0x55A5A0
namespace gamemd {
long long sub_55A5A0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCC40 - dbl_ABCC68); /*0x55a5b2*/
  result = Math::RoundToInt(v0 * dbl_ABCC60 * 0.5); /*0x55a5c6*/
  dword_ABCCB8 = result; /*0x55a5cb*/
  return result; /*0x55a5d0*/
}
} // namespace gamemd

// 0x55A5E0
namespace gamemd {
void sub_55A5E0()
{
  dbl_ABCC70 = Math::ArcTan((double)dword_ABCCB8 * 0.00390625); /*0x55a5f7*/
}
} // namespace gamemd

// 0x55A610
namespace gamemd {
void sub_55A610()
{
  dbl_ABCC88 = Math::ArcTan((double)(2 * dword_ABCCB8) / dbl_ABCC60); /*0x55a632*/
}
} // namespace gamemd

// 0x55A640
namespace gamemd {
long long sub_55A640()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCCB8) + 0.5); /*0x55a65b*/
  dword_ABCCAC = result; /*0x55a660*/
  return result; /*0x55a666*/
}
} // namespace gamemd

// 0x55A670
namespace gamemd {
int sub_55A670()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055A670.json)
}
} // namespace gamemd

// 0x55A680
namespace gamemd {
int sub_55A680()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055A680.json)
}
} // namespace gamemd

// 0x55A6A0
namespace gamemd {
int sub_55A6A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055A6A0.json)
}
} // namespace gamemd

// 0x55AA60
namespace gamemd {
int IPersistStream_Load(int * a1, int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AA60.json)
}
} // namespace gamemd

// 0x55AC40
namespace gamemd {
void nullsub_164(int a1)
{
  ; /*0x55ac40*/
}
} // namespace gamemd

// 0x55AD30
namespace gamemd {
int sub_55AD30()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AD30.json)
}
} // namespace gamemd

// 0x55AD50
namespace gamemd {
void sub_55AD50()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AD50.json)
}
} // namespace gamemd

// 0x55AD80
namespace gamemd {
void sub_55AD80()
{
  dbl_ABCD30 = dbl_ABCCE0 / 60.0; /*0x55ad8c*/
}
} // namespace gamemd

// 0x55ADA0
namespace gamemd {
void sub_55ADA0()
{
  dbl_ABCD18 = 1.0 / dbl_ABCD30; /*0x55adac*/
}
} // namespace gamemd

// 0x55ADC0
namespace gamemd {
void sub_55ADC0()
{
  dbl_ABCD10 = 0.0174532925199433 * 45.0; /*0x55adcc*/
}
} // namespace gamemd

// 0x55ADE0
namespace gamemd {
void sub_55ADE0()
{
  dbl_ABCCE8 = 0.0174532925199433 * 60.0; /*0x55adec*/
}
} // namespace gamemd

// 0x55AE00
namespace gamemd {
void sub_55AE00()
{
  dbl_ABCCC0 = 0.0174532925199433 * 90.0; /*0x55ae0c*/
}
} // namespace gamemd

// 0x55AE20
namespace gamemd {
long long sub_55AE20()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCCC0 - dbl_ABCCE8); /*0x55ae32*/
  result = Math::RoundToInt(v0 * dbl_ABCCE0 * 0.5); /*0x55ae46*/
  dword_ABCD38 = result; /*0x55ae4b*/
  return result; /*0x55ae50*/
}
} // namespace gamemd

// 0x55AE60
namespace gamemd {
void sub_55AE60()
{
  dbl_ABCCF0 = Math::ArcTan((double)dword_ABCD38 * 0.00390625); /*0x55ae77*/
}
} // namespace gamemd

// 0x55AE90
namespace gamemd {
void sub_55AE90()
{
  dbl_ABCD08 = Math::ArcTan((double)(2 * dword_ABCD38) / dbl_ABCCE0); /*0x55aeb2*/
}
} // namespace gamemd

// 0x55AEC0
namespace gamemd {
long long sub_55AEC0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCD38) + 0.5); /*0x55aedb*/
  dword_ABCD2C = result; /*0x55aee0*/
  return result; /*0x55aee6*/
}
} // namespace gamemd

// 0x55AEF0
namespace gamemd {
int sub_55AEF0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AEF0.json)
}
} // namespace gamemd

// 0x55AF00
namespace gamemd {
int sub_55AF00()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AF00.json)
}
} // namespace gamemd

// 0x55AF20
namespace gamemd {
int sub_55AF20()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055AF20.json)
}
} // namespace gamemd

// 0x55BB90
namespace gamemd {
int WriteCompressionBlock(Pipe * aP0, unsigned int aP1, CCINIClass * aP2, int *a3, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055BB90.json)
}
} // namespace gamemd

// 0x55C9E0
namespace gamemd {
int sub_55C9E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055C9E0.json)
}
} // namespace gamemd

// 0x55CA00
namespace gamemd {
void sub_55CA00()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055CA00.json)
}
} // namespace gamemd

// 0x55CA30
namespace gamemd {
void sub_55CA30()
{
  dbl_ABCDF0 = dbl_ABCD80 / 60.0; /*0x55ca3c*/
}
} // namespace gamemd

// 0x55CA50
namespace gamemd {
void sub_55CA50()
{
  dbl_ABCDD0 = 1.0 / dbl_ABCDF0; /*0x55ca5c*/
}
} // namespace gamemd

// 0x55CA70
namespace gamemd {
void sub_55CA70()
{
  dbl_ABCDC8 = 0.0174532925199433 * 45.0; /*0x55ca7c*/
}
} // namespace gamemd

// 0x55CA90
namespace gamemd {
void sub_55CA90()
{
  dbl_ABCD98 = 0.0174532925199433 * 60.0; /*0x55ca9c*/
}
} // namespace gamemd

// 0x55CAB0
namespace gamemd {
void sub_55CAB0()
{
  dbl_ABCD60 = 0.0174532925199433 * 90.0; /*0x55cabc*/
}
} // namespace gamemd

// 0x55CAD0
namespace gamemd {
long long sub_55CAD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCD60 - dbl_ABCD98); /*0x55cae2*/
  result = Math::RoundToInt(v0 * dbl_ABCD80 * 0.5); /*0x55caf6*/
  dword_ABCDF8 = result; /*0x55cafb*/
  return result; /*0x55cb00*/
}
} // namespace gamemd

// 0x55CB10
namespace gamemd {
void sub_55CB10()
{
  dbl_ABCDA0 = Math::ArcTan((double)dword_ABCDF8 * 0.00390625); /*0x55cb27*/
}
} // namespace gamemd

// 0x55CB40
namespace gamemd {
void sub_55CB40()
{
  dbl_ABCDC0 = Math::ArcTan((double)(2 * dword_ABCDF8) / dbl_ABCD80); /*0x55cb62*/
}
} // namespace gamemd

// 0x55CB70
namespace gamemd {
long long sub_55CB70()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCDF8) + 0.5); /*0x55cb8b*/
  dword_ABCDEC = result; /*0x55cb90*/
  return result; /*0x55cb96*/
}
} // namespace gamemd

// 0x55CBA0
namespace gamemd {
int sub_55CBA0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055CBA0.json)
}
} // namespace gamemd

// 0x55CBB0
namespace gamemd {
int sub_55CBB0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055CBB0.json)
}
} // namespace gamemd

// 0x55CBD0
namespace gamemd {
int sub_55CBD0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055CBD0.json)
}
} // namespace gamemd

// 0x55CC00
namespace gamemd {
void sub_55CC00()
{
  byte_ABCD58 = 1; /*0x55cc00*/
}
} // namespace gamemd

// 0x55CC10
namespace gamemd {
void sub_55CC10()
{
  byte_ABCD58 = 0; /*0x55cc10*/
}
} // namespace gamemd

// 0x55E410
namespace gamemd {
void nullsub_23()
{
  ; /*0x55e410*/
}
} // namespace gamemd

// 0x55F760
namespace gamemd {
int sub_55F760()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055F760.json)
}
} // namespace gamemd

// 0x55F780
namespace gamemd {
void sub_55F780()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055F780.json)
}
} // namespace gamemd

// 0x55F7B0
namespace gamemd {
void sub_55F7B0()
{
  dbl_ABCF48 = dbl_ABCE40 / 60.0; /*0x55f7bc*/
}
} // namespace gamemd

// 0x55F7D0
namespace gamemd {
void sub_55F7D0()
{
  dbl_ABCF30 = 1.0 / dbl_ABCF48; /*0x55f7dc*/
}
} // namespace gamemd

// 0x55F7F0
namespace gamemd {
void sub_55F7F0()
{
  dbl_ABCF28 = 0.0174532925199433 * 45.0; /*0x55f7fc*/
}
} // namespace gamemd

// 0x55F810
namespace gamemd {
void sub_55F810()
{
  dbl_ABCE48 = 0.0174532925199433 * 60.0; /*0x55f81c*/
}
} // namespace gamemd

// 0x55F830
namespace gamemd {
void sub_55F830()
{
  dbl_ABCE20 = 0.0174532925199433 * 90.0; /*0x55f83c*/
}
} // namespace gamemd

// 0x55F850
namespace gamemd {
long long sub_55F850()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABCE20 - dbl_ABCE48); /*0x55f862*/
  result = Math::RoundToInt(v0 * dbl_ABCE40 * 0.5); /*0x55f876*/
  dword_ABCF50 = result; /*0x55f87b*/
  return result; /*0x55f880*/
}
} // namespace gamemd

// 0x55F890
namespace gamemd {
void sub_55F890()
{
  dbl_ABCE50 = Math::ArcTan((double)dword_ABCF50 * 0.00390625); /*0x55f8a7*/
}
} // namespace gamemd

// 0x55F8C0
namespace gamemd {
void sub_55F8C0()
{
  dbl_ABCE68 = Math::ArcTan((double)(2 * dword_ABCF50) / dbl_ABCE40); /*0x55f8e2*/
}
} // namespace gamemd

// 0x55F8F0
namespace gamemd {
long long sub_55F8F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABCF50) + 0.5); /*0x55f90b*/
  dword_ABCF44 = result; /*0x55f910*/
  return result; /*0x55f916*/
}
} // namespace gamemd

// 0x55F920
namespace gamemd {
int sub_55F920()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055F920.json)
}
} // namespace gamemd

// 0x55F930
namespace gamemd {
int sub_55F930()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055F930.json)
}
} // namespace gamemd

// 0x55F950
namespace gamemd {
int sub_55F950()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055F950.json)
}
} // namespace gamemd

// 0x55F980
namespace gamemd {
int sub_55F980(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0055F980.json)
}
} // namespace gamemd
}  // L-fix: close namespace tail 1
