#include <stdio.h>
int main(void)
{
	int arr[10];
	int i, num;
	int* ptr1 = &arr[0];
	int* ptr2 = &arr[9];
	printf("�� 10���� ���� �Է�\n");
	for (i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &num);
		if ((num % 2) != 0)
			*(ptr1++) = num;
		else
			*(ptr2--) = num;
	}
	printf("�迭 ����� ���: ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}