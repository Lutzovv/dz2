#include <iostream>

int main() {
	//ex. 1

	int number, first3, second3, sum1{}, sum2{};
	bool right = false;

	do {
		std::cout << "Enter a six-digit number: ";
		std::cin >> number;

		if (number < 1000000 && number > 99999) {
			right = true;
		}

	} while (right == false);

	first3 = number / 1000;
	second3 = number % 1000;

	while (first3 > 0) {
		sum1 += first3 % 10;
		first3 /= 10;
		sum2 += second3 % 10;
		second3 /= 10;
	}
	
	if (sum1 == sum2) {
		std::cout << "This is a lucky number\n";
	}
	else {
		std::cout << "This is not a lucky number\n";
	}

	right = false;

	// ex. 2

	do {
		std::cout << "Enter a four-digit number: ";
		std::cin >> number;

		if (number > 999 && number < 10000) {
			right = true;
		}
	} while (right = false);

	int num1 = number / 1000;
	int num2 = (number / 100) % 10;
	int num3 = (number / 10) % 10;
	int num4 = number % 10;

	int new_number = num2 * 1000 + num1* 100 + num4 * 10 + num3;

	std::cout << new_number << "\n";

	//ex. 3

	int arr[7];
	int max{};

	for (int i = 0; i < 7; i++) {
		std::cout << "enter " << i+1 << " number: ";
		std::cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	std::cout << max;

	return 0;
}
