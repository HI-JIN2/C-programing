#include <stdio.h>
#include <stdlib.h>
int main(void){
    //rand는 0-32767의 값 중 하나가 무작위로 나옴
    for(int i=0;i<5;i++){
        printf("난수 출력: %d\n",rand()%100);  //100으로 나눈 나머지는 항상 0-99 사이이다.
    }
}