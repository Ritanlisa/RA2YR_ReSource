// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/BrainClass_e4.hpp"
#include "e4/classes/E4Recv_430590_e4.hpp"
#include "e4/classes/E4Recv_4305E0_e4.hpp"
#include "e4/classes/E4Recv_430610_e4.hpp"
#include "e4/classes/E4Recv_431920_e4.hpp"
#include "e4/classes/E4Recv_431930_e4.hpp"
#include "e4/classes/E4Recv_431BC0_e4.hpp"
#include "e4/classes/E4Recv_431D90_e4.hpp"
#include "e4/classes/E4Recv_433C80_e4.hpp"
#include "e4/classes/E4Recv_433CE0_e4.hpp"
#include "e4/classes/E4Recv_434100_e4.hpp"
#include "e4/classes/E4Recv_434700_e4.hpp"
#include "e4/classes/E4Recv_4349F0_e4.hpp"
#include "e4/classes/E4Recv_436DA0_e4.hpp"
#include "e4/classes/E4Recv_437F50_e4.hpp"
#include "e4/classes/E4Recv_438A60_e4.hpp"
#include "e4/classes/E4Recv_43A670_e4.hpp"
#include "e4/classes/E4Recv_43A6B0_e4.hpp"
#include "e4/classes/E4Recv_43A770_e4.hpp"
#include "e4/classes/E4Recv_43ADF0_e4.hpp"
#include "e4/classes/E4Recv_43AF10_e4.hpp"
#include "e4/classes/E4Recv_43EE50_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/StreamClass_e4.hpp"
#include "e4/classes/XSurface_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/E4Recv_425670_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"

// 0x431BC0
namespace gamemd {
int E4Recv_431BC0::sub_431BC0(int a2, size_t a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000431BC0.json)
}
}
// 0x4373B0
namespace gamemd {
MouseClass * * BlitterCopySHP(XSurface * aP0, XSurface * aP1, XSurface * aP2, XSurface * aP3, int a4, XSurface * aP5, XSurface * aP6, XSurface * aP7, XSurface * aP8, int a10, int a11, int a12)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4373B0)
}
}
// 0x437A10
namespace gamemd {
MouseClass * * BlitterRLEBlitSHP(IUnknown * aP0, int * a1, TechnoClass * aP2, IUnknown * aP3, unsigned int * a4, int * a5, TechnoClass * aP6, int a8, int a9, TechnoClass * aP9, int a11, int a12, TechnoClass * aP12, int a14, int a15)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x437A10)
}
}
// 0x437F50
namespace gamemd {
unsigned int * E4Recv_437F50::sub_437F50()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000437F50.json)
}
}
// 0x43A600
namespace gamemd {
void BrainClass::sub_43A600()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A600.json)
}
}
// 0x43AA90
namespace gamemd {
unsigned int * BrainClass::sub_43AA90(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043AA90.json)
}
}
// 0x430010
namespace gamemd {
void sub_430010()
{
  dbl_89C448 = 0.0174532925199433 * 45.0; /*0x43001c*/
}
} // namespace gamemd

// 0x430030
namespace gamemd {
void sub_430030()
{
  dbl_89C3A0 = 0.0174532925199433 * 60.0; /*0x43003c*/
}
} // namespace gamemd

// 0x430050
namespace gamemd {
void sub_430050()
{
  dbl_89C378 = 0.0174532925199433 * 90.0; /*0x43005c*/
}
} // namespace gamemd

// 0x430070
namespace gamemd {
long long sub_430070()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C378 - dbl_89C3A0); /*0x430082*/
  result = Math::RoundToInt(v0 * dbl_89C398 * 0.5); /*0x430096*/
  dword_89C470 = result; /*0x43009b*/
  return result; /*0x4300a0*/
}
} // namespace gamemd

// 0x4300B0
namespace gamemd {
void sub_4300B0()
{
  dbl_89C3A8 = Math::ArcTan((double)dword_89C470 * 0.00390625); /*0x4300c7*/
}
} // namespace gamemd

