#include <stdio.h>
void cal (int num1, int num2);
int main(void)
{
	int num1, num2;
	printf("���� �ΰ��� �Է��Ͻÿ�: ");
	scanf("%d %d", &num1, &num2);
	cal(num1, num2);    //2�� 4 �Է½� 
	return 0;
}

void cal(int num1, int num2)
{
	int i, j, res;
	if (num1 < num2)
	{
		for (i = num1; i <= num2; i++)    //num1 < num2 �� ���
		{
			for (j = 1; j <= 9; j++)        
			{
				printf("%d*%d=%d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
	else
	{
		for (i = num2; i <= num1; i++)    //num1 > num2 �� ���
		{
			for (j = 1; j <= 9; j++)         //�� �� ����
			{
				printf("%d*%d=%d\n", i, j, i * j);
			}
			printf("\n");
		}
	}
}