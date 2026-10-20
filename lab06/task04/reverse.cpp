#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10);
    for (int i = 0; i < 10; i++)
        std::cin >> v[i];
    for (int i = 9; i >= 0; i--)
        std::cout << v[i] << std::endl;
    return 0;
}
