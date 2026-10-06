#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef __int128 big;

int main() {
    // читаем весь ввод, '/' считаем разделителем: подходит и "p q", и "p/q"
    string s, t;
    while (getline(cin, t)) s += t + ' ';
    for (char &c : s)
        if (c == '/') c = ' ';
    vector<long long> v;
    size_t pos = 0;
    while (pos < s.size()) {
        while (pos < s.size() && s[pos] == ' ') pos++;
        if (pos >= s.size()) break;
        size_t len;
        v.push_back(stoll(s.substr(pos), &len));
        pos += len;
    }
    // знаменатели делаем положительными
    for (int i = 0; i < 4; i++)
        if (v[2 * i + 1] < 0) { v[2 * i] = -v[2 * i]; v[2 * i + 1] = -v[2 * i + 1]; }
    big p1 = v[0], q1 = v[1], p2 = v[2], q2 = v[3];
    big p3 = v[4], q3 = v[5], p4 = v[6], q4 = v[7];
    // (p1/q1 + p2/q2) vs (p3/q3 + p4/q4), все знаменатели > 0
    big left  = (p1 * q2 + p2 * q1) * (q3 * q4);
    big right = (p3 * q4 + p4 * q3) * (q1 * q2);
    cout << (left > right) - (left < right) << endl;
    return 0;
}
