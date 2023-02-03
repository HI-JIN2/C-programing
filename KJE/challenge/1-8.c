#include<stdio.h>
int pow(int n);
int main(void){
    //2의 n승 구하기
    int n;
    printf("정수 입력:");
    scanf("%d",&n);
    printf("2의 %d승은 %d",n,pow(n));
    return 0;
}
int pow(int n){
    if(n==0){
        return 1;
    }
    else{
        return 2*pow(n-1);
    }
}