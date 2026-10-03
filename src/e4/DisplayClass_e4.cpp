// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Hash_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Display_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/Vector_e4.hpp"
#include "e4/classes/VectorCursor_uint_DynamicVectorClass_uint____13_e4.hpp"
#include "e4/classes/DisplayClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/EMPulseClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/Draw_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/DropListClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/E4Recv_696AE0_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/Dialog_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/Straw_e4.hpp"
#include "e4/classes/COMObject_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"

// 0x487630
namespace gamemd {
int DisplayClass::UpdateDisplayTimer()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00487630.json)
}
} // namespace gamemd
// 0x487690
namespace gamemd {  // G42.18c ns repair
int DisplayClass::AdvanceFrameCounter()
int DisplayClass::AdvanceFrameCounter()
}  // G42.18c ns repair
{

  void *DisplayClass_field_0x130; // esi
  char *v2; // eax
  int v3; // edx
  int result; // eax

  DisplayClass_field_0x130 = (void *)(this->DisplayClass_field_0x130); /*0x487691*/
  if ( DisplayClass_field_0x130 == (void *)-1 ) /*0x48769a*/
    this->DisplayClass_field_0x130 = 0; /*0x48769c*/
  v2 = (char *)this->DisplayClass_field_0x130 + 1; /*0x4876ac*/
  this->DisplayClass_field_0x130 = (unsigned int)(v2); /*0x4876ad*/
  v3 = (int)v2; /*0x4876b3*/
  result = (int)this->DisplayClass_field_0x134; /*0x4876b5*/
  if ( v3 > result ) /*0x4876bd*/
    this->DisplayClass_field_0x130 = (unsigned int)((void *)result); /*0x4876bf*/
  if ( (int)DisplayClass_field_0x130 <= 0 ) /*0x4876c8*/
  {
    result = (int)this->DisplayClass_field_0x130; /*0x4876ca*/
    if ( result > 0 ) /*0x4876d2*/
    {
      result = (int)this->DisplayClass_field_0x140; /*0x4876d4*/
      LOBYTE(result) = result | 0x20; /*0x4876da*/
      this->DisplayClass_field_0x140 = (unsigned int)((void *)result); /*0x4876dc*/
    }
  }
  return result; /*0x4876c7*/

}
} // namespace gamemd
// 0x4A8850
namespace gamemd {
int DisplayClass::LoadTypeData()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A8850.json)
}
} // namespace gamemd
// 0x4A88C0
namespace gamemd {
int DisplayClass::SetSize()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A88C0.json)
}
} // namespace gamemd
// 0x4A8930
namespace gamemd {
char DisplayClass::ddtor(void *a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A8930.json)
}
} // namespace gamemd
// 0x4A9890
namespace gamemd {
Tactical * * DisplayClass::UpdateCellPassability(short * a1, IUnknown * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A9890.json)
}
} // namespace gamemd
// 0x4A9DD0
namespace gamemd {
VectorClass_flat * * DisplayClass::ProcessCellReveal(MouseClass * aP1, IUnknown * aP2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A9DD0.json)
}
} // namespace gamemd
// 0x4AA050
namespace gamemd {
int DisplayClass::RevealFogCell(short * a1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AA050.json)
}
} // namespace gamemd
// 0x4AC310
namespace gamemd {
int DisplayClass::InitViewBounds(unsigned int * a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AC310.json)
}
} // namespace gamemd
// 0x4AE4F0
namespace gamemd {
void * DisplayClass::Draw(int a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AE4F0.json)
}
} // namespace gamemd
// 0x4AEAD0
namespace gamemd {
int DisplayClass::ExitMode()
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEAD0.json)
}
} // namespace gamemd
// 0x5519B0
namespace gamemd {
int DisplayClass::RenderStatusText(IUnknown * aP1, char a3)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005519B0.json)
}
} // namespace gamemd
// 0x551A90
namespace gamemd {
int DisplayClass::InsertPriorityText(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x00551A90.json)
}
} // namespace gamemd
// 0x5F6220
namespace gamemd {
int DisplayClass::checkScreenBounds(int a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x005F6220.json)
}
} // namespace gamemd
// 0x6D8530
namespace gamemd {
int DisplayClass::ScrollTacticalView(IUnknown * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006D8530.json)
}
} // namespace gamemd
// 0x6DA230
namespace gamemd {
int DisplayClass::GetCoordDelta(AbstractClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x006DA230.json)
}
} // namespace gamemd
// 0x7BA4D0
namespace gamemd {
int DisplayClass::ReadFromBuffer(void * a1, signed int Size)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x007BA4D0.json)
}
} // namespace gamemd
// 0x4A9700
namespace gamemd {
void DisplayClass::Update(PowerClass * aP1, int a3, void *a3_2, void *a4)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4A9700)
}
} // namespace gamemd
// 0x4A9840
namespace gamemd {
bool DisplayClass::SetCoordVisible(IUnknown * aP0, MouseClass * aP1, char a3)
{
    return false; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004A9840.json)
}
} // namespace gamemd
// 0x4AAC10
namespace gamemd {
int DisplayClass::ProcessTacticalMouseInput(char a2, int a3, int a4)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AAC10.json)
}
} // namespace gamemd
// 0x4AE6B0
namespace gamemd {
HWND DisplayClass::Render(void *a1, void *a2)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AE6B0.json)
}
} // namespace gamemd
// 0x4AE6F0
namespace gamemd {
int DisplayClass::SetSurface(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AE6F0.json)
}
} // namespace gamemd
// 0x4AE720
namespace gamemd {
int DisplayClass::GetSurface(unsigned int * a1)
{
    return 0; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AE720.json)
}
} // namespace gamemd
// 0x4AEB50
namespace gamemd {
unsigned int * DisplayClass::loc_4AEB50(MouseClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEB50.json)
}
} // namespace gamemd

// 0x4AEBB0
namespace gamemd {
unsigned int * DisplayClass::updateRenderState(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEBB0.json)
}
} // namespace gamemd
// 0x4AEBF0
namespace gamemd {
DisplayClass * DisplayClass::Read(char * Block, char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEBF0.json)
}
} // namespace gamemd
// 0x4AEC30
namespace gamemd {
int * DisplayClass::processDisplayMode(char a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (raw dialect; truth = .omo/ida_cache/func_0x004AEC30.json)
}
} // namespace gamemd