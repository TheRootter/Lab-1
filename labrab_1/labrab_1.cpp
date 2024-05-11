#include <iostream>
#define A 26
#define B 20
//рекурсивная функция
int foo(int n, int end) {
	
	std::cout << n << "\n";
	//порядок убывания
	if (n < end) {
		n++;
		if (n <= end) {
			foo(n, end);
		}
	}
	//порядок убывания
	else {
		n--;
		if (n >= end) {
			foo(n, end);
		}
	}
	return 0;
}

int main() {

	foo(A, B);
}