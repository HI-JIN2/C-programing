#include <stdio.h>
int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int i, temp;
	int* first = &arr[0];    int* last = &arr[5];
	for (i = 0; i < 3; i++)
	{
		temp = *last;
		*(last--) = * first;
		*(first++) = temp;

	}
	for (i=0; i<6; i++)
		printf("%d ", arr[i]);
	return 0;
}