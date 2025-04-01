#include <iostream>
#include <iomanip>



int main() {

	char first;

	std::cin >> first;

	int ascii_code = static_cast<int>(first);

	std::cout << first << ": " << ascii_code << std::endl; 
	std::cout << first << ": " << std::hex << ascii_code << std::endl;



	return 0;

}
