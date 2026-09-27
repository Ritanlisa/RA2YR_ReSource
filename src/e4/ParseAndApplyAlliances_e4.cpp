// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_69D870_e4.hpp"
#include "e4/classes/_tree_full_e4.hpp"
#include "e4/classes/_tree_alias_e4.hpp"
#include "e4/e4_protos.h"

// 0x69D870
namespace gamemd {
unsigned int * E4Recv_69D870::sub_69D870(int a2, int a3)
{
  this->M4 = 0; /*0x69d87b*/
  this->M8 = a2; /*0x69d87e*/
  this->M12 = 1; /*0x69d881*/
  this->M13 = 0; /*0x69d885*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      this->M4 = (unsigned int *)(a3);
      return (unsigned int *)(this);
    }
    this->M4 = (unsigned int)(operator new(4 * a2));
    this->M13 = 1; /*0x69d8b0*/
  }
  return (unsigned int *)(this);
}
} // namespace gamemd
