// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/classes/MapClass_e4.hpp"
#include "e4/e4_globals.hpp"
#include "e4/classes/Factory_e4.hpp"
#include "e4/classes/Cell_e4.hpp"
#include "e4/classes/Coord_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/classes/FactoryClass_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/CellClass_e4.hpp"
#include "e4/classes/DynamicVector_e4.hpp"
#include "e4/classes/FilePipe_30_e4.hpp"
#include "e4/classes/FilePipe_38_e4.hpp"
#include "e4/classes/RawFileClass_e4.hpp"
#include "e4/classes/VectorClass_flat_e4.hpp"
#include "e4/classes/File_e4.hpp"
#include "e4/classes/FileClass_e4.hpp"
#include "e4/classes/House_e4.hpp"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Debug_e4.hpp"
#include "e4/classes/TechnoTypeClass_e4.hpp"
#include "e4/classes/TypeList_flat_e4.hpp"
#include "e4/classes/ObjectClass_e4.hpp"
#include "e4/classes/String_e4.hpp"
#include "e4/classes/Power_e4.hpp"
#include "e4/classes/LayerClass_e4.hpp"

// 0x663D60
namespace gamemd {
int Factory::GetLinkedIndex(int aP1)
{

  int result; // eax
  void *v3; // edx
  char **v4; // esi
  char **i; // ecx

  if ( aP1 == -1 ) /*0x663d68*/
  {
    LOBYTE(result) = -1; /*0x663d6a*/
  }
  else
  {
    v3 = (void *)(this->field_10); /*0x663d70*/
    result = 0; /*0x663d73*/
    if ( (int)v3 <= 0 ) /*0x663d79*/
      goto LABEL_9; /*0x663d79*/
    v4 = (char **)this->field_4; /*0x663d7b*/
    for ( i = v4; aP1 != **i; ++i ) /*0x663d7e*/
    {
      if ( ++result >= (int)v3 ) /*0x663d8f*/
      {
        LOBYTE(result) = -1; /*0x663d93*/
        return result; /*0x663d96*/
      }
    }
    result = (int)v4[result]; /*0x663d99*/
    LOBYTE(result) = *(unsigned char *)(result + 40); /*0x663d9c*/
    if ( !(unsigned char)result ) /*0x663da1*/
LABEL_9:
      LOBYTE(result) = -1; /*0x663da3*/
  }
  return result; /*0x663d6c*/

}
}
// 0x718B70
namespace gamemd {
void* Factory_CalculateExitCell(Factory *aP0, void * a1, void * a2, void * a3, void * a4, void * a5, void * a6)
{
    return nullptr; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x718B70)
}
}
// 0x523C90
namespace gamemd {
int Factory::FindExitCellByName()
{
    return 0; // TODO stub - quarantined G42 T9 (error-enclosing; truth = 0x523C90)
}
} // namespace gamemd

// 0x731CD0
namespace gamemd {
int Factory::IdleHandler()
{

  return System_Handle(77, 0); /*0x731cde*/

}
} // namespace gamemd
