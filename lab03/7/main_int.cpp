// Тот же пример, но с int вместо long: переполнение видно на любой платформе
#include <iostream>
using namespace std;

int main() {
    int a = 200000, b = 200000;
    long long c = 200000;
    cout << (a * b) * c << endl;   // a*b считается в int и переполняется
    cout << a * (b * c) << endl;   // b*c уже long long, переполнения нет
    return 0;
}
