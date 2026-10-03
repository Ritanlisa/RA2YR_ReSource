// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/AudioStream_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/Math_e4.hpp"
#include "e4/classes/Mouse_e4.hpp"
#include "e4/classes/Tactical_e4.hpp"
#include "e4/classes/TacticalClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/TacticalMap_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ConvertClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/ScenarioClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/ColorStruct_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/HouseClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TEventClass_e4.hpp"
#include "e4/classes/Techno_e4.hpp"
#include "e4/classes/CommandClass_e4.hpp"
#include "e4/classes/GadgetClass_e4.hpp"
#include "e4/classes/TagClass_e4.hpp"
#include "e4/classes/MapClass_e4.hpp"
#include "e4/classes/LightningStorm_e4.hpp"
#include "e4/classes/PsyDom_e4.hpp"
#include "e4/classes/StructTable_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Frame_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/TechnoClass_e4.hpp"  // G42.36 C2027 supply
#include "e4/classes/Color_e4.hpp"  // G42.36 C2027 supply

// 0x47F510
namespace gamemd {
void TacticalClass::DrawBuildingPlacement(IUnknown * aP1, int * a2)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x47F510)
}
}
// 0x4801F0
namespace gamemd {
unsigned int TacticalClass::RenderCellFogOfWar(IUnknown * aP1, Tactical * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4801F0)
}
}
// 0x4802A0
namespace gamemd {
void TacticalClass::DrawCellTerrainOverlay(int * a2, int * a3)
{

  int field38; // eax
  int v5; // ebx
  int v6; // esi

  field38 = this->field38; /*0x4802a6*/
  if ( field38 == 0xFFFF ) /*0x4802ae*/
  {
    v5 = 0; /*0x4802df*/
    v6 = *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * dword_AA10B0); /*0x4802e1*/
  }
  else
  {
    v5 = BYTE2(this->visibleCells[13]); /*0x4802b8*/
    v6 = *(unsigned int *)(*(unsigned int *)(unsigned int *)((char *)&stru_A8EB00 + 328) + 4 * field38); /*0x4802be*/
    if ( *(int *)(v6 + 752) > 1 ) /*0x4802c8*/
      ((CellClass *)((CellClass *)v6))->GetTerrainFlag(BYTE2(this->visibleCells[13])); /*0x4802cd*/
  }
  if ( *(unsigned char *)(v6 + 737) ) /*0x4802e4*/
    ((TacticalClass*)/*0x480339*/
      v6)->DrawCellOverlay(/*0x480339*/ v5, (int)g_DSurface_Hidden_2, *a2, a2[1] - 15 * SHIBYTE(this->visibleCells[13]), *a3, a3[1], a3[2], a3[3], 58 - 15 * SHIBYTE(this->visibleCells[13]));

}
}
// 0x4AC380
namespace gamemd {
void* TacticalClass::ProcessScroll(int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AC380)
}
}
// 0x4AC700
namespace gamemd {
unsigned int * TacticalClass::SetDisplayMode(unsigned int * a2, char a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AC700)
}
}
// 0x4AE290
namespace gamemd {
void TacticalClass::InterpolateView()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4AE290)
}
}
// 0x4F45B0
namespace gamemd {
AbstractClass * * TacticalClass_RenderFrame(void * a1, void * a2, void * a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x4F45B0)
}
}
// 0x547230
namespace gamemd {
void TacticalClass::DrawCellOverlay(int a2, IUnknown * aP2, int a4, int a5, IUnknown * aP5, int a7, int a8, int a9, int a10)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x547230)
}
}
// 0x6D04F0
namespace gamemd {
void TacticalClass_BuildCommandBar(void * a1, void * a2, void * a3)
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D04F0)
}
}
// 0x6D2DE0
namespace gamemd {
signed int TacticalClass::RenderIsometricOverlay(IUnknown * aP1, IUnknown * aP2, char a4)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D2DE0)
}
}
// 0x6D3660
namespace gamemd {
int TacticalClass::CalcAllDrawPositions(AbstractClass * aP1, BuildingTypeClass * aP2, int * a3, char a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D3660)
}
}
// 0x6D6D10
namespace gamemd {
void* * TacticalClass::DrawBuildingsInView(AbstractClass * aP1)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D6D10)
}
}
// 0x6D9B50
namespace gamemd {
int TacticalClass::CheckUnitOverlap(int a2, int a3, AbstractClass * aP3, int a5)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D9B50)
}
}
// 0x6DA380
namespace gamemd {
void * TacticalClass::IsOccupiedByTechno(unsigned int * a2)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DA380)
}
}
// 0x6DBE20
namespace gamemd {
void* TacticalClass::DrawPlacementCircles()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6DBE20)
}
}
// 0x732D10
namespace gamemd {
unsigned int * TacticalClass::CollectSelectedIDs()
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x732D10)
}
}
// 0x41B900
namespace gamemd {
void TacticalClass::StubReturnTrue()
{

  ; /*0x41b900*/

}
} // namespace gamemd