// 0x4300E0
namespace gamemd {
void sub_4300E0()
{
  dbl_89C440 = Math::ArcTan((double)(2 * dword_89C470) / dbl_89C398); /*0x430102*/
}
} // namespace gamemd

// 0x430110
namespace gamemd {
long long sub_430110()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C470) + 0.5); /*0x43012b*/
  dword_89C464 = result; /*0x430130*/
  return result; /*0x430136*/
}
} // namespace gamemd

// 0x430140
namespace gamemd {
int sub_430140()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000430140.json)
}
} // namespace gamemd

// 0x430150
namespace gamemd {
int sub_430150()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000430150.json)
}
} // namespace gamemd

// 0x430170
namespace gamemd {
int sub_430170()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000430170.json)
}
} // namespace gamemd

// 0x430190
namespace gamemd {
int sub_430190()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000430190.json)
}
} // namespace gamemd

// 0x4301C0
namespace gamemd {
void sub_4301C0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004301C0.json)
}
} // namespace gamemd

// 0x430580
namespace gamemd {
void nullsub_97(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  ; /*0x430580*/
}
} // namespace gamemd

// 0x430590
namespace gamemd {
char E4Recv_430590::sub_430590(int a2, int a3, int a4, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000430590.json)
}
} // namespace gamemd

// 0x4305E0
namespace gamemd {
char E4Recv_4305E0::sub_4305E0(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004305E0.json)
}
} // namespace gamemd

// 0x430600
namespace gamemd {
void nullsub_98()
{
  ; /*0x430600*/
}
} // namespace gamemd

// 0x430610
namespace gamemd {
void E4Recv_430610::sub_430610()
{

  LOBYTE(((unsigned int *)this)[0]) &= ~1u; /*0x430610*/

}
} // namespace gamemd

// 0x430F60
namespace gamemd {
unsigned int * sub_430F60(unsigned int * a1)
{
  *a1 = 0; /*0x430f68*/
  a1[1] = 0; /*0x430f6a*/
  return a1; /*0x430f6d*/
}
} // namespace gamemd

// 0x4318D0
namespace gamemd {
int sub_4318D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004318D0.json)
}
} // namespace gamemd

// 0x431920
namespace gamemd {
int E4Recv_431920::sub_431920()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000431920.json)
}
} // namespace gamemd

// 0x431930
namespace gamemd {
int E4Recv_431930::sub_431930(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000431930.json)
}
} // namespace gamemd

// 0x431D90
namespace gamemd {
void E4Recv_431D90::sub_431D90()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000431D90.json)
}
} // namespace gamemd

// 0x432670
namespace gamemd {
int sub_432670()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000432670.json)
}
} // namespace gamemd

// 0x433560
namespace gamemd {
char sub_433560(int a1, unsigned char * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000433560.json)
}
} // namespace gamemd

// 0x4335A0
namespace gamemd {
char sub_4335A0(int a1, unsigned char * a2, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004335A0.json)
}
} // namespace gamemd

// 0x433860
namespace gamemd {
int sub_433860()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000433860.json)
}
} // namespace gamemd

// 0x433C80
namespace gamemd {
short E4Recv_433C80::sub_433C80(short a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000433C80.json)
}
} // namespace gamemd

// 0x433CE0
namespace gamemd {
char E4Recv_433CE0::sub_433CE0(char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000433CE0.json)
}
} // namespace gamemd

// 0x434100
namespace gamemd {
int E4Recv_434100::sub_434100(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000434100.json)
}
} // namespace gamemd

// 0x434700
namespace gamemd {
unsigned char * E4Recv_434700::sub_434700()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000434700.json)
}
} // namespace gamemd

// 0x434840
namespace gamemd {
char sub_434840(unsigned int * a1, unsigned int * a2, unsigned int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000434840.json)
}
} // namespace gamemd

// 0x4349F0
namespace gamemd {
BOOL E4Recv_4349F0::sub_4349F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004349F0.json)
}
} // namespace gamemd

// 0x434AB0
namespace gamemd {
int sub_434AB0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000434AB0.json)
}
} // namespace gamemd

