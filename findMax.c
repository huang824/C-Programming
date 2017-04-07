#include <stdio.h>

int findMax(int numbers[], unsigned int n) {
	int i;
	int max = numbers[0];
	for (i = 0; i < n; i ++) {
		if  (max < numbers[i]) {
			max = numbers[i];
		}
	}
	return max;
}

int main() {
	int num[] = {1293, 2, 333, 16, -3, 12};
	int a = findMax(num, 6);
	printf("%d\n", a);
	return 0;
}
