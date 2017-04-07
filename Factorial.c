#include <stdio.h>


long int factorial (unsigned long int num) {
	int ans = 1;
	if (num < 0 || num > 20) {
		return -1;
	}
	else {
		int i;
		for (i = num; i > 0; i --) {
			ans = i * ans;	
		}
		return ans;
	}
}

int main(){
	int a = factorial(13);
	int b = factorial(6);
	int c = factorial(-2);
	int d = factorial(34);
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
	return 0;
}
