// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_410DC0_e4.hpp"
#include "e4/classes/E4Recv_412610_e4.hpp"
#include "e4/classes/E4Recv_41DD10_e4.hpp"
#include "e4/classes/E4Recv_41FD30_e4.hpp"
#include "e4/classes/E4Recv_41FD40_e4.hpp"
#include "e4/classes/E4Recv_41FD50_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Time_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AnimClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/TechnoClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Radar_e4.hpp"
#include "e4/classes/Building_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/AudioQueue_e4.hpp"
#include "e4/classes/E4Recv_425670_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/classes/E4Recv_5B3910_e4.hpp"
#include "e4/classes/FootClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/IPersistStream_e4.hpp"
#include "e4/classes/SessionClass_e4.hpp"
#include "e4/classes/TypeClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/AircraftClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"

// 0x4116A0
namespace gamemd {
int sub_4116A0(unsigned int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004116A0.json)
}
}
// 0x411820
namespace gamemd {
int ManageMultimediaTimer(struct _RTL_CRITICAL_SECTION * dwUser, int a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00411820.json)
}
}
// 0x411B20
namespace gamemd {
AbstractClass * * sub_411B20(DWORD_PTR dwUser, AnimClass * aP1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x411B20)
}
}
// 0x411DF0
namespace gamemd {
int InitializeSoundBufferPlayback(LPCRITICAL_SECTION lpCriticalSection)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00411DF0.json)
}
}
// 0x412000
namespace gamemd {
int SubmitDirectSoundBufferData(unsigned int a1, char * a2, char * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412000.json)
}
}
// 0x4123A0
namespace gamemd {
void fptc(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2)
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004123A0.json)
}
}
// 0x413CD0
namespace gamemd {
bool sub_413CD0(int a1)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00413CD0.json)
}
}
// 0x41B110
namespace gamemd {
INIClass * * PlaceAircraftFromINI(void * a1, void * a2, void * aAircraft)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x41B110)
}
}
// 0x41C610
namespace gamemd {
int CompareFunction(unsigned int * a1, unsigned int * a2)
{
  if ( *a1 == *a2 )
    return 0; /*0x41c620*/
  else
    return *a1 >= *a2 ? 1 : -1;
}
}
// 0x410070
namespace gamemd {
void sub_410070()
{
  dbl_887678 = Math::ArcTan(((double)dword_8876C0 * 0.00390625)); /*0x410087*/
}
} // namespace gamemd

// 0x4100A0
namespace gamemd {
void sub_4100A0()
{
  dbl_887690 = Math::ArcTan(((double)(2 * dword_8876C0) / dbl_887668)); /*0x4100c2*/
}
} // namespace gamemd

// 0x4100D0
namespace gamemd {
long long sub_4100D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_8876C0) + 0.5); /*0x4100eb*/
  dword_8876B4 = result; /*0x4100f0*/
  return result; /*0x4100f6*/
}
} // namespace gamemd

// 0x410110
namespace gamemd {
int sub_410110()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00410110.json)
}
} // namespace gamemd

// 0x410130
namespace gamemd {
int sub_410130()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00410130.json)
}
} // namespace gamemd

// 0x410150
namespace gamemd {
int sub_410150()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00410150.json)
}
} // namespace gamemd

// 0x410610
namespace gamemd {
void sub_410610()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00410610.json)
}
} // namespace gamemd

// 0x410640
namespace gamemd {
void sub_410640()
{
  dbl_887728 = dbl_8876D8 / 60.0; /*0x41064c*/
}
} // namespace gamemd

// 0x410660
namespace gamemd {
void sub_410660()
{
  dbl_887710 = 1.0 / dbl_887728; /*0x41066c*/
}
} // namespace gamemd

// 0x410680
namespace gamemd {
void sub_410680()
{
  dbl_887708 = 0.0174532925199433 * 45.0; /*0x41068c*/
}
} // namespace gamemd

// 0x4106A0
namespace gamemd {
void sub_4106A0()
{
  dbl_8876E0 = 0.0174532925199433 * 60.0; /*0x4106ac*/
}
} // namespace gamemd

// 0x4106C0
namespace gamemd {
void sub_4106C0()
{
  dbl_8876C8 = 0.0174532925199433 * 90.0; /*0x4106cc*/
}
} // namespace gamemd

// 0x4106E0
namespace gamemd {
long long sub_4106E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin((dbl_8876C8 - dbl_8876E0)); /*0x4106f2*/
  result = Math::RoundToInt(v0 * dbl_8876D8 * 0.5); /*0x410706*/
  dword_887730 = result; /*0x41070b*/
  return result; /*0x410710*/
}
} // namespace gamemd

