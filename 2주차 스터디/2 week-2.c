#include <stdio.h>
int main() {
	int a;
	printf("ют╥б:\n");
	scanf_s("%d", &a);

	if (a < 5 && a % 2 == 1) {
		printf("A");
	}
	else if (a >= 5 && a % 2 == 1) {
		printf("B");
	}
	else  {
		printf("C");
	}
	return 0;
}
	    