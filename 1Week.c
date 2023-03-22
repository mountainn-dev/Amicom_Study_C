// 1.
# include <stdio.h>

void main() {
	printf("%s \n", "3.1415926535");
}

// 2.
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void main() {
	int n,m=0;

	scanf("%d %d", &n, &m);

	printf("%d %d", n, m);
}