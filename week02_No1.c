#include <stdio.h>

int main() {
	int n;
	
	printf("자연수 n을 입력하세요: ");
	scanf_s("%d", &n);

	if ((n % 2 == 1) && (n % 3 == 0)) {
		printf("true\n");
	}
	else if ((n % 2 == 0) && (n % 5 == 0)) {
		printf("false\n");
	}

	return 0;
}