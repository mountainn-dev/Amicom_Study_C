#include <stdio.h>
int main(void)
{
	int n;
	printf("자연수를 입력하세요 (1~100) : ");
	scanf_s("%d", &n);

	if ((n % 2 == 1 && n % 3 == 0) || (n % 2 == 0 && n % 5 == 0))
	{
		printf("true\n");
	}
	else {
		printf("false\n");
	}
 }