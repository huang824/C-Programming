#include <stdio.h>
#include <math.h>

int isPrime(unsigned int num) {
	if (num <= 1 || num > 512) {
		return -1;
	}
	else if (num == 2) {
		return 1;
	}
	else {
		int i;
		for (i = sqrt(num) + 1; i > 1; i --) {
			if (num % i == 0) {
				return 0;
			}
		}
	}
	return 1; 
}

int main() {
	int a = isPrime(2);
	int b = isPrime(1);
	int c = isPrime(97);
	int d = isPrime(100);
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
	return 0;
}
