// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_77D1F0_e4.hpp"
#include "e4/classes/E4Recv_7ACBE0_e4.hpp"
#include "e4/classes/E4Recv_7AE180_e4.hpp"
#include "e4/classes/ComPtr_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"
#include "e4/classes/ObjectTypeClass_e4.hpp"
#include "e4/classes/Conflict_WorldDominationTour_12_e4.hpp"
#include "e4/classes/AbstractClass_e4.hpp"
#include "e4/classes/ConnectionClass_e4.hpp"
#include "e4/classes/OwnerDrawControl_e4.hpp"

// 0x77D1F0
namespace gamemd {
void E4Recv_77D1F0::ConnectAndLoginWOL_Connect()
{

  *(unsigned int *)this->__pad_0 = (unsigned int)(&off_7F7624); /*0x77d1f0*/
  OwnerDrawControl::InitVtable((OwnerDrawControl *)this); /*0x77d1f6*/

}
} // namespace gamemd
