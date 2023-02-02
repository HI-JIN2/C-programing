#include <stdio.h>
void big(int num1, int num2);    // num1 < num2
void small(int num1, int num2);  // num1 > num2
int main(void)
{
	int i, num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	if (num1 < num2 )
		big(num1, num2);
	else if (num1 > num2)
		small(num1, num2);
	return 0;
}

void big(int num1, int num2)
{
	int GCD = 1, a=0, i ;
	for (i = 1; i <= num1; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
			a++;
	}
	if (a > 1)
	{
		for ( i = 2; i <= num1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				GCD *= i;
				num1 /= i;
				num2 /= i;
				i = 1;
			}
		}
		printf("두 수의 최대공약수: %d", GCD);
	}
	else
		printf("두 수의 최대공약수: 1");
}

void small(int num1, int num2)
{
	int GCD = 1, a=0, i ;
	for (i = 1; i <= num2; i++)
	{
		if (num1 % i == 0 && num2 % i == 0)
			a++;
	}
	if (a > 1)
	{
		for (i = 2; i <= num2; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				GCD *= i;
				num1 /= i;
				num2 /= i;
				i = 1;
			}
		}
		printf("두 수의 최대공약수: %d", GCD);
	}
	else
		printf("두 수의 최대공약수: 1");
}