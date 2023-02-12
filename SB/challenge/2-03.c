#include <stdio.h>
int main(void)
{
    int arr[10];
    int save[10];
    int i,k=0, j=9;
    printf("총 10개의 숫자 입력\n");

    for (i=0; i<10; i++)
    {
        printf("입력: ");
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
    printf("배열 요소의 출력: ");
    for (i=0; i<10; i++)
    printf("%d ", save[i]);
}