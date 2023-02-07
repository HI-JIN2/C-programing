/*

도전6
Created by 유진 on 2023.02.03.

프로그램 사용자로부터 초(second)를 입력 받은 후에, 이를 [시, 분, 최]의 형테로 출력하는 프
로그램을 작성해 보자.
실행의 예
초(second) 입력: 3615
[h:1, m:0, s:15]*/

#include<stdio.h>
int main(){
    int second;
    scanf("%d",&second);

    int h=second/3600;
    int m=(second%3600)/60;
    int s=second%60;
    
    printf("h:%d, m:%d, s:%d",h,m,s);
}