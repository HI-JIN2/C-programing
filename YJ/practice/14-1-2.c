#include<stdio.h>
void Swap3(int *ptr1, int *ptr2, int *ptr3){
    int temp = *ptr3;
    *ptr3=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
}

int main(){

    int num1=30, num2=40, num3=50;    
    Swap3(&num1, &num2, &num3);
    printf("%d %d %d",num1,num2,num3);

}