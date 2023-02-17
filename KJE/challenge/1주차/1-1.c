#include <stdio.h>
int main(void){
    //10진수 정수 입력 받아서 16진수로 출력
    int n;
    printf("10진수 정수를 입력하세요: ");
    scanf("%d", &n);
    printf("16진수로 변환한 값: %x", n);
    return 0;  
}