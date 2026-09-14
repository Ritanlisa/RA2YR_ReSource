// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B36E0
namespace ra2 {
namespace game {
char IPersistStream::SetField(int a1)
{
{
    if ( a1 == -1 )
    return 1;
    else
    return DataGlobal_A8E3AE[32 * a1];
}
}
} // namespace game
} // namespace ra2

// 0x5B2E50
namespace ra2 {
namespace game {
int IPersistStream::StubReturn450()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B2EF0
namespace ra2 {
namespace game {
int IPersistStream::GetMaxSize()
{
return 450;
}
} // namespace game
} // namespace ra2

// 0x5B3A50
namespace ra2 {
namespace game {
int IPersistStream::StubReturnFalse()
{
{
    int result;
    return result;
}
}
} // namespace game
} // namespace ra2

// 0x7099D0
namespace ra2 {
namespace game {
int IPersistStream::IsDirty(int a1, int a2)
{
return 0;
}
} // namespace game
} // namespace ra2

// 0x709A30
namespace ra2 {
namespace game {
void IPersistStream::Stub(BuildingTypeClass * aP0, int a2)
{
  ;
}
} // namespace game
} // namespace ra2

// 0x70C250
namespace ra2 {
namespace game {
int IPersistStream::GetSizeMax(int a0, RadioClass * aP1, int a3)
{
{
    RadioClass::SaveState((int *)a0, aP1, a3);
    return 0;
}
}
} // namespace game
} // namespace ra2
