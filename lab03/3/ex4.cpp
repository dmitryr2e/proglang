#include <iostream>
int main() {
    long long big = 5000000000LL;
    int small = big;           // неявное сужение, старшие биты теряются
    std::cout << small << std::endl;
    return 0;
}
