#include <stdio.h>
int main (void)
{
	int a = 0, prime = 0, i, j=1 ;   //소수면 a==1, 소수가 아니면 a>1
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
			prime++;                     //소수 개수 세는 거
			printf("%d ", i);
		}
		a = 0;
	}
	return 0;
}