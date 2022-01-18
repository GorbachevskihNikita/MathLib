#include <vector>
#include <iostream>

#define CHARBIT 8

class General {
public:
    template<typename T>
    static T abs(T const &value)
    {
        int const mask = value >> (sizeof(int) * CHARBIT - 1);
        return ((value + mask) ^ mask);
    }

    template<typename T>
    static T max(T const &lvalue, T const &rvalue)
    {
        return lvalue > rvalue ? lvalue : rvalue;
    }

    template<typename T>
    static T min(T const &lvalue, T const &rvalue)
    {
        return lvalue < rvalue ? lvalue : rvalue;
    }

    template<typename T>
    static void swap(T const &lvalue, T const &rvalue)
    {
        lvalue = lvalue ^ rvalue;
        rvalue = lvalue ^ rvalue;
        lvalue = lvalue ^ rvalue;
    }

    static double powerIntToInt(const int &value, const int &power);
};