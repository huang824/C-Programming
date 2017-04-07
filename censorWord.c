#include <stdio.h>
#include <stdlib.h>

void censorWord(char * str, char * badword) {
	int len, length, i;
	int j = 0;
	for (len = 0; str[len] != '\0'; len++);
	for (length = 0; badword[length] != '\0'; length ++);
	for (i = 0; i < len; i ++) {
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r') {
			j = 0;
		}
		else {
			int a, b;
			for (a = i; str[a] != ' ' && str[a] != '\t' && str[a] != '\n' && str[a] != '\r' && str[a] != '\0'; a++) {
				if (str[a] == badword[j]) {
					j ++;
				}
				else {
					if (badword[j] == '\0' && str[a] != ' ' && str[a] != '\t' && str[a] != '\r' && str[a] != '\n' && str[a] != '\0'){
						j = 0;
					}
					break;
				}
			}
			if (j == length && (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'|| str[i - 1] == '\r' || str[i - 1] == '\n')) {
				for (b = i; b < i + length; b ++) {
					str[b] = 'X';
				}
			}
		}
	}
}

int main() {
	char str[29] = "The penguin is in the theathe";
	censorWord(str, "the");
	printf("%s\n", str);
	return 0;
}
