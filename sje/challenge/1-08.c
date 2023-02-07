#include <stdio.h>
int cal(int count);
int main(void)
{
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	printf("2의 %d승은 %d", num, cal(num));
	return 0;
}

int cal(int count)
{
	if (count == 0)
		return 1;
	else
		return 2 * cal(count - 1);
}