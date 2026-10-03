// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_490400_e4.hpp"
#include "e4/classes/E4Recv_4912B0_e4.hpp"
#include "e4/classes/E4Recv_491300_e4.hpp"
#include "e4/classes/E4Recv_491330_e4.hpp"
#include "e4/classes/E4Recv_491360_e4.hpp"
#include "e4/classes/E4Recv_491670_e4.hpp"
#include "e4/classes/E4Recv_4916B0_e4.hpp"
#include "e4/classes/E4Recv_4916E0_e4.hpp"
#include "e4/classes/E4Recv_491710_e4.hpp"
#include "e4/classes/E4Recv_491740_e4.hpp"
#include "e4/classes/E4Recv_491790_e4.hpp"
#include "e4/classes/E4Recv_4917C0_e4.hpp"
#include "e4/classes/E4Recv_4917F0_e4.hpp"
#include "e4/classes/E4Recv_491820_e4.hpp"
#include "e4/classes/E4Recv_4918A0_e4.hpp"
#include "e4/classes/E4Recv_4918E0_e4.hpp"
#include "e4/classes/E4Recv_491970_e4.hpp"
#include "e4/classes/E4Recv_4919B0_e4.hpp"
#include "e4/classes/E4Recv_491A30_e4.hpp"
#include "e4/classes/E4Recv_491A70_e4.hpp"
#include "e4/classes/E4Recv_491B00_e4.hpp"
#include "e4/classes/E4Recv_491B40_e4.hpp"
#include "e4/classes/E4Recv_491C10_e4.hpp"
#include "e4/classes/E4Recv_491C50_e4.hpp"
#include "e4/classes/E4Recv_491D50_e4.hpp"
#include "e4/classes/E4Recv_491D90_e4.hpp"
#include "e4/classes/E4Recv_491E60_e4.hpp"
#include "e4/classes/E4Recv_491EA0_e4.hpp"
#include "e4/classes/E4Recv_491F90_e4.hpp"
#include "e4/classes/E4Recv_491FD0_e4.hpp"
#include "e4/classes/E4Recv_4920C0_e4.hpp"
#include "e4/classes/E4Recv_492100_e4.hpp"
#include "e4/classes/E4Recv_492210_e4.hpp"
#include "e4/classes/E4Recv_492250_e4.hpp"
#include "e4/classes/E4Recv_492330_e4.hpp"
#include "e4/classes/E4Recv_492370_e4.hpp"
#include "e4/classes/E4Recv_492480_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Network_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/E4Recv_4924C0_e4.hpp"
#include "e4/classes/E4Recv_492500_e4.hpp"
#include "e4/classes/E4Recv_492530_e4.hpp"
#include "e4/classes/E4Recv_492560_e4.hpp"
#include "e4/classes/E4Recv_492590_e4.hpp"
#include "e4/classes/E4Recv_4925E0_e4.hpp"
#include "e4/classes/E4Recv_492610_e4.hpp"
#include "e4/classes/E4Recv_492640_e4.hpp"
#include "e4/classes/E4Recv_492670_e4.hpp"
#include "e4/classes/E4Recv_4926B0_e4.hpp"
#include "e4/classes/E4Recv_4926E0_e4.hpp"
#include "e4/classes/E4Recv_492710_e4.hpp"
#include "e4/classes/E4Recv_4927A0_e4.hpp"
#include "e4/classes/E4Recv_4927D0_e4.hpp"
#include "e4/classes/E4Recv_492800_e4.hpp"
#include "e4/classes/E4Recv_492830_e4.hpp"
#include "e4/classes/E4Recv_492890_e4.hpp"
#include "e4/classes/E4Recv_4928C0_e4.hpp"
#include "e4/classes/E4Recv_4928F0_e4.hpp"
#include "e4/classes/E4Recv_492920_e4.hpp"
#include "e4/classes/E4Recv_492980_e4.hpp"
#include "e4/classes/E4Recv_4929B0_e4.hpp"
#include "e4/classes/E4Recv_4929E0_e4.hpp"
#include "e4/classes/E4Recv_492A10_e4.hpp"
#include "e4/classes/E4Recv_492A70_e4.hpp"
#include "e4/classes/E4Recv_492AA0_e4.hpp"
#include "e4/classes/E4Recv_492AD0_e4.hpp"
#include "e4/classes/E4Recv_492B00_e4.hpp"
#include "e4/classes/E4Recv_492B70_e4.hpp"
#include "e4/classes/E4Recv_492BA0_e4.hpp"
#include "e4/classes/E4Recv_492BD0_e4.hpp"
#include "e4/classes/E4Recv_492C00_e4.hpp"
#include "e4/classes/E4Recv_492C90_e4.hpp"
#include "e4/classes/E4Recv_492CC0_e4.hpp"
#include "e4/classes/CCFileClass_e4.hpp"
#include "e4/classes/CampaignClass_e4.hpp"
#include "e4/classes/INIClass_e4.hpp"
#include "e4/classes/INISectionList_e4.hpp"
#include "e4/classes/SuperWeaponTypeClass_e4.hpp"
#include "e4/classes/E4Recv_492CF0_e4.hpp"
#include "e4/classes/E4Recv_492D20_e4.hpp"
#include "e4/classes/E4Recv_492D80_e4.hpp"
#include "e4/classes/E4Recv_492DB0_e4.hpp"
#include "e4/classes/E4Recv_492DE0_e4.hpp"
#include "e4/classes/E4Recv_492E10_e4.hpp"
#include "e4/classes/E4Recv_492EA0_e4.hpp"
#include "e4/classes/E4Recv_492ED0_e4.hpp"
#include "e4/classes/E4Recv_492F00_e4.hpp"
#include "e4/classes/E4Recv_492F30_e4.hpp"
#include "e4/classes/E4Recv_492FC0_e4.hpp"
#include "e4/classes/E4Recv_492FF0_e4.hpp"
#include "e4/classes/E4Recv_493020_e4.hpp"
#include "e4/classes/E4Recv_493050_e4.hpp"
#include "e4/classes/E4Recv_4930E0_e4.hpp"
#include "e4/classes/E4Recv_493110_e4.hpp"
#include "e4/classes/E4Recv_493140_e4.hpp"
#include "e4/classes/E4Recv_493170_e4.hpp"
#include "e4/classes/E4Recv_493210_e4.hpp"
#include "e4/classes/E4Recv_493240_e4.hpp"
#include "e4/classes/E4Recv_493270_e4.hpp"
#include "e4/classes/E4Recv_4932A0_e4.hpp"
#include "e4/classes/E4Recv_493340_e4.hpp"
#include "e4/classes/E4Recv_493370_e4.hpp"
#include "e4/classes/E4Recv_4933A0_e4.hpp"
#include "e4/classes/E4Recv_4933D0_e4.hpp"
#include "e4/classes/E4Recv_493470_e4.hpp"
#include "e4/classes/E4Recv_4934A0_e4.hpp"
#include "e4/classes/E4Recv_4934D0_e4.hpp"
#include "e4/classes/E4Recv_493500_e4.hpp"
#include "e4/classes/E4Recv_493570_e4.hpp"
#include "e4/classes/E4Recv_4935A0_e4.hpp"
#include "e4/classes/E4Recv_4935D0_e4.hpp"
#include "e4/classes/E4Recv_493600_e4.hpp"
#include "e4/classes/E4Recv_493680_e4.hpp"
#include "e4/classes/E4Recv_4936B0_e4.hpp"
#include "e4/classes/E4Recv_4936E0_e4.hpp"
#include "e4/classes/E4Recv_493710_e4.hpp"
#include "e4/classes/E4Recv_4937A0_e4.hpp"
#include "e4/classes/E4Recv_4937D0_e4.hpp"
#include "e4/classes/E4Recv_493800_e4.hpp"
#include "e4/classes/E4Recv_493830_e4.hpp"
#include "e4/classes/E4Recv_4938A0_e4.hpp"
#include "e4/classes/E4Recv_4938D0_e4.hpp"
#include "e4/classes/E4Recv_493900_e4.hpp"
#include "e4/classes/E4Recv_496310_e4.hpp"
#include "e4/classes/E4Recv_4963B0_e4.hpp"
#include "e4/classes/E4Recv_4963F0_e4.hpp"
#include "e4/classes/E4Recv_496490_e4.hpp"
#include "e4/classes/E4Recv_4964D0_e4.hpp"
#include "e4/classes/E4Recv_496570_e4.hpp"
#include "e4/classes/E4Recv_4965B0_e4.hpp"
#include "e4/classes/E4Recv_496690_e4.hpp"
#include "e4/classes/E4Recv_4966D0_e4.hpp"
#include "e4/classes/E4Recv_4967E0_e4.hpp"
#include "e4/classes/BufferIOFileClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/E4Recv_496820_e4.hpp"
#include "e4/classes/E4Recv_4968F0_e4.hpp"
#include "e4/classes/E4Recv_496930_e4.hpp"
#include "e4/classes/E4Recv_496A40_e4.hpp"
#include "e4/classes/E4Recv_496A80_e4.hpp"
#include "e4/classes/E4Recv_496B80_e4.hpp"
#include "e4/classes/E4Recv_496BC0_e4.hpp"
#include "e4/classes/E4Recv_496CD0_e4.hpp"
#include "e4/classes/E4Recv_496D10_e4.hpp"
#include "e4/classes/E4Recv_496E20_e4.hpp"
#include "e4/classes/E4Recv_496E60_e4.hpp"
#include "e4/classes/E4Recv_496F70_e4.hpp"
#include "e4/classes/E4Recv_496FB0_e4.hpp"
#include "e4/classes/E4Recv_4970C0_e4.hpp"
#include "e4/classes/E4Recv_497100_e4.hpp"
#include "e4/classes/E4Recv_4971F0_e4.hpp"
#include "e4/classes/E4Recv_497230_e4.hpp"
#include "e4/classes/E4Recv_497350_e4.hpp"
#include "e4/classes/E4Recv_497390_e4.hpp"
#include "e4/classes/E4Recv_497470_e4.hpp"
#include "e4/classes/E4Recv_499CA0_e4.hpp"
#include "e4/classes/E4Recv_499D40_e4.hpp"
#include "e4/classes/E4Recv_499D60_e4.hpp"
#include "e4/classes/E4Recv_499D80_e4.hpp"
#include "e4/classes/E4Recv_499DC0_e4.hpp"
#include "e4/classes/E4Recv_499DE0_e4.hpp"
#include "e4/classes/E4Recv_499E00_e4.hpp"
#include "e4/classes/E4Recv_499E20_e4.hpp"
#include "e4/classes/E4Recv_499E40_e4.hpp"
#include "e4/classes/E4Recv_499E60_e4.hpp"
#include "e4/classes/E4Recv_499E80_e4.hpp"
#include "e4/classes/E4Recv_499EA0_e4.hpp"
#include "e4/classes/E4Recv_499EC0_e4.hpp"
#include "e4/classes/E4Recv_499EE0_e4.hpp"
#include "e4/classes/E4Recv_499F00_e4.hpp"
#include "e4/classes/E4Recv_499F20_e4.hpp"
#include "e4/classes/E4Recv_499F40_e4.hpp"
#include "e4/classes/E4Recv_499F60_e4.hpp"
#include "e4/classes/E4Recv_499F80_e4.hpp"
#include "e4/classes/E4Recv_499FA0_e4.hpp"
#include "e4/classes/E4Recv_499FC0_e4.hpp"
#include "e4/classes/E4Recv_499FE0_e4.hpp"
#include "e4/classes/E4Recv_49A000_e4.hpp"
#include "e4/classes/E4Recv_49A020_e4.hpp"
#include "e4/classes/E4Recv_49A040_e4.hpp"
#include "e4/classes/E4Recv_49A060_e4.hpp"
#include "e4/classes/E4Recv_49A080_e4.hpp"
#include "e4/classes/E4Recv_49A0A0_e4.hpp"
#include "e4/classes/E4Recv_49A0C0_e4.hpp"
#include "e4/classes/E4Recv_49A0E0_e4.hpp"
#include "e4/classes/E4Recv_49A100_e4.hpp"
#include "e4/classes/E4Recv_49A120_e4.hpp"
#include "e4/classes/E4Recv_49A140_e4.hpp"
#include "e4/classes/E4Recv_49A160_e4.hpp"
#include "e4/classes/E4Recv_49A180_e4.hpp"
#include "e4/classes/E4Recv_49A7C0_e4.hpp"
#include "e4/classes/E4Recv_49A7E0_e4.hpp"
#include "e4/classes/E4Recv_49A800_e4.hpp"
#include "e4/classes/E4Recv_49A820_e4.hpp"
#include "e4/classes/E4Recv_49A840_e4.hpp"
#include "e4/classes/E4Recv_49A860_e4.hpp"
#include "e4/classes/E4Recv_49A880_e4.hpp"
#include "e4/classes/E4Recv_49A8A0_e4.hpp"
#include "e4/classes/E4Recv_49A8C0_e4.hpp"
#include "e4/classes/E4Recv_49A8E0_e4.hpp"
#include "e4/classes/E4Recv_49A900_e4.hpp"
#include "e4/classes/E4Recv_49A920_e4.hpp"
#include "e4/classes/E4Recv_49A940_e4.hpp"
#include "e4/classes/E4Recv_49A960_e4.hpp"
#include "e4/classes/E4Recv_49A980_e4.hpp"
#include "e4/classes/E4Recv_49C0D0_e4.hpp"
#include "e4/classes/E4Recv_49CCF0_e4.hpp"
#include "e4/classes/E4Recv_49D390_e4.hpp"
#include "e4/classes/E4Recv_49D680_e4.hpp"
#include "e4/classes/E4Recv_49DA60_e4.hpp"
#include "e4/classes/E4Recv_49E7C0_e4.hpp"
#include "e4/classes/COMClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Stream_e4.hpp"
#include "e4/classes/CellStruct_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/Timer_e4.hpp"

