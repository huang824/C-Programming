#include <stdio.h>
#include <stdlib.h>

unsigned int wordSearch(char * str, char * keyword) {
	int len, length, i;
	int j, count = 0;
	for (len = 0; str[len] != '\0'; len++);
	for (length = 0; keyword[length] != '\0'; length++);
	for (i = 0; i < len; i ++) {
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n') {
			j = 0; 
		}
		else {
			int a;
			for (a = i; str[a] != '\0' && str[a] != ' ' && str[a] != '\t' && str[a] != '\r' && str[a] != '\n'; a ++) {
				if (str[a] == keyword[j]) {
					j ++;
				}
				else {
					if (keyword[j] == '\0' && str[a] != ' ' && str[a] != '\t' && str[a] != '\r' && str[a] != '\n' && str[a] != '\0') {
					j = 0;
					}
					break;
				}
			}
			if (j == length && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\r' || str[i - 1] == '\n')) {
				count ++;
				j = 0;
			}
		}
	}
	return count;
}

int main() {
	int a = wordSearch("tell me what you want to tell me\nand\ttell\rhim what you just did tell me", "tell");
	int b = wordSearch("him himmmm hhhhim hhhhhhim himhim himimihim him", "him" );
	int c = wordSearch("2435444 23425 43555555 4444435 435", "435");
	printf("%d, %d, %d\n", a, b, c);
	return 0;
}