// 0x410720
namespace gamemd {
void sub_410720()
{
  dbl_8876E8 = Math::ArcTan(((double)dword_887730 * 0.00390625)); /*0x410737*/
}
} // namespace gamemd

// 0x410750
namespace gamemd {
void sub_410750()
{
  dbl_887700 = Math::ArcTan(((double)(2 * dword_887730) / dbl_8876D8)); /*0x410772*/
}
} // namespace gamemd

// 0x410780
namespace gamemd {
long long sub_410780()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_887730) + 0.5); /*0x41079b*/
  dword_887724 = result; /*0x4107a0*/
  return result; /*0x4107a6*/
}
} // namespace gamemd

// 0x4107B0
namespace gamemd {
int sub_4107B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004107B0.json)
}
} // namespace gamemd

// 0x4107C0
namespace gamemd {
int sub_4107C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004107C0.json)
}
} // namespace gamemd

// 0x4107E0
namespace gamemd {
int sub_4107E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004107E0.json)
}
} // namespace gamemd

// 0x410CC0
namespace gamemd {
int sub_410CC0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00410CC0.json)
}
} // namespace gamemd

// 0x410DC0
namespace gamemd {
int sub_410DC0(int a2, int a3, int a4, int a5, int a6)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00410DC0.json)
}
} // namespace gamemd

// 0x410E70
namespace gamemd {
char * sub_410E70(char * a1, int a2, unsigned short a3)
{
  char *v3; // edx
  int v4; // ebx
  char *result; // eax
  unsigned int v6; // esi

  v3 = a1; /*0x410e70*/
  v4 = a2; /*0x410e75*/
  if ( ((uint8_t)a1 & 2) != 0 && a2 ) /*0x410e86*/
  {
    *(unsigned short *)a1 = a3; /*0x410e88*/
    v3 = a1 + 2; /*0x410e8b*/
    v4 = a2 - 1; /*0x410e8e*/
  }
  result = 0; /*0x410e91*/
  v6 = v4 >> 1; /*0x410e96*/
  if ( v4 >> 1 ) /*0x410e96*/
  {
    memset32(v3, 65537 * a3, v6); /*0x410eae*/
    result = &v3[4 * v6]; /*0x410eb0*/
  }
  if ( (v4 & 1) != 0 ) /*0x410eb7*/
  {
    if ( result ) /*0x410ebb*/
      *(unsigned short *)result = a3; /*0x410ebd*/
  }
  return result; /*0x410ec0*/
}
} // namespace gamemd

// 0x411680
namespace gamemd {
int sub_411680()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00411680.json)
}
} // namespace gamemd

// 0x412540
namespace gamemd {
int j_Time_GetElapsedMS()
{
  return Time::GetElapsedMS();
}
} // namespace gamemd

// 0x4125F0
namespace gamemd {
int sub_4125F0()
{
  return 1; /*0x4125f5*/
}
} // namespace gamemd

// 0x412600
namespace gamemd {
int sub_412600()
{
  return 1; /*0x412605*/
}
} // namespace gamemd

// 0x412610
namespace gamemd {
int sub_412610()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412610.json)
}
} // namespace gamemd

// 0x412660
namespace gamemd {
void sub_412660()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412660.json)
}
} // namespace gamemd

// 0x412690
namespace gamemd {
void sub_412690()
{
  dbl_889E40 = dbl_887858 / 60.0; /*0x41269c*/
}
} // namespace gamemd

// 0x4126B0
namespace gamemd {
void sub_4126B0()
{
  dbl_889E28 = 1.0 / dbl_889E40; /*0x4126bc*/
}
} // namespace gamemd

// 0x4126D0
namespace gamemd {
void sub_4126D0()
{
  dbl_889E20 = 0.0174532925199433 * 45.0; /*0x4126dc*/
}
} // namespace gamemd

// 0x4126F0
namespace gamemd {
void sub_4126F0()
{
  dbl_887860 = 0.0174532925199433 * 60.0; /*0x4126fc*/
}
} // namespace gamemd

// 0x412710
namespace gamemd {
void sub_412710()
{
  dbl_887838 = 0.0174532925199433 * 90.0; /*0x41271c*/
}
} // namespace gamemd

// 0x412730
namespace gamemd {
long long sub_412730()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_887838 - dbl_887860); /*0x412742*/
  result = Math::RoundToInt(v0 * dbl_887858 * 0.5); /*0x412756*/
  dword_889E48 = result; /*0x41275b*/
  return result; /*0x412760*/
}
} // namespace gamemd

