#include <stdio.h>

unsigned int emptyLinesCounter(const char *str) {
	int count = 0;
	int empty = 1;
	while(*str != '\0') {
		if(*str != ' ' && *str != '\t' && *str != '\r' && *str != '\n') {
			empty = 0;
		}
		else if (*str == '\n'){
			if (empty == 1) {
				count ++;
			}
			else {
				empty = 1;
			}
		}
		str ++;
	}
	return count;
}

int main() {
	int s = emptyLinesCounter("\n\n\n\n\n\n \r\t \n\r\t\n \n");
	printf("%d\n", s);

	return 0;
}
