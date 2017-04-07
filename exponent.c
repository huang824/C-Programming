#include <stdio.h>

long int exponent(int base, unsigned int exp) {
	int ans = 1;
	if (base < 1 || base > 5 || exp < 1 || exp > 15) {
		return -1;
	} else {
		int i;
		for (i = 0; i < exp; i ++) {
			ans = base * ans;
		}
	}
	return ans;
}

int main() {
	int a = exponent(3, 3);
	int b = exponent(2, 5);
	int c = exponent(2, 18);
	printf("%d, %d, %d\n", a, b, c);
	return 0;
}
