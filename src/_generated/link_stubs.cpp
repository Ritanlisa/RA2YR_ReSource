// AUTO-GENERATED link stubs - unresolved legacy declarations.
// Each body is an empty placeholder pending C-line translation.
// Regenerate via tools/gen_link_stubs.py after linking passes.
#include <windows.h>
#include <cstdint>
#include "core/coordinate.hpp"
#include "core/utility_ext.hpp"
#include "entity/particle_system.hpp"
#include "entity/wave.hpp"
#include "house/house.hpp"
#include "misc/locomotion.hpp"
#include "misc/super_weapon.hpp"
#include "network/multiplayer.hpp"
#include "network/session.hpp"
#include "object/capture_manager.hpp"
#include "object/object.hpp"
#include "object/slave_manager.hpp"
#include "object/spawn_manager.hpp"
#include "render/display.hpp"
#include "render/light_source.hpp"
#include "render/surface.hpp"
#include "system/buffer_io_file.hpp"
#include "system/cd_file.hpp"
#include "system/file_class.hpp"
#include "system/mix_file.hpp"
#include "system/tactical.hpp"
#include "system/waypoint.hpp"
#include "team/taction.hpp"
#include "team/tag.hpp"
#include "team/team.hpp"
#include "team/tevent.hpp"
#include "type/abstract_type.hpp"

