#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int per, com, win=0, same=0 ;
	char arr[11] = "0����������";
	srand((int)time(NULL));
	while (1)
	{
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &per);
		com = rand() % 3 + 1;
		if (per > com)
		{
			printf("����� %d ����, ��ǻ�ʹ� %d ����, �̰���ϴ�!\n", per, com);
			win++;
		}
		else if (per == com)
		{
			printf("����� %d ����, ��ǻ�ʹ� %d ����, �����ϴ�!\n", per, com);
			same++;
		}
		else
		{
			printf("����� %d ����, ��ǻ�ʹ� %d ����, �����ϴ�!\n", per, com);
			break;
		}
	} printf("\n");
	printf("������ ���: %d��, %d�� ", win, same);
	return 0;
}