#include <iostream>
#define N 64890

//рекурсивная функция
static int foo(int n, int sum) {
	if (n != 0) {
		sum = sum + (n % 10);
		n = n / 10;
		foo(n, sum);
	}
	else

	return sum;
}

int main() {
	
	std:: cout  << "number sum of "<< N << " is\t"<<foo(N, 0);
	return 0;
}