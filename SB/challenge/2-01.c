#include <stdio.h>
int odd(int n[10])
{
    printf("Ȧ�� ���: ");
    for (int i=0; i<10; i++)
    {
        if (n[i]%2!=0)
        printf("%d,", n[i]);
    }
    printf("\b \n");
}
int even(int n[10])
{
    printf("¦�� ���: ");
    for (int i=0; i<10; i++)
    {
        if (n[i]%2==0)
        printf("%d,", n[i]);
    }
    printf("\b \n");
}
int main(void)
{
    int arr[10];
    int i;

    printf("���� �Է�: ");
    for (i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    odd(arr);
    even(arr);
    
}