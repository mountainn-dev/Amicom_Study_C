#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int n;
	printf("�Է�: ");
	scanf("%d", &n);
	printf("���:\n");
	if (n % 2 == 0)
		printf("C\n");
	else if (n <= 5)
		printf("A\n");
	else
		printf("B\n");

	return 0;
}