#include <stdio.h>
int main(void)
{
	int grade[5][5] = { 0 };
	int i, j;

	for (i = 0; i < 4; i++)
	{
		printf("%d번째 학생 국어 성적 입력: ", i + 1);
		scanf("%d", &grade[i][0]);
		printf("%d번째 학생 영어 성적 입력: ", i + 1);
		scanf("%d", &grade[i][1]);
		printf("%d번째 학생 수학 성적 입력: ", i + 1);
		scanf("%d", &grade[i][2]);
		printf("%d번째 학생 국사 성적 입력: ", i + 1);
		scanf("%d", &grade[i][3]);
	}

	for (i = 0; i < 5; i++) //학생별 총점
		for (j = 0; j < 4; j++)
		{
			grade[i][4] += grade[i][j];
		}
	for (j = 0; j < 5; j++) //과목별 총점
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