#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 5, z = 5;
    cout << (x == y == z) << endl;   // 0: (5==5)==5 -> true==5 -> 1==5 -> false
    x = 1; y = 1; z = 1;
    cout << (x == y == z) << endl;   // 1: (1==1)==1 -> 1==1 -> true
    x = 1; y = 2; z = 0;
    cout << (x == y == z) << endl;   // 1: (1==2)==0 -> 0==0 -> true
    x = 1; y = 2; z = 3;
    cout << (x == y == z) << endl;   // 0
    return 0;
}
