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
            printf("ȸ���� �ƴմϴ�. \n");
            break;
        }
    }
    if (is!=1)
        printf("ȸ���Դϴ�. \n");

}
int main(void)
{
    char str[30];
    printf("���ڿ� �Է�: ");
    scanf("%s", str);
    pal(str);
}