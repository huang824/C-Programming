#include <stdio.h>
#include <stdlib.h>

char* drawRectangle(unsigned int height, unsigned int width) {
	char* rec = (char*) malloc (100 * sizeof(char));
	int i, j;
	int a, b;
	int k = 0;
	if (height < 2 || width < 2) {
		rec = NULL;
	}
	else {
		for (i = 0; i < height; i ++) {
			for (j = 0; j < width; j ++) {
				rec[k++] = '*';
			}
			rec[k++] = '\n';
		}
		for (a = 1; a < height - 1; a ++) {
			for (b = 1; b < width - 1; b ++) {
				rec[a * (width + 1) + b] = ' '; 
			}
		}
	}
	return rec;
}

int main() {
	char* a = drawRectangle(3, 3);
	char* b = drawRectangle(4, 2);
	printf("%s\n%s\n", a, b);
	return 0;
}
