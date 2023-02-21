#include <stdio.h>
int MaxAndMin(int** maxP, int** minP, int a[5])
{
	int* min, * max;
	min = max = &a[0];
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > *max)
			max = &a[i];
		if (a[i] < *min)
			min = &a[i];
	}
	*maxP = max;
	*minP = min;

}
int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("%d��° �迭�� �Է�: ", i + 1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("%d %d\n", *maxPtr, *minPtr);

}