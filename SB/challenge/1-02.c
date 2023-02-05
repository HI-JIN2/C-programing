#include <stdio.h>
int main(void)
{
	int num1, num2;
	printf("2개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	if (num1 >= num2)
		for (; num1 >= num2; num2++)
			for (int i = 1; i <= 9; i++)
				printf("%d * %d = %d\n", num2, i, num2 * i);
	else
		for (; num1 <= num2; num1++)
			for (int i = 1; i <= 9; i++)
				printf("%d * %d = %d\n", num1, i, num1 * i);
	return 0;
}