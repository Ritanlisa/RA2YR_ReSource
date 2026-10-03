// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/ModemGame_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"

#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5B1D90_e4.hpp"
#include "e4/classes/E4Recv_5B3910_e4.hpp"
#include "e4/classes/E4Recv_5B3E90_e4.hpp"
#include "e4/classes/E4Recv_5B3F50_e4.hpp"
#include "e4/classes/E4Recv_5B4350_e4.hpp"
#include "e4/classes/E4Recv_5B4400_e4.hpp"
#include "e4/classes/E4Recv_5B57D0_e4.hpp"
#include "e4/classes/E4Recv_5B5960_e4.hpp"
#include "e4/classes/E4Recv_5B5A50_e4.hpp"
#include "e4/classes/E4Recv_5B6DA0_e4.hpp"
#include "e4/classes/E4Recv_5B9250_e4.hpp"
#include "e4/classes/E4Recv_5B93F0_e4.hpp"
#include "e4/classes/E4Recv_5B9450_e4.hpp"
#include "e4/classes/E4Recv_5B94C0_e4.hpp"
#include "e4/classes/E4Recv_5BAA80_e4.hpp"
#include "e4/classes/E4Recv_5BCB90_e4.hpp"
#include "e4/classes/E4Recv_5BCC30_e4.hpp"
#include "e4/classes/E4Recv_5BCC60_e4.hpp"
#include "e4/classes/E4Recv_5BCCE0_e4.hpp"
#include "e4/classes/E4Recv_5BCE10_e4.hpp"
#include "e4/classes/E4Recv_5BD2E0_e4.hpp"
#include "e4/classes/E4Recv_5BD560_e4.hpp"
#include "e4/classes/E4Recv_5BDA40_e4.hpp"
#include "e4/classes/E4Recv_5BECC0_e4.hpp"
#include "e4/classes/E4Recv_5BF360_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/BinkMovie_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Event_e4.hpp"
#include "e4/classes/Game_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/MovieClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Buffer_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/Movie_e4.hpp"
#include "e4/classes/SideClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/RandomMap_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/E4Recv_5C60D0_e4.hpp"
#include "e4/classes/Frame_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/VectorClass_ptr_MapRegionClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/E4Recv_645D60_e4.hpp"
#include "e4/classes/E4Recv_5A1C70_e4.hpp"
#include "e4/classes/E4Recv_5D2650_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/Skirmish_e4.hpp"
#include "e4/classes/WinModemClass_e4.hpp"
#include "e4/classes/Checksummer_e4.hpp"
#include "e4/classes/ModemGame_e4.hpp"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/Palette_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"

