// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"
#include "e4/classes/E4Recv_429550_e4.hpp"

// 0x429550
namespace gamemd {
int E4Recv_429550::COMStub_429550()
{
{
    int *v2;
    return SwizzleManagerClass::Process((int)&g_OverlayTypeConfig.__pad_14B0[13416], &IID_ISwizzle, v2);
}
}
} // namespace gamemd

// 0x4E7CF0
namespace gamemd {
unsigned char * sub_4E7CF0()
{
{
    char *v0;
    int v1;
    char *result;
    v0 = &DataGlobal_A8E3A8;
    v1 = 32;
    do
  {
    result = MissionClass::FindName(v0);
    v0 += 32;
    --v1;
  }
    while ( v1 );
    return result;
}
}
} // namespace gamemd

// 0x565060
namespace gamemd {
int sub_565060()
{
{
    CellClass::Construct(g_CellClassArray);
    return atexit(unknown_libname_22);
}
}
} // namespace gamemd
