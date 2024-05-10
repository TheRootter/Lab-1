#include <iostream>
#include <time.h>
#include <string>
#define arrlength 5



int main()
{	
	std::string temp = "";
	std::string Numbers[]
	{
		"23 - 45 - 67",
		"54 - 25 -25",
		"74 - 47 - 90",
		"34 - 75 - 85",
		"63 - 57 - 65"
	};
	//вывод исходного массива
	for (int i{ 0 }; i < arrlength; i++) {
		std::cout << "\n" << Numbers[i];
	}
	//алгоритм сортировки
	for (int i{ 0 }; i < arrlength - 1; i++) {
		int max_ind = i;
		for (int j{ i }; j < arrlength; j++) {
			if (Numbers[j] < Numbers[max_ind]) {
				temp = Numbers[j];
				Numbers[j] = Numbers[i];
				Numbers[i] = temp;
			}
		}
	}
	//вывод полученного массива
	std::cout << "\n\n\n\n";
	for (int i{ 0 }; i < arrlength; i++) {
		std::cout << Numbers[i] << "\n";
	}
}
