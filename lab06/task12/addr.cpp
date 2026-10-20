#include <iostream>
#include <string>

template <class T>
unsigned long long addr(T &t) { return reinterpret_cast<unsigned long long>(&t); }

int main() {
    // 1. переменные разных типов в одном блоке
    {
        char c = 'x';
        short sh = 1;
        int i = 2;
        long long ll = 3;
        double d = 4;
        long double ld = 5;
        std::cout << "один блок:\n";
        std::cout << "c  " << addr(c)  << " sizeof " << sizeof(c)  << "\n";
        std::cout << "sh " << addr(sh) << " sizeof " << sizeof(sh) << "\n";
        std::cout << "i  " << addr(i)  << " sizeof " << sizeof(i)  << "\n";
        std::cout << "ll " << addr(ll) << " sizeof " << sizeof(ll) << "\n";
        std::cout << "d  " << addr(d)  << " sizeof " << sizeof(d)  << "\n";
        std::cout << "ld " << addr(ld) << " sizeof " << sizeof(ld) << "\n";
    }
    // 2. последовательные блоки
    std::cout << "\nпоследовательные блоки:\n";
    { int x = 1; std::cout << "блок 1: " << addr(x) << "\n"; }
    { int y = 2; std::cout << "блок 2: " << addr(y) << "\n"; }
    { double z = 3; std::cout << "блок 3 (double): " << addr(z) << "\n"; }
    // 3. строки
    std::cout << "\nстроки:\n";
    std::string s1, s2, s3;
    std::cout << "s1 " << addr(s1) << " sizeof " << sizeof(s1) << "\n";
    std::cout << "s2 " << addr(s2) << " sizeof " << sizeof(s2) << "\n";
    std::cout << "s3 " << addr(s3) << " sizeof " << sizeof(s3) << "\n";
    s1 = "hi";
    s2 = std::string(100, 'a');
    s3 = std::string(100000, 'b');
    std::cout << "после записи строк:\n";
    std::cout << "s1 " << addr(s1) << " sizeof " << sizeof(s1) << " size " << s1.size() << "\n";
    std::cout << "s2 " << addr(s2) << " sizeof " << sizeof(s2) << " size " << s2.size() << "\n";
    std::cout << "s3 " << addr(s3) << " sizeof " << sizeof(s3) << " size " << s3.size() << "\n";
    std::cout << "данные s1 " << reinterpret_cast<unsigned long long>(s1.data())
              << ", s3 " << reinterpret_cast<unsigned long long>(s3.data()) << "\n";
    return 0;
}
