#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int per[3];
	int com[3];
	int i, j, ball = 0, strike = 0, count = 0;
	srand((int)time(NULL));
	for (i = 0; i < 3; i++)
		com[i] = rand() % 10;
	printf("Start Game!\n");
	while (strike != 3)
	{
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &per[0], &per[1], &per[2]);
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
				if (per[i] == com[j])
					ball++;
		}
		for (i = 0; i < 3; i++)
		{
			if (per[i] == com[i])
				strike++;
		}
		count++;
		printf("%d번째 도전 결과: %dstrike, %dball!\n", count, strike, ball);
		strike = 0;   ball = 0;
	} 
	printf("\n"); printf("Game Over!\n");
	return 0;
}