#include <iostream>

using namespace std;

#define forc(i, from, to) \
    int __i = from, __n = to; \
    for (const int &i = __i; i < __n; __i++)

int count_calls = 0;

int get_to() {
    count_calls++;
    return 3;
}

int main() {
    count_calls = 0;
    forc(i, 0, get_to()) {
    }
    cout << count_calls << endl;

    count_calls = 0;
    for (int i = 0; i < get_to(); i++) {
    }
    cout << count_calls << endl;

    return 0;
}
