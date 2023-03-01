#include <stdio.h>
int main(void){
    int num1=100, num2=100;
    int* pnum;
    pnum=&num1; //주소값이 pnum에 들어감
    (*pnum)+=30;  //값의 변경
    pnum=&num2;  //포인터 변수 pnum이 가리키는 대상이 num1에서 num2로 변경됨
    (*pnum)-=30;
    printf("num1: %d, num2: %d\n",num1,num2);
    return 0;
}