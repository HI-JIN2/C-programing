#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    /*
    srand: rand함수에 사용도리 수를 초기화 하는 일을 한다. 이 초기화를 매개변수로 받는 seed 값을 이용해서 한다.
    seed값만 바꿔주면 그 seed에 따라 값을 랜덤하게 뽑아 온다.
    */
   srand((int)time(NULL));
   printf("주사위 1의 결과:%d\n",rand()%6+1);  //0부터인데 주사위는 1부터 있으므로
   printf("주사위 1의 결과:%d",rand()%6+1);
    return 0;
}