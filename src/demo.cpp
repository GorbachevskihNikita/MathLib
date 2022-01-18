#include <src/public/General.h>
#include <iostream>

int main(){
    int a, b;
    std::cout << "enter two variables: a and b: " << std::endl;
    std::cin >> a >> b;
    std::cout << General::powerIntToInt(a, b);
    return 0;
}