// 0x412770
namespace gamemd {
void sub_412770()
{
  dbl_887868 = Math::ArcTan((double)dword_889E48 * 0.00390625); /*0x412787*/
}
} // namespace gamemd

// 0x4127A0
namespace gamemd {
void sub_4127A0()
{
  dbl_887880 = Math::ArcTan((double)(2 * dword_889E48) / dbl_887858); /*0x4127c2*/
}
} // namespace gamemd

// 0x4127D0
namespace gamemd {
long long sub_4127D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_889E48) + 0.5); /*0x4127eb*/
  dword_889E3C = result; /*0x4127f0*/
  return result; /*0x4127f6*/
}
} // namespace gamemd

// 0x412800
namespace gamemd {
int sub_412800()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412800.json)
}
} // namespace gamemd

// 0x412810
namespace gamemd {
int sub_412810()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412810.json)
}
} // namespace gamemd

// 0x412830
namespace gamemd {
int sub_412830()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412830.json)
}
} // namespace gamemd

// 0x412850
namespace gamemd {
int sub_412850()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412850.json)
}
} // namespace gamemd

// 0x412870
namespace gamemd {
int sub_412870()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00412870.json)
}
} // namespace gamemd

// 0x4128F0
namespace gamemd {
void sub_4128F0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004128F0.json)
}
} // namespace gamemd

// 0x413490
namespace gamemd {
void nullsub_3(AbstractClass * aP0)
{
  ; /*0x413490*/
}
} // namespace gamemd

// 0x413590
namespace gamemd {
int sub_413590()
{
  return 750; /*0x413595*/
}
} // namespace gamemd

// 0x413AC0
namespace gamemd {
void sub_413AC0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00413AC0.json)
}
} // namespace gamemd

// 0x413AF0
namespace gamemd {
void sub_413AF0()
{
  dbl_889EC0 = dbl_889E70 / 60.0; /*0x413afc*/
}
} // namespace gamemd

// 0x413B10
namespace gamemd {
void sub_413B10()
{
  dbl_889EA8 = 1.0 / dbl_889EC0; /*0x413b1c*/
}
} // namespace gamemd

// 0x413B30
namespace gamemd {
void sub_413B30()
{
  dbl_889EA0 = 0.0174532925199433 * 45.0; /*0x413b3c*/
}
} // namespace gamemd

// 0x413B50
namespace gamemd {
void sub_413B50()
{
  dbl_889E78 = 0.0174532925199433 * 60.0; /*0x413b5c*/
}
} // namespace gamemd

// 0x413B70
namespace gamemd {
void sub_413B70()
{
  dbl_889E50 = 0.0174532925199433 * 90.0; /*0x413b7c*/
}
} // namespace gamemd

// 0x413B90
namespace gamemd {
long long sub_413B90()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_889E50 - dbl_889E78); /*0x413ba2*/
  result = Math::RoundToInt(v0 * dbl_889E70 * 0.5); /*0x413bb6*/
  dword_889EC8 = result; /*0x413bbb*/
  return result; /*0x413bc0*/
}
} // namespace gamemd

// 0x413BD0
namespace gamemd {
void sub_413BD0()
{
  dbl_889E80 = Math::ArcTan((double)dword_889EC8 * 0.00390625); /*0x413be7*/
}
} // namespace gamemd

// 0x413C00
namespace gamemd {
void sub_413C00()
{
  dbl_889E98 = Math::ArcTan((double)(2 * dword_889EC8) / dbl_889E70); /*0x413c22*/
}
} // namespace gamemd

// 0x413C30
namespace gamemd {
long long sub_413C30()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_889EC8) + 0.5); /*0x413c4b*/
  dword_889EBC = result; /*0x413c50*/
  return result; /*0x413c56*/
}
} // namespace gamemd

// 0x413C60
namespace gamemd {
int sub_413C60()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00413C60.json)
}
} // namespace gamemd

// 0x413C70
namespace gamemd {
int sub_413C70()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00413C70.json)
}
} // namespace gamemd

// 0x413C90
namespace gamemd {
int sub_413C90()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00413C90.json)
}
} // namespace gamemd

// 0x413CB0
namespace gamemd {
int sub_413CB0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00413CB0.json)
}
} // namespace gamemd

// 0x414A10
namespace gamemd {
void nullsub_71(int a1, int a2)
{
  ; /*0x414a10*/
}
} // namespace gamemd

// 0x41C6A0
namespace gamemd {
void sub_41C6A0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C6A0.json)
}
} // namespace gamemd

