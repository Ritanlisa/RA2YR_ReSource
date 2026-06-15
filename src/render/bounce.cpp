#include "render/bounce.hpp"

#include <cmath>
#include <cstring>

namespace gamemd
{

BounceClass::BounceClass(
    const CoordStruct& coords,
    double elasticity,
    double gravity,
    double max_velocity,
    const Vector3D<float>& velocity,
    double angular_velocity)
    : Elasticity(elasticity)
    , Gravity(gravity)
    , MaxVelocity(max_velocity)
    , Coords(static_cast<float>(coords.X), static_cast<float>(coords.Y), static_cast<float>(coords.Z))
    , Velocity(velocity)
{
    (void)angular_velocity;
}

void BounceClass::Initialize(
    const CoordStruct& coords,
    double elasticity,
    double gravity,
    double max_velocity,
    const Vector3D<float>& velocity,
    double angular_velocity)
{
    Elasticity = elasticity;
    Gravity = gravity;
    MaxVelocity = max_velocity;
    Coords = { static_cast<float>(coords.X), static_cast<float>(coords.Y), static_cast<float>(coords.Z) };
    Velocity = velocity;
    (void)angular_velocity;
}

CoordStruct* BounceClass::fetchCoordinatesHere(CoordStruct* out) const
{
    if (out)
    {
        out->X = static_cast<int32_t>(Coords.X);
        out->Y = static_cast<int32_t>(Coords.Y);
        out->Z = static_cast<int32_t>(Coords.Z);
    }
    return out;
}

CoordStruct BounceClass::fetchCoordinatesHere() const
{
    CoordStruct out;
    fetchCoordinatesHere(&out);
    return out;
}

Matrix3D* BounceClass::GetDrawingMatrix(Matrix3D* out) const
{
    if (out)
    {
        // TODO: convert Quaternion to rotation matrix
    }
    return out;
}

Matrix3D BounceClass::GetDrawingMatrix() const
{
    Matrix3D out;
    GetDrawingMatrix(&out);
    return out;
}

BounceClass::Status BounceClass::updateLogic()
{
    // TODO: physics update - apply gravity, bounce on ground, return status
    return Status::None;
}

// TODO: complete BounceClass implementation

} // namespace gamemd
