#include <stdio.h>
 int main() {
	int a, b;
	for (a = 1; a <= 6; a++) {
		if (a % 2 == 1) {
			for (b = 1; b <= a; b++)
			{
				printf("*");
			 }
			printf("\n");
		}
			else  {
				printf("$");
				printf("\n");
            }
		}
		
 
	 return 0;
	 }