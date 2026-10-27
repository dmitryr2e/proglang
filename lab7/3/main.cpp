#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Исходный вариант
    vector<int> a(10);
    for (int i = 0; i < 10;)
        a[i++] = 1;

    // Вариант с префиксным инкрементом:
    // i начинаем с -1, тогда после ++i получаем индексы 0, 1, ..., 9
    vector<int> x(10);
    for (int i = -1; i < 9;)
        x[++i] = 1;

    // Проверка: выводим оба вектора и сравниваем
    for (int k = 0; k < 10; k++)
        cout << x[k] << " ";
    cout << endl;
    cout << (a == x ? "vectors are equal" : "vectors are different") << endl;
    return 0;
}