// 0x5B3B10
namespace gamemd {
void sub_5B3B10()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B3B10.json)
}
}
// 0x5B3FF0
namespace gamemd {
unsigned int * sub_5B3FF0(unsigned int * a1, unsigned int * a2)
{
  unsigned int *result; // eax

  for ( result = (unsigned int *)*a2; *a2; result = (unsigned int *)*a2 ) /*0x5b3ff0*/
  {
    a2 = result + 1; /*0x5b3fff*/
    if ( result[2] >= a1[2] ) /*0x5b4002*/
      a2 = result; /*0x5b4004*/
  }
  *a2 = (unsigned int)(a1);
  *a1 = 0; /*0x5b400f*/
  a1[1] = 0; /*0x5b4015*/
  return result; /*0x5b401c*/
}
}
// 0x5B40B0
namespace gamemd {
AbstractClass * * SearchMIXFile(char *Source, char aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B40B0)
}
}
// 0x5B4430
namespace gamemd {
ObjectClass * * FileInfoCache_Lookup(const char * a1, unsigned int * a2, unsigned int * a3, unsigned int * a4, unsigned int * a5)
{
  int v5; // eax
  unsigned int *v6; // ebp
  int v7; // ecx
  int v8; // edi
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned int v14[3]; // [esp+18h] [ebp-110h] BYREF
  char String[260]; // [esp+24h] [ebp-104h] BYREF

  if ( !a1 ) /*0x5b4442*/
    return 0; /*0x5b4442*/
  strcpy(String, a1); /*0x5b4462*/
  _strupr(String); /*0x5b4470*/
  memset(v14, 0, sizeof(v14)); /*0x5b4490*/
  v5 = ((Checksummer*)v14)->Add_Buffer((uint8_t *)String, strlen(String)); /*0x5b449c*/
  v6 = (unsigned int *)dword_ABEFE0; /*0x5b44a1*/
  LABEL_3:
  while ( 2 ) /*0x5b44c0*/
  {
    if ( !v6 || !v6[1] || !v6[2] ) /*0x5b44c0*/
      return 0; /*0x5b4580*/
    v7 = v6[5]; /*0x5b44cb*/
    v8 = v6[8]; /*0x5b44ce*/
    if ( v7 <= 0 ) /*0x5b44d3*/
      goto LABEL_14; /*0x5b44d3*/
    while ( 1 ) /*0x5b44df*/
    {
      v9 = *(unsigned int *)(v8 + 12 * (v7 / 2)); /*0x5b44df*/
      v10 = v8 + 12 * (v7 / 2); /*0x5b44e2*/
      if ( v9 <= v5 ) /*0x5b44e7*/
        break; /*0x5b44e7*/
      v7 /= 2; /*0x5b44e9*/
  LABEL_11:
      if ( v7 <= 0 ) /*0x5b44fb*/
      {
        v6 = (unsigned int *)v6[1]; /*0x5b44fd*/
        goto LABEL_3; /*0x5b4501*/
      }
    }
    if ( v9 != v5 ) /*0x5b44ed*/
    {
      v8 = v10 + 12; /*0x5b44ef*/
      v7 += -1 - v7 / 2; /*0x5b44f7*/
      goto LABEL_11; /*0x5b44f7*/
    }
    if ( !v10 ) /*0x5b4505*/
    {
  LABEL_14:
      v6 = (unsigned int *)v6[1]; /*0x5b4507*/
      continue; /*0x5b450b*/
    }
    break;
  }
  if ( a3 ) /*0x5b4516*/
    *a3 = (unsigned int)(v6); /*0x5b4518*/
  if ( a5 ) /*0x5b4523*/
    *a5 = *(unsigned int *)(v10 + 8); /*0x5b4528*/
  if ( a2 ) /*0x5b4530*/
    *a2 = 0; /*0x5b4532*/
  if ( a4 ) /*0x5b4541*/
    *a4 = *(unsigned int *)(v10 + 4); /*0x5b4546*/
  if ( a2 ) /*0x5b454a*/
  {
    v11 = v6[9]; /*0x5b454c*/
    if ( v11 ) /*0x5b4551*/
      *a2 = v11 + *(unsigned int *)(v10 + 4); /*0x5b4558*/
  }
  if ( !v6[9] ) /*0x5b455a*/
  {
    if ( a4 ) /*0x5b4563*/
      *a4 += v6[7]; /*0x5b456c*/
  }
  return (gamemd::ObjectClass **)(1);
}
}
// 0x5B4B10
namespace gamemd {
int GameSetupDialogProc(HWND hWnd, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B4B10.json)
}
}
// 0x5B67F0
namespace gamemd {
AbstractClass * * ApplyGameOptions(CampaignScore * aP0)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B67F0)
}
}
// 0x5BB290
namespace gamemd {
LZOPipe * * __usercall GenerateRandomMapPreview(int a1, void * aPreviewBin)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BB290)
}
}
// 0x5BC6E0
namespace gamemd {
void AudioDebug_DlgProc(HWND hWnd, UINT, WPARAM, LPARAM)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC6E0.json)
}
}
// 0x5BCE10
namespace gamemd {
int sub_5BCE10(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BCE10.json)
}
}
// 0x5BDC00
namespace gamemd {
void * sub_5BDC00(int * a1, int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BDC00)
}
}
// 0x5BF390
namespace gamemd {
void sub_5BF390(int a1, char a2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF390.json)
}
}
// 0x5BF8C0
namespace gamemd {
ObjectClass * * sub_5BF8C0()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BF8C0)
}
}
// 0x5BF950
namespace gamemd {
AbstractClass * * sub_5BF950()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BF950)
}
}
// 0x5BFAA0
namespace gamemd {
void* * LoadVQMovie(char * Source, int * a2, int a3, int a4, IUnknown * a5, int a6, int a7, int a8, IUnknown * a9, int a10, int a11, char a12)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BFAA0)
}
}
// 0x5BFF60
namespace gamemd {
void Movie_RenderFrame(int a1, char a2, int a3, char a4)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BFF60.json)
}
}
// 0x5B1B80
namespace gamemd {
int sub_5B1B80()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1B80.json)
}
} // namespace gamemd

// 0x5B1BA0
namespace gamemd {
void sub_5B1BA0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1BA0.json)
}
} // namespace gamemd

// 0x5B1BD0
namespace gamemd {
void sub_5B1BD0()
{
  dbl_ABEEC8 = dbl_ABEE78 / 60.0; /*0x5b1bdc*/
}
} // namespace gamemd

// 0x5B1BF0
namespace gamemd {
void sub_5B1BF0()
{
  dbl_ABEEB0 = 1.0 / dbl_ABEEC8; /*0x5b1bfc*/
}
} // namespace gamemd

// 0x5B1C10
namespace gamemd {
void sub_5B1C10()
{
  dbl_ABEEA8 = 0.0174532925199433 * 45.0; /*0x5b1c1c*/
}
} // namespace gamemd

// 0x5B1C30
namespace gamemd {
void sub_5B1C30()
{
  dbl_ABEE80 = 0.0174532925199433 * 60.0; /*0x5b1c3c*/
}
} // namespace gamemd

// 0x5B1C50
namespace gamemd {
void sub_5B1C50()
{
  dbl_ABEE58 = 0.0174532925199433 * 90.0; /*0x5b1c5c*/
}
} // namespace gamemd

