#include <stdio.h>
int main(void)
{
	int grade[5][5] = { 0 };
	int i, j;

	for (i = 0; i < 4; i++)
	{
		printf("%d��° �л� ���� ���� �Է�: ", i + 1);
		scanf("%d", &grade[i][0]);
		printf("%d��° �л� ���� ���� �Է�: ", i + 1);
		scanf("%d", &grade[i][1]);
		printf("%d��° �л� ���� ���� �Է�: ", i + 1);
		scanf("%d", &grade[i][2]);
		printf("%d��° �л� ���� ���� �Է�: ", i + 1);
		scanf("%d", &grade[i][3]);
	}

	for (i = 0; i < 5; i++) //�л��� ����
		for (j = 0; j < 4; j++)
		{
			grade[i][4] += grade[i][j];
		}
	for (j = 0; j < 5; j++) //���� ����
		for (i = 0; i < 4; i++)
		{
			grade[4][j] += grade[i][j];
		}

	for (i = 0; i < 5; i++)
	{

		for (j = 0; j < 5; j++)
			printf("%3d ", grade[i][j]);
		printf("\n");
	}

}