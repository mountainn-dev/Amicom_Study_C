#include <stdio.h>
int main() {
	int x;
	printf("�Է�:\n");
	scanf_s("%d", &x);
	
	if ((x % 2 == 1 && x % 3 == 0) || (x % 2 == 0 && x % 5 == 0)) {

		printf("���:\ntrue");
	}

	else {
		printf("���:\nfalse");
	}
	return 0;
}
	
	

