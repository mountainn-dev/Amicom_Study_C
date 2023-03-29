# Amicom C 스터디 연습장

- 아미콤 C 스터디 전용 레포지토리입니다.
- 매 주차마다 학습 내용과 실습 내용을 README 파일과 각자의 C 파일에 자유롭게 작성합니다.
- 정해진 작성 형식은 없습니다.

## 1주차 배운 내용
```C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a, b;

	printf("Total days in Year\n");
	printf("365\n");
	printf("Circumference rate\n");
	printf("3.1415926535\n");

	printf("정수 입력 : ");
	scanf("%d %d", &a, &b);
	printf("입력된 정수 a = %d, b = %d \n", a, b);


	return 0;
}

```

## 2주차 배운 내용
Question1.
'''C
#include <stdio.h>

int main() {
	int n;
	
	printf("자연수 n을 입력하세요: ");
	scanf_s("%d", &n);

	if ((n % 2 == 1) && (n % 3 == 0)) {
		printf("true\n");
	}
	else if ((n % 2 == 0) && (n % 5 == 0)) {
		printf("false\n");
	}

	return 0;
}
'''
Question2.
'''C
#include <stdio.h>

int main() {
	int a;

	printf("자연수 a를 입력하세요 : ");
	scanf_s("%d", &a);

	if ((a % 2 == 1) && (a < 5))
		printf("A\n");
	else if ((a % 2 == 1) && (a >= 5))
		printf("B\n");
	else
		printf("C\n");

	return 0;
}
'''
Question3.
'''C
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
'''

## 3주차 배운 내용
- 이곳에 작성하시면 됩니다.

## 4주차 배운 내용
- 이곳에 작성하시면 됩니다.

## 5주차 배운 내용
- 이곳에 작성하시면 됩니다.

## 6주차 배운 내용
- 이곳에 작성하시면 됩니다.

## 7주차 배운 내용
- 이곳에 작성하시면 됩니다.

## 8주차 배운 내용
- 이곳에 작성하시면 됩니다.

## 9주차 배운 내용
- 이곳에 작성하시면 됩니다.

## 10주차 배운 내용
- 이곳에 작성하시면 됩니다.
