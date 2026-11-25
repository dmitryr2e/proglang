#include <iostream>

void dswap(double& x, double& y) {
   double t = x;
   x = y;
   y = t;
}

int main(void) {
   double x = 1.5, y = 3.4;
   dswap(x, y);
   std::cout << x << " " << y << std::endl;
   return 0;
}