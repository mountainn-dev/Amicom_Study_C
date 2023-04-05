#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	char abcd[] = "Hello world you can do it don't give up";
	char copy[100];
	for (int i = 0; abcd[i] != 0; i++)
	{
		copy[i] = abcd[i];
		count++;
	}
	copy[count] = abcd[count];
	for(int i = 0; copy[i]!=0;i++)
		printf("%c", copy[i]);
	
	return 0;
}