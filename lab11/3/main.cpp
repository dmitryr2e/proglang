#include <iostream>
#include <vector>

void dosome_1(const std::vector<int> &V){
    int sum = 0;
    for (int x: V) sum+=x;
    std::cout << "Sum: " << sum << " Addres V[0]: " << &V[0] << "\n";
}

void dosome_2(std::vector<int> &V){
    int sum = 0;
    for (int x: V) sum+=x;
    std::cout << "Sum: " << sum << " Addres V[0]: " << &V[0] << "\n";
}


void dosome_3(const std::vector<int> V){
    int sum = 0;
    for (int x: V) sum+=x;
    std::cout << "Sum: " << sum << " Addres V[0]: " << &V[0] << "\n";
}

void dosome_4(std::vector<int> V){
    int sum = 0;
    for (int x: V) sum+=x;
    std::cout << "Sum: " << sum << " Addres V[0]: " << &V[0] << "\n";
}

int main(){
    std::vector <int> v = {10, 20, 30};
    const std::vector <int> c_v = {10, 20, 30};

    std::cout<< "Original V[0] in main: " << v[0];

    dosome_1(v);
    dosome_2(v);
    dosome_3(v);
    dosome_4(v);

    std::cout << "const vector" << std::endl;
    dosome_1(c_v);
    //dosome_2(c_v);
    dosome_3(c_v);
    dosome_4(c_v);

    dosome_1({1, 2, 3});
    //dosome_2({1, 2, 3});
    dosome_3({1, 2, 3});
    dosome_4({1, 2, 3});

    return 0;
}
