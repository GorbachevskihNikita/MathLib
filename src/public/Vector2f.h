#include <iostream>

class Vector2f
{
public:
    Vector2f();
    Vector2f(float x, float y);

    Vector2f operator+(const float &scalar) const;
    Vector2f operator-(const float &scalar) const;
    Vector2f operator*(const float &scalar) const;
    Vector2f operator/(const float &scalar) const;
    friend std::ostream& operator<<(std::ostream &out, Vector2f vector);


private:
    float _x, _y;
};