#include <stdio.h>
void odd (int * num1) ;
void even (int * num2) ;

int main(void)
{
	int i;
	int arr[10];
	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	odd(arr);
	even(arr);
	return 0;
}

void odd(int* num1)   
{
	int i;
	printf("홀수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if ((num1[i] % 2) != 0)
			printf("%d ", num1[i]);
		else
			continue;
	}
	printf("\n");
}

void even(int* num2)
{
	int i;
	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if ((num2[i] % 2) == 0)
			printf("%d ", num2[i]);
		else
			continue;
	}
	printf("\n");
}