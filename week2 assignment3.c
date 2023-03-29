#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < i+1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			printf("$");
		}
		printf("\n");
	}
}