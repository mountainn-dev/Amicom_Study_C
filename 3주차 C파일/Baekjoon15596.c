#include <stdio.h>

long long sum(int* a, int n);

int main(void) {

	int a[] = { 3, 4, 5, 6, 7, 8 };
	int n = sizeof(a) / sizeof(a[0]);
	printf("%d", sum(a, n));

	return 0;
}

long long sum(int* a, int n) {

	int total = 0;

	for (int i = 0; i < n; i++) {
		total += a[i];
	}

	return total;
}