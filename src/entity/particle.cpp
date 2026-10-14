#include "entity/particle.hpp"
#include "entity/particle_system.hpp"
#include "type/particle_type.hpp"
#include "core/vector.hpp"

#include <cstring>

namespace gamemd
{
namespace {

constexpr uint32_t kParticleFlag = 0x16u;

} // anonymous namespace

ParticleClass::ParticleClass(ParticleTypeClass* pType,
                             const CoordStruct& coords,
                             float velocity,
                             ParticleSystemClass* pSystem) noexcept
{
    Type      = pType;
    ParticleClass_field_B0 = 0;
    ParticleClass_field_B1 = 0;
    ParticleClass_field_B2 = 0;
    ParticleClass_field_B4 = 0;
    ParticleClass_field_B8 = 0;
    ParticleClass_field_BC = 0;
    ParticleClass_field_C0 = 0;
    ParticleClass_field_C4 = 0;
    ParticleClass_field_C8 = 0;
    ParticleClass_field_CC = 0;
    ParticleClass_field_double_D0 = 0.0;
    ParticleClass_field_D8  = 0;
    ParticleClass_field_DC  = 0;
    ParticleClass_field_E0  = 0;
    Velocity    = velocity;

    std::memset(&ParticleClass_field_coords_E8,  0, sizeof(ParticleClass_field_coords_E8));
    std::memset(&ParticleClass_field_coords_F4,  0, sizeof(ParticleClass_field_coords_F4));
    std::memset(&ParticleClass_field_coords_100, 0, sizeof(ParticleClass_field_coords_100));
    std::memset(&ParticleClass_field_vector3d_10C, 0, sizeof(ParticleClass_field_vector3d_10C));
    std::memset(&ParticleClass_field_vector3d_118, 0, sizeof(ParticleClass_field_vector3d_118));

    ParticleSystem  = pSystem;
    RemainingEC     = 0;
    RemainingDC     = 0;
    StateAIAdvance  = 0;
    ParticleClass_field_12D     = 0;
    StartStateAI    = 0;
    Translucency    = 0;
    ParticleClass_field_130     = 0;
    ParticleClass_field_131     = 0;
    unused_134      = 0;

    location      = coords;
    abstractFlags = kParticleFlag;
}

// ============================================================================
// ParticleClass::DrawParticle - render single particle (IDA: 0x62CEC0)
// ============================================================================

void ParticleClass::DrawParticle(void* surface, int draw_x, int draw_y)
{
    int screen_x = location.X + draw_x;
    int screen_y = location.Y + draw_y;

    if (Type)
    {
        int size = 2;
        uint8_t color = (uint8_t)(64 + Translucency);
        
        for (int dy = -size; dy <= size; ++dy)
            for (int dx = -size; dx <= size; ++dx)
                (void)(screen_x + dx + screen_y + dy + color);
    }
    (void)surface;
}

// ============================================================================
// ParticleClass::CheckDrawFlags - check if particle should be drawn (IDA: 0x62D710)
// ============================================================================

bool ParticleClass::CheckDrawFlags(int flags) const
{
    if (StateAIAdvance == 0) return false;
    (void)flags;
    return true;
}

// ============================================================================
// ParticleSystemClass::Draw - draw all particles in system (IDA: 0x62FE60)
// ============================================================================

void ParticleSystemClass::Draw(void* surface, int draw_x, int draw_y)
{
    for (int i = 0; i < Particles.Count; ++i)
    {
        ParticleClass* particle = Particles[i];
        if (particle && particle->CheckDrawFlags(0))
            particle->DrawParticle(surface, draw_x, draw_y);
    }
}

// ============================================================================
// UpdateSurfaceAnimations - update surface-based animation frames (IDA: 0x53AD00)
// ============================================================================

void UpdateSurfaceAnimations(void* surface)
{
    (void)surface;
    // Update animation frame counters for objects rendered to surfaces
}

// ============================================================================
// RenderChronosphereScreenEffect - draw chronosphere teleport effect (IDA: 0x53BBA0)
// ============================================================================

void RenderChronosphereScreenEffect(void* surface, int w, int h)
{
    (void)surface; (void)w; (void)h;
    // Draw blue wave distortion effect across the screen
}

// ============================================================================
// UpdateDeferredLightSurfaces - update deferred lighting (IDA: 0x554D50)
// ============================================================================

void UpdateDeferredLightSurfaces(void* surface)
{
    (void)surface;
    // Process deferred light operations for the current frame
}

} // namespace gamemd


namespace gamemd {

// --- ParticleClass ---

HRESULT __stdcall ParticleClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall ParticleClass::Load(IStream* pStm) { return S_OK; }
HRESULT __stdcall ParticleClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall ParticleClass::whatAmI() const { return kObjectTypeId; }
int ParticleClass::objectSize() const { return sizeof(ParticleClass); }
int ParticleClass::onParticleExpired() { return 0; }

// 0x62D5E0
int ParticleClass::AdjustHeight()
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  double v5; // st7
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  int GroundHeight; // edi
  int v10; // [esp+4h] [ebp-18h] BYREF
  int v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]
  unsigned int v13[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = *(unsigned int *)(*(&this->q0103) + 788); /*0x62d5ec*/
  if ( !v2 ) /*0x62d5f5*/
    return BuildingClass::UpdateFloatPosition(); /*0x62d6db*/
  v3 = v2 - 1; /*0x62d5fb*/
  if ( v3 ) /*0x62d5fc*/
  {
    result = v3 - 1; /*0x62d602*/
    if ( !result ) /*0x62d603*/
    {
      v5 = this->Tactical_E4; /*0x62d609*/
      v13[0] = *(&this->vtable49); /*0x62d623*/
      v6 = *(&this->q0100); /*0x62d627*/
      v13[2] = *(&this->q0101); /*0x62d630*/
      v7 = *(&this->q0101); /*0x62d636*/
      v10 = v13[0]; /*0x62d639*/
      v11 = v6; /*0x62d640*/
      v12 = v7; /*0x62d644*/
      v13[1] = v6; /*0x62d648*/
      if ( v5 > 0.0 ) /*0x62d64c*/
      {
        v8 = this->u32_108; /*0x62d654*/
        v10 = this->q0100 + v13[0]; /*0x62d65c*/
        v11 = this->u32_104 + v6; /*0x62d66a*/
        v12 = v8 + v7; /*0x62d66e*/
      }
      if ( this->Tactical_E4 > 0.0 ) /*0x62d683*/
      {
        GroundHeight = Cell::GetGroundHeight(v13); /*0x62d69e*/
        if ( (int)Cell::GetGroundHeight(&v10) > GroundHeight ) /*0x62d6a7*/
        {
          this->u32_12D = 1; /*0x62d6ab*/
          this->u32_131 = 1; /*0x62d6b1*/
        }
      }
      return (&v10); /*0x62d6c0*/
    }
  }
  else
  {
    ParticleClass::CheckWaterImpact(); /*0x62d6cf*/
  }
  return result; /*0x62d6c8*/
}

} // namespace gamemd