// 0x434B40
namespace gamemd {
int sub_434B40(AbstractClass * aP0, int * a1, unsigned short aP1, int xLeft, int yTop)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000434B40.json)
}
} // namespace gamemd

// 0x434BF0
namespace gamemd {
int sub_434BF0(int a1, int * a2, unsigned short * a3, int xLeft, int yTop, int a6)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000434BF0.json)
}
} // namespace gamemd

// 0x435340
namespace gamemd {
char sub_435340(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000435340.json)
}
} // namespace gamemd

// 0x4353F0
namespace gamemd {
char sub_4353F0(int a1, int a2, unsigned short * a3, int a4, int yTop, int a6, int a7, char a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004353F0.json)
}
} // namespace gamemd

// 0x4355D0
namespace gamemd {
int PackRGB565(int a1, int a2, int a3)
{
  return (a1 >> g_BitShift_Green_0 << g_BitShift_Red) /*0x43560b*/
       | (a2 >> g_BitMask_Blue << g_BitMask_Green)
       | (a3 >> g_BitMask_Red << g_BitShift_Blue);
}
} // namespace gamemd

// 0x435610
namespace gamemd {
void sub_435610()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000435610.json)
}
} // namespace gamemd

// 0x435640
namespace gamemd {
void sub_435640()
{
  dbl_89C548 = dbl_89C4F8 / 60.0; /*0x43564c*/
}
} // namespace gamemd

// 0x435660
namespace gamemd {
void sub_435660()
{
  dbl_89C530 = 1.0 / dbl_89C548; /*0x43566c*/
}
} // namespace gamemd

// 0x435680
namespace gamemd {
void sub_435680()
{
  dbl_89C528 = 0.0174532925199433 * 45.0; /*0x43568c*/
}
} // namespace gamemd

// 0x4356A0
namespace gamemd {
void sub_4356A0()
{
  dbl_89C500 = 0.0174532925199433 * 60.0; /*0x4356ac*/
}
} // namespace gamemd

// 0x4356C0
namespace gamemd {
void sub_4356C0()
{
  dbl_89C4D8 = 0.0174532925199433 * 90.0; /*0x4356cc*/
}
} // namespace gamemd

// 0x4356E0
namespace gamemd {
long long sub_4356E0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C4D8 - dbl_89C500); /*0x4356f2*/
  result = Math::RoundToInt(v0 * dbl_89C4F8 * 0.5); /*0x435706*/
  dword_89C550 = result; /*0x43570b*/
  return result; /*0x435710*/
}
} // namespace gamemd

// 0x435720
namespace gamemd {
void sub_435720()
{
  dbl_89C508 = Math::ArcTan((double)dword_89C550 * 0.00390625); /*0x435737*/
}
} // namespace gamemd

// 0x435750
namespace gamemd {
void sub_435750()
{
  dbl_89C520 = Math::ArcTan((double)(2 * dword_89C550) / dbl_89C4F8); /*0x435772*/
}
} // namespace gamemd

// 0x435780
namespace gamemd {
long long sub_435780()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C550) + 0.5); /*0x43579b*/
  dword_89C544 = result; /*0x4357a0*/
  return result; /*0x4357a6*/
}
} // namespace gamemd

// 0x4357B0
namespace gamemd {
int sub_4357B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004357B0.json)
}
} // namespace gamemd

// 0x4357C0
namespace gamemd {
int sub_4357C0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004357C0.json)
}
} // namespace gamemd

// 0x4357E0
namespace gamemd {
int sub_4357E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004357E0.json)
}
} // namespace gamemd

// 0x435800
namespace gamemd {
int sub_435800()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000435800.json)
}
} // namespace gamemd

// 0x436DA0
namespace gamemd {
double E4Recv_436DA0::sub_436DA0()
{
    return 0.0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000436DA0.json)
}
} // namespace gamemd

// 0x437190
namespace gamemd {
int sub_437190()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000437190.json)
}
} // namespace gamemd

// 0x437290
namespace gamemd {
char sub_437290(int * a1, int a2, int * a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000437290.json)
}
} // namespace gamemd

