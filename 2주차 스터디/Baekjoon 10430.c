#include <stdio.h>
int main() {
	int A, B, C;
	2 <= A;
	B, C <= 10000;
	
	printf("A B C �� �Է��Ͻÿ�:\n");
	scanf_s("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);
	
	return 0;
}