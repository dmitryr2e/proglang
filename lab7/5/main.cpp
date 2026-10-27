#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;
    cout << "before: a=" << a << " b=" << b << endl;

    a, b = b, a;   // "аналог" питоновского a, b = b, a

    cout << "after:  a=" << a << " b=" << b << endl;

    // Правильный обмен
    int t = a;
    a = b;
    b = t;
    cout << "with temp variable: a=" << a << " b=" << b << endl;
    return 0;
}
