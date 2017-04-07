#include <stdio.h>

int mystrncpy(char * dest, const char * src, unsigned int n) {
	int len, i;
	for (len = 0; src[len] != '\0'; len ++);
	if (n > len) {
		return 1;
	} else {
		for (i = 0; i < n; i ++) {
			dest[i] = src[i];
		}
		return 0;
	}
}

int main() {
	char a [] = "You are my destiny.";
	char b [50];
	int q = mystrncpy(b, a, 8);
	printf("%d, %s\n", q, b);
	return 0;
}
