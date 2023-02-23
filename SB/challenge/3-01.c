#include <stdio.h>
void change(int (*a)[4])
{
	int s[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			s[i][j] = a[i][j];
	for (int i=0; i<4; i++)
		for (int j = 0; j < 4; j++)
		{
			a[j][3 - i] = s[i][j];
		}
}
int main(void)
{
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	for (int k = 0; k < 3; k++) 
	{
		change(arr);
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
				printf("%3d ", arr[i][j]);
			printf("\n");
		}
		printf("\n\n");
	}

}