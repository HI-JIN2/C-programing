#include <stdio.h>

int main(void)
{
    int num, cnt = 0;
    char arrayBin[30];

    printf("10�� ���� �Է� : ");
    scanf("%d", &num);

    int i;
    for (i = 0; 0 < num; i++)
    {
        arrayBin[cnt] = num % 2;
        num /= 2;
        i++;
    }

    while (i > 0)
    {
        printf("%d", arrayBin[i]);
        --i;
    }

    printf("\n\n");
    return 0;
}
