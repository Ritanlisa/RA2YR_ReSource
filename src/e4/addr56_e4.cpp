// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/LCWPipe_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_5654E0_e4.hpp"
#include "e4/classes/E4Recv_565610_e4.hpp"
#include "e4/classes/E4Recv_56AE40_e4.hpp"
#include "e4/classes/E4Recv_56AF40_e4.hpp"
#include "e4/classes/E4Recv_56B0F0_e4.hpp"
#include "e4/classes/E4Recv_56B250_e4.hpp"
#include "e4/classes/E4Recv_56DB70_e4.hpp"
#include "e4/classes/E4Recv_56E890_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mission_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/DDraw_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/SidebarClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/E4Recv_583AD0_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Terrain_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "app/cmdline.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/Pipe_e4.hpp"

// 0x560BF0
namespace gamemd {
char ChangeVideoMode(unsigned int xRight, unsigned int yBottom)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00560BF0.json)
}
}
// 0x561400
namespace gamemd {
int VideoSettingsDialogProc(INIClass * aP0, unsigned int a2, WPARAM wParam, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00561400.json)
}
}
// 0x568140
namespace gamemd {
int sub_568140(int * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00568140.json)
}
}
// 0x56AF40
namespace gamemd {
BombClass * * BombClass::sub_56AF40(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056AF40.json)
}
}
// 0x56B250
namespace gamemd {
BombClass * * BombClass::sub_56B250(int a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056B250.json)
}
}
// 0x561350
namespace gamemd {
int sub_561350(HWND hWnd, unsigned int a2, int a3, unsigned int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00561350.json)
}
} // namespace gamemd

// 0x5616F0
namespace gamemd {
int sub_5616F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005616F0.json)
}
} // namespace gamemd

// 0x561710
namespace gamemd {
void sub_561710()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00561710.json)
}
} // namespace gamemd

// 0x561740
namespace gamemd {
void sub_561740()
{
  dbl_ABDDA0 = dbl_ABD488 / unk_7ED3C0; /*0x56174c*/
}
} // namespace gamemd

// 0x561760
namespace gamemd {
void sub_561760()
{
  dbl_ABDC38 = 1.0 / dbl_ABDDA0; /*0x56176c*/
}
} // namespace gamemd

// 0x561780
namespace gamemd {
void sub_561780()
{
  dbl_ABDC30 = unk_7ED3C8 * 45.0; /*0x56178c*/
}
} // namespace gamemd

// 0x5617A0
namespace gamemd {
void sub_5617A0()
{
  dbl_ABDA58 = unk_7ED3C8 * 60.0; /*0x5617ac*/
}
} // namespace gamemd

// 0x5617C0
namespace gamemd {
void sub_5617C0()
{
  dbl_ABD458 = unk_7ED3C8 * 90.0; /*0x5617cc*/
}
} // namespace gamemd

// 0x5617E0
namespace gamemd {
long long sub_5617E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_ABD458 - dbl_ABDA58); /*0x5617f2*/
  result = Math::RoundToInt(v0 * dbl_ABD488 * 0.5); /*0x561806*/
  dword_ABDE88 = result; /*0x56180b*/
  return result; /*0x561810*/
}
} // namespace gamemd

// 0x561820
namespace gamemd {
void sub_561820()
{
  dbl_ABDA60 = Math::ArcTan((double)dword_ABDE88 * 0.00390625); /*0x561837*/
}
} // namespace gamemd

// 0x561850
namespace gamemd {
void sub_561850()
{
  dbl_ABDC20 = Math::ArcTan((double)(2 * dword_ABDE88) / dbl_ABD488); /*0x561872*/
}
} // namespace gamemd

// 0x561880
namespace gamemd {
long long sub_561880()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_ABDE88) + 0.5); /*0x56189b*/
  dword_ABDD98 = result; /*0x5618a0*/
  return result; /*0x5618a6*/
}
} // namespace gamemd

// 0x5618B0
namespace gamemd {
int sub_5618B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005618B0.json)
}
} // namespace gamemd

// 0x5618C0
namespace gamemd {
int sub_5618C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005618C0.json)
}
} // namespace gamemd

// 0x5618E0
namespace gamemd {
int sub_5618E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005618E0.json)
}
} // namespace gamemd

// 0x561900
namespace gamemd {
int j_CoordinateTables_Init()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x561900)
}
} // namespace gamemd

// 0x565080
namespace gamemd {
int unknown_libname_22()
{
  ((CellClass *)(&unk_ABDC50))->DTOR(); /*0x565085*/
}
} // namespace gamemd

// 0x5654E0
namespace gamemd {
unsigned int * sub_5654E0(unsigned int * a2, int * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005654E0.json)
}
} // namespace gamemd

// 0x565610
namespace gamemd {
unsigned int * sub_565610(unsigned int * a2, short * a3)
{
    (void)a2; (void)a3; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00565610.json)
}
} // namespace gamemd

// 0x56AE40
namespace gamemd {
int sub_56AE40(int a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056AE40.json)
}
} // namespace gamemd

// 0x56B0F0
namespace gamemd {
int sub_56B0F0(int * a2)
{
    (void)a2; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056B0F0.json)
}
} // namespace gamemd

// 0x56C200
namespace gamemd {
int sub_56C200()
{
  return 1; /*0x56c205*/
}
} // namespace gamemd

// 0x56C500
namespace gamemd {
void nullsub_167()
{
  ; /*0x56c500*/
}
} // namespace gamemd

// 0x56ED40
namespace gamemd {
char globalHelper_06ED40(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056ED40.json)
}
} // namespace gamemd

// 0x56EE40
namespace gamemd {
char globalHelper_06EE40(IUnknown * aP0, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056EE40.json)
}
} // namespace gamemd

// 0x56F690
namespace gamemd {
char globalHelper_06F690(IUnknown * aP0, IUnknown * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056F690.json)
}
} // namespace gamemd

// 0x56F7A0
namespace gamemd {
char sub_56F7A0(unsigned short * a1, int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0056F7A0.json)
}
} // namespace gamemd
