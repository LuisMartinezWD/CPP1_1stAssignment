#include <iostream>

int fib(const int n) {
	if (n == 0)
		return n;
	if (n == 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main() {
	int x = fib(10);
}