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
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &game);
		com = rand() % 3 + 1;

		if (game == com)
		{
			if (game == 1)
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
			if (game == 2)
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �����ϴ�!\n");
			if (game == 3)
				printf("����� �� ����, ��ǻ�ʹ� �� ����, �����ϴ�!\n");
			tie++;
		}
		if ((game==1&&com==2) || (com + 2 == game) || (game==2&&com==3))
		{
			if (game == 1)
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
			if (game == 2)
				printf("����� ���� ����, ��ǻ�ʹ� �� ����, �̰���ϴ�!\n");
			if (game == 3)
				printf("����� �� ����, ��ǻ�ʹ� ���� ����, �̰���ϴ�!\n");
			win++;
		}
			
	} while ((game == com)|| (game == 1 && com == 2) || (com + 2 == game) || (game == 2 && com == 3));
	
	if (game == 1)
		printf("����� ���� ����, ��ǻ�ʹ� �� ����, ����� �����ϴ�!\n");
	if (game == 2)
		printf("����� ���� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�!\n");
	if (game == 3)
		printf("����� �� ����, ��ǻ�ʹ� ���� ����, ����� �����ϴ�!\n");

	printf("\n������ ��� : %d�� %d��\n", win, tie);
}