// 0x41C6D0
namespace gamemd {
void sub_41C6D0()
{
  dbl_889F50 = dbl_889EF0 / 60.0; /*0x41c6dc*/
}
} // namespace gamemd

// 0x41C6F0
namespace gamemd {
void sub_41C6F0()
{
  dbl_889F30 = 1.0 / dbl_889F50; /*0x41c6fc*/
}
} // namespace gamemd

// 0x41C710
namespace gamemd {
void sub_41C710()
{
  dbl_889F28 = 0.0174532925199433 * 45.0; /*0x41c71c*/
}
} // namespace gamemd

// 0x41C730
namespace gamemd {
void sub_41C730()
{
  dbl_889EF8 = 0.0174532925199433 * 60.0; /*0x41c73c*/
}
} // namespace gamemd

// 0x41C750
namespace gamemd {
void sub_41C750()
{
  dbl_889ED0 = 0.0174532925199433 * 90.0; /*0x41c75c*/
}
} // namespace gamemd

// 0x41C770
namespace gamemd {
long long sub_41C770()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_889ED0 - dbl_889EF8); /*0x41c782*/
  result = Math::RoundToInt(v0 * dbl_889EF0 * 0.5); /*0x41c796*/
  dword_889F58 = result; /*0x41c79b*/
  return result; /*0x41c7a0*/
}
} // namespace gamemd

// 0x41C7B0
namespace gamemd {
void sub_41C7B0()
{
  dbl_889F00 = Math::ArcTan((double)dword_889F58 * 0.00390625); /*0x41c7c7*/
}
} // namespace gamemd

// 0x41C7E0
namespace gamemd {
void sub_41C7E0()
{
  dbl_889F18 = Math::ArcTan((double)(2 * dword_889F58) / dbl_889EF0); /*0x41c802*/
}
} // namespace gamemd

// 0x41C810
namespace gamemd {
long long sub_41C810()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_889F58) + 0.5); /*0x41c82b*/
  dword_889F4C = result; /*0x41c830*/
  return result; /*0x41c836*/
}
} // namespace gamemd

// 0x41C840
namespace gamemd {
int sub_41C840()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C840.json)
}
} // namespace gamemd

// 0x41C850
namespace gamemd {
int sub_41C850()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C850.json)
}
} // namespace gamemd

// 0x41C870
namespace gamemd {
int sub_41C870()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C870.json)
}
} // namespace gamemd

// 0x41C890
namespace gamemd {
int sub_41C890()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041C890.json)
}
} // namespace gamemd

// 0x41CAF0
namespace gamemd {
int sub_41CAF0(void * aLrotorShp, void * aRrotorShp)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041CAF0.json)
}
} // namespace gamemd

// 0x41CBD0
namespace gamemd {
void nullsub_85()
{
  ; /*0x41cbd0*/
}
} // namespace gamemd

// 0x41D070
namespace gamemd {
void sub_41D070()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041D070.json)
}
} // namespace gamemd

// 0x41D0A0
namespace gamemd {
void sub_41D0A0()
{
  dbl_889FF0 = dbl_889F88 / 60.0; /*0x41d0ac*/
}
} // namespace gamemd

// 0x41D0C0
namespace gamemd {
void sub_41D0C0()
{
  dbl_889FD8 = 1.0 / dbl_889FF0; /*0x41d0cc*/
}
} // namespace gamemd

// 0x41D0E0
namespace gamemd {
void sub_41D0E0()
{
  dbl_889FD0 = 0.0174532925199433 * 45.0; /*0x41d0ec*/
}
} // namespace gamemd

// 0x41D100
namespace gamemd {
void sub_41D100()
{
  dbl_889F90 = 0.0174532925199433 * 60.0; /*0x41d10c*/
}
} // namespace gamemd

// 0x41D120
namespace gamemd {
void sub_41D120()
{
  *(double *)(&g_INI_DefaultBuffer + 4) = 0.0174532925199433 * 90.0; /*0x41d12c*/
}
} // namespace gamemd

// 0x41D140
namespace gamemd {
long long sub_41D140()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(*(double *)(&g_INI_DefaultBuffer + 4) - dbl_889F90); /*0x41d152*/
  result = Math::RoundToInt(v0 * dbl_889F88 * 0.5); /*0x41d166*/
  dword_889FF8 = result; /*0x41d16b*/
  return result; /*0x41d170*/
}
} // namespace gamemd

// 0x41D180
namespace gamemd {
void sub_41D180()
{
  dbl_889F98 = Math::ArcTan((double)dword_889FF8 * 0.00390625); /*0x41d197*/
}
} // namespace gamemd