// 0x41BEE0
namespace gamemd {
char TacticalClass::StubReturnFalse()
{

  return 0; /*0x41bee2*/

}
} // namespace gamemd

// 0x41BF00
namespace gamemd {
int TacticalClass::StubReturnFalse2()
{

  return 0; /*0x41bf02*/

}
} // namespace gamemd

// 0x41BF10
namespace gamemd {
int TacticalClass::StubReturnFalse3()
{

  return 0; /*0x41bf12*/

}
} // namespace gamemd

// 0x41BF20
namespace gamemd {
int TacticalClass::StubReturnFalse4()
{

  return 0; /*0x41bf22*/

}
} // namespace gamemd

// 0x41BF80
namespace gamemd {
int TacticalClass::StubReturnFalse5()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x41bf80*/
  return result; /*0x41bf82*/

}
} // namespace gamemd

// 0x41BF90
namespace gamemd {
int TacticalClass::StubReturnFalse6()
{

  int result; // eax

  return result; /*0x41bf90*/

}
} // namespace gamemd

// 0x41BFB0
namespace gamemd {
char TacticalClass::StubReturnFalse7()
{

  return 0; /*0x41bfb2*/

}
} // namespace gamemd

// 0x41BFC0
namespace gamemd {
int TacticalClass::StubReturnFalse8()
{

  return 0; /*0x41bfc2*/

}
} // namespace gamemd

// 0x41BFD0
namespace gamemd {
int TacticalClass::StubReturnFalse9()
{

  return 0; /*0x41bfd2*/

}
} // namespace gamemd

// 0x41C000
namespace gamemd {
void TacticalClass::StubReturnTrue2()
{

  ; /*0x41c000*/

}
} // namespace gamemd

// 0x41C040
namespace gamemd {
int TacticalClass::StubReturnFalse10()
{

  int result; // eax

  LOBYTE(result) = 0; /*0x41c040*/
  return result; /*0x41c042*/

}
} // namespace gamemd

// 0x653F70
namespace gamemd {
int TacticalClass::SetPositionThunk(MouseClass * aP0)
{

  return ((Tactical *)((int)g_TacticalClass_Instance))->SetTacticalPosition((int *)aP0); /*0x653f80*/

}
} // namespace gamemd

// 0x6D0270
namespace gamemd {
void TacticalClass::CleanupResources()
{
     // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D0270)
}
} // namespace gamemd

// 0x6D97D0
namespace gamemd {
int TacticalClass::FindOverlay(int a1, IUnknown * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D97D0)
}
} // namespace gamemd

// 0x6D9920
namespace gamemd {
int TacticalClass::FindBuilding(int a1, IUnknown * aP1, IUnknown * aP2)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x6D9920)
}
} // namespace gamemd

// 0x701190
namespace gamemd {
char TacticalClass::StubReturnFalse11()
{

  return 0; /*0x701192*/

}
} // namespace gamemd

// 0x70D980
namespace gamemd {
void TacticalClass::StubReturnTrue3()
{

  ; /*0x70d980*/

}
} // namespace gamemd

// 0x70F0B0
namespace gamemd {
int TacticalClass::MapSpecialDrawMode(MouseClass * aP1)
{

  char v3; // al
  int result; // eax
  bool v5; // zf

  v3 = Render_Draw_731BF0(); /*0x70f0b3*/
  if ( this == (TacticalClass *)1 ) /*0x70f0bb*/
  {
    if ( v3 ) /*0x70f0bf*/
      return 62; /*0x70f0c7*/
    return (int)this; /*0x70f0bf*/
  }
  if ( this != (TacticalClass *)5 ) /*0x70f0cd*/
    return (int)this; /*0x70f0cd*/
  v5 = v3 == 0; /*0x70f0cf*/
  result = 63; /*0x70f0d1*/
  if ( v5 ) /*0x70f0d6*/
    return (int)this; /*0x70f0d8*/
  return result; /*0x70f0c6*/

}
} // namespace gamemd