// 0x490400
namespace gamemd {
int sub_490400()
{
     return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00490400.json)
}
}
// 0x491B40
namespace gamemd {
int sub_491B40(unsigned char * a2, unsigned char * a3, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int a10, char * a11)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491B40.json)
}
}
// 0x491C50
namespace gamemd {
int sub_491C50(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)a1; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491C50.json)
}
}
// 0x491D90
namespace gamemd {
int sub_491D90(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZRead_E * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)a1; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491D90.json)
}
}
// 0x491EA0
namespace gamemd {
int sub_491EA0(int arg0, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491EA0.json)
}
}
// 0x491FD0
namespace gamemd {
unsigned short * sub_491FD0(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)aP3; (void)a5; (void)arg10; (void)a6; (void)a8; (void)a9; (void)_38; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491FD0.json)
}
}
// 0x492100
namespace gamemd {
unsigned short * sub_492100(int arg0, unsigned char * a2, int a4, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)a4; (void)a5; (void)arg10; (void)a6; (void)a8; (void)a9; (void)_38; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492100.json)
}
}
// 0x492250
namespace gamemd {
unsigned short * sub_492250(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapDestZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
    (void)a1; (void)a2; (void)aP3; (void)a5; (void)arg10; (void)a6; (void)a8; (void)a9; (void)_38; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492250.json)
}
}
// 0x492370
namespace gamemd {
unsigned short * sub_492370(unsigned char * a1, unsigned char * a2, RLEBlitTransRemapXlatZReadWrite_E * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
    (void)a1; (void)a2; (void)aP3; (void)a5; (void)arg10; (void)a6; (void)a8; (void)a9; (void)_38; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492370.json)
}
}
// 0x496310
namespace gamemd {
int E4Recv_496310::sub_496310(int a5, int a2, unsigned __int8 *a4, int a3, int a1, int aP2, int a6, int a7, int a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496310.json)
}
}
// 0x4964D0
namespace gamemd {
int E4Recv_4964D0::sub_4964D0(int a5, int a2, unsigned __int8 *a4, int a3, int a1, int aP2, int a6, int a7, int a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004964D0.json)
}
}
// 0x4965B0
namespace gamemd {
int E4Recv_4965B0::sub_4965B0(unsigned short *a2, unsigned __int8 *a3, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int a10, char *a11, int a1, int aP2, int aP3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004965B0.json)
}
}
// 0x4966D0
namespace gamemd {
int sub_4966D0(int arg0, unsigned char * a2, int a4, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004966D0.json)
}
}
// 0x496930
namespace gamemd {
int sub_496930(int arg0, unsigned char * a2, RLEBlitTransLucent75ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496930.json)
}
}
// 0x496A80
namespace gamemd {
int sub_496A80(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)a1; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496A80.json)
}
}
// 0x496BC0
namespace gamemd {
int sub_496BC0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496BC0.json)
}
}
// 0x496D10
namespace gamemd {
int sub_496D10(int arg0, unsigned char * a2, RLEBlitTransLucent75ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
    (void)arg0; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)arg20; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496D10.json)
}
}
// 0x496E60
namespace gamemd {
int sub_496E60(unsigned short * a1, unsigned char * a2, RLEBlitTransLucent50ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
    (void)a1; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)arg20; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496E60.json)
}
}
// 0x496FB0
namespace gamemd {
int sub_496FB0(int arg0, unsigned char * a2, RLEBlitTransLucent25ZReadWarp_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int arg20, char * a10)
{
    (void)arg0; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)arg20; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496FB0.json)
}
}
// 0x497100
namespace gamemd {
unsigned short * sub_497100(int arg0, unsigned char * a2, RLEBlitTransXlatZReadWrite_G * aP3, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)aP3; (void)a5; (void)arg10; (void)a6; (void)a8; (void)a9; (void)_38; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00497100.json)
}
}
// 0x497230
namespace gamemd {
unsigned short * sub_497230(int arg0, unsigned char * a2, int a4, int a5, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
    (void)arg0; (void)a2; (void)a4; (void)a5; (void)arg10; (void)a6; (void)a8; (void)a9; (void)_38; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00497230.json)
}
}
// 0x497390
namespace gamemd {
unsigned short * sub_497390(unsigned short * a1, unsigned char * a2, int a4, RLEBlitTransDarkenZReadWrite_G * aP4, int arg10, unsigned short * a6, int a8, int a9, int _38, char * a10)
{
    (void)a1; (void)a2; (void)a4; (void)aP4; (void)arg10; (void)a6; (void)a8; (void)a9; (void)_38; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00497390.json)
}
}
// 0x49B7E0
namespace gamemd {
int FillScoreScreenStats(IUnknown * Destination, char a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B7E0.json)
}
}
// 0x49C0D0
namespace gamemd {
AbstractClass * * CampaignClass_LoadCoopSave()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049C0D0.json)
}
}
// 0x49CCF0
namespace gamemd {
AbstractClass * * sub_49CCF0(int a2, int a3, void * Block, int a5, short a6, int a7, int a8, char * a9, char * a10)
{
    (void)a2; (void)a3; (void)Block; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049CCF0.json)
}
}
// 0x49D390
namespace gamemd {
int LoadCoopCampaignSave(IUnknown * aP1)
{
    (void)aP1; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049D390.json)
}
}
// 0x49D680
namespace gamemd {
AbstractClass * * SerializeCampaignOptions()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049D680.json)
}
}
// 0x49E7C0
namespace gamemd {
AbstractClass * * sub_49E7C0(char * Block, char a2)
{
    (void)Block; (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049E7C0.json)
}
}
// 0x491100
namespace gamemd {
int sub_491100(ObjectClass * aP0, char a2, int a3, ObjectClass * aP3, short a5, char a6, short a7)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491100.json)
}
} // namespace gamemd

