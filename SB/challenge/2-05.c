#include <stdio.h>
int DesSort(int arr[7])
{
    int i, j, tmp;
    for (i=0; i<6; i++)
    {
        for (j=0; j<6; j++)
        {
            if (arr[j]<arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for (i=0; i<7; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main(void)
{
    int arr[7];
    int i=0;
    for (; i<7; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    DesSort(arr);
}
