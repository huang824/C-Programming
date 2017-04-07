#include <stdio.h>


unsigned int countWord(char * str, unsigned int length) {
	int i, len;
	int j, count = 0;
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; i < len; i ++) {
		if (i == len - 1 || str[i] == '\0' || str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n') {
			if (j <= length) {
				count++;
			}
			j = 0;
		}
		else {
			j ++;	
		}
	}
	return count; 	
}

int  main() {
	char* str1 = "all of you guys did a great job";
	int length = 3;
	int a = countWord(str1, length);
	printf("%d\n", a);
	return 0;
}

