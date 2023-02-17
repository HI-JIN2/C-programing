#include <stdio.h>
void Swap3(int* ptr1, int* ptr2, int* ptr3);
int main(void)
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
	return 0;
}

void Swap3(int* ptr1, int* ptr2, int* ptr3)
{
	int temp1, temp2;
	temp1 = *ptr2;
	*ptr2 = *ptr1;
	temp2 = *ptr3;
	*ptr3 = temp1;
	*ptr1 = temp2;
}