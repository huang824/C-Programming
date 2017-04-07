#include <stdio.h>

long int fibonacci(unsigned long int num) {
	long int ans = 0;
	if (num < 0 || num > 50) {
		return -1;
	}
	else if (num == 0) {
		ans = 0;
	}
	else if (num == 1) {
		ans = 1;
	}
	else {
		ans = fibonacci(num - 2) + fibonacci(num - 1);
	}
	return ans;
}

int main() {
	int a = fibonacci(8);
	int b = fibonacci(1);
	int c = fibonacci(56);
	printf("%d\n%d\n%d\n", a, b, c);
	return 0;
}
