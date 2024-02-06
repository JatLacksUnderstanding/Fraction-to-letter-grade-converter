#include <iostream>
#include <iomanip>


int main() {

	int num1, num2;

	while (true) {
		std::cout << "Enter Numerator\n";
		std::cin >> num1;

		std::cout << "Enter Denominator\n";
		std::cin >> num2;

		double awn1 = static_cast<double>(num1) / num2;

		std::cout << "Decimal/Number:" << awn1 << "\n";

		double awn2 = static_cast<double>(awn1) * 100;
		
		std::cout << "Percentage:" << std::setprecision(3) << awn2 << "%" << "\n";
		std::cout << "\n";
		
		if (awn2 >= 89.5) {
	std::cout << awn2 << "% Is a A.\n";
		} else if (awn2 >= 79.5) {
	std::cout << awn2 <<  "% Is a B.\n";
		} else if (awn2 >= 69.5) {
	 std::cout << awn2 << "% Is a C.\n";
		} else if (awn2 >= 59.5) {
	 std::cout << awn2 << "% Is a D.\n";
		} else {
	 std::cout << awn2 << "% Is a F.\n";
		}

	}
}