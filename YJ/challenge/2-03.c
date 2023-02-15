#include<stdio.h>

int main(void)
{
	int arr[10];
	int first=0, end=9;
	
	printf("총 10개의 숫자 입력 \n");
	int num;
	for(int i=0; i<10; i++)
	{
		printf("입력: ");
		scanf("%d", &num);
		if(num%2==1)
			arr[first++]=num;
		else
			arr[end--]=num;
	}

	printf("배열 요소의 출력 : ");
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);

	return 0;
}