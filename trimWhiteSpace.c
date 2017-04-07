#include <stdio.h>
#include <stdlib.h>

void trimWhiteSpace(char * str) {
	int len, i;
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; i < len; i ++) {
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n') {
			int j;
			for (j = i; j < len; j ++) {
				str[j] = str[j + 1];
			}
			i --; //Attention
		}
	}
}

int main() {
	char a[] = "Hello\n W   orld!";
	char b[] = "You            are a dog and a cat";
	trimWhiteSpace(a);
	trimWhiteSpace(b);
	printf("%s\n%s\n", a, b);
	return 0;
}
