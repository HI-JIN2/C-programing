#include <stdio.h>
int main(void)
{
    int arr[5];
    int sum=0;
    for (int i=0; i<5; i++)
    {
        printf("���� �Է�: ");
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    int max=arr[0], min=arr[0];
    for (int i=1; i<5; i++)
    {
        if (arr[i]>=max)
        max=arr[i];
        if (arr[i]<=min)
        min=arr[i];
    }
    printf("�Էµ� ���� �߿��� �ִ�: %d\n", max);
    printf("�Էµ� ���� �߿��� �ּڰ�: %d\n", min);
    printf("�Էµ� ������ �� ��: %d\n", sum);
}