#include <iostream>
using namespace std;

int main() {
    int x = 7, y = 4;
    long double d = 0.25;
    cout << (x / y) / d << endl;
    cout << (x / d) / y << endl;
    long a = 200000, b = 200000;
    long long c = 200000;
    std::cout << (a * b) * c << std::endl;
    std::cout << a * (b * c) << std::endl;
    cout << "sizeof(long) = " << sizeof(long) << endl;
    return 0;
}
