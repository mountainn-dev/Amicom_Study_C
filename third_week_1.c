#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	int count=0;

	printf("입력: \n");
	scanf("%d %d", &a, &b);
	printf("출력: \n");
	for (int i = a; i <= b; i++)
		if ((i % 10) % 3 == 0 || ((i / 10) != 0 && (i / 10) % 3 == 0))
			count++;
		else if ((i % 3) == 0)
			count++;
	printf("%d 23", count);
		
	
	return 0;
}