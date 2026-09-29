#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

// typedef: короткое имя для длинного типа
typedef unsigned long long ull;
typedef map<string, vector<int>> Marks;   // оценки студентов: фамилия -> список оценок

int main() {
    // ---- typedef ----
    ull big = 1ULL << 40;
    Marks marks;
    marks["Ivanov"] = {5, 4, 5};
    marks["Petrov"] = {3, 4};

    // ---- auto ----
    // вместо Marks::iterator пишем auto, тип выводится по инициализатору
    for (auto it = marks.begin(); it != marks.end(); ++it) {
        int sum = 0;
        for (auto m : it->second) sum += m;
        // ---- static_cast ----
        // без явного приведения было бы целочисленное деление
        double avg = static_cast<double>(sum) / it->second.size();
        cout << it->first << ": " << avg << endl;
    }

    // ---- decltype ----
    // переменная без инициализации, но того же типа, что и результат begin()
    decltype(marks.begin()) found;
    if (marks.count("Ivanov")) found = marks.find("Ivanov");
    else found = marks.end();
    cout << "found: " << found->first << endl;

    // decltype для того, чтобы завести переменную того же типа, что и другая
    decltype(big) copy_of_big = big + 1;
    cout << copy_of_big << endl;

    // ---- sizeof ----
    cout << "sizeof(ull) = " << sizeof(ull) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;

    // sizeof для вычисления числа элементов массива
    int arr[10];
    cout << "elements in arr: " << sizeof(arr) / sizeof(arr[0]) << endl;

    // sizeof для выделения памяти нужного размера
    int* p = (int*)malloc(5 * sizeof(int));
    p[0] = 1;
    cout << p[0] << endl;
    free(p);

    return 0;
}
