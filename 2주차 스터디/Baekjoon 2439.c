#include <stdio.h>
int main() {
	int n,j,k;
	scanf_s("%d", &n);

	for (int i =1; i<=n; i++){
		for (j = 0; j < n - i; j++) {
			printf(" ");
		}
		for (k = 0; k < n - j; k++) {
			printf("*");
		}
		printf("\n");

	}
	return 0;
}