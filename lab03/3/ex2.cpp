#include <iostream>
int main() {
    int n = 3;
    while (n) {                // int неявно приводится к bool
        std::cout << n << " ";
        n--;
    }
    std::cout << std::endl;
    return 0;
}
