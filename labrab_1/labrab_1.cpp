#include <iostream>
#include <fstream>
#include <time.h>
#define input_length 106
using namespace std;

//int main() {
//
//	// открываем файл для записи в него текста
//	ofstream file("input.txt", ios_base::out);
//	srand(time(null));
//	if (file.is_open()) { // проверяем открыт ли сам файл
//		for (int i{ 0 }; i < 106; i++) {
//			if (rand() % 2 == 0) {
//				file << rand() % 230 << "\n";
//			}
//			else { file <<-231 + rand() % 230 << "\n"; }
//		}
//		
//		file.close(); // закрываем файл
//	}
//
//	cin.get();
//	return 0;
//}
int hash_function(int number) {
	int index = abs(number % 232);
	return index;
}
int main() {
	int temp = 0;
	int array[input_length];
	int hash_table[232];
	for (int i{ 0 }; i < 232; i++) {
		hash_table[i] = NULL;
	}

	//заносим данные из файла в массив.
	ifstream file("Input.txt", ios_base::in);
	if (file.is_open()) {
		for (int i{ 0 }; i < input_length; i++) {
			file >> temp;
			array[i] = temp;
		}
		file.close();
	}
	for (int i{ 0 }; i < input_length; i++) {
		std::cout << array[i] << endl;
	}

	//обрабатываем данные
	for (int i{ 0 }; i < input_length; i++) {
		if (array[i] > 0) {
			hash_table[hash_function(array[i])] = array[i];
		}
		else if (array[i] < 0) {
			hash_table[hash_function(array[i])] = NULL;
		}
		else if (array[i] == 0) {
			break;
		}
		}
	ofstream out("Output.txt",std::ios_base::out);

	for (int i{ 0 }; i < 231; i++) {
		if (hash_table[i] != NULL) {
			out << hash_table[i] << endl;
		}
	}
	return 0;
}