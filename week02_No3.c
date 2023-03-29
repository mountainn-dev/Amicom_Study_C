#include <stdio.h>

int main() {
	for (int i = 1; i < 7; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % 2 == 1)
				printf("*");
		}
		if (i % 2 == 0)
			printf("$");
		printf("\n");
	}
	return 0;
}