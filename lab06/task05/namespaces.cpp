#include <iostream>

namespace geom {
    const double pi = 3.14159265;
    double circle_area(double r) { return pi * r * r; }
    namespace util {                 // вложенное пространство имен
        double square(double x) { return x * x; }
    }
}

namespace phys {
    const double pi = 3.0;           // то же имя, но другой объект
    double kinetic(double m, double v) { return m * geom::util::square(v) / 2; }
}

int main() {
    std::cout << geom::pi << " " << phys::pi << std::endl;
    std::cout << geom::circle_area(2) << std::endl;
    std::cout << phys::kinetic(2, 3) << std::endl;

    using geom::circle_area;         // одно имя
    std::cout << circle_area(1) << std::endl;

    using namespace phys;            // все пространство
    std::cout << kinetic(1, 4) << std::endl;
    return 0;
}