// 0x5B1C70
namespace gamemd {
long long sub_5B1C70()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABEE58 - dbl_ABEE80); /*0x5b1c82*/
  result = Math::RoundToInt(v0 * dbl_ABEE78 * 0.5); /*0x5b1c96*/
  dword_ABEED0 = result; /*0x5b1c9b*/
  return result; /*0x5b1ca0*/
}
} // namespace gamemd

// 0x5B1CB0
namespace gamemd {
void sub_5B1CB0()
{
  dbl_ABEE88 = Math::ArcTan((double)dword_ABEED0 * 0.00390625); /*0x5b1cc7*/
}
} // namespace gamemd

// 0x5B1CE0
namespace gamemd {
void sub_5B1CE0()
{
  dbl_ABEEA0 = Math::ArcTan((double)(2 * dword_ABEED0) / dbl_ABEE78); /*0x5b1d02*/
}
} // namespace gamemd

// 0x5B1D10
namespace gamemd {
long long sub_5B1D10()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEED0) + 0.5); /*0x5b1d2b*/
  dword_ABEEC4 = result; /*0x5b1d30*/
  return result; /*0x5b1d36*/
}
} // namespace gamemd

// 0x5B1D40
namespace gamemd {
int sub_5B1D40()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1D40.json)
}
} // namespace gamemd

// 0x5B1D50
namespace gamemd {
int sub_5B1D50()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1D50.json)
}
} // namespace gamemd

// 0x5B1D70
namespace gamemd {
int sub_5B1D70()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1D70.json)
}
} // namespace gamemd

// 0x5B1D90
namespace gamemd {
double * sub_5B1D90()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1D90.json)
}
} // namespace gamemd

// 0x5B1EE0
namespace gamemd {
int sub_5B1EE0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1EE0.json)
}
} // namespace gamemd

// 0x5B1F00
namespace gamemd {
void sub_5B1F00()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B1F00.json)
}
} // namespace gamemd

// 0x5B1F30
namespace gamemd {
void sub_5B1F30()
{
  dbl_ABEF48 = dbl_ABEEF8 / 60.0; /*0x5b1f3c*/
}
} // namespace gamemd

// 0x5B1F50
namespace gamemd {
void sub_5B1F50()
{
  dbl_ABEF30 = 1.0 / dbl_ABEF48; /*0x5b1f5c*/
}
} // namespace gamemd

// 0x5B1F70
namespace gamemd {
void sub_5B1F70()
{
  dbl_ABEF28 = 0.0174532925199433 * 45.0; /*0x5b1f7c*/
}
} // namespace gamemd

// 0x5B1F90
namespace gamemd {
void sub_5B1F90()
{
  dbl_ABEF00 = 0.0174532925199433 * 60.0; /*0x5b1f9c*/
}
} // namespace gamemd

// 0x5B1FB0
namespace gamemd {
void sub_5B1FB0()
{
  dbl_ABEED8 = 0.0174532925199433 * 90.0; /*0x5b1fbc*/
}
} // namespace gamemd

// 0x5B1FD0
namespace gamemd {
long long sub_5B1FD0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABEED8 - dbl_ABEF00); /*0x5b1fe2*/
  result = Math::RoundToInt(v0 * dbl_ABEEF8 * 0.5); /*0x5b1ff6*/
  dword_ABEF50 = result; /*0x5b1ffb*/
  return result; /*0x5b2000*/
}
} // namespace gamemd

// 0x5B2010
namespace gamemd {
void sub_5B2010()
{
  dbl_ABEF08 = Math::ArcTan((double)dword_ABEF50 * 0.00390625); /*0x5b2027*/
}
} // namespace gamemd

// 0x5B2040
namespace gamemd {
void sub_5B2040()
{
  dbl_ABEF20 = Math::ArcTan((double)(2 * dword_ABEF50) / dbl_ABEEF8); /*0x5b2062*/
}
} // namespace gamemd

// 0x5B2070
namespace gamemd {
long long sub_5B2070()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEF50) + 0.5); /*0x5b208b*/
  dword_ABEF44 = result; /*0x5b2090*/
  return result; /*0x5b2096*/
}
} // namespace gamemd

// 0x5B20A0
namespace gamemd {
int sub_5B20A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B20A0.json)
}
} // namespace gamemd

// 0x5B20B0
namespace gamemd {
int sub_5B20B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B20B0.json)
}
} // namespace gamemd

// 0x5B20D0
namespace gamemd {
int sub_5B20D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B20D0.json)
}
} // namespace gamemd

// 0x5B2B90
namespace gamemd {
void sub_5B2B90()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B2B90.json)
}
} // namespace gamemd

// 0x5B2BC0
namespace gamemd {
void sub_5B2BC0()
{
  dbl_ABEFC8 = dbl_ABEF78 / 60.0; /*0x5b2bcc*/
}
} // namespace gamemd

// 0x5B2BE0
namespace gamemd {
void sub_5B2BE0()
{
  dbl_ABEFB0 = 1.0 / dbl_ABEFC8; /*0x5b2bec*/
}
} // namespace gamemd

