#include <stdio.h>

int main() {
	int a;

	printf("자연수 a를 입력하세요 : ");
	scanf_s("%d", &a);

	if ((a % 2 == 1) && (a < 5))
		printf("A\n");
	else if ((a % 2 == 1) && (a >= 5))
		printf("B\n");
	else
		printf("C\n");

	return 0;
}