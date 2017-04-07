#include <stdio.h>

int indexof(char* str, char c) {
	int len, i, index;
	for (len = 0; str[len] != '\0'; len ++);
	for (i = 0; i < len; i ++) {
		if (str[i] == c) {
			index = i;
			break;
		}
	}
	return index;
}

void replace(char * str, char c, int (*fn) (char *, char)) {
        int j = 0;
	        j = (*fn)(str, c);
	        str[j] = '!';
}

int main() {
	char str[] = "Hello World!";
	char c = 'e';
	int (*fn) (char *, char);
	fn = &indexof;
	replace (str, c, fn);
	printf("%s\n", str);
	return 0;
}

