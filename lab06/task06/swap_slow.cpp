#include <iostream>
#include <string>
using namespace std;
int main() {
    string a(100000, 'a');
    string b(100000, 'b');
    for (int i = 0; i < 1000000; i++) {
        string c(a);
        a = b;
        b = c;
    }
    std::cout << a[0] << b[0];
}