// 0x5B2C00
namespace gamemd {
void sub_5B2C00()
{
  dbl_ABEFA8 = 0.0174532925199433 * 45.0; /*0x5b2c0c*/
}
} // namespace gamemd

// 0x5B2C20
namespace gamemd {
void sub_5B2C20()
{
  dbl_ABEF80 = 0.0174532925199433 * 60.0; /*0x5b2c2c*/
}
} // namespace gamemd

// 0x5B2C40
namespace gamemd {
void sub_5B2C40()
{
  dbl_ABEF58 = 0.0174532925199433 * 90.0; /*0x5b2c4c*/
}
} // namespace gamemd

// 0x5B2C60
namespace gamemd {
long long sub_5B2C60()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABEF58 - dbl_ABEF80); /*0x5b2c72*/
  result = Math::RoundToInt(v0 * dbl_ABEF78 * 0.5); /*0x5b2c86*/
  dword_ABEFD0 = result; /*0x5b2c8b*/
  return result; /*0x5b2c90*/
}
} // namespace gamemd

// 0x5B2CA0
namespace gamemd {
void sub_5B2CA0()
{
  dbl_ABEF88 = Math::ArcTan((double)dword_ABEFD0 * 0.00390625); /*0x5b2cb7*/
}
} // namespace gamemd

// 0x5B2CD0
namespace gamemd {
void sub_5B2CD0()
{
  dbl_ABEFA0 = Math::ArcTan((double)(2 * dword_ABEFD0) / dbl_ABEF78); /*0x5b2cf2*/
}
} // namespace gamemd

// 0x5B2D00
namespace gamemd {
long long sub_5B2D00()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABEFD0) + 0.5); /*0x5b2d1b*/
  dword_ABEFC4 = result; /*0x5b2d20*/
  return result; /*0x5b2d26*/
}
} // namespace gamemd

// 0x5B2D30
namespace gamemd {
int sub_5B2D30()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B2D30.json)
}
} // namespace gamemd

// 0x5B2D40
namespace gamemd {
int sub_5B2D40()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B2D40.json)
}
} // namespace gamemd

// 0x5B2D60
namespace gamemd {
int sub_5B2D60()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B2D60.json)
}
} // namespace gamemd

// 0x5B2D80
namespace gamemd {
int sub_5B2D80()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B2D80.json)
}
} // namespace gamemd

// 0x5B3950
namespace gamemd {
char * Name_FromIndex(int a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B3950)
}
} // namespace gamemd

// 0x5B3AA0
namespace gamemd {
int sub_5B3AA0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B3AA0.json)
}
} // namespace gamemd

// 0x5B3AC0
namespace gamemd {
int sub_5B3AC0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B3AC0.json)
}
} // namespace gamemd

// 0x5B3E90
namespace gamemd {
char sub_5B3E90()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B3E90.json)
}
} // namespace gamemd

// 0x5B3F50
namespace gamemd {
void sub_5B3F50()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B3F50.json)
}
} // namespace gamemd

// 0x5B4350
namespace gamemd {
int sub_5B4350()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B4350.json)
}
} // namespace gamemd

// 0x5B43E0
namespace gamemd {
char ObjectClass::_do_always_noconv_codecvt_base_std__MBE_NXZ_7()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5B43E0)
}
} // namespace gamemd

// 0x5B43F0
namespace gamemd {
char ReturnTrue(AnimClass * aP0)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B43F0.json)
}
} // namespace gamemd

// 0x5B4400
namespace gamemd {
void sub_5B4400()
{
      // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B4400.json)
}
} // namespace gamemd

// 0x5B47A0
namespace gamemd {
int sub_5B47A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B47A0.json)
}
} // namespace gamemd

// 0x5B47C0
namespace gamemd {
void sub_5B47C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B47C0.json)
}
} // namespace gamemd

// 0x5B47F0
namespace gamemd {
void sub_5B47F0()
{
  dbl_ABF080 = dbl_ABF030 / 60.0; /*0x5b47fc*/
}
} // namespace gamemd

// 0x5B4810
namespace gamemd {
void sub_5B4810()
{
  dbl_ABF068 = 1.0 / dbl_ABF080; /*0x5b481c*/
}
} // namespace gamemd

// 0x5B4830
namespace gamemd {
void sub_5B4830()
{
  dbl_ABF060 = 0.0174532925199433 * 45.0; /*0x5b483c*/
}
} // namespace gamemd

// 0x5B4850
namespace gamemd {
void sub_5B4850()
{
  dbl_ABF038 = 0.0174532925199433 * 60.0; /*0x5b485c*/
}
} // namespace gamemd

// 0x5B4870
namespace gamemd {
void sub_5B4870()
{
  dbl_ABF010 = 0.0174532925199433 * 90.0; /*0x5b487c*/
}
} // namespace gamemd