// 0x4912B0
namespace gamemd {
char sub_4912B0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004912B0.json)
}
} // namespace gamemd

// 0x491300
namespace gamemd {
int sub_491300(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491300.json)
}
} // namespace gamemd

// 0x491330
namespace gamemd {
int sub_491330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491330.json)
}
} // namespace gamemd

// 0x491360
namespace gamemd {
int sub_491360(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491360.json)
}
} // namespace gamemd

// 0x491670
namespace gamemd {
char sub_491670(unsigned char * a1, char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491670.json)
}
} // namespace gamemd

// 0x4916B0
namespace gamemd {
int sub_4916B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004916B0.json)
}
} // namespace gamemd

// 0x4916E0
namespace gamemd {
int sub_4916E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004916E0.json)
}
} // namespace gamemd

// 0x491710
namespace gamemd {
int sub_491710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491710.json)
}
} // namespace gamemd

// 0x491740
namespace gamemd {
unsigned char sub_491740(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491740.json)
}
} // namespace gamemd

// 0x491790
namespace gamemd {
int sub_491790(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491790.json)
}
} // namespace gamemd

// 0x4917C0
namespace gamemd {
int sub_4917C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004917C0.json)
}
} // namespace gamemd

// 0x4917F0
namespace gamemd {
int sub_4917F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004917F0.json)
}
} // namespace gamemd

