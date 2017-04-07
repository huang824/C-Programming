#include <stdio.h>

void sortArray(int* numbers, unsigned int n, unsigned int descendFlag) {
	if (descendFlag == 1) {
		int i, temp;
		for (i = 0; i < n; i ++) {
			int j;
			for (j = i + 1; j < n; j ++) {
				if(numbers[i] < numbers[j]) {
					temp = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = temp;
				}	
			}
		}
	}else {
		int i, temp, j;
		for( i = 0; i < n; i ++) {
			for(j = i + 1; j < n; j ++) {
				if (numbers[i] > numbers[j]) {
					temp = numbers[i];
					numbers[i] = numbers[j];
					numbers[j] = temp;
				}
			}
		}
	}
}

int main() {
	int numbers[] = {8, 9, 19, 363, 902, 38, 99, 1, 0, -5, -20};
	unsigned int n = 11;
	sortArray(numbers, n, 0);
	int i;
	for(i = 0; i < n; i ++) {
		printf("%d, ", numbers[i]);
	}
	return 0;
}