// 0x5B4890
namespace gamemd {
long long sub_5B4890()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF010 - dbl_ABF038); /*0x5b48a2*/
  result = Math::RoundToInt(v0 * dbl_ABF030 * 0.5); /*0x5b48b6*/
  dword_ABF088 = result; /*0x5b48bb*/
  return result; /*0x5b48c0*/
}
} // namespace gamemd

// 0x5B48D0
namespace gamemd {
void sub_5B48D0()
{
  dbl_ABF040 = Math::ArcTan((double)dword_ABF088 * 0.00390625); /*0x5b48e7*/
}
} // namespace gamemd

// 0x5B4900
namespace gamemd {
void sub_5B4900()
{
  dbl_ABF058 = Math::ArcTan((double)(2 * dword_ABF088) / dbl_ABF030); /*0x5b4922*/
}
} // namespace gamemd

// 0x5B4930
namespace gamemd {
long long sub_5B4930()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF088) + 0.5); /*0x5b494b*/
  dword_ABF07C = result; /*0x5b4950*/
  return result; /*0x5b4956*/
}
} // namespace gamemd

// 0x5B4960
namespace gamemd {
int sub_5B4960()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B4960.json)
}
} // namespace gamemd

// 0x5B4970
namespace gamemd {
int sub_5B4970()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B4970.json)
}
} // namespace gamemd

// 0x5B4990
namespace gamemd {
int sub_5B4990()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B4990.json)
}
} // namespace gamemd

// 0x5B57D0
namespace gamemd {
HWND sub_5B57D0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B57D0.json)
}
} // namespace gamemd

// 0x5B5960
namespace gamemd {
char sub_5B5960()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B5960.json)
}
} // namespace gamemd

// 0x5B5A50
namespace gamemd {
char sub_5B5A50(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B5A50.json)
}
} // namespace gamemd

// 0x5B6DA0
namespace gamemd {
void sub_5B6DA0(wchar_t * Source)
{
    (void)Source;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B6DA0.json)
}
} // namespace gamemd

// 0x5B6F30
namespace gamemd {
HWND sub_5B6F30()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B6F30.json)
}
} // namespace gamemd

// 0x5B75D0
namespace gamemd {
int sub_5B75D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B75D0.json)
}
} // namespace gamemd

// 0x5B75F0
namespace gamemd {
void sub_5B75F0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B75F0.json)
}
} // namespace gamemd

// 0x5B7620
namespace gamemd {
void sub_5B7620()
{
  dbl_ABF100 = dbl_ABF0B0 / 60.0; /*0x5b762c*/
}
} // namespace gamemd

// 0x5B7640
namespace gamemd {
void sub_5B7640()
{
  dbl_ABF0E8 = 1.0 / dbl_ABF100; /*0x5b764c*/
}
} // namespace gamemd

// 0x5B7660
namespace gamemd {
void sub_5B7660()
{
  dbl_ABF0E0 = 0.0174532925199433 * 45.0; /*0x5b766c*/
}
} // namespace gamemd

// 0x5B7680
namespace gamemd {
void sub_5B7680()
{
  dbl_ABF0B8 = 0.0174532925199433 * 60.0; /*0x5b768c*/
}
} // namespace gamemd

// 0x5B76A0
namespace gamemd {
void sub_5B76A0()
{
  dbl_ABF090 = 0.0174532925199433 * 90.0; /*0x5b76ac*/
}
} // namespace gamemd

// 0x5B76C0
namespace gamemd {
long long sub_5B76C0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF090 - dbl_ABF0B8); /*0x5b76d2*/
  result = Math::RoundToInt(v0 * dbl_ABF0B0 * 0.5); /*0x5b76e6*/
  dword_ABF108 = result; /*0x5b76eb*/
  return result; /*0x5b76f0*/
}
} // namespace gamemd

// 0x5B7700
namespace gamemd {
void sub_5B7700()
{
  dbl_ABF0C0 = Math::ArcTan((double)dword_ABF108 * 0.00390625); /*0x5b7717*/
}
} // namespace gamemd

// 0x5B7730
namespace gamemd {
void sub_5B7730()
{
  dbl_ABF0D8 = Math::ArcTan((double)(2 * dword_ABF108) / dbl_ABF0B0); /*0x5b7752*/
}
} // namespace gamemd

// 0x5B7760
namespace gamemd {
long long sub_5B7760()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF108) + 0.5); /*0x5b777b*/
  dword_ABF0FC = result; /*0x5b7780*/
  return result; /*0x5b7786*/
}
} // namespace gamemd

// 0x5B7790
namespace gamemd {
int sub_5B7790()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B7790.json)
}
} // namespace gamemd

// 0x5B77A0
namespace gamemd {
int sub_5B77A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B77A0.json)
}
} // namespace gamemd

// 0x5B77C0
namespace gamemd {
int sub_5B77C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B77C0.json)
}
} // namespace gamemd

// 0x5B9250
namespace gamemd {
HWND sub_5B9250()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B9250.json)
}
} // namespace gamemd

// 0x5B93F0
namespace gamemd {
char sub_5B93F0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B93F0.json)
}
} // namespace gamemd