// link stub (no binary body yet)
char gamemd::DSurface::BlitCore(int* a0, int* a1, int* a2, void* a3, int* a4, int* a5, int a6, char a7) { return {}; }
// link stub (no binary body yet)
gamemd::AbstractTypeClass::AbstractTypeClass(gamemd::AbstractTypeClass::noinit_t a0) {}
// link stub (no binary body yet)
gamemd::BufferIOFileClass::BufferIOFileClass(gamemd::noinit_t const& a0) {}
// link stub (no binary body yet)
gamemd::CDFileClass::CDFileClass(gamemd::noinit_t const& a0) {}
// link stub (no binary body yet)
gamemd::LightSourceClass::LightSourceClass(gamemd::Vector3D<int> const& a0, int a1, int a2, gamemd::TintStruct const& a3, int a4) {}
// link stub (no binary body yet)
gamemd::ObjectTypeClass::ObjectTypeClass(gamemd::ObjectTypeClass::noinit_t a0) {}
// link stub (no binary body yet)
gamemd::ParticleSystemTypeClass::ParticleSystemTypeClass(gamemd::ParticleSystemTypeClass::noinit_t a0) {}
// link stub (no binary body yet)
gamemd::SuperWeaponTypeClass::SuperWeaponTypeClass(gamemd::AbstractTypeClass::noinit_t a0) {}
// link stub (no binary body yet)
gamemd::UnitClass::UnitClass() {}
// link stub (no binary body yet)
gamemd::DSurface::DSurface(int a0, int a1, bool a2, bool a3) {}
// link stub (no binary body yet)
gamemd::MixFileClass::MixFileClass(const char* a0) {}
// link stub (no binary body yet)
gamemd::WaveClass::WaveClass(ra2::game::TechnoClass* a0, gamemd::WaveType a1, gamemd::Vector2D<int> const& a2, unsigned int a3) {}
// link stub (no binary body yet)
gamemd::XSurface::XSurface(int a0, int a1) {}
// link stub (no binary body yet)
ra2::game::DirStruct::DirStruct() {}
// link stub (no binary body yet)
bool gamemd::TEventClass::Execute(int a0, int a1, ra2::game::ObjectClass* a2, int a3, int* a4, int a5) { return {}; }
// link stub (no binary body yet)
bool gamemd::TriggerClass::FireActions(ra2::game::ObjectClass* a0, gamemd::Vector2D<short> a1) { return {}; }
// link stub (no binary body yet)
bool gamemd::TriggerClass::RegisterEvent(int a0, ra2::game::ObjectClass* a1, bool a2, bool a3, ra2::game::TechnoClass* a4) { return {}; }
// link stub (no binary body yet)
bool gamemd::TriggerTypeClass::RemoveAction(gamemd::TActionClass* a0) { return {}; }
// link stub (no binary body yet)
bool gamemd::TriggerTypeClass::RemoveEvent(gamemd::TEventClass* a0) { return {}; }
// link stub (no binary body yet)
int gamemd::MapClass::GetCellIndex(gamemd::Vector2D<short> const& a0) { return {}; }
// link stub (no binary body yet)
bool gamemd::AbstractTypeClass::LoadFromINI(gamemd::CCINIClass* a0) { return {}; }
// link stub (no binary body yet)
bool gamemd::AbstractTypeClass::WriteINI(gamemd::CCINIClass* a0) { return {}; }
// link stub (no binary body yet)
bool gamemd::DSurface::FillRectEx(gamemd::RectangleStruct const& a0, gamemd::RectangleStruct const& a1, unsigned int a2) { return {}; }
// link stub (no binary body yet)
bool gamemd::DisplayClass::ConvertAction(gamemd::Vector2D<short> const& a0, bool a1, ra2::game::ObjectClass* a2, gamemd::Action a3, unsigned int a4) { return {}; }
// link stub (no binary body yet)
bool gamemd::MapClass::DraggingInProgress() { return {}; }
// link stub (no binary body yet)
bool gamemd::RawFileClass::CreateFile() { return {}; }
// link stub (no binary body yet)
bool gamemd::RawFileClass::DeleteFile() { return {}; }
// link stub (no binary body yet)
bool gamemd::RawFileClass::Exists(bool a0) { return {}; }
// link stub (no binary body yet)
bool gamemd::RawFileClass::HasHandle() { return {}; }
// link stub (no binary body yet)
bool gamemd::RawFileClass::Open(gamemd::FileAccessMode a0) { return {}; }
// link stub (no binary body yet)
bool gamemd::RawFileClass::OpenEx(const char* a0, gamemd::FileAccessMode a1) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::CanLock(unsigned int a0, unsigned int a1) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::CheckBltStatus() { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::DrawDashedLineStipple(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned short a2, unsigned const char*const a3, int a4, bool a5) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::DrawGradientLine(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, int a2, int a3, float* a4, float* a5) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::DrawLineFaded(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned const char* a2, int a3, int a4, bool a5, float a6, float a7, bool a8) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::DrawLineModulated(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, int a2, int a3, int a4, bool a5) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::DrawLineZBuf(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned short a2, int a3, int a4, bool a5) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::DrawLineZBufColored(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned const char*const a2, float a3, int a4, int a5) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::DrawStippledRect(gamemd::Vector2D<int> const& a0, gamemd::Vector2D<int> const& a1, unsigned short a2, bool a3) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::FillRectWithFlags(gamemd::RectangleStruct const& a0, gamemd::ColorStruct const& a1, int a2) { return {}; }
// link stub (no binary body yet)
bool gamemd::XSurface::Unlock() { return {}; }
// link stub (no binary body yet)
int gamemd::MapClass::IsVisible(gamemd::Vector2D<short> a0) { return {}; }
// link stub (no binary body yet)
int gamemd::RawFileClass::GetFileSize() { return {}; }
// link stub (no binary body yet)
int gamemd::RawFileClass::ReadBytes(void* a0, int a1) { return {}; }
// link stub (no binary body yet)
int gamemd::RawFileClass::Seek(int a0, gamemd::FileSeekMode a1) { return {}; }
// link stub (no binary body yet)
int gamemd::RawFileClass::WriteBytes(void* a0, int a1) { return {}; }
// link stub (no binary body yet)
long gamemd::TActionClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TActionClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TActionClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long gamemd::TEventClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TEventClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TEventClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long gamemd::TacticalClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TacticalClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TacticalClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long gamemd::TeamTypeClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TeamTypeClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::TeamTypeClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long gamemd::WaypointPathClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::WaypointPathClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long gamemd::WaypointPathClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long ra2::game::CaptureManagerClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long ra2::game::CaptureManagerClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long ra2::game::CaptureManagerClass::QueryInterface(const GUID& a0, void** a1) { return {}; }
// link stub (no binary body yet)
long ra2::game::CaptureManagerClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long ra2::game::SlaveManagerClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long ra2::game::SlaveManagerClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long ra2::game::SlaveManagerClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
long ra2::game::SpawnManagerClass::GetClassID(GUID* a0) { return {}; }
// link stub (no binary body yet)
long ra2::game::SpawnManagerClass::Load(IStream* a0) { return {}; }
// link stub (no binary body yet)
long ra2::game::SpawnManagerClass::Save(IStream* a0, int a1) { return {}; }
// link stub (no binary body yet)
gamemd::Vector2D<short> * gamemd::MPBattleClass::AssignStartingPositionsToHouse(gamemd::Vector2D<short>* a0, int a1, gamemd::DynamicVectorClass<gamemd::Vector2D<short> >* a2, unsigned char* a3) { return {}; }
// link stub (no binary body yet)
gamemd::Vector2D<short> * gamemd::MPGameModeClass::AssignStartingPositionsToHouse(gamemd::Vector2D<short>* a0, int a1, gamemd::DynamicVectorClass<gamemd::Vector2D<short> >* a2, unsigned char* a3) { return {}; }
// link stub (no binary body yet)
unsigned long ra2::game::CaptureManagerClass::AddRef() { return {}; }
// link stub (no binary body yet)
unsigned long ra2::game::CaptureManagerClass::Release() { return {}; }
// link stub (no binary body yet)
void * gamemd::XSurface::Lock(int a0, int a1) { return {}; }
// link stub (no binary body yet)
gamemd::AbstractTypeClass::LoadTheaterSpecificArt(gamemd::TheaterType a0) {}
// link stub (no binary body yet)
gamemd::DisplayClass::LeftMouseButtonUp(gamemd::Vector3D<int> const& a0, gamemd::Vector2D<short> const& a1, ra2::game::ObjectClass* a2, gamemd::Action a3, unsigned int a4) {}
// link stub (no binary body yet)
gamemd::MapClass::AllocateCells() {}
// link stub (no binary body yet)
gamemd::MapClass::ConstructCells() {}
// link stub (no binary body yet)
gamemd::MapClass::CreateEmptyMap(gamemd::RectangleStruct const& a0, bool a1, signed char a2, bool a3) {}
// link stub (no binary body yet)
gamemd::MapClass::DestructCells() {}
// link stub (no binary body yet)
gamemd::MapClass::PointerGotInvalid(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
gamemd::MapClass::SetVisibleRect(gamemd::RectangleStruct const& a0) {}
// link stub (no binary body yet)
gamemd::MapClass::UpdateCrates() {}
// link stub (no binary body yet)
gamemd::RawFileClass::CDCheck(unsigned int a0, bool a1, const char* a2) {}
// link stub (no binary body yet)
gamemd::RawFileClass::Close() {}
// link stub (no binary body yet)
gamemd::TActionClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
gamemd::TEventClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
gamemd::TeamTypeClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
gamemd::WaypointPathClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
ra2::game::CaptureManagerClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
ra2::game::FootClass::Draw_A_SHP(struct ra2::game::SHPStruct* a0, int a1, gamemd::Vector2D<int>* a2, gamemd::RectangleStruct* a3, unsigned int a4, unsigned int a5, unsigned int a6, enum ra2::game::ZGradient a7, unsigned int a8, int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15) {}
// link stub (no binary body yet)
ra2::game::FootClass::Draw_A_VXL(struct ra2::game::VoxelStruct* a0, int a1, int a2, struct ra2::game::SomeVoxelCache* a3, gamemd::RectangleStruct* a4, gamemd::Vector2D<int>* a5, struct ra2::game::Matrix3DStruct* a6, unsigned int a7, unsigned int a8, unsigned int a9) {}
// link stub (no binary body yet)
ra2::game::SlaveManagerClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
ra2::game::SpawnManagerClass::pointerExpired(class ra2::game::AbstractClass* a0, bool a1) {}
// link stub (no binary body yet)
gamemd::BuildingClass::CreateDestructionCrater() {}
// link stub (no binary body yet)
gamemd::TActionClass::ExecuteAction(int a0, ra2::game::ObjectClass* a1, ra2::game::TechnoClass* a2, gamemd::HouseClass* a3, int a4, int a5) {}
// link stub (no binary body yet)
gamemd::TActionClass::ddtor() {}
// link stub (no binary body yet)
gamemd::TEventClass::ddtor() {}
