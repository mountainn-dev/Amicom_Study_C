//
//  main.c
//  week2
//
//  Created by 한가은 on 2023/03/29.
//

/*
 2번째 문제
 1. a가 홀수면서 5보다 작으면 A를 출력합니다.
 2. a가 홀수면서 5보다 같거나 크면 B를 출력합니다.
 3. a가 짝수면 C를 출력합니다

 */

#include <stdio.h>

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
