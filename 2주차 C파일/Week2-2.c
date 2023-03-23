#include <stdio.h>

int main(void) {

	int a;

	scanf("%d", &a);

	if (a % 2 == 1) {
		if (a < 5) printf("A");
		else printf("B");
	}
	else printf("C");

	return 0;
}