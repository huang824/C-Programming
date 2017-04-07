#include <stdio.h>

int mystrcmp(const char* str1, const char * str2) {
	int len1, len2;
	for(len1 = 0; str1[len1] != '\0'; len1++);
	for(len2 = 0; str2[len2] != '\0'; len2++);
	if (len1 < len2) {
		int i;
		int equal = 0;
		for (i = 0; i <= len1; i ++) {
			if (str1[i] > str2[i]) {
				equal = 0;
				return 1;
			} else if (str1[i] < str2[i]) {
				equal = 0;
				return -1;
			} else {
				equal = 1;
			}
		}
		if (equal) {
			return 0;
		}
	} else {
		int i; 
		int equal = 0;
		for (i = 0; i <= len2; i++) {
			if (str1[i] > str2[i]) {
				equal = 0;
				return 1;
			} else if (str1[i] < str2[i]) {
				equal = 0;
				return -1;
			} else {
				equal = 1;
			}
		}
		if (equal) {
			return 0;
		}
	}
	return 0;
}

int main() {
	int a = mystrcmp("Hello", "hello");
	int b = mystrcmp("Hello ", " Hello");
	printf("%d, %d\n", a, b);
	return 0;
}
