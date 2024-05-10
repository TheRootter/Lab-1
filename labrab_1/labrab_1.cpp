#include <iostream>
#include <time.h>
#define arrlength 10
#define arrfrom 2
#define arrto 103


int main()
{
	int temp = NULL;
	//создаем массив из случайных чисел
	srand(time(NULL));
	int Random_Array[arrlength]{};
	for (int i{ 0 }; i <= arrlength; i++) {
		Random_Array[i] = arrfrom + rand() % (arrto + 1);
		std::cout << Random_Array[i] << "\t";
	}

	//алгоритм сортировки
	for (int i{ 0 }; i <= arrlength - 1; i++) {
		int min_ind = i;
		for (int j{ i }; j <= arrlength; j++) {
			if (Random_Array[j] < Random_Array[min_ind]) {
				temp = Random_Array[j];
				Random_Array[j] = Random_Array[i];
				Random_Array[i] = temp;
			}
		}
	}
	//вывод полученного массива
	std::cout << "\n";
	for (int i{ 0 }; i <= arrlength; i++) {
		std::cout << Random_Array[i] << "\t";
	}
}
