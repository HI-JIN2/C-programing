#include <stdio.h>
int main(void)
{
	int num;
	printf("10진수 정수: ");
	scanf("%d", &num);
	printf("16진수로는 %0x입니다", num);
	return 0;
}