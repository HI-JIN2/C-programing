#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int strike = 0;
int ball = 0;
void numgame(int *c, int *m)
{
	strike = 0;
	ball = 0;
	for (int i = 0; i < 3; i++)
		if (c[i] == m[i])
			strike++;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (c[i] == m[j])
				ball++;
	ball -= strike;
}
int main(void)
{
	srand((int)time(NULL));
	int c[3] = { 0 };
	int m[3] = { 0 };
	int try = 1, i=0;

	for (i = 0; i < 3; i++)
		{
			c[i] = rand() % 10;
		}

	
	do
	{
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &m[0], &m[1], &m[2]);
		numgame(c, m);
		printf("%d번째 도전 결과: %d strike, %d ball!\n", try, strike, ball);
		try++;

	} while (strike != 3);

	printf("Game over!\n");
}