//Пример5: передача double в функцию с пааметром int
#include <iostream>
void f(int a) { std::cout << a << std::endl; }
int main() {
    f(2.9);   // фактический параметр приводится к int -> 2
    return 0;
}
