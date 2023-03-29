#include <stdio.h>
int main(void)
{
    int a;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &a);

	if (a % 2 == 1 && a < 5)
	{
		printf("A\n");
	}
	else if (a % 2 == 1 && a >= 5)
	{
		printf("B\n");
	}
	else
	{
		printf("C\n");
    }
}