#include <stdio.h>
int main() {
	int n = 0, i = 0;
	scanf_s("%d", &n);
	
	for (i = 1; i <= 9;  i++) {
		printf("%d * %d = %d\n",n , i, n*i);
	}
	return 0;
}