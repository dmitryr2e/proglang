#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }
    bool found = false;
    for (int x : a) {
        if (x < 0) {
            cout << x << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "all non-negative" << endl;
    }
    return 0;
}
