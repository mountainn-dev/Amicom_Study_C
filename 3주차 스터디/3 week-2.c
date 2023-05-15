#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

int main() {

	char abcd[] = "Hello Wolrd you can do it don't give up";
	char abcd1[MAX];

	strcpy(abcd1, abcd);

	printf("%d\n", strlen(abcd1));
	
	return 0;
 }
