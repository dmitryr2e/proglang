#include <iostream>

int main() {
    std::cout << "Пошаговая трассировка инструкций задания 4:\n\n";

    unsigned a = 8, b = 3, c = 17;
    std::cout << "1. unsigned a = 8, b = 3, c = 17;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c << "\n\n";

    unsigned *p = &a;
    std::cout << "2. unsigned *p = &a;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c << ", p = &a (*p = " << *p << ")\n\n";

    unsigned *q = &b;
    std::cout << "3. unsigned *q = &b;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &a (*p = " << *p << "), q = &b (*q = " << *q << ")\n\n";

    *p += *q + c;
    std::cout << "4. *p += *q + c;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &a (*p = " << *p << "), q = &b (*q = " << *q << ")\n\n";

    c = *q;
    std::cout << "5. c = *q;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &a (*p = " << *p << "), q = &b (*q = " << *q << ")\n\n";

    p = &c;
    std::cout << "6. p = &c;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &c (*p = " << *p << "), q = &b (*q = " << *q << ")\n\n";

    c += a;
    std::cout << "7. c += a;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &c (*p = " << *p << "), q = &b (*q = " << *q << ")\n\n";

    *p += 10;
    std::cout << "8. *p += 10;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &c (*p = " << *p << "), q = &b (*q = " << *q << ")\n\n";

    *q = *p;
    std::cout << "9. *q = *p;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &c (*p = " << *p << "), q = &b (*q = " << *q << ")\n\n";

    q = p;
    std::cout << "10. q = p;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &c (*p = " << *p << "), q = &c (*q = " << *q << ")\n\n";

    *q += 10;
    std::cout << "11. *q += 10;\n"
              << "   a = " << a << ", b = " << b << ", c = " << c
              << ", p = &c (*p = " << *p << "), q = &c (*q = " << *q << ")\n\n";

    return 0;
}
