#include <stdio.h>
#include <stdlib.h>

void reverseString(char * str) {
	int i, len;
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; i < len / 2; i ++) {
		char temp;
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

int main() {
	char a[] = "wodemingzishierqing";
	char b[] = "ni zhe ge sha\n bi";
	reverseString(a);
	reverseString(b);
	printf("%s, %s\n", a, b);
	return 0;
}

