# Amicom C 스터디 연습장

- 아미콤 C 스터디 전용 레포지토리입니다.
- 매 주차마다 학습 내용과 실습 내용을 README 파일과 각자의 C 파일에 자유롭게 작성합니다.
- 정해진 작성 형식은 없습니다.

## 1주차 배운 내용
```C
#include <stdio.h>

int main() {

	int a, b;

	printf("Total days in Year\n");
	printf("365\n");
	printf("Circumference rate\n");
	printf("3.1415926535\n");

	printf("정수 2개를 입력하시오.\n");
	scanf_s("%d %d", &a, &b);

	printf("입력한 정수 : %d %d", a, b);

	return 0;

}

```

## 2주차 배운 내용
First problem
```C
#include <stdio.h>

int main() {

	int a;

	printf("입력: \n");
	scanf_s("%d", &a);

	printf("출력:\n");
	if ((a % 2 == 1 && a % 3 == 0) || (a % 2 == 0 && a % 5 == 0))
		printf("true\n");

	else
		printf("flase\n");

	return 0;

}
```

Second problem
```C
#include <stdio.h>

int main() {

	int a;

	printf("a를 입력하시오 : \n");

	if (a % 2 == 1 && a < 5)
		printf("A\n");

	else if (a % 2 == 1 && a >= 5)
		printf("B\n");

	else if (a % 2 == 0)
		printf("C\n");

	else
		printf("그 어떤곳에도 해당되지 않음\n");

	return 0;
}
```
Third problem

```C
#include <stdio.h>

int main() {

	for (int i = 1; i < 7; i++) {

		if (i % 2 == 1) { //홀수번째에 해당되는 라인
			for (int j = 0; j < i; j++)
				printf("*");
		}

		else
			printf("$");

		printf("\n");

	}

	return 0;
}
```

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
