#include <stdio.h>
int main(void)
{
	int cream = 500, shrimp = 700, coke = 400, total = 3500 ;
	int h, i, j ; 
	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500\n");
	for (h = 1; h <= 4; h++)   //ũ����
	{ 
		for (i = 1; i <= 4; i++)  //�����
		{
			for (j = 1; j <= 5; j++)   // �ݶ�
			{
				if (total == (cream*h + shrimp * i + coke * j))
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", h, i, j);
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�? ");
	return 0;
}