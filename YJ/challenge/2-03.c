#include<stdio.h>

int main(void)
{
	int arr[10];
	int first=0, end=9;
	
	printf("�� 10���� ���� �Է� \n");
	int num;
	for(int i=0; i<10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &num);
		if(num%2==1)
			arr[first++]=num;
		else
			arr[end--]=num;
	}

	printf("�迭 ����� ��� : ");
	for(int i=0; i<10; i++)
		printf("%d ", arr[i]);

	return 0;
}