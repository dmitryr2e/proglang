#include <iostream>

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;

    std::cout << "--- Исходное состояние ---" << std::endl;
    std::cout << "&a = " << &a << ", &b = " << &b << std::endl;
    std::cout << "p = " << p << " (*p = " << *p << ")" << std::endl;
    std::cout << "q = " << q << " (*q = " << *q << ")" << std::endl;

    // Присваивание указателей (копирование адреса):
    p = q;

    std::cout << "\n--- После выполнения p = q ---" << std::endl;
    std::cout << "*p << ' ' << *q: " << *p << ' ' << *q << std::endl;
    std::cout << "p = " << p << ", q = " << q << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    return 0;
}
