class Vector2f
{
public:
    Vector2f();
    Vector2f(float x, float y);
    //Vector2f(Vector2f &vector) : x(vector.x), y(vector.y) {}

    Vector2f operator+(const float &scalar) const;
    Vector2f operator-(const float &scalar) const;
    Vector2f operator*(const float &scalar) const;
    Vector2f operator/(const float &scalar) const;

private:
    float _x, _y;
};