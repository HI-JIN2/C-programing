#include <stdio.h>
#include <string.h>
void DesSort(int arr[], int len){
    int temp=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len-(i+1);j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);    
    }
}
int main(void){
    //7개 정수 입력 받기
    //가장 큰 값을 배열의 마지막에 보낸다
    int arr[7];
    for(int i=0;i<7;i++){
        printf("입력: ");
        scanf("%d",&arr[i]);
    }
    DesSort(arr, sizeof(arr)/sizeof(int));  //배열의 길이 구하는 법
    //strlen을 쓰면 안되는 이유? -> strlen은 실제 입력된 문자열 길이, sizeof는 그 자체 문자열 길이
}