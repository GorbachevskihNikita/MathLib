#include <src/public/Vector2f.h>

Vector2f::Vector2f() : _x(0.0f), _y(0.0f) {}
Vector2f::Vector2f(float x, float y) : _x(x), _y(y) {}

Vector2f Vector2f::operator+(const float &scalar) const
{
    Vector2f sum;
    sum._x = _x + scalar;
    sum._y = _y + scalar;
    return sum;
}

Vector2f Vector2f::operator-(const float &scalar) const
{
    Vector2f diff;
    diff._x = _x - scalar;
    diff._y = _y - scalar;
    return diff;
}

Vector2f Vector2f::operator*(const float &scalar) const
{
    Vector2f multi;
    multi._x = _x * scalar;
    multi._y = _y * scalar;
    return multi;
}

Vector2f Vector2f::operator/(const float &scalar) const
{
    float temp = 1.0f / scalar;
    Vector2f diff;
    diff._x = _x * temp;
    diff._y = _y * temp;
    return diff;
}

std::ostream &operator<<(std::ostream &out, Vector2f vector) {
    out << "This vector: (" << vector._x << ", " << vector._y << ")" << std::endl;
    return out;
}






