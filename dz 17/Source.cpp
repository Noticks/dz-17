#include <iostream>
#include <cstdlib>
#include <string>

int main() {
	srand(time(NULL));


	//1
	const int size = 20;
	int min, max;
	int arr[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11;
	}

	min = arr[0], max = arr[0];

	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << " ";
		if (min > arr[i]) {
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	std::cout << "\nMin: " << min << "\nMax: " << max << "\n\n";


	//2
	int range, sum{};

	std::cout << "Enter range: ";
	std::cin >> range;

	for (int i = 0; i < size; i++) {
		if (arr[i] < range) {
			sum += arr[i];
		}
	}

	std::cout << "Amount in the range up to " << range << ": " << sum << "\n";


	//3
	const int size_year = 12;
	double profit[size_year];
	std::string months[size_year] = { "January", "February", "March", "April", "May",
		"June", "July", "August", "September", "October", "November", "December" };
	int range1, range2, min_profit, max_profit;

	for (int i = 0; i < size_year; i++) {
		std::cout << "Enter profit for " << months[i] << ": ";
		std::cin >> profit[i];
	}

	std::cout << "Enter fitst range: ";
	std::cin >> range1;

	std::cout << "Enter second range: ";
	std::cin >> range2;

	min_profit = profit[range1];
	max_profit = profit[range1];

	for (int i = range1; i < range2; i++) {
		if (profit[min_profit] > profit[i]) {
			min_profit = i;
		}
		if (profit[max_profit] < profit[i]) {
			max_profit = i;
		}
	}

	std::cout << "Min month: " << months[min_profit]
		<< "\nProfit: " << profit[min_profit]
		<< "Max month: " << months[max_profit]
		<< "\nProfit: " << profit[max_profit];
}