// 0x491820
namespace gamemd {
int sub_491820(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491820.json)
}
} // namespace gamemd

// 0x4918A0
namespace gamemd {
int sub_4918A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004918A0.json)
}
} // namespace gamemd

// 0x4918E0
namespace gamemd {
char sub_4918E0(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    (void)arg0; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004918E0.json)
}
} // namespace gamemd

// 0x491970
namespace gamemd {
int sub_491970(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491970.json)
}
} // namespace gamemd

// 0x4919B0
namespace gamemd {
int sub_4919B0(unsigned char * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    (void)a1; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004919B0.json)
}
} // namespace gamemd

// 0x491A30
namespace gamemd {
int sub_491A30(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491A30.json)
}
} // namespace gamemd

// 0x491A70
namespace gamemd {
char sub_491A70(int arg0, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    (void)arg0; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00491A70.json)
}
} // namespace gamemd

// 0x491B00
namespace gamemd {
int sub_491B00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491B00.json)
}
} // namespace gamemd

// 0x491C10
namespace gamemd {
int sub_491C10(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491C10.json)
}
} // namespace gamemd

// 0x491D50
namespace gamemd {
int sub_491D50(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491D50.json)
}
} // namespace gamemd

// 0x491E60
namespace gamemd {
int sub_491E60(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491E60.json)
}
} // namespace gamemd

// 0x491F90
namespace gamemd {
int sub_491F90(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00491F90.json)
}
} // namespace gamemd

// 0x4920C0
namespace gamemd {
int sub_4920C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004920C0.json)
}
} // namespace gamemd

// 0x492210
namespace gamemd {
int sub_492210(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492210.json)
}
} // namespace gamemd

// 0x492330
namespace gamemd {
int sub_492330(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492330.json)
}
} // namespace gamemd

// 0x492480
namespace gamemd {
int sub_492480(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492480.json)
}
} // namespace gamemd

// 0x4924C0
namespace gamemd {
void sub_4924C0(int a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9;  // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004924C0.json)
}
} // namespace gamemd

// 0x492500
namespace gamemd {
int sub_492500(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492500.json)
}
} // namespace gamemd

// 0x492530
namespace gamemd {
int sub_492530(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492530.json)
}
} // namespace gamemd

// 0x492560
namespace gamemd {
int sub_492560(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492560.json)
}
} // namespace gamemd

// 0x492590
namespace gamemd {
char sub_492590(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492590.json)
}
} // namespace gamemd

// 0x4925E0
namespace gamemd {
int sub_4925E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004925E0.json)
}
} // namespace gamemd

// 0x492610
namespace gamemd {
int sub_492610(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492610.json)
}
} // namespace gamemd

// 0x492640
namespace gamemd {
int sub_492640(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492640.json)
}
} // namespace gamemd

// 0x492670
namespace gamemd {
char sub_492670(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492670.json)
}
} // namespace gamemd

// 0x4926B0
namespace gamemd {
int sub_4926B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004926B0.json)
}
} // namespace gamemd

// 0x4926E0
namespace gamemd {
int sub_4926E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004926E0.json)
}
} // namespace gamemd

// 0x492710
namespace gamemd {
int sub_492710(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492710.json)
}
} // namespace gamemd

// 0x492740
namespace gamemd {
char sub_492740(int a1, int a2, unsigned short * a3, unsigned char * a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492740.json)
}
} // namespace gamemd

// 0x4927A0
namespace gamemd {
int sub_4927A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004927A0.json)
}
} // namespace gamemd

// 0x4927D0
namespace gamemd {
int sub_4927D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004927D0.json)
}
} // namespace gamemd

// 0x492800
namespace gamemd {
int sub_492800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492800.json)
}
} // namespace gamemd

// 0x492830
namespace gamemd {
unsigned int sub_492830(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492830.json)
}
} // namespace gamemd

// 0x492890
namespace gamemd {
int sub_492890(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492890.json)
}
} // namespace gamemd

