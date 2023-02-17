#include <stdio.h>
int odd(int n[10])
{
    printf("홀수 출력: ");
    for (int i=0; i<10; i++)
    {
        if (n[i]%2!=0)
        printf("%d,", n[i]);
    }
    printf("\b \n");
}
int even(int n[10])
{
    printf("짝수 출력: ");
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

    printf("정수 입력: ");
    for (i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    odd(arr);
    even(arr);
    
}