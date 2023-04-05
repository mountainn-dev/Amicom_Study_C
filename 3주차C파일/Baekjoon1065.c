#include <stdio.h>

int main(void) {

	int n, count = 0;

	scanf("%d", &n);

	for (int i = 1; i < n; i++) {

		if (i < 100) count += 1;
		else if (i < 1000) {
			if ((i / 100 - i % 100 / 10) == (i % 100 / 10 - i % 10)) count += 1;
		}
	}

	printf("%d", count);
	return 0;
}