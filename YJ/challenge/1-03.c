/*
도전 3
Created by 유진 on 2023.02.03.

두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램을 작성 해 보자.
실행의 예
두 개의 정수 입력: 6 9
두수의 최대공약수: 3
도전3의 해결을 위한 GUIDE
정수 num1과 num2의 최대 공약수는 num1이나 num2보다 클 수 없다. 그리고 num과 num2의
최대 공악수로 num1 또는 num2를 나누면 나머지가 0이| 된다. 이 두 가지 특성을 이용하면 최대 공약
수를 쉽게 구할 수 있다. 참고로 여유가 된다면 인터넷에서 '유클리드 호제법'이라는 것을 조사해보자.
그리고 이를 기반으로 문제의 해결을 한번 더 시도하기 바란다.
*/

#include<stdio.h>

int GCD(int a, int b){

    int r = a%b;
    if (r ==0) return b;

    return GCD(b,r);
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int result = GCD(a,b);
    printf("%d",result);

    return 0;
}