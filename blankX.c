#include <stdio.h>

void blankX(char* str, const char toRemove) {
	int i, len;
	for(len = 0; str[len] != '\0'; len ++);
	for(i = 0; i < len; i ++) {
		if (str[i] == toRemove) {
			str[i] = 'X';
		}
	}
}

int main() {
	char a[] = "Hello World!";
	char b[] = "eeeeEEEeeeeEEEEEeeEE";
	blankX(a, 'o');
	blankX(b, 'e');
	printf("%s\n%s\n", a, b);
	return 0;
}
