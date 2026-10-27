#include <iostream>
#include <string>
#include <chrono>

int main() {
    auto start = std::chrono::steady_clock::now();

    std::string s;
    for (int i = 0; i < 1000000; i++)
        s = s + 'a';
    std::cout << s.size() << std::endl;

    auto end = std::chrono::steady_clock::now();
    std::cout << "time: " << std::chrono::duration<double>(end - start).count() << " s" << std::endl;
    return 0;
}
