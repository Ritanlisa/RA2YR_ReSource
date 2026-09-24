// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_69D870_e4.hpp"

// 0x69D870
namespace gamemd {
unsigned int * E4Recv_69D870::sub_69D870(int a2, int a3)
{
  *(this + 1) = 0; /*0x69d87b*/
  *(this + 2) = a2; /*0x69d87e*/
  *((_BYTE *)this + 12) = 1; /*0x69d881*/
  *((_BYTE *)this + 13) = 0; /*0x69d885*/
  *this = &VectorClass<HouseClass *>::`vftable'; /*0x69d888*/
  if ( a2 ) /*0x69d88e*/
  {
    if ( a3 ) /*0x69d896*/
    {
      *(this + 1) = a3; /*0x69d898*/
      return this; /*0x69d89e*/
    }
    *(this + 1) = __2_YAPAXI_Z(4 * a2); /*0x69d8ad*/
    *((_BYTE *)this + 13) = 1; /*0x69d8b0*/
  }
  return this; /*0x69d89d*/
}
} // namespace gamemd
