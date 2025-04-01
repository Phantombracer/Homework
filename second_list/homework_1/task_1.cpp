#include <iostream>
#include <iomanip>

int main() {


	double num1 , num2;

	std::cout << "Enter two numbers " << std::endl;
	std::cin >> num1 >> num2; 	

	std::cout << std::fixed << std::setprecision(12) << num1 + num2 << std::endl;   
       	std::cout << std::fixed << std::setprecision(12) << num1 - num2 << std::endl;
        std::cout << std::fixed << std::setprecision(12) << num1 * num2 << std::endl;
        std::cout << std::fixed << std::setprecision(12) << num1 / num2 << std::endl;

	return 0;


}
