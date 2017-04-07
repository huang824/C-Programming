#include <stdio.h>

int findMin(int numbers[], unsigned int n) {
        int i;
	int min = numbers[0];
	for (i = 0; i < n; i ++) {
		if  (min > numbers[i]) {
			min = numbers[i];
		}
	}
	return min;
}

int main() {
	int num[] = {1293, 2, 333, 16, -3, 12};
	int a = findMin(num, 6);
	printf("%d\n", a);
	return 0;
}

