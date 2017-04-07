#include <stdio.h>
#include <stdlib.h>

char* firstComplement(const char* str) {
	char s[100];
	int j;
	for(j = 0; str[j] != '\0'; j++) {
		s[j] = str[j];
	}
	int i = 0;
	while (s[i]!= '\0') {
		if (s[i] == '1') {
			s[i] = '0';
		} else {
			s[i] = '1';
		}
		i ++; 
	}
	char* string = (char*) malloc (100 * sizeof(char));
	int k;
	for(k = 0; k < j; k ++) {
		string[k] = s[k];
	}
	return string;
}

int main() {
	char* f = firstComplement("0101001");
	printf("%s\n", f);
	return 0;
}
