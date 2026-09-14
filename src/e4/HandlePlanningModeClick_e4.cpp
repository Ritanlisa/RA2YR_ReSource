// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_63DB20_e4.hpp"

// 0x63DB20
namespace gamemd {
BOOL E4Recv_63DB20::sub_63DB20(unsigned int * a2)
{
{
    int v2;
    int v3;
    int result;
    result = 0;
    if ( *a2 >= *(void**)this && *a2 < *(void**)(this) + this->M8 )
  {
    v2 = *((int*)(a2) + 1);
    v3 = this->M4;
    if ( v2 >= v3 && v2 < v3 + this->M12 )
    return 1;
  }
    return result;
}
}
} // namespace gamemd
