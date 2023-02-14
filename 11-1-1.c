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
	printf("입력한 정수 중 최댓값: %d\n", max);
	printf("입력한 정수 중 최솟값: %d\n", min);
	printf("입력한 정수의 총 합: %d\n", sum);
	return 0;
}