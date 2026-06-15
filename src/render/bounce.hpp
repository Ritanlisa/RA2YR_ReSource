#pragma once

#include "core/math.hpp"
#include "fundamentals.hpp"

namespace gamemd
{

struct Quaternion
{
    float X = 0.0f;
    float Y = 0.0f;
    float Z = 0.0f;
    float W = 1.0f;
};

class BounceClass
{
public:
    enum class Status : int
    {
        None   = 0,
        Bounce = 1,
        Impact = 2
    };

    BounceClass() = default;

    BounceClass(
        const CoordStruct& coords,
        double elasticity,
        double gravity,
        double max_velocity,
        const Vector3D<float>& velocity,
        double angular_velocity);

    void Initialize(
        const CoordStruct& coords,
        double elasticity,
        double gravity,
        double max_velocity,
        const Vector3D<float>& velocity,
        double angular_velocity);

    CoordStruct* fetchCoordinatesHere(CoordStruct* out) const;
    CoordStruct fetchCoordinatesHere() const;

    Matrix3D* GetDrawingMatrix(Matrix3D* out) const;
    Matrix3D GetDrawingMatrix() const;

    Status updateLogic();

    double            Elasticity = 0.0;
    double            Gravity = 0.0;
    double            MaxVelocity = 0.0;
    Vector3D<float>   Coords;
    Vector3D<float>   Velocity;
    Quaternion        CurrentAngle;
    Quaternion        AngularVelocity;
};

} // namespace gamemd
