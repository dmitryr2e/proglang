#include <iostream>
#include <typeinfo>

int main() {
    // int и unsigned int
    int a = -1, b = 1;
    unsigned int c = 1;
    std::cout << a * b << std::endl;
    std::cout << a * c << std::endl;

    // те же вычисления с short и unsigned short
    short sa = -1, sb = 1;
    unsigned short sc = 1;
    std::cout << sa * sb << std::endl;
    std::cout << sa * sc << std::endl;

    // типы результатов
    std::cout << typeid(a * c).name() << " " << typeid(sa * sc).name() << std::endl;
    return 0;
}
