// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>

#include "e4/e4_globals.hpp"
#include "e4/classes/Options_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/EventClass_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Timer_e4.hpp"
#include "e4/classes/WideString_e4.hpp"
#include "e4/classes/LoadOptions_e4.hpp"
#include "e4/classes/OverlayTypeClass_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/Process_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/PageUserCommandClass_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/DSurface_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DialogQueue_e4.hpp"
#include "e4/classes/E4Recv_6810C0_e4.hpp"
#include "e4/classes/LocomotionClass_e4.hpp"
#include "e4/classes/Theme_e4.hpp"
#include "e4/classes/ParasiteClass_e4.hpp"
#include "e4/classes/DeleteAndZero_e4.hpp"
#include "e4/classes/OptionQueue_e4.hpp"
#include "e4/classes/SaveLoadDialog_e4.hpp"
#include "e4/classes/Struct_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/CCINIClass_e4.hpp"
#include "e4/classes/ThemeClass_e4.hpp"

// 0x4F11B0
namespace gamemd {
int Options::DlgProc(HWND hDlg, unsigned int a2, unsigned int a3, HWND a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F11B0)
}
}
// 0x558840
namespace gamemd {
void Options::PrepareSaveLoadDlg(const char ** dwNewLong)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x558840)
}
}
// 0x55FAA0
namespace gamemd {
AbstractClass * * Options::Screen_Save()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55FAA0)
}
}
// 0x55FC80
namespace gamemd {
char Options::Screen_Dialog()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x55FC80)
}
}
// 0x6244E0
namespace gamemd {
int Options::DeleteAndZero()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6244E0)
}
}
// 0x6248A0
namespace gamemd {
char Options::EnsureCapacity()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6248A0)
}
}
// 0x6253B0
namespace gamemd {
int Options::GrowBuffer()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6253B0)
}
}
// 0x6254D0
namespace gamemd {
int Options::ReadOptionValue()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6254D0)
}
}
// 0x625560
namespace gamemd {
AbstractClass * * Options::DestroyComposite(void * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x625560)
}
}
// 0x6255F0
namespace gamemd {
void * Options::RebuildDropdownList(ObjectClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6255F0)
}
}
// 0x625A20
namespace gamemd {
int Options::SaveOptionValue()
{

  int v2; // eax
  int v4; // ebp
  void *v5; // edx
  void *v6; // esi
  void *v7; // [esp+4h] [ebp-4h]

  v2 = *(unsigned int *)this->__pad_0; /*0x625a24*/
  if ( *(unsigned int *)this->__pad_0 < (int)this->field_4 ) /*0x625a2b*/
    return 0; /*0x625a2d*/
  v4 = 2 * v2; /*0x625a33*/
  if ( 2 * v2 < 10 ) /*0x625a3b*/
    v4 = 10; /*0x625a3d*/
  v5 = (void *)__2_YAPAXI_Z(20 * v4); /*0x625a4f*/
  memset(v5, 0, 4 * ((unsigned int)(20 * v4) >> 2)); /*0x625a5a*/
  v7 = v5; /*0x625a64*/
  v6 = (void *)(this->field_8); /*0x625a6a*/
  if ( v6 ) /*0x625a6f*/
    qmemcpy(v5, v6, 20 * *(unsigned int *)this->__pad_0); /*0x625a80*/
  __3_YAXPAX_Z((void *)(this->field_8)); /*0x625a8d*/
  this->field_4 = (unsigned int)((void *)v4); /*0x625a99*/
  this->field_8 = (unsigned int)(v7); /*0x625a9c*/
  return 1; /*0x625a2f*/

}
}
// 0x4F1720
namespace gamemd {
HWND Options::InitDialogControls(HWND hDlg)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F1720)
}
} // namespace gamemd

// 0x5FA4A0
namespace gamemd {
void Options::SetScoreVolume(float volume, int pad, void *a3_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA4A0)
}
} // namespace gamemd

// 0x5FA510
namespace gamemd {
void Options::SetSoundVolume(float volume, int pad, void *a3_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA510)
}
} // namespace gamemd

// 0x5FA590
namespace gamemd {
void Options::SetVoiceVolume(float volume, int pad, void *a3_1)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x5FA590)
}
} // namespace gamemd

// 0x618D40
namespace gamemd {
int Options::DialogProc(CCINIClass hWnd)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x618D40)
}
} // namespace gamemd

// 0x624460
namespace gamemd {
void Options::ClearComboBoxes()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x624460)
}
} // namespace gamemd
