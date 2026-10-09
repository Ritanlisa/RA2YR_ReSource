// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/Node_flat_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x49EA10
namespace gamemd {
unsigned int * Node_flat::Init(void *a1, void *a2, void *a3, void *a4, void *a5, void *a6, void *a7, void *a8)
{
  *(_DWORD *)this->__pad_0 = 0; /*0x49ea14*/
  this->Previous = 0; /*0x49ea16*/
  *(_DWORD *)this->Blowfish = 0; /*0x49ea19*/
  IDA_LOBYTE(this->CountFiles) = 0; /*0x49ea1c*/
  this->FileSize = 0; /*0x49ea1f*/
  return this->__pad_0; /*0x49ea22*/
}
} // namespace gamemd