// 0x5B9450
namespace gamemd {
unsigned int sub_5B9450()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B9450.json)
}
} // namespace gamemd

// 0x5B94C0
namespace gamemd {
char sub_5B94C0(char a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005B94C0.json)
}
} // namespace gamemd

// 0x5BAA80
namespace gamemd {
void sub_5BAA80(wchar_t * Format, unsigned int a3, int a4)
{
    (void)Format; (void)a3; (void)a4;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BAA80.json)
}
} // namespace gamemd

// 0x5BAB00
namespace gamemd {
HWND sub_5BAB00()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BAB00.json)
}
} // namespace gamemd

// 0x5BBF70
namespace gamemd {
int sub_5BBF70()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BBF70.json)
}
} // namespace gamemd

// 0x5BBF90
namespace gamemd {
void sub_5BBF90()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BBF90.json)
}
} // namespace gamemd

// 0x5BBFC0
namespace gamemd {
void sub_5BBFC0()
{
  dbl_ABF210 = dbl_ABF150 / 60.0; /*0x5bbfcc*/
}
} // namespace gamemd

// 0x5BBFE0
namespace gamemd {
void sub_5BBFE0()
{
  dbl_ABF1C0 = 1.0 / dbl_ABF210; /*0x5bbfec*/
}
} // namespace gamemd

// 0x5BC000
namespace gamemd {
void sub_5BC000()
{
  dbl_ABF1B8 = 0.0174532925199433 * 45.0; /*0x5bc00c*/
}
} // namespace gamemd

// 0x5BC020
namespace gamemd {
void sub_5BC020()
{
  dbl_ABF158 = 0.0174532925199433 * 60.0; /*0x5bc02c*/
}
} // namespace gamemd

// 0x5BC040
namespace gamemd {
void sub_5BC040()
{
  dbl_ABF130 = 0.0174532925199433 * 90.0; /*0x5bc04c*/
}
} // namespace gamemd

// 0x5BC060
namespace gamemd {
long long sub_5BC060()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF130 - dbl_ABF158); /*0x5bc072*/
  result = Math::RoundToInt(v0 * dbl_ABF150 * 0.5); /*0x5bc086*/
  dword_ABF218 = result; /*0x5bc08b*/
  return result; /*0x5bc090*/
}
} // namespace gamemd

// 0x5BC0A0
namespace gamemd {
void sub_5BC0A0()
{
  dbl_ABF160 = Math::ArcTan((double)dword_ABF218 * 0.00390625); /*0x5bc0b7*/
}
} // namespace gamemd

// 0x5BC0D0
namespace gamemd {
void sub_5BC0D0()
{
  dbl_ABF1B0 = Math::ArcTan((double)(2 * dword_ABF218) / dbl_ABF150); /*0x5bc0f2*/
}
} // namespace gamemd

// 0x5BC100
namespace gamemd {
long long sub_5BC100()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF218) + 0.5); /*0x5bc11b*/
  dword_ABF20C = result; /*0x5bc120*/
  return result; /*0x5bc126*/
}
} // namespace gamemd

// 0x5BC130
namespace gamemd {
int sub_5BC130()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC130.json)
}
} // namespace gamemd

// 0x5BC140
namespace gamemd {
int sub_5BC140()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC140.json)
}
} // namespace gamemd

// 0x5BC160
namespace gamemd {
int sub_5BC160()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC160.json)
}
} // namespace gamemd

// 0x5BC300
namespace gamemd {
int _ioterm()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC300.json)
}
} // namespace gamemd

// 0x5BC440
namespace gamemd {
ObjectClass * sub_5BC440()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BC440)
}
} // namespace gamemd

// 0x5BC450
namespace gamemd {
int sub_5BC450(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BC450)
}
}
// 0x5BC460
namespace gamemd {
char sub_5BC460(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC460.json)
}
} // namespace gamemd

// 0x5BC4D0
namespace gamemd {
char sub_5BC4D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC4D0.json)
}
} // namespace gamemd

// 0x5BC530
namespace gamemd {
int sub_5BC530()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BC530.json)
}
} // namespace gamemd

// 0x5BCB90
namespace gamemd {
ObjectClass * sub_5BCB90(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BCB90.json)
}
} // namespace gamemd

// 0x5BCC20
namespace gamemd {
void nullsub_174()
{
  ; /*0x5bcc20*/
}
} // namespace gamemd

// 0x5BCC30
namespace gamemd {
int E4Recv_5BCC30::sub_5BCC30()
{

  return *((unsigned int *)this + 2502); /*0x5bcc36*/

}
} // namespace gamemd

// 0x5BCC60
namespace gamemd {
int sub_5BCC60(int a2, int a3, int a4, int a5)
{
    (void)a2; (void)a3; (void)a4; (void)a5; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BCC60.json)
}
} // namespace gamemd

// 0x5BCCE0
namespace gamemd {
char E4Recv_5BCCE0::sub_5BCCE0()
{

  return *((unsigned char *)this + 10036); /*0x5bcce6*/

}
} // namespace gamemd

