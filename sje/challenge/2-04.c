#include <stdio.h>
void change(char* voca, int len);
int main(void)
{
	char str[20];
	int len = 0;
	printf("문자열 입력: ");
	scanf("%s", str);
	char* ptr = str;   
	while (str[len] != '\0')
		len++;
	change(str, len);
	return 0;
}

void change(char* voca, int len)
{
	char* voc1 = &voca[0];
	char* voc2 = &voca[len - 1];
	int i, a=0 ;
	for (i = 0; i < (len / 2); i++)
	{
		if (*(voc1++) == *(voc2--))
		{
			a++;
			continue;
		}
		else
		{
			printf("회문이 아닙니다.");
			break;
		}
	}
	if (a == (len / 2))
		printf("회문 입니다.");
}