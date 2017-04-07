#include <stdlib.h>
#include <stdio.h>

void toLowerStr(char * str) {
	char upper[50] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char lower[50] = {"abcdefghijklmnopqrstuvwxyz"};
	int i, j, len;
	for (len = 0; str[len] != '\0'; len ++);
	for (i = 0; i < len; i ++) {
		for (j = 0; j < 50; j ++) {
			if (str[i] == upper[j]) {
				str[i] = lower[j];
			}
		}
	}
}

int main() {
	char str[] = "Hello World!";
	char s[] = "I know I have to go to the United States";
	toLowerStr(str);
	toLowerStr(s);
	printf("%s\n%s\n", str, s);
	return 0;
}
