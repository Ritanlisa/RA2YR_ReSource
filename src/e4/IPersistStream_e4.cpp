// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/IPersistStream_e4.hpp"
#include "e4/classes/IRTTITypeInfo_e4.hpp"
#include "e4/classes/RadioClass_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/BuildingTypeClass_e4.hpp"

// 0x5B2E50
namespace gamemd {
int IPersistStream::StubReturn450()
{

  return 450; /*0x5b2e55*/

}
} // namespace gamemd

// 0x5B2EF0
namespace gamemd {
int IPersistStream::GetMaxSize()
{

  return 450; /*0x5b2ef5*/

}
} // namespace gamemd

// 0x5B36E0
namespace gamemd {
char IPersistStream::SetField(int a1)
{

  if ( a1 == -1 ) /*0x5b36e3*/
    return 1; /*0x5b36e5*/
  else
    return byte_A8E3AE[32 * a1]; /*0x5b36eb*/

}
} // namespace gamemd

// 0x5B3A50
namespace gamemd {
int IPersistStream::StubReturnFalse()
{

  int result; // eax

  return result; /*0x5b3a50*/

}
} // namespace gamemd

// 0x7099D0
namespace gamemd {
int IPersistStream::IsDirty(int a1, int a2)
{

  return 0; /*0x7099d2*/

}
} // namespace gamemd

// 0x709A30
namespace gamemd {
void IPersistStream::Stub(BuildingTypeClass * aP0, int a2)
{

  ; /*0x709a30*/

}
} // namespace gamemd

// 0x70C250
namespace gamemd {
int IPersistStream::GetSizeMax(int a0, RadioClass * aP1, int a3)
{

  RadioClass::SaveState((RadioClass *)a0, (int *)aP1, a3); /*0x70c25f*/
  return 0; /*0x70c266*/

}
} // namespace gamemd