// 0x4928C0
namespace gamemd {
int sub_4928C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004928C0.json)
}
} // namespace gamemd

// 0x4928F0
namespace gamemd {
int sub_4928F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004928F0.json)
}
} // namespace gamemd

// 0x492920
namespace gamemd {
char sub_492920(unsigned short * a2, unsigned char * a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492920.json)
}
} // namespace gamemd

// 0x492980
namespace gamemd {
int sub_492980(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492980.json)
}
} // namespace gamemd

// 0x4929B0
namespace gamemd {
int sub_4929B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004929B0.json)
}
} // namespace gamemd

// 0x4929E0
namespace gamemd {
int sub_4929E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004929E0.json)
}
} // namespace gamemd

// 0x492A10
namespace gamemd {
unsigned short * sub_492A10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492A10.json)
}
} // namespace gamemd

// 0x492A70
namespace gamemd {
int sub_492A70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492A70.json)
}
} // namespace gamemd

// 0x492AA0
namespace gamemd {
int sub_492AA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492AA0.json)
}
} // namespace gamemd

// 0x492AD0
namespace gamemd {
int sub_492AD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492AD0.json)
}
} // namespace gamemd

// 0x492B00
namespace gamemd {
unsigned short * sub_492B00(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492B00.json)
}
} // namespace gamemd

// 0x492B70
namespace gamemd {
int sub_492B70(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492B70.json)
}
} // namespace gamemd

// 0x492BA0
namespace gamemd {
int sub_492BA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492BA0.json)
}
} // namespace gamemd

// 0x492BD0
namespace gamemd {
int sub_492BD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492BD0.json)
}
} // namespace gamemd

// 0x492C00
namespace gamemd {
unsigned short * sub_492C00(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492C00.json)
}
} // namespace gamemd

// 0x492C90
namespace gamemd {
int sub_492C90(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492C90.json)
}
} // namespace gamemd

// 0x492CC0
namespace gamemd {
int sub_492CC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492CC0.json)
}
} // namespace gamemd

// 0x492CF0
namespace gamemd {
int sub_492CF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492CF0.json)
}
} // namespace gamemd

// 0x492D20
namespace gamemd {
unsigned short * sub_492D20(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492D20.json)
}
} // namespace gamemd

// 0x492D80
namespace gamemd {
int sub_492D80(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492D80.json)
}
} // namespace gamemd

// 0x492DB0
namespace gamemd {
int sub_492DB0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492DB0.json)
}
} // namespace gamemd

// 0x492DE0
namespace gamemd {
int sub_492DE0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492DE0.json)
}
} // namespace gamemd

// 0x492E10
namespace gamemd {
int sub_492E10(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492E10.json)
}
} // namespace gamemd

// 0x492EA0
namespace gamemd {
int sub_492EA0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492EA0.json)
}
} // namespace gamemd

// 0x492ED0
namespace gamemd {
int sub_492ED0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492ED0.json)
}
} // namespace gamemd

// 0x492F00
namespace gamemd {
int sub_492F00(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492F00.json)
}
} // namespace gamemd

// 0x492F30
namespace gamemd {
unsigned short * sub_492F30(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00492F30.json)
}
} // namespace gamemd

// 0x492FC0
namespace gamemd {
int sub_492FC0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492FC0.json)
}
} // namespace gamemd

// 0x492FF0
namespace gamemd {
int sub_492FF0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00492FF0.json)
}
} // namespace gamemd

// 0x493020
namespace gamemd {
int sub_493020(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493020.json)
}
} // namespace gamemd

// 0x493050
namespace gamemd {
int sub_493050(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00493050.json)
}
} // namespace gamemd

// 0x4930E0
namespace gamemd {
int sub_4930E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004930E0.json)
}
} // namespace gamemd

// 0x493110
namespace gamemd {
int sub_493110(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493110.json)
}
} // namespace gamemd

// 0x493140
namespace gamemd {
int sub_493140(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493140.json)
}
} // namespace gamemd

// 0x493170
namespace gamemd {
int sub_493170(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00493170.json)
}
} // namespace gamemd

// 0x493210
namespace gamemd {
int sub_493210(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493210.json)
}
} // namespace gamemd

// 0x493240
namespace gamemd {
int sub_493240(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493240.json)
}
} // namespace gamemd

// 0x493270
namespace gamemd {
int sub_493270(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493270.json)
}
} // namespace gamemd

// 0x4932A0
namespace gamemd {
unsigned short * sub_4932A0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004932A0.json)
}
} // namespace gamemd

// 0x493340
namespace gamemd {
int sub_493340(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493340.json)
}
} // namespace gamemd

// 0x493370
namespace gamemd {
int sub_493370(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493370.json)
}
} // namespace gamemd

// 0x4933A0
namespace gamemd {
int sub_4933A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004933A0.json)
}
} // namespace gamemd

// 0x4933D0
namespace gamemd {
int sub_4933D0(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004933D0.json)
}
} // namespace gamemd

// 0x493470
namespace gamemd {
int sub_493470(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493470.json)
}
} // namespace gamemd

// 0x4934A0
namespace gamemd {
int sub_4934A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004934A0.json)
}
} // namespace gamemd

// 0x4934D0
namespace gamemd {
int sub_4934D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004934D0.json)
}
} // namespace gamemd

// 0x493500
namespace gamemd {
unsigned short * sub_493500(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00493500.json)
}
} // namespace gamemd

// 0x493570
namespace gamemd {
int sub_493570(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493570.json)
}
} // namespace gamemd

// 0x4935A0
namespace gamemd {
int sub_4935A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004935A0.json)
}
} // namespace gamemd

// 0x4935D0
namespace gamemd {
int sub_4935D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004935D0.json)
}
} // namespace gamemd

// 0x493600
namespace gamemd {
unsigned short * sub_493600(unsigned short * a2, unsigned char * a3, int a4, int a5, unsigned short * a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00493600.json)
}
} // namespace gamemd

// 0x493680
namespace gamemd {
int sub_493680(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493680.json)
}
} // namespace gamemd

// 0x4936B0
namespace gamemd {
int sub_4936B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004936B0.json)
}
} // namespace gamemd

// 0x4936E0
namespace gamemd {
int sub_4936E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004936E0.json)
}
} // namespace gamemd

// 0x493710
namespace gamemd {
unsigned short * sub_493710(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00493710.json)
}
} // namespace gamemd

