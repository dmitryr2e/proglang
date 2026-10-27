#include <iostream>
using namespace std;

int main() {
    int x = 1, y = 5;
    (++x) = y;   // префиксный инкремент возвращает lvalue - присваивать можно
    cout << x << endl;   // 5
    return 0;
}
