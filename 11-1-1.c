#include <stdio.h>
int main(void)
{
	int i, sum=0;
	int arr[5] = { 0 };
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	int max = arr[0]; int min = arr[0]; 
	for (i = 1; i < 5; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	for (i = 1; i < 5; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	for (i = 0; i < 5; i++)
		sum += arr[i];
	printf("�Է��� ���� �� �ִ�: %d\n", max);
	printf("�Է��� ���� �� �ּڰ�: %d\n", min);
	printf("�Է��� ������ �� ��: %d\n", sum);
	return 0;
}