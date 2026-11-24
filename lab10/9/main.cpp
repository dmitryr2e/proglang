#include <iostream>

struct BigStruct {
    char data[128];
};

template <typename T>
void test_array_diff(const char* type_name) {
    T a[10];
    ptrdiff_t diff = &a[8] - &a[3];
    std::cout << "Массив типа " << type_name << " (sizeof(T) = " << sizeof(T) << " байт):\n";
    std::cout << "  &a[8] - &a[3] = " << diff << std::endl;
}

int main() {
    std::cout << "=== Задание 9: Разность указателей &a[8] - &a[3] ===\n\n";
    test_array_diff<int>("int");
    test_array_diff<double>("double");
    test_array_diff<char>("char");
    test_array_diff<long long>("long long");
    test_array_diff<BigStruct>("BigStruct (128 байт)");
    return 0;
}
