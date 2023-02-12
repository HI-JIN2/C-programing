#include <stdio.h>
void DesSort(int num[7]);
int main (void)
{
	int arr[7] = { 0 };
	int i;
	for (i = 0; i < 7; i++)
	{
		printf("ют╥б: ");
		scanf("%d", &arr[i]);
	}
	DesSort(arr);
	return 0;
}

void DesSort(int num[7])
{




	int i, j, temp;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < (6 - i); j++)
		{
			if (num[j] < num[j + 1])
			{
				temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for (i = 0; i < 7; i++)
		printf("%d ", num[i]);
}