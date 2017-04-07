#include <stdio.h>
#include <stdlib.h>

int isPalindrome (char *str) {
	int j, k = 0;
	char s[100] = {'0'};
	for (j = 0; str[j] != '\0'; j ++) {
		if (str[j] != ' ' && str[j] != '\t' && str[j] != '\r' && str[j] != '\n') {
			s[k++] = str[j];
		}
	}
	if (k <= 1) {
		return 1;
	}
	else {
		int count = 0;
		int i;
		for (i = 0; i < k / 2; i ++) {
			if (s[count] != s[k - count - 1]) {
				return 0;
			}
			else {
				count ++;
			}
		}
		return 1;
	}
	return 1;
}

int main() {
	int a = isPalindrome("2 3 4 \t 5 \r 4 \n 3 2");
	int b = isPalindrome("02200059");
	int c = isPalindrome("3rtytr3");
	printf("%d, %d, %d\n", a, b, c);
	return 0;
}
