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
	
	printf("�� 10���� ���� �Է�\n");
	for(i=0; i<10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	printf("Ȧ�� ���: ");
	PrintOdd(arr, sizeof(arr)/sizeof(int));

	printf("¦�� ���: ");
	PrintEven(arr, sizeof(arr)/sizeof(int));

	return 0;
}

