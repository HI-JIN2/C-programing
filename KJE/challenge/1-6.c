#include<stdio.h>
int main(void){
    //초 입력 받은 후에 시 분 초 출력하기
    int time, hour, minute, second;
    printf("초 입력:");
    scanf("%d",&time);
    hour = time/3600;
    int res = time%3600;
    minute = res/60;
    second = res%60;
    printf("[h:%d, m:%d, s:%d]", hour, minute, second);
    return 0;
}