#include <stdio.h>
int main(void)
{
	int n, i, k, num=1 ;
	printf("상수 n 입력: ");
	scanf("%d", &n);
	for (i = 1; num<n ; i++)
	{
		num *= 2;
		k = i;
		if (num*2<n)
			continue;
		else
			break;  
	}
	printf("공식을 만족하는 k의 최댓값은 %d", k);
	return 0;
}