// 0x41D1B0
namespace gamemd {
void sub_41D1B0()
{
  dbl_889FB0 = Math::ArcTan((double)(2 * dword_889FF8) / dbl_889F88); /*0x41d1d2*/
}
} // namespace gamemd

// 0x41D1E0
namespace gamemd {
long long sub_41D1E0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_889FF8) + 0.5); /*0x41d1fb*/
  dword_889FEC = result; /*0x41d200*/
  return result; /*0x41d206*/
}
} // namespace gamemd

// 0x41D210
namespace gamemd {
int sub_41D210()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041D210.json)
}
} // namespace gamemd

// 0x41D220
namespace gamemd {
int sub_41D220()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041D220.json)
}
} // namespace gamemd

// 0x41D240
namespace gamemd {
int sub_41D240()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041D240.json)
}
} // namespace gamemd

// 0x41D260
namespace gamemd {
int sub_41D260()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041D260.json)
}
} // namespace gamemd

// 0x41D280
namespace gamemd {
int sub_41D280()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041D280.json)
}
} // namespace gamemd

// 0x41D2C0
namespace gamemd {
void sub_41D2C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041D2C0.json)
}
} // namespace gamemd

// 0x41DD10
namespace gamemd {
char sub_41DD10()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041DD10.json)
}
} // namespace gamemd

// 0x41E140
namespace gamemd {
int sub_41E140()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E140.json)
}
} // namespace gamemd

// 0x41E160
namespace gamemd {
void sub_41E160()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E160.json)
}
} // namespace gamemd

// 0x41E190
namespace gamemd {
void sub_41E190()
{
  dbl_88A070 = dbl_88A020 / 60.0; /*0x41e19c*/
}
} // namespace gamemd

// 0x41E1B0
namespace gamemd {
void sub_41E1B0()
{
  dbl_88A058 = 1.0 / dbl_88A070; /*0x41e1bc*/
}
} // namespace gamemd

// 0x41E1D0
namespace gamemd {
void sub_41E1D0()
{
  dbl_88A050 = 0.0174532925199433 * 45.0; /*0x41e1dc*/
}
} // namespace gamemd

// 0x41E1F0
namespace gamemd {
void sub_41E1F0()
{
  dbl_88A028 = 0.0174532925199433 * 60.0; /*0x41e1fc*/
}
} // namespace gamemd

// 0x41E210
namespace gamemd {
void sub_41E210()
{
  dbl_88A000 = 0.0174532925199433 * 90.0; /*0x41e21c*/
}
} // namespace gamemd

// 0x41E230
namespace gamemd {
long long sub_41E230()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_88A000 - dbl_88A028); /*0x41e242*/
  result = Math::RoundToInt(v0 * dbl_88A020 * 0.5); /*0x41e256*/
  dword_88A078 = result; /*0x41e25b*/
  return result; /*0x41e260*/
}
} // namespace gamemd

// 0x41E270
namespace gamemd {
void sub_41E270()
{
  dbl_88A030 = Math::ArcTan((double)dword_88A078 * 0.00390625); /*0x41e287*/
}
} // namespace gamemd

// 0x41E2A0
namespace gamemd {
void sub_41E2A0()
{
  dbl_88A048 = Math::ArcTan((double)(2 * dword_88A078) / dbl_88A020); /*0x41e2c2*/
}
} // namespace gamemd

// 0x41E2D0
namespace gamemd {
long long sub_41E2D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_88A078) + 0.5); /*0x41e2eb*/
  dword_88A06C = result; /*0x41e2f0*/
  return result; /*0x41e2f6*/
}
} // namespace gamemd

// 0x41E300
namespace gamemd {
int sub_41E300()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E300.json)
}
} // namespace gamemd

// 0x41E310
namespace gamemd {
int sub_41E310()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E310.json)
}
} // namespace gamemd

// 0x41E330
namespace gamemd {
int sub_41E330()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041E330.json)
}
} // namespace gamemd

// 0x41FD30
namespace gamemd {
int sub_41FD30(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041FD30.json)
}
} // namespace gamemd

// 0x41FD40
namespace gamemd {
int sub_41FD40(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041FD40.json)
}
} // namespace gamemd

// 0x41FD50
namespace gamemd {
int sub_41FD50(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041FD50.json)
}
} // namespace gamemd

// 0x41FEE0
namespace gamemd {
bool globalHelper_01FEE0(IUnknown * aP0, unsigned int * a1, unsigned int * a2)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0041FEE0.json)
}
} // namespace gamemd
