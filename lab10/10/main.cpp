#include <iostream>

int main() {
    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = x + 5;
    int *q = &x[5];

    std::cout << "=== Задание 10: Сравнение инициализации p и q ===\n";
    std::cout << "Адрес p (x + 5):   " << p << " (значение *p = " << *p << ")\n";
    std::cout << "Адрес q (&x[5]):   " << q << " (значение *q = " << *q << ")\n";
    std::cout << "p == q ? " << (p == q ? "true (адреса идентичны)" : "false") << "\n";
    std::cout << "*p == *q ? " << (*p == *q ? "true (значения идентичны)" : "false") << "\n";

    return 0;
}
