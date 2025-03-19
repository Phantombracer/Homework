#include <iostream>
#include <cmath>



int main() {


	float r; const float PI = 3.14; 

 	std::cin >> r;
	
	float C = (2 * PI * r);
	float S = (PI * r * r);

	C = round(C * 100) / 100;
        S = round(S * 100) / 100; 

	std::cout << "C = " << C << std::endl;
	std::cout << "S = " << S << std::endl;


	return 0;


}
