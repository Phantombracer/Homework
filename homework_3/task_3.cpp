#include <iostream>


int main() {


    int A , B , C;

    std::cin >> A >> B >> C;
    std::cout << "S = " << 2 * (A * B + B * C + A * C) << std::endl;
    std::cout << "V = " << (A * B * C) << std::endl;


    return 0;


}
