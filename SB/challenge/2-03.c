#include <stdio.h>
int main(void)
{
    int arr[10];
    int save[10];
    int i,k=0, j=9;
    printf("�� 10���� ���� �Է�\n");

    for (i=0; i<10; i++)
    {
        printf("�Է�: ");
        scanf("%d", &arr[i]);
    }
    for (i=0; i<10; i++)
    {
        if (arr[i]%2!=0)
        {
            save[k]=arr[i];
            k++;
        }
        if (arr[i]%2==0)
        {
            save[j]=arr[i];
            j--;
        }
    }
    printf("�迭 ����� ���: ");
    for (i=0; i<10; i++)
    printf("%d ", save[i]);
}