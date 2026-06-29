// ============================================================================
// math.hpp — out-of-line template method implementations
// ============================================================================

// ============================================================================
// Vector2D<T>
// ============================================================================

template <typename T>
constexpr Vector2D<T>::Vector2D(T x, T y) noexcept : X(x), Y(y) {}

template <typename T>
Vector2D<T> Vector2D<T>::operator+(const Vector2D& rhs) const
{
    return { static_cast<T>(X + rhs.X), static_cast<T>(Y + rhs.Y) };
}

template <typename T>
Vector2D<T>& Vector2D<T>::operator+=(const Vector2D& rhs)
{
    X += rhs.X;
    Y += rhs.Y;
    return *this;
}

template <typename T>
Vector2D<T> Vector2D<T>::operator-(const Vector2D& rhs) const
{
    return { static_cast<T>(X - rhs.X), static_cast<T>(Y - rhs.Y) };
}

template <typename T>
Vector2D<T>& Vector2D<T>::operator-=(const Vector2D& rhs)
{
    X -= rhs.X;
    Y -= rhs.Y;
    return *this;
}

template <typename T>
Vector2D<T> Vector2D<T>::operator-() const
{
    return { static_cast<T>(-X), static_cast<T>(-Y) };
}

template <typename T>
bool Vector2D<T>::operator==(const Vector2D& rhs) const
{
    return X == rhs.X && Y == rhs.Y;
}

template <typename T>
bool Vector2D<T>::operator!=(const Vector2D& rhs) const
{
    return !(*this == rhs);
}

template <typename T>
Vector2D<T> Vector2D<T>::operator*(double scalar) const
{
    return { static_cast<T>(X * scalar), static_cast<T>(Y * scalar) };
}

template <typename T>
Vector2D<T>& Vector2D<T>::operator*=(double scalar)
{
    X = static_cast<T>(X * scalar);
    Y = static_cast<T>(Y * scalar);
    return *this;
}

template <typename T>
double Vector2D<T>::operator*(const Vector2D& rhs) const
{
    return static_cast<double>(X) * rhs.X + static_cast<double>(Y) * rhs.Y;
}

template <typename T>
double Vector2D<T>::MagnitudeSquared() const
{
    return static_cast<double>(X) * X + static_cast<double>(Y) * Y;
}

template <typename T>
double Vector2D<T>::Magnitude() const
{
    return std::sqrt(MagnitudeSquared());
}

template <typename T>
double Vector2D<T>::DistanceFrom(const Vector2D& rhs) const
{
    return (*this - rhs).Magnitude();
}

template <typename T>
double Vector2D<T>::DistanceFromSquared(const Vector2D& rhs) const
{
    return (*this - rhs).MagnitudeSquared();
}

template <typename T>
bool Vector2D<T>::IsCollinearTo(const Vector2D& rhs) const
{
    return static_cast<double>(X) * rhs.Y == static_cast<double>(Y) * rhs.X;
}

template <typename T>
const Vector2D<T> Vector2D<T>::Empty = Vector2D<T>();

// ============================================================================
// Vector3D<T>
// ============================================================================

template <typename T>
constexpr Vector3D<T>::Vector3D(T x, T y, T z) noexcept : X(x), Y(y), Z(z) {}

template <typename T>
Vector3D<T> Vector3D<T>::operator+(const Vector3D& rhs) const
{
    return { static_cast<T>(X + rhs.X), static_cast<T>(Y + rhs.Y), static_cast<T>(Z + rhs.Z) };
}

template <typename T>
Vector3D<T>& Vector3D<T>::operator+=(const Vector3D& rhs)
{
    X += rhs.X;
    Y += rhs.Y;
    Z += rhs.Z;
    return *this;
}

template <typename T>
Vector3D<T> Vector3D<T>::operator-(const Vector3D& rhs) const
{
    return { static_cast<T>(X - rhs.X), static_cast<T>(Y - rhs.Y), static_cast<T>(Z - rhs.Z) };
}

template <typename T>
Vector3D<T>& Vector3D<T>::operator-=(const Vector3D& rhs)
{
    X -= rhs.X;
    Y -= rhs.Y;
    Z -= rhs.Z;
    return *this;
}

template <typename T>
Vector3D<T> Vector3D<T>::operator-() const
{
    return { static_cast<T>(-X), static_cast<T>(-Y), static_cast<T>(-Z) };
}

template <typename T>
bool Vector3D<T>::operator==(const Vector3D& rhs) const
{
    return X == rhs.X && Y == rhs.Y && Z == rhs.Z;
}

template <typename T>
bool Vector3D<T>::operator!=(const Vector3D& rhs) const
{
    return !(*this == rhs);
}

template <typename T>
Vector3D<T> Vector3D<T>::operator*(double scalar) const
{
    return { static_cast<T>(X * scalar), static_cast<T>(Y * scalar), static_cast<T>(Z * scalar) };
}

template <typename T>
Vector3D<T>& Vector3D<T>::operator*=(double scalar)
{
    X = static_cast<T>(X * scalar);
    Y = static_cast<T>(Y * scalar);
    Z = static_cast<T>(Z * scalar);
    return *this;
}

template <typename T>
double Vector3D<T>::operator*(const Vector3D& rhs) const
{
    return static_cast<double>(X) * rhs.X
         + static_cast<double>(Y) * rhs.Y
         + static_cast<double>(Z) * rhs.Z;
}

template <typename T>
double Vector3D<T>::MagnitudeSquared() const
{
    return static_cast<double>(X) * X + static_cast<double>(Y) * Y + static_cast<double>(Z) * Z;
}

template <typename T>
double Vector3D<T>::Magnitude() const
{
    return std::sqrt(MagnitudeSquared());
}

template <typename T>
double Vector3D<T>::DistanceFrom(const Vector3D& rhs) const
{
    return (*this - rhs).Magnitude();
}

template <typename T>
double Vector3D<T>::DistanceFromSquared(const Vector3D& rhs) const
{
    return (*this - rhs).MagnitudeSquared();
}

template <typename T>
bool Vector3D<T>::IsCollinearTo(const Vector3D& rhs) const
{
    return CrossProduct(rhs).MagnitudeSquared() == 0;
}

template <typename T>
Vector3D<T> Vector3D<T>::CrossProduct(const Vector3D& rhs) const
{
    return {
        static_cast<T>(Y * rhs.Z - Z * rhs.Y),
        static_cast<T>(Z * rhs.X - X * rhs.Z),
        static_cast<T>(X * rhs.Y - Y * rhs.X)
    };
}

template <typename T>
const Vector3D<T> Vector3D<T>::Empty = Vector3D<T>();

// ============================================================================
// ostream operators (templates)
// ============================================================================

template <typename T>
inline std::ostream& operator<<(std::ostream& os, const Vector2D<T>& v)
{
    return os << "<Vector2D,X=" << std::dec << v.X << ",Y=" << v.Y << ">";
}