// 0x437350
namespace gamemd {
char BlitterCopySimpleSHP(XSurface * aP0, XSurface * aP1, int aP2, int arg4, int *a4, int aP7, int aP8, int a8, int a9)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000437350.json)
}
} // namespace gamemd

// 0x4379A0
namespace gamemd {
bool sub_4379A0(IUnknown * a1, IUnknown * a2, unsigned int * a4, int arg4, TechnoClass * aP6, int a6, int a7, TechnoClass * aP9, int a9)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004379A0.json)
}
} // namespace gamemd

// 0x438340
namespace gamemd {
void sub_438340()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000438340.json)
}
} // namespace gamemd

// 0x438370
namespace gamemd {
void sub_438370()
{
  dbl_89C6F0 = dbl_89C6A0 / 60.0; /*0x43837c*/
}
} // namespace gamemd

// 0x438390
namespace gamemd {
void sub_438390()
{
  dbl_89C6D8 = 1.0 / dbl_89C6F0; /*0x43839c*/
}
} // namespace gamemd

// 0x4383B0
namespace gamemd {
void sub_4383B0()
{
  dbl_89C6D0 = 0.0174532925199433 * 45.0; /*0x4383bc*/
}
} // namespace gamemd

// 0x4383D0
namespace gamemd {
void sub_4383D0()
{
  dbl_89C6A8 = 0.0174532925199433 * 60.0; /*0x4383dc*/
}
} // namespace gamemd

// 0x4383F0
namespace gamemd {
void sub_4383F0()
{
  dbl_89C680 = 0.0174532925199433 * 90.0; /*0x4383fc*/
}
} // namespace gamemd

// 0x438410
namespace gamemd {
long long sub_438410()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C680 - dbl_89C6A8); /*0x438422*/
  result = Math::RoundToInt(v0 * dbl_89C6A0 * 0.5); /*0x438436*/
  dword_89C6F8 = result; /*0x43843b*/
  return result; /*0x438440*/
}
} // namespace gamemd

// 0x438450
namespace gamemd {
void sub_438450()
{
  dbl_89C6B0 = Math::ArcTan((double)dword_89C6F8 * 0.00390625); /*0x438467*/
}
} // namespace gamemd

// 0x438480
namespace gamemd {
void sub_438480()
{
  dbl_89C6C8 = Math::ArcTan((double)(2 * dword_89C6F8) / dbl_89C6A0); /*0x4384a2*/
}
} // namespace gamemd

// 0x4384B0
namespace gamemd {
long long sub_4384B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C6F8) + 0.5); /*0x4384cb*/
  dword_89C6EC = result; /*0x4384d0*/
  return result; /*0x4384d6*/
}
} // namespace gamemd

// 0x4384E0
namespace gamemd {
int sub_4384E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004384E0.json)
}
} // namespace gamemd

// 0x4384F0
namespace gamemd {
int sub_4384F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004384F0.json)
}
} // namespace gamemd

// 0x438510
namespace gamemd {
int sub_438510()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000438510.json)
}
} // namespace gamemd

// 0x438530
namespace gamemd {
int sub_438530()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000438530.json)
}
} // namespace gamemd

// 0x438590
namespace gamemd {
void sub_438590()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000438590.json)
}
} // namespace gamemd

// 0x438A60
namespace gamemd {
Iostream_init * E4Recv_438A60::__0Iostream_init_QAE_XZ_1()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x438A60)
}
} // namespace gamemd

// 0x438E60
namespace gamemd {
void nullsub_99()
{
  ; /*0x438e60*/
}
} // namespace gamemd

// 0x439480
namespace gamemd {
int sub_439480()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000439480.json)
}
} // namespace gamemd

// 0x4394A0
namespace gamemd {
void sub_4394A0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0004394A0.json)
}
} // namespace gamemd

// 0x4394D0
namespace gamemd {
void sub_4394D0()
{
  dbl_89C770 = dbl_89C720 / 60.0; /*0x4394dc*/
}
} // namespace gamemd

// 0x4394F0
namespace gamemd {
void sub_4394F0()
{
  dbl_89C758 = 1.0 / dbl_89C770; /*0x4394fc*/
}
} // namespace gamemd

