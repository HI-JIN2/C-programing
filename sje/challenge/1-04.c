#include <stdio.h>
int main(void)
{
	int cream = 500, shrimp = 700, coke = 400, total = 3500 ;
	int h, i, j ; 
	printf("현재 당신이 소유하고 있는 금액: 3500\n");
	for (h = 1; h <= 4; h++)   //크림빵
	{ 
		for (i = 1; i <= 4; i++)  //새우깡
		{
			for (j = 1; j <= 5; j++)   // 콜라
			{
				if (total == (cream*h + shrimp * i + coke * j))
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", h, i, j);
			}
		}
	}
	printf("어떻게 구매하시겠습니까? ");
	return 0;
}