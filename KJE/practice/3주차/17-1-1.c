#include<stdio.h>
void MaxAndMin(int arr[5], int** dmaxPtr, int** dminPtr, int size){
    int *max, *min;
    max=min=&arr[0]; //max와 min의 주소 모두 arr[0]의 주소로 초기화
    for(int i=0;i<size;i++){
        if(*max<arr[i]){  //맨 처음에는 *max가 arr[0] 값
            max=&arr[i];  //가장 큰 값을 가지고 있는 주소로 max 변경
        }
        if(*min>arr[i]){
            min=&arr[i];//가장 작은 값을 가지고 있는 주소로 min 변경
        }
    }
    *dmaxPtr=max; //max가 알고보니 *dmaxp. 그러면 **dmaxp는 max의 값
    *dminPtr=min;
}
int main(void){
    //pg368
    int* maxPtr;
    int* minPtr;
    int arr[5];
    for(int i=0;i<5;i++){
        printf("정수 입력:");
        scanf("%d",&arr[i]);
    }
    MaxAndMin(arr,&maxPtr, &minPtr, sizeof(arr)/sizeof(int));  //크기를 보내줌으로써 for문을 그 크기만큼 돌게 함
    printf("최대: %d, 최소: %d", *maxPtr, *minPtr);
    return 0;
}