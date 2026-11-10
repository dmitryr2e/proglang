#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    if (!(cin >> n >> m)) {
        return 0;
    }
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n * m; i++) {
        cin >> a[i / m][i % m];
    }
    long long sum = 0;
    for (int i = 0; i < n * m; i++) {
        sum += a[i / m][i % m];
    }
    cout << sum << endl;
    return 0;
}
