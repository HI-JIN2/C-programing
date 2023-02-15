#include <stdio.h>
int main(void){
    //pg260
    int max, min, sum;
    int arr[5];
    max=min=arr[0];
    sum=0;
    printf("5개의 정수를 입력하세요\n");
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<5;i++){
        sum+=arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);
    printf("합계: %d\n", sum);
    return 0;
}