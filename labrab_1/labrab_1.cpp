#include <iostream>
#define N 46382367
void foo(int n, int i=2) {
	if (i <= sqrt(n)) {
		if (n % i == 0) {
			std::cout << i << "\n";
			n = n / i;
			foo(n, i);
		}
		else { i++; foo(n, i); }

	}
	else if (i == n) { std::cout << i; }
	else { i++; foo(n, i); }
	return;
}



int main()
{
	foo(N);
return 0;
}