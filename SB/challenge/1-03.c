#include <stdio.h>
int main(void){
    int num1, num2, i;
    printf("두개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    if (num1>=num2) i=num2;
    else i=num1;
    for (; i>=1; i--){
        if (num1%i==0 && num2%i==0)
        break;}
    printf("두수의 최대공약수: %d", i);
}