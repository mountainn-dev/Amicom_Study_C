#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int i = 0; i < 6; i++)
	{
		for (int n = 0; n <= i; n++)
			if (i % 2 == 0)
				printf("*");
		if (i % 2 == 1)
			printf("$");
		printf("\n");
	}

	return 0;
}