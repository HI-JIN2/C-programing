#include <stdio.h>
int main(void)
{
	int hour, minute, second ;
	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf("%d", &second);
	hour = second / 3600;
	minute = (second % 3600) / 60;
	second = (second % 3600) % 60;
	printf("[h:%d, m:%d, s:%d]", hour, minute, second);
	return 0;
}