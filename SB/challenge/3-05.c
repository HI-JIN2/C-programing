#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand((int)time(NULL));
	int game, com;
	int tie = 0, win = 0 ;
	do
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &game);
		com = rand() % 3 + 1;

		if (game == com)
		{
			if (game == 1)
				printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다!\n");
			if (game == 2)
				printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다!\n");
			if (game == 3)
				printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다!\n");
			tie++;
		}
		if ((game==1&&com==2) || (com + 2 == game) || (game==2&&com==3))
		{
			if (game == 1)
				printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다!\n");
			if (game == 2)
				printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다!\n");
			if (game == 3)
				printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다!\n");
			win++;
		}
			
	} while ((game == com)|| (game == 1 && com == 2) || (com + 2 == game) || (game == 2 && com == 3));
	
	if (game == 1)
		printf("당신은 바위 선택, 컴퓨터는 보 선택, 당신이 졌습니다!\n");
	if (game == 2)
		printf("당신은 가위 선택, 컴퓨터는 바위 선택, 당신이 졌습니다!\n");
	if (game == 3)
		printf("당신은 보 선택, 컴퓨터는 가위 선택, 당신이 졌습니다!\n");

	printf("\n게임의 결과 : %d승 %d무\n", win, tie);
}