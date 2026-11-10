#include <iostream>

using namespace std;

#define forc(i, from, to) \
    int __i = from, __n = to; \
    for (const int &i = __i; i < __n; __i++)

int main() {
    forc(i, 0, 5) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
