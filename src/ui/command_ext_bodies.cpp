// 自动生成 by tools/move_hpp_bodies.py — 函数体自 src/ui/command_ext.hpp 迁出
// hpp-impl 门控: 头文件只允许声明（= default 析构亦移出）
#include "command_ext.hpp"
#include "core/ida_vtables.h"  // gC_vftable3
#include "system/file_class.hpp"  // x145b: FileClass 真链先行 (防 e4 twin 抢占 GAMEMD_G2_*_DEF 后 CDFileClass::~override 落空 C3668)
#include "system/buffer_io_file.hpp"  // x145b: BufferIOFileClass 真链先行 (同上)
#include "e4/classes/BufferIOFileClass_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/CCFileClass_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/Math_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/Vector_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/XSurface_e4.hpp"  // g57c5 W5d scope supply
#include "e4/classes/DSurface_e4.hpp"  // w16g4 C3861 DSurface:: supply
#include "object/object.hpp"  // x145b: ObjectClass::GetTooltipText 完整定义 (0x6d1800 body)
// [w14e3] fn vocab supply (g57b5-W5 variadic convention); evidence: raw_decomp entries
namespace gamemd {
    int CompressScreenshot(int* p0, int* p1, void* p2);  // x4:signals@0x7b05c0
} // namespace gamemd
// ---- g57c5 W5 vocab (declaration-only) ----
namespace gamemd {
class BufferIOFileClass;  // g57c5 W5 fwd
class CCFileClass;  // g57c5 W5 fwd
class Math;  // g57c5 W5 fwd
class XSurface;  // g57c5 W5 fwd
} // namespace gamemd
// ---- g57c5 W5 end ----
// ---- g57b5 W3: TU-local 真形 vocab (declaration-only) 
namespace gamemd {

    struct MQF_ABC5F8_c { unsigned int waypoints[1]; };  // 0xABC5F8 宿主词汇 (MQF_ABFBE0_c 同款 [1] 界约)
    extern MQF_ABC5F8_c g_MissionQueueFrame;             // data: 0xABC5F8 (csp_canon/globals.hpp:1106)
    struct stru_87F5F0_host {                      // 0x87F5F0 宿主 (object/supplied_bodies:106 同款)
        unsigned char q000[0x58];
        unsigned char __pad_58[0x280 - 0x58];      // 覆盖 __pad_58[416] = +0x1F8
    };
    extern stru_87F5F0_host stru_87F5F0;          // data: 0x87F5F0
    extern void *g_hWnd;                                    // data 宿主 (GetClientRect/ClientToScreen 实参)
} // namespace gamemd
// ---- g57b5 W3 end ----

// gC supply: extern declarations from src/e4/e4_globals_decls.hpp
extern unsigned int stru_A8EB00;
extern int FileSystem_TEMPERAT_PAL;  // data: 0x885780 (e4_globals_decls.hpp:782)
extern int g_DSurface_Primary;  // data: 0x887308 (e4_globals_decls.hpp:921)
extern void* XSurface_Vtable[];  // W13-C q000 词表 (ida_vtables.h 未载)
extern void* BSurface_Vtable[];  // W13-C q000 词表
struct DSurface_ViewBounds_flat { unsigned int field_0; unsigned int q004; unsigned char q008[0x34 - 0x8]; unsigned char q034[0xFC - 0x34]; unsigned char q0FC[0x240 - 0xFC]; };  // W13-C: e4_globals_decls.hpp:755 同形
extern DSurface_ViewBounds_flat DSurface_ViewBounds;  // data: 0x886FA0 (e4_globals_decls.hpp:762 同形)

namespace gamemd {
// 0x6d1800
int CursorAnim::Load()
{
  ObjectClass *v1; // ecx  (x145b: raw SidebarClass* — 以完整基类 ObjectClass 承接成员调用)

  return (int)v1->GetTooltipText((int)this); /*0x6d180a*/
}
} // namespace gamemd