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

    // design: default constructor (compiler-generated), no callgraph reference
    BounceClass() = default;

    // unmatched: no callgraph reference and no git history record
    BounceClass(
        const CoordStruct& coords,
        double elasticity,
        double gravity,
        double max_velocity,
        const Vector3D<float>& velocity,
        double angular_velocity);

    // unmatched: no callgraph reference and no git history record
    void Initialize(
        const CoordStruct& coords,
        double elasticity,
        double gravity,
        double max_velocity,
        const Vector3D<float>& velocity,
        double angular_velocity);

    // unmatched: no callgraph reference and no git history record
    CoordStruct* fetchCoordinatesHere(CoordStruct* out) const;
    // unmatched: no callgraph reference and no git history record
    CoordStruct fetchCoordinatesHere() const;

    // unmatched: no callgraph reference and no git history record
    Matrix3D* GetDrawingMatrix(Matrix3D* out) const;
    // unmatched: no callgraph reference and no git history record
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
