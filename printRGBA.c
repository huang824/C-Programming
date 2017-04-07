#include <stdlib.h>
#include <stdio.h>

char* printRGBA(unsigned int color) {
	int r = (color)>>24;
	int g = (color & 0x00FF0000) >> 16;
	int b = (color & 0x0000FF00) >> 8;
	int a = color & 0x000000FF;
	char *ch = (char*)malloc(100 * sizeof(char));
	int i = 0;
	ch[i] = '(';
	if (r / 100 != 0) {
		int r1 = (r - r % 100) / 100;
		ch [++i] = r1 + '0';
	}
	if (r / 10 != 0) {
		int r2 = (r % 100 - r % 10) / 10;
		ch [++i] = r2 + '0';
	}
	if (r / 1 != 0) {
		int r3 = r % 10; 
		ch [++i] = r3 + '0';
	}
	else {
		ch [++i] = '0'; 
	}
	ch [++i] = ',';
	ch [++i] = ' ';
	if (g / 100 != 0) {
                int g1 = (g - g % 100) / 100;
                ch [++i] = g1 + '0';
	}
	if (g / 10 != 0) {
		int g2 = (g % 100 - g % 10) / 10;
		ch [++i] = g2 + '0';
	}
	if (g / 1 != 0) {
		int g3 = g % 10; 
		ch [++i] = g3 + '0';
	}
	else {
		ch [++i] = '0';
	}
	ch [++i] = ',';
	ch [++i] = ' ';
	if (b / 100 != 0) {
		int b1 = (b - b % 100) / 100;
		ch [++i] = b1 + '0';
	}
	if (b / 10 != 0) {
		int b2 = (b % 100 - b % 10) / 10;
		ch [++i] = b2 + '0';
	}
	if (b / 1 != 0) {
		int b3 = b % 10;
		ch [++i] = b3 + '0';
	}
	else {
		ch [++i] = '0';
	}
	ch [++i] = ',';
	ch [++i] = ' ';
	if (a / 100 != 0) {
		int a1 = (a - a % 100) / 100;
		ch [++i] = a1 + '0';
	}
	if (a / 10 != 0) {
		int a2 = (a % 100 - a % 10) / 10;
		ch [++i] = a2 + '0';
	}
	if (a / 1 != 0) {
		int a3 = a % 10;
		ch [++i] = a3 + '0';
	}
	else {
		ch [++i] = '0';
	}
	ch [++i] = ')';
	return ch; 
}

int main () {
	char * a = printRGBA(4291559679);
	printf("%s\n", a);
	return 0;
}
