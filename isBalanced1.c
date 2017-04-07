#include <stdio.h>
#include <stdlib.h>

int isBalanced(char *str) {
	char stk[50];
	int top, i;
	top = -1; 

	for (i = 0; str[i] != '\0'; i ++) {
		if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
			stk[++top] = str[i];
		}
		else if ( str[i] == ')') {
			if (stk [top] == '(') {
				top --;
			}
			else {
				return 0;
			}
		}
		else if (str[i] == ']') {
			if (stk[top] == '[') {
				top --;
			}
			else {
				return 0;
			}
		}
		else if (str[i] == '}') {
			if (stk[top] == '{') {
				top --;
			}
			else {
				return 0;
			}
		}
	}

	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int a = isBalanced("({(aaa)aaa}(x{xx}))");
        int b = isBalanced("{xxxx(aaaa}");
	int c = isBalanced("{((aaaa}aa)){xxx)");
	int d = isBalanced("{(xx){xx}((aaaa))}");
	printf("%d, %d, %d, %d\n", a, b, c, d);
	return 0;
}
