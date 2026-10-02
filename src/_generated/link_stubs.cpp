// AUTO-GENERATED link stubs - unresolved legacy declarations.
// Each body is an empty placeholder pending C-line translation.
// Regenerate via tools/gen_link_stubs.py after linking passes.
// Suppress legacy using-decl aliasing: this TU combines headers
// whose gamemd-local forward declarations collide with the
// ra2::game::X using-decls (C2874). Pointer-only usage makes the
// incomplete gamemd::X declarations sufficient here.
#define GAMEMD_USING_ObjectClass
#define GAMEMD_USING_FootClass
#include <windows.h>
#include <cstdint>
#include "core/coordinate.hpp"
#include "core/math.hpp"
#include "core/utility_ext.hpp"
#include "entity/wave.hpp"
#include "house/house.hpp"
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
#include "structure/unit.hpp"
#include "type/object_type.hpp"
#include "type/particle_system_type.hpp"

namespace gamemd {
// link stub (no binary body yet)
 char gamemd::DSurface::BlitCore(int* self, int* dst_rect, int* src_rect, void* src_surface, int* clip_dst, int* clip_src, int flags, char option2) { return {}; }
// link stub (no binary body yet)
gamemd::AbstractTypeClass::AbstractTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::BufferIOFileClass::BufferIOFileClass(const noinit_t& a0) noexcept {}
// link stub (no binary body yet)
gamemd::CDFileClass::CDFileClass(const noinit_t& a0) noexcept {}
// link stub (no binary body yet)
gamemd::LightSourceClass::LightSourceClass(const CoordStruct& location, int intensity, int visibility, const TintStruct& tint, int detail_level) noexcept {}
// link stub (no binary body yet)
gamemd::ObjectTypeClass::ObjectTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::ParticleSystemTypeClass::ParticleSystemTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::SuperWeaponTypeClass::SuperWeaponTypeClass(noinit_t) noexcept {}
// link stub (no binary body yet)
gamemd::UnitClass::UnitClass() noexcept {}
// link stub (no binary body yet)
gamemd::DSurface::DSurface(int width, int height, bool back_buffer, bool force_3d) noexcept : XSurface(width, height) {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::MixFileClass::MixFileClass(const char* a0) {}
// link stub (no binary body yet)
gamemd::WaveClass::WaveClass(ra2::game::TechnoClass* pTarget, WaveType waveType, const Point2D& coords, uint32_t intensity) noexcept {}
// link stub (no binary body yet)
gamemd::XSurface::XSurface(int width, int height) noexcept {}
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TEventClass::Execute(int a0, int a1, ra2::game::ObjectClass* a2, int a3, int* a4, int a5) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerClass::FireActions(ra2::game::ObjectClass* a0, gamemd::Vector2D<short> a1) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerClass::RegisterEvent(int a0, ra2::game::ObjectClass* a1, bool a2, bool a3, ra2::game::TechnoClass* a4) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerTypeClass::RemoveAction(gamemd::TActionClass* a0) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::TriggerTypeClass::RemoveEvent(gamemd::TEventClass* a0) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::MapClass::GetCellIndex(const CellStruct& map_coords) { return {}; }
// link stub (no binary body yet)
 bool gamemd::AbstractTypeClass::LoadFromINI(CCINIClass* pINI) { return {}; }
// link stub (no binary body yet)
 bool gamemd::AbstractTypeClass::WriteINI(CCINIClass* pINI) { return {}; }
// link stub (no binary body yet)
 bool gamemd::DSurface::FillRectEx(const RectangleStruct& clip_rect, const RectangleStruct& fill_rect, uint32_t color) { return {}; }
// link stub (no binary body yet)
 bool gamemd::DisplayClass::ConvertAction(const CellStruct& cell, bool shrouded, ObjectClass* object, Action action, uint32_t unk) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::MapClass::DraggingInProgress() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::CreateFile() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::DeleteFile() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::Exists(bool a0) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::HasHandle() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::Open(gamemd::FileAccessMode) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: bool gamemd::RawFileClass::OpenEx(const char* a0, gamemd::FileAccessMode) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::CanLock(uint32_t unk1, uint32_t unk2) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::CheckBltStatus() { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawDashedLineStipple(const Point2D& start, const Point2D& end, uint16_t color, const uint8_t stipple[16], int dash_offset, bool update_z) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawGradientLine(const Point2D& start, const Point2D& end, int palette_idx, int fade_val, float* gradient_start, float* gradient_step) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineFaded(const Point2D& start, const Point2D& end, const uint8_t* stipple_pattern, int fade_start, int fade_end, bool z_buffer, float gradient_start, float gradient_step, bool flip_dir) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineModulated(const Point2D& start, const Point2D& end, int mod_strength, int fade_start, int fade_end, bool update_z_buffer) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineZBuf(const Point2D& start, const Point2D& end, uint16_t color, int fade_start, int fade_end, bool update_z_buffer) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawLineZBufColored(const Point2D& start, const Point2D& end, const uint8_t src_rgb[3], float brightness, int fade_start, int fade_end) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::DrawStippledRect(const Point2D& top_left, const Point2D& bottom_right, uint16_t color, bool fill_interior) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::FillRectWithFlags(const RectangleStruct& clip_rect, const ColorStruct& color, int opacity_percent) { return {}; }
// link stub (no binary body yet)
 bool gamemd::XSurface::Unlock() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int32_t __stdcall gamemd::MapClass::IsVisible(CellStruct cell) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::GetFileSize() { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::ReadBytes(void* a0, int a1) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::Seek(int a0, gamemd::FileSeekMode) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: int gamemd::RawFileClass::WriteBytes(void* a0, int a1) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TActionClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TActionClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TActionClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TEventClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TEventClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TEventClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TacticalClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TacticalClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall gamemd::TacticalClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::TeamTypeClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::TeamTypeClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::TeamTypeClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::WaypointPathClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::WaypointPathClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
//NODCL member not in any current header: HRESULT __stdcall gamemd::WaypointPathClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
 CellStruct* gamemd::MPBattleClass::AssignStartingPositionsToHouse(CellStruct* a0, int32_t, DynamicVectorClass<CellStruct>* a2, uint8_t* a3) { return {}; }
// link stub (no binary body yet)
 CellStruct* gamemd::MPGameModeClass::AssignStartingPositionsToHouse(CellStruct* a0, int32_t, DynamicVectorClass<CellStruct>* a2, uint8_t* a3) { return {}; }
// link stub (no binary body yet)
 void* gamemd::XSurface::Lock(int x, int y) { return {}; }
// link stub (no binary body yet)
 void gamemd::AbstractTypeClass::LoadTheaterSpecificArt(TheaterType th_type) {}
// link stub (no binary body yet)
 void gamemd::DisplayClass::LeftMouseButtonUp(const CoordStruct& coords, const CellStruct& cell, ObjectClass* object, Action action, uint32_t unk2) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::AllocateCells() {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::ConstructCells() {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::CreateEmptyMap(const RectangleStruct& map_rect, bool reuse, int8_t n_level, bool unk2) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::DestructCells() {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::PointerGotInvalid(AbstractClass* ptr, bool unk) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::SetVisibleRect(const RectangleStruct& map_rect) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::MapClass::UpdateCrates() {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::RawFileClass::CDCheck(unsigned int a0, bool a1, const char* a2) {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::RawFileClass::Close() {}
// link stub (no binary body yet)
 void gamemd::TActionClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
 void gamemd::TEventClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::TeamTypeClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
//NODCL member not in any current header: void gamemd::WaypointPathClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::BuildingClass::CreateDestructionCrater() {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::TActionClass::ExecuteAction(int a0, ra2::game::ObjectClass* a1, ra2::game::TechnoClass* a2, gamemd::HouseClass* a3, int a4, int a5) {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::TActionClass::ddtor() {}
// link stub (no binary body yet)
//NODCL member not in any current header: gamemd::TEventClass::ddtor() {}
} // namespace gamemd

// link stub (no binary body yet)
//NODCL member not in any current header: ra2::game::DirStruct::DirStruct() {}
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::QueryInterface(const IID& a0, void** a1) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::CaptureManagerClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SlaveManagerClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SlaveManagerClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SlaveManagerClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SpawnManagerClass::GetClassID(CLSID* class_id) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SpawnManagerClass::Load(IStream* stream) { return {}; }
// link stub (no binary body yet)
 HRESULT __stdcall ra2::game::SpawnManagerClass::Save(IStream* stream, int clear_dirty) { return {}; }
// link stub (no binary body yet)
 ULONG __stdcall ra2::game::CaptureManagerClass::AddRef() { return {}; }
// link stub (no binary body yet)
 ULONG __stdcall ra2::game::CaptureManagerClass::Release() { return {}; }
// link stub (no binary body yet)
 void ra2::game::CaptureManagerClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
//NODCL member not in any current header: ra2::game::FootClass::Draw_A_SHP(struct ra2::game::SHPStruct* a0, int a1, gamemd::Vector2D<int>* a2, gamemd::RectangleStruct* a3, unsigned int a4, unsigned int a5, unsigned int a6, enum ra2::game::ZGradient, unsigned int a8, int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15) {}
// link stub (no binary body yet)
//NODCL member not in any current header: ra2::game::FootClass::Draw_A_VXL(struct ra2::game::VoxelStruct* a0, int a1, int a2, struct ra2::game::SomeVoxelCache* a3, gamemd::RectangleStruct* a4, gamemd::Vector2D<int>* a5, struct ra2::game::Matrix3DStruct* a6, unsigned int a7, unsigned int a8, unsigned int a9) {}
// link stub (no binary body yet)
 void ra2::game::SlaveManagerClass::pointerExpired(AbstractClass* ptr, bool removed) {}
// link stub (no binary body yet)
 void ra2::game::SpawnManagerClass::pointerExpired(AbstractClass* ptr, bool removed) {}
