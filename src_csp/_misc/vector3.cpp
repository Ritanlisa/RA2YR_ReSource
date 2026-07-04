#include "vector3.hpp"

void  Vector3::Magnitude(double *this)
{
    Math::Sqrt(*this * *this + *(this + 1) * *(this + 1) + *(this + 2) * *(this + 2));
}

float * Vector3::AddAssign(float *this, float *a2)
{
    *this = *a2 + *this;
    *(this + 1) = a2[1] + *(this + 1);
    *(this + 2) = a2[2] + *(this + 2);
    return this;
}

