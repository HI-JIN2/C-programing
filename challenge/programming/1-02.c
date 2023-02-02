#include <stdio.h>
void cal (int num1, int num2);
int main(void)
{
	int num1, num2;
	printf("정수 두개를 입력하시오: ");
	scanf("%d %d", &num1, &num2);
	cal(num1, num2);    //2와 4 입력시 
	return 0;
}

void cal(int num1, int num2)
{
	int i, j, res;
	if (num1 < num2)
	{
		for (i = num1; i <= num2; i++)    //num1 < num2 일 경우
		{
			for (j = 1; j <= 9; j++)        
			{
				printf("%d*%d=%d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
	else
	{
		for (i = num2; i <= num1; i++)    //num1 > num2 일 경우
		{
			for (j = 1; j <= 9; j++)         //각 단 곱셈
			{
				printf("%d*%d=%d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
}