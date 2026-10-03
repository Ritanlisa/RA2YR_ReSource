// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/Random_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/WaveClass_e4.hpp"
#include "e4/classes/BuildingClass_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/WaypointClass_e4.hpp"
#include "e4/classes/DamageArea_e4.hpp"
#include "e4/classes/Init_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/Coord_e4.hpp"
#include "e4/classes/Particle_e4.hpp"
#include "e4/classes/Warhead_e4.hpp"
#include "e4/classes/Array_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/Audio_e4.hpp"
#include "e4/classes/Object_e4.hpp"
#include "e4/classes/ParticleSystemTypeClass_e4.hpp"
#include "e4/classes/MouseClass_e4.hpp"
#include "e4/classes/WaypointPathClass_e4.hpp"
#include "e4/classes/AbstractTypeClass_e4.hpp"
#include "e4/classes/WarheadTypeClass_e4.hpp"
#include "e4/classes/CaptureManagerClass_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"
#include "e4/classes/TeamClass_e4.hpp"
#include "e4/classes/CoordStruct_e4.hpp"
#include "e4/classes/RadSiteClass_e4.hpp"
#include "e4/classes/FrameSnapshot_e4.hpp"
#include "e4/classes/ObjectPtr_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"

// 0x75F650
namespace gamemd {
int WaveClass::LoadWaveData(int a2, int a3)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75F650)
}
}
// 0x763200
namespace gamemd {
WaveClass * WaveClass::ddtor(char a2, int aP1, int a1, int a3)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x763200)
}
} // namespace gamemd

// 0x75F330
namespace gamemd {
char WaveClass::DamageArea(ObjectClass * aP1)
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x75F330)
}
} // namespace gamemd

// 0x75F7D0
namespace gamemd {
int WaveClass::ProcessWaveTick(int * a1, int * a2, int a3)
{

  int v3; // edx
  int result; // eax
  int i; // ebx

  AbstractClass::SaveLoad_Prefix((gamemd::ObjectTypeClass *)((int *)a1),(gamemd::ObjectTypeClass *)(a2),(gamemd::ObjectTypeClass *)(a3)); /*0x75f7e2*/
  v3 = *a2; /*0x75f7ed*/
  a3 = *((unsigned int *)a1 + 128); /*0x75f7f9*/
  result = (*(int (**)(int *, int *, int, unsigned int))(v3 + 16))(a2, &a3, 4, 0); /*0x75f7fd*/
  if ( result >= 0 ) /*0x75f802*/
  {
    for ( i = 0; i < a3; ++i ) /*0x75f80c*/
    {
      result = (*(int (**)(int *, int, int, unsigned int))(*a2 + 16))(a2, *((unsigned int *)a1 + 125) + 4 * i, 4, 0); /*0x75f81f*/
      if ( result < 0 ) /*0x75f824*/
        break; /*0x75f824*/
    }
  }
  return result; /*0x75f82f*/

}
} // namespace gamemd

// 0x75F840
namespace gamemd {
int WaveClass::GetClassIdentifier(int a1, unsigned int * a2)
{

  if ( !a2 ) /*0x75f846*/
    return -2147467261; /*0x75f848*/
  *a2 = 237448653; /*0x75f856*/
  a2[1] = 298949647; /*0x75f85e*/
  a2[2] = -1610610249; /*0x75f867*/
  a2[3] = unk_7E972C; /*0x75f870*/
  return 0; /*0x75f84d*/

}
} // namespace gamemd

// 0x75F880
namespace gamemd {
int WaveClass::GetObjectSize()
{

  return 576; /*0x75f885*/

}
} // namespace gamemd

// 0x75F890
namespace gamemd {
int WaveClass::CheckStateFlag()
{

  return 3; /*0x75f895*/

}
} // namespace gamemd

// 0x75F8A0
namespace gamemd {
int WaveClass::StubReturnFalse()
{

  return 0; /*0x75f8a2*/

}
} // namespace gamemd

// 0x7631F0
namespace gamemd {
int WaveClass::GetTypeIdentifier()
{

  return 43; /*0x7631f5*/

}
} // namespace gamemd
