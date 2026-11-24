#include <iostream>

template <typename T>
void test_type(const char* type_name) {
    T x = 0;
    T *d = &x;
    size_t addr_plus = reinterpret_cast<size_t>(d + 4);
    size_t addr_minus = reinterpret_cast<size_t>(d - 4);
    size_t diff = addr_plus - addr_minus;

    std::cout << "Тип: " << type_name << " (sizeof = " << sizeof(T) << " байт)\n";
    std::cout << "  (d + 4) = " << (d + 4) << " [числовой адрес: " << addr_plus << "]\n";
    std::cout << "  (d - 4) = " << (d - 4) << " [числовой адрес: " << addr_minus << "]\n";
    std::cout << "  Разность адресов в байтах: " << diff << " байт (= 8 * sizeof(" << type_name << "))\n\n";
}

int main() {
    std::cout << "=== Задание 6: Разность числовых адресов при (d + 4) - (d - 4) ===\n\n";
    test_type<double>("double");
    test_type<int>("int");
    test_type<char>("char");
    test_type<short>("short");
    return 0;
}
