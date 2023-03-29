//1.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int n = 0;
	scanf("%d", &n);

	if (n % 2 == 1 && n % 3 == 0) printf("true");
	if (n % 2 == 0 && n % 5 == 0) {
		printf("true");
	}
	else {
		printf("false");
	}

	return 0;
}

//2.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0;
	scanf("%d", &a);

	if (a % 2 == 1 && a < 5) {
		printf("A");
	}
	else if(a%2==1&&a>=5){
		printf("B");
	}
	else {
		printf("C");
	}

	return 0;
}

// 3.

#include <stdio.h>

void main() {
	int i = 1;

	for (;i<7; i++) {
		if (i % 2 == 0) printf("$ \n");
		if (i % 2 == 1) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}