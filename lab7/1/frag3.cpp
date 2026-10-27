#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 9;
    if (x > y++ && y++ > 9)
        cout << "yes" << endl;
    cout << y << endl;
    return 0;
}
