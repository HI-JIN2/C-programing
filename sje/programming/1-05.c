#include <stdio.h>
int main (void)
{
	int a = 0, prime = 0, i, j=1 ;   //�Ҽ��� a==1, �Ҽ��� �ƴϸ� a>1
	for (i = 2; prime<10; i++)
	{
		while (j<i)
		{
			if (i % j == 0)
				a++;
			j++;
		}
		j = 1;
		if (a == 1)
		{
			prime++;                     //�Ҽ� ���� ���� ��
			printf("%d ", i);
		}
		a = 0;
	}
	return 0;
}