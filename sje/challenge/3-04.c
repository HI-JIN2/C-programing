#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 2; i++)
		printf("�ֻ��� %d�� ��� %d\n", i + 1, (rand() % 6)+1);
	return 0;
}