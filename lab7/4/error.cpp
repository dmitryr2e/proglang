#include <iostream>
using namespace std;

int main() {
    int x = 1, y = 5;
    (x++) = y;   // постфиксный инкремент возвращает rvalue - ошибка компиляции
    cout << x << endl;
    return 0;
}
