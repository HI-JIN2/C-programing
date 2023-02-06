#include<stdio.h>
int main(void){
    int arr[10];
    printf("총 10개의 숫자 입력\n");
    for(int i=0;i<10;i++){
        printf("입력:");
        scanf("%d",arr[i]);
    }
}