// 0x4937A0
namespace gamemd {
int sub_4937A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004937A0.json)
}
} // namespace gamemd

// 0x4937D0
namespace gamemd {
int sub_4937D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004937D0.json)
}
} // namespace gamemd

// 0x493800
namespace gamemd {
int sub_493800(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493800.json)
}
} // namespace gamemd

// 0x493830
namespace gamemd {
unsigned short * sub_493830(unsigned short * a1, unsigned char * a2, int a4, int argC, unsigned short * a5, int a7, int a8, int a9)
{
    (void)a1; (void)a2; (void)a4; (void)argC; (void)a5; (void)a7; (void)a8; (void)a9; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00493830.json)
}
} // namespace gamemd

// 0x4938A0
namespace gamemd {
int sub_4938A0(int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004938A0.json)
}
} // namespace gamemd

// 0x4938D0
namespace gamemd {
int sub_4938D0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004938D0.json)
}
} // namespace gamemd

// 0x493900
namespace gamemd {
int sub_493900(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00493900.json)
}
} // namespace gamemd

// 0x4963B0
namespace gamemd {
int sub_4963B0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004963B0.json)
}
} // namespace gamemd

// 0x4963F0
namespace gamemd {
unsigned short * sub_4963F0(unsigned short * a1, unsigned char * a2, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    (void)a1; (void)a2; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004963F0.json)
}
} // namespace gamemd

// 0x496490
namespace gamemd {
int sub_496490(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496490.json)
}
} // namespace gamemd

// 0x496570
namespace gamemd {
int sub_496570(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496570.json)
}
} // namespace gamemd

// 0x496690
namespace gamemd {
int sub_496690(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496690.json)
}
} // namespace gamemd

// 0x4967E0
namespace gamemd {
int sub_4967E0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004967E0.json)
}
} // namespace gamemd

// 0x496820
namespace gamemd {
int sub_496820(unsigned short * a1, unsigned char * a2, RLEBlitTransDarkenZRead_G * aP3, int a5, int a6, unsigned int a7, int a8, int a9, int _38, char * a10)
{
    (void)a1; (void)a2; (void)aP3; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)_38; (void)a10; return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00496820.json)
}
} // namespace gamemd

// 0x4968F0
namespace gamemd {
int sub_4968F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004968F0.json)
}
} // namespace gamemd

// 0x496A40
namespace gamemd {
int sub_496A40(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496A40.json)
}
} // namespace gamemd

// 0x496B80
namespace gamemd {
int sub_496B80(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496B80.json)
}
} // namespace gamemd

// 0x496CD0
namespace gamemd {
int sub_496CD0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496CD0.json)
}
} // namespace gamemd

// 0x496E20
namespace gamemd {
int sub_496E20(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496E20.json)
}
} // namespace gamemd

// 0x496F70
namespace gamemd {
int sub_496F70(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00496F70.json)
}
} // namespace gamemd

// 0x4970C0
namespace gamemd {
int sub_4970C0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004970C0.json)
}
} // namespace gamemd

// 0x4971F0
namespace gamemd {
int sub_4971F0(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x004971F0.json)
}
} // namespace gamemd

// 0x497350
namespace gamemd {
int sub_497350(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00497350.json)
}
} // namespace gamemd

// 0x497470
namespace gamemd {
int sub_497470(int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    (void)a2; (void)a3; (void)a4; (void)a5; (void)a6; (void)a7; (void)a8; (void)a9; (void)a10; (void)a11; (void)a12; return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = .omo/ida_cache/func_0x00497470.json)
}
} // namespace gamemd

// 0x499CA0
namespace gamemd {
BlitTransXlat * BlitTransXlat::___Gfacet_locale_std__UAEPAXI_Z_4(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499CA0.json)
}
} // namespace gamemd

// 0x499D40
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_9(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499D40.json)
}
} // namespace gamemd

// 0x499D60
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_10(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499D60.json)
}
} // namespace gamemd

// 0x499D80
namespace gamemd {
RLEBlitTransXlat * RLEBlitTransXlat::___Gfacet_locale_std__UAEPAXI_Z_11(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499D80.json)
}
} // namespace gamemd

// 0x499DC0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_13(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499DC0.json)
}
} // namespace gamemd

// 0x499DE0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_14(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499DE0.json)
}
} // namespace gamemd

// 0x499E00
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_15(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499E00.json)
}
} // namespace gamemd

// 0x499E20
namespace gamemd {
RLEBlitTransXlatZRead * RLEBlitTransXlatZRead::___Gfacet_locale_std__UAEPAXI_Z_16(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499E20.json)
}
} // namespace gamemd

// 0x499E40
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_17(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499E40.json)
}
} // namespace gamemd

// 0x499E60
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_18(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499E60.json)
}
} // namespace gamemd

// 0x499E80
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_19(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499E80.json)
}
} // namespace gamemd

// 0x499EA0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_20(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499EA0.json)
}
} // namespace gamemd

// 0x499EC0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_21(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499EC0.json)
}
} // namespace gamemd

// 0x499EE0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_22(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499EE0.json)
}
} // namespace gamemd

// 0x499F00
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_23(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499F00.json)
}
} // namespace gamemd

// 0x499F20
namespace gamemd {
BlitPlainXlat * BlitPlainXlat::___Gfacet_locale_std__UAEPAXI_Z_24(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499F20.json)
}
} // namespace gamemd

// 0x499F40
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_25(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499F40.json)
}
} // namespace gamemd

// 0x499F60
namespace gamemd {
BlitTransDarken * BlitTransDarken::___Gfacet_locale_std__UAEPAXI_Z_26(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499F60.json)
}
} // namespace gamemd

// 0x499F80
namespace gamemd {
BlitTransLucent75 * BlitTransLucent75::___Gfacet_locale_std__UAEPAXI_Z_27(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499F80.json)
}
} // namespace gamemd

// 0x499FA0
namespace gamemd {
BlitTransLucent50 * BlitTransLucent50::___Gfacet_locale_std__UAEPAXI_Z_28(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499FA0.json)
}
} // namespace gamemd

// 0x499FC0
namespace gamemd {
BlitTransLucent25 * BlitTransLucent25::___Gfacet_locale_std__UAEPAXI_Z_29(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499FC0.json)
}
} // namespace gamemd

