#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int per, com, win=0, same=0 ;
	char arr[11] = "0바위가위보";
	srand((int)time(NULL));
	while (1)
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &per);
		com = rand() % 3 + 1;
		if (per > com)
		{
			printf("당신은 %d 선택, 컴퓨터는 %d 선택, 이겼습니다!\n", per, com);
			win++;
		}
		else if (per == com)
		{
			printf("당신은 %d 선택, 컴퓨터는 %d 선택, 비겼습니다!\n", per, com);
			same++;
		}
		else
		{
			printf("당신은 %d 선택, 컴퓨터는 %d 선택, 졌습니다!\n", per, com);
			break;
		}
	} printf("\n");
	printf("게임의 결과: %d승, %d무 ", win, same);
	return 0;
}