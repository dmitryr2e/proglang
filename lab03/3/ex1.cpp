// Пример 1: присваивание вещественного целому
#include <iostream>
int main() {
    int x = 3.14;              // неявное преобразование double -> int (отсечение дробной части)
    std::cout << x << std::endl;
    return 0;
}
