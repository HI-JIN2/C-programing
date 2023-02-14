#include <stdio.h> 
int main(void)
{
    int num1=10, num2=20;
    int *ptr1=&num1, *ptr2=&num2;
    int *tmp=0;
    (*ptr1)+=10;
    (*ptr2)-=10;
    tmp=ptr1;
    ptr1=ptr2;
    ptr2=tmp;
    printf("ptr1의 값:%d\nptr2의 값:%d\n", *ptr1, *ptr2);
}