#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int *first = &arr[0];
    int *end = &arr[5];
    // int * temp;

    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = *first;
        *first = *end;
        *end = temp;
        first += 1;
        end -= 1;
    }

    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
}