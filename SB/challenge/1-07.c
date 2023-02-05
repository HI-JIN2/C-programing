#include <stdio.h>
int main(void){
    int num, k=0, r=1;
    printf("상수 n입력: ");
    scanf("%d", &num);
    for (; r<=num; k++)
        r*=2;
    printf("공식을 만족하는  k의 최대값은 %d\n", k-1);
}