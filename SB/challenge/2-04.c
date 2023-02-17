#include <stdio.h>
void pal(char str[30])
{
    int i=0, k, is;
    while (str[i]!='\0')
    {
        i++;
    }
    for (k=0; k<i/2; k++)
    {
        if (str[k]!=str[i-1-k])
        {
            is=1;
            printf("회문이 아닙니다. \n");
            break;
        }
    }
    if (is!=1)
        printf("회문입니다. \n");

}
int main(void)
{
    char str[30];
    printf("문자열 입력: ");
    scanf("%s", str);
    pal(str);
}