// 0x5BD240
namespace gamemd {
char sub_5BD240(int a1, size_t BufferCount, wchar_t Format)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD240.json)
}
} // namespace gamemd

// 0x5BD2E0
namespace gamemd {
char sub_5BD2E0(ObjectClass * aP1, int a3, int a4, int a5)
{
    (void)aP1; (void)a3; (void)a4; (void)a5; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD2E0.json)
}
} // namespace gamemd

// 0x5BD560
namespace gamemd {
unsigned int * sub_5BD560()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD560.json)
}
} // namespace gamemd

// 0x5BD7E0
namespace gamemd {
void sub_5BD7E0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD7E0.json)
}
} // namespace gamemd

// 0x5BD810
namespace gamemd {
void sub_5BD810()
{
  dbl_ABF2D0 = dbl_ABF270 / 60.0; /*0x5bd81c*/
}
} // namespace gamemd

// 0x5BD830
namespace gamemd {
void sub_5BD830()
{
  dbl_ABF2B8 = 1.0 / dbl_ABF2D0; /*0x5bd83c*/
}
} // namespace gamemd

// 0x5BD850
namespace gamemd {
void sub_5BD850()
{
  dbl_ABF2B0 = 0.0174532925199433 * 45.0; /*0x5bd85c*/
}
} // namespace gamemd

// 0x5BD870
namespace gamemd {
void sub_5BD870()
{
  dbl_ABF278 = 0.0174532925199433 * 60.0; /*0x5bd87c*/
}
} // namespace gamemd

// 0x5BD890
namespace gamemd {
void sub_5BD890()
{
  dbl_ABF248 = 0.0174532925199433 * 90.0; /*0x5bd89c*/
}
} // namespace gamemd

// 0x5BD8B0
namespace gamemd {
long long sub_5BD8B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF248 - dbl_ABF278); /*0x5bd8c2*/
  result = Math::RoundToInt(v0 * dbl_ABF270 * 0.5); /*0x5bd8d6*/
  dword_ABF2D8 = result; /*0x5bd8db*/
  return result; /*0x5bd8e0*/
}
} // namespace gamemd

// 0x5BD8F0
namespace gamemd {
void sub_5BD8F0()
{
  dbl_ABF280 = Math::ArcTan((double)dword_ABF2D8 * 0.00390625); /*0x5bd907*/
}
} // namespace gamemd

// 0x5BD920
namespace gamemd {
void sub_5BD920()
{
  dbl_ABF298 = Math::ArcTan((double)(2 * dword_ABF2D8) / dbl_ABF270); /*0x5bd942*/
}
} // namespace gamemd

// 0x5BD950
namespace gamemd {
long long sub_5BD950()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF2D8) + 0.5); /*0x5bd96b*/
  dword_ABF2CC = result; /*0x5bd970*/
  return result; /*0x5bd976*/
}
} // namespace gamemd

// 0x5BD980
namespace gamemd {
int sub_5BD980()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD980.json)
}
} // namespace gamemd

// 0x5BD990
namespace gamemd {
int sub_5BD990()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD990.json)
}
} // namespace gamemd

// 0x5BD9B0
namespace gamemd {
int sub_5BD9B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD9B0.json)
}
} // namespace gamemd

// 0x5BD9D0
namespace gamemd {
int sub_5BD9D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD9D0.json)
}
} // namespace gamemd

// 0x5BD9F0
namespace gamemd {
int sub_5BD9F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BD9F0.json)
}
} // namespace gamemd

// 0x5BDA20
namespace gamemd {
void sub_5BDA20()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BDA20.json)
}
} // namespace gamemd

// 0x5BDA40
namespace gamemd {
unsigned char * sub_5BDA40()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BDA40.json)
}
} // namespace gamemd

// 0x5BEAB0
namespace gamemd {
int sub_5BEAB0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BEAB0.json)
}
} // namespace gamemd

// 0x5BEAD0
namespace gamemd {
void sub_5BEAD0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BEAD0.json)
}
} // namespace gamemd

// 0x5BEB00
namespace gamemd {
void sub_5BEB00()
{
  dbl_ABF350 = dbl_ABF300 / 60.0; /*0x5beb0c*/
}
} // namespace gamemd

// 0x5BEB20
namespace gamemd {
void sub_5BEB20()
{
  dbl_ABF338 = 1.0 / dbl_ABF350; /*0x5beb2c*/
}
} // namespace gamemd

// 0x5BEB40
namespace gamemd {
void sub_5BEB40()
{
  dbl_ABF330 = 0.0174532925199433 * 45.0; /*0x5beb4c*/
}
} // namespace gamemd

// 0x5BEB60
namespace gamemd {
void sub_5BEB60()
{
  dbl_ABF308 = 0.0174532925199433 * 60.0; /*0x5beb6c*/
}
} // namespace gamemd

// 0x5BEB80
namespace gamemd {
void sub_5BEB80()
{
  dbl_ABF2E0 = 0.0174532925199433 * 90.0; /*0x5beb8c*/
}
} // namespace gamemd

