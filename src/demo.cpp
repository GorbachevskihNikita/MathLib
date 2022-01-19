#include <src/public/General.h>
#include <iostream>
#include <src/public/Vector2f.h>

int main(){
    float x, y, a;
    std::cout << "Enter 2 coordinates" << std::endl;
    std::cin >> x >> y;
    std::cout << "Enter scalar" << std::endl;
    std::cin >> a;
    Vector2f vec = Vector2f(x, y);
    Vector2f resultVec = vec + a;
    std::cout << resultVec;
    Vector2f vec2;
    std::cout << vec2;
    return 0;
}
