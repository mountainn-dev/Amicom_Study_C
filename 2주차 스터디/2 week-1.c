#include <stdio.h>
int main() {
	int x;
	printf("입력:\n");
	scanf_s("%d", &x);
	
	if ((x % 2 == 1 && x % 3 == 0) || (x % 2 == 0 && x % 5 == 0)) {

		printf("출력:\ntrue");
	}

	else {
		printf("출력:\nfalse");
	}
	return 0;
}
	
	

