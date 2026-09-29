#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int x = -3; x <= 3; x++)
        for (int y = -3; y <= 3; y++)
            for (int z = -3; z <= 3; z++)
                if ((x == y) + (x == z) == true) {
                    count++;
                    // проверка нашей формулы: ровно одно из равенств истинно
                    if (!((x == y && x != z) || (x != y && x == z)))
                        cout << "формула не сошлась: " << x << " " << y << " " << z << endl;
                }
    cout << "подходящих троек в диапазоне -3..3: " << count << endl;
    // примеры
    int x = 1, y = 1, z = 2;
    cout << ((x == y) + (x == z) == true) << endl;  // 1
    x = 1; y = 1; z = 1;
    cout << ((x == y) + (x == z) == true) << endl;  // 0
    x = 1; y = 2; z = 2;
    cout << ((x == y) + (x == z) == true) << endl;  // 0
    return 0;
}
