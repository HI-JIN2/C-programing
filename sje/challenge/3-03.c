#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	printf("������ ����: 0���� 99���� \n ");
	for (i = 0; i < 5; i++)
		printf("���� ���: %d\n", (rand() % 100));
	return 0;
}