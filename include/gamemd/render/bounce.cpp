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
    // Initialize angular velocity quaternion from scalar
    AngularVelocity.W = static_cast<float>(cos(angular_velocity * 0.5));
    float half_sin = static_cast<float>(sin(angular_velocity * 0.5));
    AngularVelocity.X = half_sin;
    AngularVelocity.Y = 0.0f;
    AngularVelocity.Z = 0.0f;
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

    AngularVelocity.W = static_cast<float>(cos(angular_velocity * 0.5));
    float half_sin = static_cast<float>(sin(angular_velocity * 0.5));
    AngularVelocity.X = half_sin;
    AngularVelocity.Y = 0.0f;
    AngularVelocity.Z = 0.0f;
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

// Quaternion multiplication: q1 * q2
static Quaternion QuatMul(const Quaternion& q1, const Quaternion& q2)
{
    Quaternion r;
    r.W = q1.W * q2.W - q1.X * q2.X - q1.Y * q2.Y - q1.Z * q2.Z;
    r.X = q1.W * q2.X + q1.X * q2.W + q1.Y * q2.Z - q1.Z * q2.Y;
    r.Y = q1.W * q2.Y - q1.X * q2.Z + q1.Y * q2.W + q1.Z * q2.X;
    r.Z = q1.W * q2.Z + q1.X * q2.Y - q1.Y * q2.X + q1.Z * q2.W;
    return r;
}

// Convert quaternion to 3x3 rotation matrix
static void QuatToMatrix(const Quaternion& q, float m[9])
{
    float xx = q.X * q.X;
    float yy = q.Y * q.Y;
    float zz = q.Z * q.Z;
    float xy = q.X * q.Y;
    float xz = q.X * q.Z;
    float yz = q.Y * q.Z;
    float wx = q.W * q.X;
    float wy = q.W * q.Y;
    float wz = q.W * q.Z;

    m[0] = 1.0f - 2.0f * (yy + zz);
    m[1] = 2.0f * (xy - wz);
    m[2] = 2.0f * (xz + wy);
    m[3] = 2.0f * (xy + wz);
    m[4] = 1.0f - 2.0f * (xx + zz);
    m[5] = 2.0f * (yz - wx);
    m[6] = 2.0f * (xz - wy);
    m[7] = 2.0f * (yz + wx);
    m[8] = 1.0f - 2.0f * (xx + yy);
}

Matrix3D* BounceClass::GetDrawingMatrix(Matrix3D* out) const
{
    if (out)
    {
        float m[9];
        QuatToMatrix(CurrentAngle, m);
        out->Data[0] = m[0]; out->Data[1] = m[1]; out->Data[2] = m[2];
        out->Data[3] = m[3]; out->Data[4] = m[4]; out->Data[5] = m[5];
        out->Data[6] = m[6]; out->Data[7] = m[7]; out->Data[8] = m[8];
        out->Data[9] = 0.0f; out->Data[10] = 0.0f; out->Data[11] = 0.0f;
    }
    return out;
}

Matrix3D BounceClass::GetDrawingMatrix() const
{
    Matrix3D out{};
    GetDrawingMatrix(&out);
    return out;
}

BounceClass::Status BounceClass::updateLogic()
{
    // Apply gravity
    Velocity.Z -= static_cast<float>(Gravity);

    // Update position
    Coords.X += Velocity.X;
    Coords.Y += Velocity.Y;
    Coords.Z += Velocity.Z;

    // Update rotation
    CurrentAngle = QuatMul(CurrentAngle, AngularVelocity);

    // Normalize quaternion
    float mag = CurrentAngle.W * CurrentAngle.W +
                CurrentAngle.X * CurrentAngle.X +
                CurrentAngle.Y * CurrentAngle.Y +
                CurrentAngle.Z * CurrentAngle.Z;
    if (mag > 0.0001f)
    {
        float inv_mag = 1.0f / sqrtf(mag);
        CurrentAngle.W *= inv_mag;
        CurrentAngle.X *= inv_mag;
        CurrentAngle.Y *= inv_mag;
        CurrentAngle.Z *= inv_mag;
    }

    // Bounce on ground (Z=0)
    if (Coords.Z <= 0.0f)
    {
        Coords.Z = 0.0f;
        if (Velocity.Z < 0.0f)
        {
            Velocity.Z = -Velocity.Z * static_cast<float>(Elasticity);

            // Check if bounce is too small - impact event
            if (fabsf(Velocity.Z) < 0.5f)
            {
                Velocity.Z = 0.0f;
                Velocity.X *= 0.5f;
                Velocity.Y *= 0.5f;
                return Status::Impact;
            }

            // Dampen horizontal velocity
            Velocity.X *= 0.95f;
            Velocity.Y *= 0.95f;

            return Status::Bounce;
        }
    }

    // Clamp velocity
    float speed = sqrtf(Velocity.X * Velocity.X +
                        Velocity.Y * Velocity.Y +
                        Velocity.Z * Velocity.Z);
    float max_v = static_cast<float>(MaxVelocity);
    if (speed > max_v)
    {
        float scale = max_v / speed;
        Velocity.X *= scale;
        Velocity.Y *= scale;
        Velocity.Z *= scale;
    }

    return Status::None;
}

} // namespace gamemd
