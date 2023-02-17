#include <stdio.h>
int main(void)
{
    int arr[5];
    int sum=0;
    for (int i=0; i<5; i++)
    {
        printf("정수 입력: ");
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
    printf("입력된 정수 중에서 최댓값: %d\n", max);
    printf("입력된 정수 중에서 최솟값: %d\n", min);
    printf("입력된 정수의 총 합: %d\n", sum);
}