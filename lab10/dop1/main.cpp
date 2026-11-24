#include <iostream>
#include <iomanip>
#include <cstdint>

int main() {
    int x[10][10];

    std::cout << "=== Адреса элементов двумерного массива x[10][10] в шестнадцатеричном виде ===\n\n";
    std::cout << "      ";
    for (int j = 0; j < 10; ++j) {
        std::cout << "  col " << j << "   ";
    }
    std::cout << "\n------------------------------------------------------------------------------------\n";

    for (int i = 0; i < 10; ++i) {
        std::cout << "row " << i << ": ";
        for (int j = 0; j < 10; ++j) {
            std::cout << &x[i][j] << " ";
        }
        std::cout << "\n";
    }

    std::cout << "\n=== Смещения элементов относительно x[0][0] в байтах (base = 0) ===\n\n";
    uintptr_t base = reinterpret_cast<uintptr_t>(&x[0][0]);
    std::cout << "      ";
    for (int j = 0; j < 10; ++j) {
        std::cout << std::setw(6) << ("[" + std::to_string(j) + "]");
    }
    std::cout << "\n--------------------------------------------------------------------\n";

    for (int i = 0; i < 10; ++i) {
        std::cout << "row " << i << ": ";
        for (int j = 0; j < 10; ++j) {
            uintptr_t offset = reinterpret_cast<uintptr_t>(&x[i][j]) - base;
            std::cout << std::setw(6) << offset;
        }
        std::cout << "\n";
    }

    std::cout << "\nРазмер одного элемента (sizeof(int)): " << sizeof(int) << " байт.\n";
    std::cout << "Размер одной строки (10 * sizeof(int)): " << sizeof(x[0]) << " байт.\n";
    std::cout << "Полный размер всего массива (sizeof(x)): " << sizeof(x) << " байт.\n";

    return 0;
}
