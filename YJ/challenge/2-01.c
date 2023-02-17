#include<stdio.h>
#include<string.h>

void PrintOdd(int *arr, int len)
{
	for(int i=0; i<len; i++)
	{
		if(arr[i]%2!=0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

void PrintEven(int *arr, int len)
{
	for(int i=0; i<len; i++)
	{
		if(arr[i]%2==0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}


int main(void)
{
	int arr[10];
	int i;
	
	printf("총 10개의 숫자 입력\n");
	for(i=0; i<10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	printf("홀수 출력: ");
	PrintOdd(arr, sizeof(arr)/sizeof(int));

	printf("짝수 출력: ");
	PrintEven(arr, sizeof(arr)/sizeof(int));

	return 0;
}

