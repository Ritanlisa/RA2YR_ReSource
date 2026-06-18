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
        uint8_t color = static_cast<uint8_t>(64 + Translucency);
        
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