// 0x499FE0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_30(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00499FE0.json)
}
} // namespace gamemd

// 0x49A000
namespace gamemd {
BlitTransXlatZRead * BlitTransXlatZRead::___Gfacet_locale_std__UAEPAXI_Z_31(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A000.json)
}
} // namespace gamemd

// 0x49A020
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_32(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A020.json)
}
} // namespace gamemd

// 0x49A040
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_33(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A040.json)
}
} // namespace gamemd

// 0x49A060
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_34(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A060.json)
}
} // namespace gamemd

// 0x49A080
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_35(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A080.json)
}
} // namespace gamemd

// 0x49A0A0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_36(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A0A0.json)
}
} // namespace gamemd

// 0x49A0C0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_37(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A0C0.json)
}
} // namespace gamemd

// 0x49A0E0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_38(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A0E0.json)
}
} // namespace gamemd

// 0x49A100
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_39(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A100.json)
}
} // namespace gamemd

// 0x49A120
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_40(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A120.json)
}
} // namespace gamemd

// 0x49A140
namespace gamemd {
BlitTransXlatZReadWrite * BlitTransXlatZReadWrite::___Gfacet_locale_std__UAEPAXI_Z_41(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A140.json)
}
} // namespace gamemd

// 0x49A160
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_42(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A160.json)
}
} // namespace gamemd

// 0x49A180
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_43(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A180.json)
}
} // namespace gamemd

// 0x49A7C0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_55(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A7C0.json)
}
} // namespace gamemd

// 0x49A7E0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_56(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A7E0.json)
}
} // namespace gamemd

// 0x49A800
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_57(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A800.json)
}
} // namespace gamemd

// 0x49A820
namespace gamemd {
RLEBlitTransXlatZRead * RLEBlitTransXlatZRead::___Gfacet_locale_std__UAEPAXI_Z_58(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A820.json)
}
} // namespace gamemd

// 0x49A840
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_59(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A840.json)
}
} // namespace gamemd

// 0x49A860
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_60(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A860.json)
}
} // namespace gamemd

// 0x49A880
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_61(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A880.json)
}
} // namespace gamemd

// 0x49A8A0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_62(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A8A0.json)
}
} // namespace gamemd

// 0x49A8C0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_63(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A8C0.json)
}
} // namespace gamemd

// 0x49A8E0
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_64(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A8E0.json)
}
} // namespace gamemd

// 0x49A900
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_65(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A900.json)
}
} // namespace gamemd

// 0x49A920
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_66(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A920.json)
}
} // namespace gamemd

// 0x49A940
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_67(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A940.json)
}
} // namespace gamemd

// 0x49A960
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_68(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A960.json)
}
} // namespace gamemd

// 0x49A980
namespace gamemd {
std::locale::facet * ___Gfacet_locale_std__UAEPAXI_Z_69(char a2)
{
    (void)a2; return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049A980.json)
}
} // namespace gamemd

// 0x49B180
namespace gamemd {
void sub_49B180()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B180.json)
}
} // namespace gamemd

// 0x49B1B0
namespace gamemd {
void sub_49B1B0()
{
  *((double *)&word_89F5D8 + 19) = dbl_89F5A0 / 60.0; /*0x49b1bc*/
}
} // namespace gamemd

// 0x49B1D0
namespace gamemd {
void sub_49B1D0()
{
  *((double *)&word_89F5D8 + 16) = 1.0 / *((double *)&word_89F5D8 + 19); /*0x49b1dc*/
}
} // namespace gamemd

// 0x49B1F0
namespace gamemd {
void sub_49B1F0()
{
  dbl_89F5D0 = 0.0174532925199433 * 45.0; /*0x49b1fc*/
}
} // namespace gamemd

// 0x49B210
namespace gamemd {
void sub_49B210()
{
  dbl_89F5A8 = 0.0174532925199433 * 60.0; /*0x49b21c*/
}
} // namespace gamemd

// 0x49B230
namespace gamemd {
void sub_49B230()
{
  dbl_89F580 = 0.0174532925199433 * 90.0; /*0x49b23c*/
}
} // namespace gamemd

// 0x49B250
namespace gamemd {
long long sub_49B250()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89F580 - dbl_89F5A8); /*0x49b262*/
  result = Math::RoundToInt(v0 * dbl_89F5A0 * 0.5); /*0x49b276*/
  *((unsigned int *)&word_89F5D8 + 40) = result; /*0x49b27b*/
  return result; /*0x49b280*/
}
} // namespace gamemd

// 0x49B290
namespace gamemd {
void sub_49B290()
{
  dbl_89F5B0 = Math::ArcTan((double)*((int *)&word_89F5D8 + 40) * 0.00390625); /*0x49b2a7*/
}
} // namespace gamemd

// 0x49B2C0
namespace gamemd {
void sub_49B2C0()
{
  dbl_89F5C8 = Math::ArcTan((double)(2 * *((unsigned int *)&word_89F5D8 + 40)) / dbl_89F5A0); /*0x49b2e2*/
}
} // namespace gamemd

// 0x49B2F0
namespace gamemd {
long long sub_49B2F0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * *((unsigned int *)&word_89F5D8 + 40)) + 0.5); /*0x49b30b*/
  *((unsigned int *)&word_89F5D8 + 37) = result; /*0x49b310*/
  return result; /*0x49b316*/
}
} // namespace gamemd

// 0x49B320
namespace gamemd {
int sub_49B320()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B320.json)
}
} // namespace gamemd

// 0x49B330
namespace gamemd {
int sub_49B330()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B330.json)
}
} // namespace gamemd

// 0x49B350
namespace gamemd {
int sub_49B350()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B350.json)
}
} // namespace gamemd

// 0x49B370
namespace gamemd {
int sub_49B370()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B370.json)
}
} // namespace gamemd

// 0x49B390
namespace gamemd {
int sub_49B390()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B390.json)
}
} // namespace gamemd

// 0x49B420
namespace gamemd {
int unknown_libname_12()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x49B420)
}
} // namespace gamemd

// 0x49B430
namespace gamemd {
char Hex_EncodeDigit(int a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049B430.json)
}
} // namespace gamemd

// 0x49DA60
namespace gamemd {
unsigned int * sub_49DA60()
{
     return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049DA60.json)
}
} // namespace gamemd

