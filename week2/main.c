//
//  main.c
//  week 2 practice 3_star point
//
//  Created by 한가은 on 2023/03/29.
//
/*
 Hint) 홀수 짝수번째
 *
 $
 ***
 $
 *****
 $
 */
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
