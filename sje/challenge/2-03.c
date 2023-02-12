#include <stdio.h>
int main(void)
{
	int arr[10];
	int i, num;
	int* ptr1 = &arr[0];
	int* ptr2 = &arr[9];
	printf("총 10개의 숫자 입력\n");
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &num);
		if ((num % 2) != 0)
			*(ptr1++) = num;
		else
			*(ptr2--) = num;
	}
	printf("배열 요소의 출력: ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}