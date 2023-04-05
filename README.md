# Amicom C 스터디 연습장

- 아미콤 C 스터디 전용 레포지토리입니다.
- 매 주차마다 학습 내용과 실습 내용을 README 파일과 각자의 C 파일에 자유롭게 작성합니다.
- 정해진 작성 형식은 없습니다.

## 1주차 배운 내용
```c
 #include "main.h"
int main()
{
    printf("Total days in Year\n");
    printf("365\n");
    printf("Circumference rate\n");
    printf("3.1415926535\n");
    
    int a, b;
    printf("정수를 두 개 입력하세요");
    scanf("%d %d",&a, &b);
    printf("%d %d",a, b);
    
    return 0;
    
}
```

## 2주차 배운 내용

> 1번 문제
```c
include "main.h"
int main()
{
    int num1 = 0;
    printf(" 1 ≤ n ≤ 100");
    printf("입력: ");
    scanf("%d", &num1);
    
    
    
    if((num1 % 2 != 0 && num1 % 3 == 0) || (num1 % 2 == 0 && num1 % 5 == 0))
    {
        printf("출력: True");
    }
    else{
        printf("출력: False");
    }
    return 0;
}
```

> 2번문제
```c
int main() {
    
    int a;
    
    printf("정수를 입력하세요");
    scanf("%d", &a);
    if(a % 2 != 0 && a <= 5){
        printf("A");
    }
    else if(a%2 != 0 && a>=5){
        printf("B");
    }
    else{
        printf("C");
    }
    return 0;
}
```

> 3번문제
```c
#include <stdio.h>

int main() {
    for(int i = 1 ; i<=6; i++){
        if ( i % 2 != 0 ){
            for(int j = 0 ; j<i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
             printf("$\n");
        }
    return 0;
}
```

## 3주차 배운 내용
> git 문제
```
#include <stdio.h>

int is369Number(int x);
int is3MultipleNumber(int y);

int main()
{
    int a = 0, b = 0, count = 0;
    printf("1부터 99사이의 정수 두개를 입력하세요.\n");
    scanf("%d %d", &a, &b);
    
    for(int i = a; i < b; i++)
    {
        if(is369Number(i))
         count++;
    
        else if(is3MultipleNumber(i))
         count++;
    }
    printf("%d ", count);
    return 0;
}

 int is369Number(int x)
{
     int d;
    if (x % 10 == 3 || x % 10 == 6 || x % 10 == 9 )
        d = 1;
    else if(x / 10 == 3 || x / 10 == 6 || x / 10 == 9)
        d = 1;
    else
         d = 0;
         return d;
}
 int is3MultipleNumber(int y)
{
     int c;
     if(y % 3 == 0)
         c = 1;
     else c = 0;
     return c;
}

```

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