// 0x49F0E0
namespace gamemd {
void sub_49F0E0()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F0E0.json)
}
} // namespace gamemd

// 0x49F110
namespace gamemd {
void sub_49F110()
{
  dbl_89F750 = dbl_89F6C0 / 60.0; /*0x49f11c*/
}
} // namespace gamemd

// 0x49F130
namespace gamemd {
void sub_49F130()
{
  dbl_89F738 = 1.0 / dbl_89F750; /*0x49f13c*/
}
} // namespace gamemd

// 0x49F150
namespace gamemd {
void sub_49F150()
{
  dbl_89F730 = 0.0174532925199433 * 45.0; /*0x49f15c*/
}
} // namespace gamemd

// 0x49F170
namespace gamemd {
void sub_49F170()
{
  dbl_89F6C8 = 0.0174532925199433 * 60.0; /*0x49f17c*/
}
} // namespace gamemd

// 0x49F190
namespace gamemd {
void sub_49F190()
{
  *((double *)&word_89F5D8 + 21) = 0.0174532925199433 * 90.0; /*0x49f19c*/
}
} // namespace gamemd

// 0x49F1B0
namespace gamemd {
long long sub_49F1B0()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(*((double *)&word_89F5D8 + 21) - dbl_89F6C8); /*0x49f1c2*/
  result = Math::RoundToInt(v0 * dbl_89F6C0 * 0.5); /*0x49f1d6*/
  dword_89F758 = result; /*0x49f1db*/
  return result; /*0x49f1e0*/
}
} // namespace gamemd

// 0x49F1F0
namespace gamemd {
void sub_49F1F0()
{
  dbl_89F6D0 = Math::ArcTan((double)dword_89F758 * 0.00390625); /*0x49f207*/
}
} // namespace gamemd

// 0x49F220
namespace gamemd {
void sub_49F220()
{
  dbl_89F728 = Math::ArcTan((double)(2 * dword_89F758) / dbl_89F6C0); /*0x49f242*/
}
} // namespace gamemd

// 0x49F250
namespace gamemd {
long long sub_49F250()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F758) + 0.5); /*0x49f26b*/
  dword_89F74C = result; /*0x49f270*/
  return result; /*0x49f276*/
}
} // namespace gamemd

// 0x49F280
namespace gamemd {
int sub_49F280()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F280.json)
}
} // namespace gamemd

// 0x49F290
namespace gamemd {
int sub_49F290()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F290.json)
}
} // namespace gamemd

// 0x49F2B0
namespace gamemd {
int sub_49F2B0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F2B0.json)
}
} // namespace gamemd

// 0x49F2D0
namespace gamemd {
int sub_49F2D0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F2D0.json)
}
} // namespace gamemd

// 0x49F2F0
namespace gamemd {
int sub_49F2F0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F2F0.json)
}
} // namespace gamemd

// 0x49F3A0
namespace gamemd {
int sub_49F3A0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F3A0.json)
}
} // namespace gamemd

// 0x49F420
namespace gamemd {
int * RandomCoordScatter(int * a0, IUnknown * aP1, int aP2, ScenarioClass * aP3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x49F420)
}
} // namespace gamemd

// 0x49F550
namespace gamemd {
IUnknown * globalHelper_09F550(int * a1, IUnknown * a2, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x49F550)
}
} // namespace gamemd

// 0x49F920
namespace gamemd {
bool sub_49F920()
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049F920.json)
}
} // namespace gamemd

// 0x49FD30
namespace gamemd {
int sub_49FD30()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049FD30.json)
}
} // namespace gamemd

// 0x49FD50
namespace gamemd {
void sub_49FD50()
{
    // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049FD50.json)
}
} // namespace gamemd

// 0x49FD80
namespace gamemd {
void sub_49FD80()
{
  dbl_89F7D0 = dbl_89F780 / 60.0; /*0x49fd8c*/
}
} // namespace gamemd

// 0x49FDA0
namespace gamemd {
void sub_49FDA0()
{
  dbl_89F7B8 = 1.0 / dbl_89F7D0; /*0x49fdac*/
}
} // namespace gamemd

// 0x49FDC0
namespace gamemd {
void sub_49FDC0()
{
  dbl_89F7B0 = 0.0174532925199433 * 45.0; /*0x49fdcc*/
}
} // namespace gamemd

// 0x49FDE0
namespace gamemd {
void sub_49FDE0()
{
  dbl_89F788 = 0.0174532925199433 * 60.0; /*0x49fdec*/
}
} // namespace gamemd

// 0x49FE00
namespace gamemd {
void sub_49FE00()
{
  dbl_89F760 = 0.0174532925199433 * 90.0; /*0x49fe0c*/
}
} // namespace gamemd

// 0x49FE20
namespace gamemd {
long long sub_49FE20()
{
  double v0; // st7
  int64_t result; // rax

  v0 = Math::Sin(dbl_89F760 - dbl_89F788); /*0x49fe32*/
  result = Math::RoundToInt(v0 * dbl_89F780 * 0.5); /*0x49fe46*/
  dword_89F7D8 = result; /*0x49fe4b*/
  return result; /*0x49fe50*/
}
} // namespace gamemd

// 0x49FE60
namespace gamemd {
void sub_49FE60()
{
  dbl_89F790 = Math::ArcTan((double)dword_89F7D8 * 0.00390625); /*0x49fe77*/
}
} // namespace gamemd

// 0x49FE90
namespace gamemd {
void sub_49FE90()
{
  dbl_89F7A8 = Math::ArcTan((double)(2 * dword_89F7D8) / dbl_89F780); /*0x49feb2*/
}
} // namespace gamemd

// 0x49FEC0
namespace gamemd {
long long sub_49FEC0()
{
  int64_t result; // rax

  result = Math::RoundToInt((double)(4 * dword_89F7D8) + 0.5); /*0x49fedb*/
  dword_89F7CC = result; /*0x49fee0*/
  return result; /*0x49fee6*/
}
} // namespace gamemd

// 0x49FEF0
namespace gamemd {
int sub_49FEF0()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049FEF0.json)
}
} // namespace gamemd

// 0x49FF00
namespace gamemd {
int sub_49FF00()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049FF00.json)
}
} // namespace gamemd

// 0x49FF20
namespace gamemd {
int sub_49FF20()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x0049FF20.json)
}
} // namespace gamemd
