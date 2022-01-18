#include <src/public/General.h>

double General::powerIntToInt(const int &value, const int &power) {
    if (power == 0)
    {
        return 1;
    }
    else if (power == 1)
    {
        return value;
    }
    else if (power > 0)
    {
        return value * (powerIntToInt(value, power - 1 ));
    }
    else if (power < 0)
    {
        return 1 / (value * powerIntToInt(value, -power - 1));
    }
}
