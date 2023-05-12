#include <stdio.h>

int sam_yuk_gu(int a, int b);

int main(void) {

	int a, b, count;

	scanf("%d %d", &a, &b);

	count = sam_yuk_gu(a, b);

	printf("%d", count);

	return 0;
}

int sam_yuk_gu(int a, int b) {

	int count = 0;

	for (int i = a; i <= b; i++) {
		if (i % 3 == 0) count += 1;
		else {
			for (int j = 3; j <= 9; j += 3) {
				if (i / 10 == j || i % 10 == j) count += 1;
			}
		}
	}
	return count;
}