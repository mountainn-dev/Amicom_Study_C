//
//  example.c
//  week3_array_1
//
//  Created by 한가은 on 2023/04/04.
//

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
