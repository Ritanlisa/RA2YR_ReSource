// E4 materialized pending bodies (auto-generated from full_export v3)
#include <cstdint>
#include "e4/e4_globals.hpp"

// 0x5B2E50
namespace ra2 {
namespace game {
int IPersistStream::StubReturn450()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Stub_ReturnE_NOTIMPL()
{
  return 450; /*0x5b2e55*/
}
}
} // namespace game
} // namespace ra2

// 0x5B2EF0
namespace ra2 {
namespace game {
int IPersistStream::GetMaxSize()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int Stub_ReturnE_NOTIMPL_3()
{
  return 450; /*0x5b2ef5*/
}
}
} // namespace game
} // namespace ra2

// 0x5B36E0
namespace ra2 {
namespace game {
char IPersistStream::SetField(int a1)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
char __fastcall IPersistStream::SetField(int a1)
{
  if ( a1 == -1 ) /*0x5b36e3*/
    return 1; /*0x5b36e5*/
  else
    return MEMORY[0xA8E3AE][32 * a1]; /*0x5b36eb*/
}
}
} // namespace game
} // namespace ra2

// 0x5B3A50
namespace ra2 {
namespace game {
int IPersistStream::StubReturnFalse()
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __thiscall IPersistStream::StubReturnFalse(#374 *this)
{
  int result; // eax

  return result; /*0x5b3a50*/
}
}
} // namespace game
} // namespace ra2

// 0x7099D0
namespace ra2 {
namespace game {
int IPersistStream::IsDirty(int a1, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall IPersistStream::_vt64(int a1, int a2)
{
  return 0; /*0x7099d2*/
}
}
} // namespace game
} // namespace ra2

// 0x709A30
namespace ra2 {
namespace game {
void IPersistStream::Stub(BuildingTypeClass * aP0, int a2)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
void __stdcall IPersistStream::Stub(BuildingTypeClass *aP0, int a2)
{
  ; /*0x709a30*/
}
}
} // namespace game
} // namespace ra2

// 0x70C250
namespace ra2 {
namespace game {
int IPersistStream::GetSizeMax(int a0, RadioClass * aP1, int a3)
{
// [IDA decompile] original pseudocode - translation pending (final goal)
int __stdcall IPersistStream::GetSizeMax(int a0, RadioClass *aP1, int a3)
{
  RadioClass::SaveState((int *)a0, aP1, a3); /*0x70c25f*/
  return 0; /*0x70c266*/
}
}
} // namespace game
} // namespace ra2
