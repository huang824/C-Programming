#include <stdio.h>

long int computeSum(int numbers[], unsigned int n) {
	int i;
	int sum = 0;
	for (i = 0; i < n; i ++) {
		sum += numbers[i];
	}
	return sum;
}

int main() {
	int num[] = {20, -3, 42};
	int a = computeSum(num, 3);
	printf("%d\n", a);
	return 0;
}
