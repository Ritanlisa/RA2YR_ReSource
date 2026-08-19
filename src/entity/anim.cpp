#include "entity/anim.hpp"
#include "type/anim_type.hpp"
#include "core/vector.hpp"
#include "render/palette.hpp"
#include "house/house.hpp"

#include <cstring>

namespace gamemd
{

using ra2::game::CoordStruct;
namespace {

constexpr uint32_t kAnimFlag = 0x4u;

} // anonymous namespace

AnimClass::AnimClass(AnimTypeClass* pType, const CoordStruct& coords,
                     int z_adjust, int loop_delay, double damage,
                     ra2::game::HouseClass* owner) noexcept
{
    std::memset(&Animation, 0, sizeof(Animation));

    Type              = pType;
    OwnerObject       = nullptr;
    AnimClass_field_D0        = 0;
    LightConvert      = nullptr;
    LightConvertIndex = 0;

    std::memset(PaletteName, 0, sizeof(PaletteName));

    TintColor         = 0;
    ZAdjust           = z_adjust;
    YSortAdjust       = 0;

    std::memset(&FlamingGuyCoords, 0, sizeof(FlamingGuyCoords));

    FlamingGuyRetries = 0;
    IsBuildingAnim    = false;
    UnderTemporal     = false;
    Paused            = false;
    Unpaused          = false;
    PausedAnimFrame   = 0;
    Reverse           = false;
    AnimClass_field_124       = 0;

    std::memset(&Bounce, 0, sizeof(Bounce));

    TranslucencyLevel = 0;
    TimeToDie         = false;
    AttachedBullet    = nullptr;
    Owner             = owner;
    LoopDelay         = loop_delay;
    Damage            = damage;
    AnimFlags         = BlitterFlags{};

    HasExtras             = false;
    RemainingIterations   = 0;
    AnimClass_field_196           = 0;
    AnimClass_field_197           = 0;
    IsPlaying             = true;
    IsFogged              = false;
    FlamingGuyExpire      = false;
    UnableToContinue      = false;
    SkipProcessOnce       = false;
    Invisible             = false;
    PowerOff              = false;
    unused_19F            = 0;

    std::memset(&Audio3, 0, sizeof(Audio3));
    std::memset(&Audio4, 0, sizeof(Audio4));

    if (coords.X != 0 || coords.Y != 0 || coords.Z != 0)
    {
        location = coords;
    }

    abstractFlags = kAnimFlag;
}

// ============================================================================
// AnimClass::Render - render animation to surface (IDA: 0x422CA0)
// ============================================================================

void AnimClass::Render(void* surface, int* a2, int* a3)
{
    if (!Type) return;
    if (!surface) return;

    // Convert to screen coordinates
    // Check fog of war visibility
    // Select current frame from animation sequence
    // Apply translucency, tint, and blending
    // Draw SHP frame to surface

    int current_frame = Animation.Value;
    int total_frames = 60; // Type->frames equivalent

    if (IsFogged)
    {
        // Fogged animations show partial frame or nothing
        return;
    }

    if (Invisible) return;

    // Apply z-adjust for isometric rendering
    int screen_z = location.Z + ZAdjust;

    // Get draw bounds
    int draw_x = location.X;
    int draw_y = location.Y - screen_z;

    // Apply tint color if present
    int tint = TintColor;

    // Draw the current animation frame
    // The actual SHP blitting uses DrawToSurfaceSHP or equivalent
    // This is a placeholder for the full implementation

    (void)a2; (void)a3;
    (void)current_frame; (void)total_frames;
    (void)draw_x; (void)draw_y; (void)tint;
}

// ============================================================================
// AnimClass::FreeRenderBuffer - free loaded animation SHP (IDA: 0x428DE0)
// ============================================================================

void AnimClass::FreeRenderBuffer()
{
    if (HasExtras && AnimClass_field_D0)
    {
        if (AnimClass_field_124)
        {
            // Free the loaded SHP image data
            // operator delete call in original
            AnimClass_field_D0 = 0;
            AnimClass_field_124 = 0;
        }
    }
}

} // namespace gamemd

#include "entity/anim.hpp"

namespace gamemd {

// --- AnimClass ---

HRESULT __stdcall AnimClass::GetClassID(CLSID* pClassID) { return E_NOTIMPL; }
HRESULT __stdcall AnimClass::Save(IStream* pStm, BOOL fClearDirty) { return S_OK; }
AbstractType __stdcall AnimClass::whatAmI() const { return kObjectTypeId; }
int AnimClass::objectSize() const { return sizeof(AnimClass); }
int AnimClass::AnimExtras() { return 0; }
int AnimClass::GetEnd() const { return 0; }

} // namespace gamemd
