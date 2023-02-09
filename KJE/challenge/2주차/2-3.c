#include<stdio.h>
int main(void){
    // 홀수이면 배열의 앞에서부터, 짝수면 뒤에서부터 채우기
    int arr[10],n, min=0, max=9;
    printf("총 10개의 숫자 입력\n");
    for(int i=0;i<10;i++){
        printf("입력:");
        scanf("%d",&n);
        if(n%2==1){
            arr[min]= n;
            min++;
        }
        else{
            arr[max]=n;
            max--;
        }
    }
    printf("배열 요소의 출력:");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
}