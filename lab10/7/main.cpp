#include <iostream>

template <typename T>
void test_diff(const char* type_name) {
    ptrdiff_t diff = reinterpret_cast<T*>(3000) - reinterpret_cast<T*>(2000);
    std::cout << "Тип: " << type_name << " (sizeof = " << sizeof(T) << " байт)\n";
    std::cout << "  reinterpret_cast<" << type_name << "*>(3000) - reinterpret_cast<" << type_name << "*>(2000) = "
              << diff << " (= (3000 - 2000) / " << sizeof(T) << ")\n\n";
}

int main() {
    std::cout << "=== Задание 7: Разность типизированных указателей ===\n\n";
    test_diff<double>("double");
    test_diff<int>("int");
    test_diff<char>("char");
    test_diff<short>("short");
    return 0;
}
