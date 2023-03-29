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
반복문 : 프로그램 내에서 똑같은 명령을 일정 횟수만큼 반복하여 수행하도록 제어하는 명령문
1. while문
2. do / while 문
3. for문

[while 문]
: 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 반복실행한다.
```C
int i = 0;
int num = 5;

while (i < num){
	printf("while문이 %d 번째 반복수행 중입니다.\n", i+1);
	i++; // 무한루프 방지
}
printf("while문이 종료된 후 변수 i의 값은 %d이다.\n", i);
```
while문 내부에 조건식의 결과를 변경하는 명령문이 존재하지 않으면, 무한 루프(infinite loop)에 빠지게 된다.
따라서 while문을 작성할 대는 조건식의 결과가 어느 순간 false(거짓)을 갖도록 조건식의 결과를 변경하는 명령문을 반드시 포함시켜야한다.

[do / while 문]
: 조건식의 결과와 상관없이 반드시 한 번은 루프를 실행한다.

while : 루프에 진입하기 전에 먼저 조건식부터 검사한다.
do / while : 먼저 루프를 한 번 실행한 후 조건식을 검사한다.

```C
int i = 0;
int num = 3;

do{
	printf("do/while 문이 %d번째 반복수행 중입니다.\n", i+1);
	i++;
} while(i > num);
printf("do/while 문이 종료된 후 변수 i값은 %d입니다.\n", i);
```

[for문]
: while 문과 달리 자체적으로 초기식, 조건식, 증감식을 모두 포함하고 있는 반복문 > while문보다 간결하게 표현 가능

```C
for(int i = 0; i < 5; i++){
	printf("for문이 %d번째 반복수행 중입니다.\n", i+0);
]
printf("for문이 종료된 후 변수 i의값은 %d입니다.\n",i);
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
