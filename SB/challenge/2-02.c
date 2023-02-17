#include <stdio.h>
int main(void)
{
    int i, k=0;
    int arr[20];
    printf("10진수 정수 입력: ");
    scanf("%d", &i);

    while (i>=2)
    {
        arr[k]=i%2;
        k++;
        i=i/2;
    }
    arr[k]=i;

    for (; k>=0; k--)
    printf("%d ", arr[k]);
}
