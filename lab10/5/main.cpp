#include <iostream>

void original_version() {
    std::cout << "--- Исходный вариант: int x = 1, y = 2; ---\n";
    int x = 1, y = 2;
    int *p = &y, *q = &x;
    std::cout << "&x = " << &x << ", &y = " << &y << "\n";
    std::cout << "p (&y) = " << p << ", q (&x) = " << q << "\n";
    std::cout << "Результат (p < q): ";
    if (p < q)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}

void modified_version() {
    std::cout << "\n--- Модифицированный вариант 1 (поменяли порядок объявления: int y = 2, x = 1;): ---\n";
    int y = 2, x = 1;
    int *p = &y, *q = &x;
    std::cout << "&x = " << &x << ", &y = " << &y << "\n";
    std::cout << "p (&y) = " << p << ", q (&x) = " << q << "\n";
    std::cout << "Результат (p < q): ";
    if (p < q)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}

void modified_static_version() {
    std::cout << "\n--- Модифицированный вариант 2 (статическая переменная: static int x = 1; int y = 2;): ---\n";
    static int x = 1;
    int y = 2;
    int *p = &y, *q = &x;
    std::cout << "&x (сегмент данных) = " << &x << ", &y (стек) = " << &y << "\n";
    std::cout << "p (&y) = " << p << ", q (&x) = " << q << "\n";
    std::cout << "Результат (p < q): ";
    if (p < q)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";
}

int main() {
    original_version();
    modified_version();
    modified_static_version();
    return 0;
}
