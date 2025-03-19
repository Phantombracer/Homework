#include <iostream>
#include <cmath>


int main() {

	float P , R , I; int T;
	
	std::cin >> P >> R >> T;

	I = (P * R * T) / 100;
	I = round(I * 100) / 100;

	std::cout << "I = " << I << std::endl;
	std::cout << "I = " << static_cast<int>(I) << std::endl;

	return 0;

}
