#include <stdio.h>
int main(void)
{
    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int i = 0;
    int* f = &arr[0];
    int* l = &arr[5];
    int* tmp;
    for (i = 0; i < 3; i++)
    {
        tmp = *f;
        *f = *l;
        *l = tmp;
        f++;
        l--;
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
}