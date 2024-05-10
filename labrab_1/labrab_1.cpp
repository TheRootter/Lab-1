#include <iostream>

//рекурсивная функция
int foo(int n, int end) {
	
	std::cout << n << "\n";
	n++;
	if (n <= end) {
		foo(n, end);
	}
	return 0;
}

int main() {
	int end{};
	std::cout << "Enter the number n = ";
	std::cin >> end;
	int n = 1;
	
	foo(n, end);


}