#include <stdio.h>
int main(void){
    //pg284
    int num1=10, num2=20;
    int* ptr1=&num1;
    int* ptr2=&num2;
    for(int i=0;i<10;i++){
        (*ptr1)++;
        (*ptr2)--;
    }
    printf("num1: %d\n",num1);  //num1 10 증가된 값
    printf("num2: %d\n",num2);  //num2 10 감소된 값

    int* temp = ptr1;  //이렇게 값을 옮기려면 저장공간을 만들어 줘야 함
    ptr1= ptr2;
    ptr2= temp;
    printf("*ptr1: %d\n",*ptr1);  //num2의 값
    printf("*ptr2: %d\n",*ptr2);  //num1의 값
    return 0;
}