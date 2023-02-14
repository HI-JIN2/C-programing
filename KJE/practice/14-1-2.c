#include <stdio.h>
void Swap3(int* ptr1, int* ptr2, int* ptr3){
    int temp = *ptr1;
    *ptr1 = *ptr3;
    *ptr3= *ptr2;
    *ptr2 = temp;
}
int main(void){
    //pg320
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;
    printf("Before-num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
    Swap3(&num1, &num2, &num3);
    // num1-> num2, num2-> num3, num3-> num1
    printf("After-num1: %d, num2: %d, num3: %d", num1, num2, num3);
    return 0;
}