#include <stdio.h>
int main(void)
{
	int n, i, k, num=1 ;
	printf("��� n �Է�: ");
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
	printf("������ �����ϴ� k�� �ִ��� %d", k);
	return 0;
}