#include <stdio.h>

int mystrncmp(const char* str1, const char* str2, unsigned int n) {
	int len1, len2;
	for(len1 = 0; str1[len1] != '\0'; len1++);
	for(len2 = 0; str2[len2] != '\0'; len2++);
	if (n > len1 && n < len2) {
		int i;
		int equal = 1;
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
	}
	else if (n > len2 && n < len1) {
		int i;
		int equal = 1;
		for (i = 0; i <= len2; i ++) {
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
	else if (n > len1 && n > len2) {
		if (len1 < len2) {
			int i;
			int equal = 1;
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
			int equal = 1;
			for(i = 0; i <= len2; i ++) {
				if (str1[i] > str2[i]) {
					equal = 0;
					return 1;
				}
				else if (str1[i] < str2[i]) {
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
	} else if (n < len1 && n < len2) {
		int i;
		int equal = 1;
		for(i = 0; i < n; i ++) {
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
	int a = mystrncmp("Hello World", "Hello", 4);
	int b = mystrncmp("Hello ", "hel", 2);
	printf("%d, %d\n", a, b);
	return 0;
}