// 0x5BEBA0
namespace gamemd {
long long sub_5BEBA0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF2E0 - dbl_ABF308); /*0x5bebb2*/
  result = Math::RoundToInt(v0 * dbl_ABF300 * 0.5); /*0x5bebc6*/
  dword_ABF358 = result; /*0x5bebcb*/
  return result; /*0x5bebd0*/
}
} // namespace gamemd

// 0x5BEBE0
namespace gamemd {
void sub_5BEBE0()
{
  dbl_ABF310 = Math::ArcTan((double)dword_ABF358 * 0.00390625); /*0x5bebf7*/
}
} // namespace gamemd

// 0x5BEC10
namespace gamemd {
void sub_5BEC10()
{
  dbl_ABF328 = Math::ArcTan((double)(2 * dword_ABF358) / dbl_ABF300); /*0x5bec32*/
}
} // namespace gamemd

// 0x5BEC40
namespace gamemd {
long long sub_5BEC40()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF358) + 0.5); /*0x5bec5b*/
  dword_ABF34C = result; /*0x5bec60*/
  return result; /*0x5bec66*/
}
} // namespace gamemd

// 0x5BEC70
namespace gamemd {
int sub_5BEC70()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BEC70.json)
}
} // namespace gamemd

// 0x5BEC80
namespace gamemd {
int sub_5BEC80()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BEC80.json)
}
} // namespace gamemd

// 0x5BECA0
namespace gamemd {
int sub_5BECA0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BECA0.json)
}
} // namespace gamemd

// 0x5BECC0
namespace gamemd {
int sub_5BECC0()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BECC0.json)
}
} // namespace gamemd

// 0x5BF360
namespace gamemd {
int sub_5BF360()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF360.json)
}
} // namespace gamemd

// 0x5BF5C0
namespace gamemd {
int sub_5BF5C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF5C0.json)
}
} // namespace gamemd

// 0x5BF5E0
namespace gamemd {
void sub_5BF5E0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF5E0.json)
}
} // namespace gamemd

// 0x5BF610
namespace gamemd {
void sub_5BF610()
{
  dbl_ABF3E8 = dbl_ABF380 / 60.0; /*0x5bf61c*/
}
} // namespace gamemd

// 0x5BF630
namespace gamemd {
void sub_5BF630()
{
  dbl_ABF3D0 = 1.0 / dbl_ABF3E8; /*0x5bf63c*/
}
} // namespace gamemd

// 0x5BF650
namespace gamemd {
void sub_5BF650()
{
  dbl_ABF3C8 = 0.0174532925199433 * 45.0; /*0x5bf65c*/
}
} // namespace gamemd

// 0x5BF670
namespace gamemd {
void sub_5BF670()
{
  dbl_ABF388 = 0.0174532925199433 * 60.0; /*0x5bf67c*/
}
} // namespace gamemd

// 0x5BF690
namespace gamemd {
void sub_5BF690()
{
  dbl_ABF360 = 0.0174532925199433 * 90.0; /*0x5bf69c*/
}
} // namespace gamemd

// 0x5BF6B0
namespace gamemd {
long long sub_5BF6B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABF360 - dbl_ABF388); /*0x5bf6c2*/
  result = Math::RoundToInt(v0 * dbl_ABF380 * 0.5); /*0x5bf6d6*/
  dword_ABF3F0 = result; /*0x5bf6db*/
  return result; /*0x5bf6e0*/
}
} // namespace gamemd

// 0x5BF6F0
namespace gamemd {
void sub_5BF6F0()
{
  dbl_ABF3A8 = Math::ArcTan((double)dword_ABF3F0 * 0.00390625); /*0x5bf707*/
}
} // namespace gamemd

// 0x5BF720
namespace gamemd {
void sub_5BF720()
{
  dbl_ABF3C0 = Math::ArcTan((double)(2 * dword_ABF3F0) / dbl_ABF380); /*0x5bf742*/
}
} // namespace gamemd

// 0x5BF750
namespace gamemd {
long long sub_5BF750()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABF3F0) + 0.5); /*0x5bf76b*/
  dword_ABF3E4 = result; /*0x5bf770*/
  return result; /*0x5bf776*/
}
} // namespace gamemd

// 0x5BF780
namespace gamemd {
int sub_5BF780()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF780.json)
}
} // namespace gamemd

// 0x5BF790
namespace gamemd {
int sub_5BF790()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF790.json)
}
} // namespace gamemd

// 0x5BF7B0
namespace gamemd {
int sub_5BF7B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF7B0.json)
}
} // namespace gamemd

// 0x5BF7D0
namespace gamemd {
int sub_5BF7D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF7D0.json)
}
} // namespace gamemd

// 0x5BF810
namespace gamemd {
void sub_5BF810()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF810.json)
}
} // namespace gamemd

// 0x5BF850
namespace gamemd {
int sub_5BF850()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005BF850.json)
}
} // namespace gamemd

// 0x5BF8B0
namespace gamemd {
int sub_5BF8B0()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5BF8B0)
}
} // namespace gamemd
