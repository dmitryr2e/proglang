#include <iostream>
#include <cstdint>

int main() {
    double x[10];

    std::cout << "=== Адреса в шестнадцатеричной системе (по умолчанию) ===" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "&x[" << i << "] = " << &x[i] << std::endl;
    }

    std::cout << "\n=== Адреса в десятичной системе (uintptr_t) и шаг ===" << std::endl;
    for (int i = 0; i < 10; i++) {
        uintptr_t addr = reinterpret_cast<uintptr_t>(&x[i]);
        std::cout << "&x[" << i << "] = " << addr;
        if (i > 0) {
            uintptr_t prev = reinterpret_cast<uintptr_t>(&x[i - 1]);
            std::cout << "  (смещение: +" << (addr - prev) << " байт)";
        }
        std::cout << std::endl;
    }

    return 0;
}