// 0x439510
namespace gamemd {
void sub_439510()
{
  dbl_89C750 = 0.0174532925199433 * 45.0; /*0x43951c*/
}
} // namespace gamemd

// 0x439530
namespace gamemd {
void sub_439530()
{
  dbl_89C728 = 0.0174532925199433 * 60.0; /*0x43953c*/
}
} // namespace gamemd

// 0x439550
namespace gamemd {
void sub_439550()
{
  dbl_89C700 = 0.0174532925199433 * 90.0; /*0x43955c*/
}
} // namespace gamemd

// 0x439570
namespace gamemd {
long long sub_439570()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C700 - dbl_89C728); /*0x439582*/
  result = Math::RoundToInt(v0 * dbl_89C720 * 0.5); /*0x439596*/
  dword_89C778 = result; /*0x43959b*/
  return result; /*0x4395a0*/
}
} // namespace gamemd

// 0x4395B0
namespace gamemd {
void sub_4395B0()
{
  dbl_89C730 = Math::ArcTan((double)dword_89C778 * 0.00390625); /*0x4395c7*/
}
} // namespace gamemd

// 0x4395E0
namespace gamemd {
void sub_4395E0()
{
  dbl_89C748 = Math::ArcTan((double)(2 * dword_89C778) / dbl_89C720); /*0x439602*/
}
} // namespace gamemd

// 0x439610
namespace gamemd {
long long sub_439610()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C778) + 0.5); /*0x43962b*/
  dword_89C76C = result; /*0x439630*/
  return result; /*0x439636*/
}
} // namespace gamemd

// 0x439640
namespace gamemd {
int sub_439640()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000439640.json)
}
} // namespace gamemd

// 0x439650
namespace gamemd {
int sub_439650()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000439650.json)
}
} // namespace gamemd

// 0x439670
namespace gamemd {
int sub_439670()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x000439670.json)
}
} // namespace gamemd

// 0x43A160
namespace gamemd {
void sub_43A160()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A160.json)
}
} // namespace gamemd

// 0x43A190
namespace gamemd {
void sub_43A190()
{
  dbl_89C7E0 = dbl_89C790 / 60.0; /*0x43a19c*/
}
} // namespace gamemd

// 0x43A1B0
namespace gamemd {
void sub_43A1B0()
{
  dbl_89C7C8 = 1.0 / dbl_89C7E0; /*0x43a1bc*/
}
} // namespace gamemd

// 0x43A1D0
namespace gamemd {
void sub_43A1D0()
{
  dbl_89C7C0 = 0.0174532925199433 * 45.0; /*0x43a1dc*/
}
} // namespace gamemd

// 0x43A1F0
namespace gamemd {
void sub_43A1F0()
{
  dbl_89C798 = 0.0174532925199433 * 60.0; /*0x43a1fc*/
}
} // namespace gamemd

// 0x43A210
namespace gamemd {
void sub_43A210()
{
  dbl_89C780 = 0.0174532925199433 * 90.0; /*0x43a21c*/
}
} // namespace gamemd

// 0x43A230
namespace gamemd {
long long sub_43A230()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C780 - dbl_89C798); /*0x43a242*/
  result = Math::RoundToInt(v0 * dbl_89C790 * 0.5); /*0x43a256*/
  dword_89C7E8 = result; /*0x43a25b*/
  return result; /*0x43a260*/
}
} // namespace gamemd

// 0x43A270
namespace gamemd {
void sub_43A270()
{
  dbl_89C7A0 = Math::ArcTan((double)dword_89C7E8 * 0.00390625); /*0x43a287*/
}
} // namespace gamemd

// 0x43A2A0
namespace gamemd {
void sub_43A2A0()
{
  dbl_89C7B8 = Math::ArcTan((double)(2 * dword_89C7E8) / dbl_89C790); /*0x43a2c2*/
}
} // namespace gamemd

// 0x43A2D0
namespace gamemd {
long long sub_43A2D0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C7E8) + 0.5); /*0x43a2eb*/
  dword_89C7DC = result; /*0x43a2f0*/
  return result; /*0x43a2f6*/
}
} // namespace gamemd

// 0x43A300
namespace gamemd {
int sub_43A300()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A300.json)
}
} // namespace gamemd

// 0x43A310
namespace gamemd {
int sub_43A310()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A310.json)
}
} // namespace gamemd

// 0x43A330
namespace gamemd {
int sub_43A330()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A330.json)
}
} // namespace gamemd

// 0x43A670
namespace gamemd {
int E4Recv_43A670::sub_43A670()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A670.json)
}
} // namespace gamemd

// 0x43A6B0
namespace gamemd {
int E4Recv_43A6B0::sub_43A6B0(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A6B0.json)
}
} // namespace gamemd

// 0x43A770
namespace gamemd {
int E4Recv_43A770::sub_43A770(unsigned int * a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043A770.json)
}
} // namespace gamemd

// 0x43ADF0
namespace gamemd {
ObjectClass * E4Recv_43ADF0::sub_43ADF0(unsigned int * a1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043ADF0.json)
}
} // namespace gamemd

// 0x43AF10
namespace gamemd {
unsigned int * E4Recv_43AF10::sub_43AF10()
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043AF10.json)
}
} // namespace gamemd

// 0x43AF40
namespace gamemd {
void sub_43AF40()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043AF40.json)
}
} // namespace gamemd

// 0x43AF70
namespace gamemd {
void sub_43AF70()
{
  dbl_89C880 = dbl_89C820 / 60.0; /*0x43af7c*/
}
} // namespace gamemd

// 0x43AF90
namespace gamemd {
void sub_43AF90()
{
  dbl_89C868 = 1.0 / dbl_89C880; /*0x43af9c*/
}
} // namespace gamemd

// 0x43AFB0
namespace gamemd {
void sub_43AFB0()
{
  dbl_89C860 = 0.0174532925199433 * 45.0; /*0x43afbc*/
}
} // namespace gamemd

// 0x43AFD0
namespace gamemd {
void sub_43AFD0()
{
  dbl_89C830 = 0.0174532925199433 * 60.0; /*0x43afdc*/
}
} // namespace gamemd

// 0x43AFF0
namespace gamemd {
void sub_43AFF0()
{
  dbl_89C7F8 = 0.0174532925199433 * 90.0; /*0x43affc*/
}
} // namespace gamemd

// 0x43B010
namespace gamemd {
long long sub_43B010()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89C7F8 - dbl_89C830); /*0x43b022*/
  result = Math::RoundToInt(v0 * dbl_89C820 * 0.5); /*0x43b036*/
  dword_89C888 = result; /*0x43b03b*/
  return result; /*0x43b040*/
}
} // namespace gamemd

// 0x43B050
namespace gamemd {
void sub_43B050()
{
  dbl_89C840 = Math::ArcTan((double)dword_89C888 * 0.00390625); /*0x43b067*/
}
} // namespace gamemd

// 0x43B080
namespace gamemd {
void sub_43B080()
{
  dbl_89C858 = Math::ArcTan((double)(2 * dword_89C888) / dbl_89C820); /*0x43b0a2*/
}
} // namespace gamemd

// 0x43B0B0
namespace gamemd {
long long sub_43B0B0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89C888) + 0.5); /*0x43b0cb*/
  dword_89C87C = result; /*0x43b0d0*/
  return result; /*0x43b0d6*/
}
} // namespace gamemd

// 0x43B0E0
namespace gamemd {
int sub_43B0E0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043B0E0.json)
}
} // namespace gamemd

// 0x43B0F0
namespace gamemd {
int sub_43B0F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043B0F0.json)
}
}
// 0x43B110
namespace gamemd {
int sub_43B110()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043B110.json)
}
} // namespace gamemd

// 0x43B130
namespace gamemd {
int sub_43B130()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043B130.json)
}
} // namespace gamemd

// 0x43EE50
namespace gamemd {
int E4Recv_43EE50::sub_43EE50()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00043EE50.json)
}
} // namespace gamemd
