#include <stdio.h>
int main(void){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int arr2[4][4]={0};

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr2[i][j]=arr[i][j];  //기존 arr의 값을 다른 곳으로 옮겨 둠으로써 기존 arr을 비워 둔다.
        }
    } 
//바뀐 후의 x좌표는 바뀌기 전의 y 좌표. 바뀐 후의 y좌표는 패턴대로 움직임
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0){
                arr[j][3]=arr2[i][j];
            }
            if(i==1){
                arr[j][2]=arr2[i][j];
            }
            if(i==2){
                arr[j][1]=arr2[i][j];
            }
            if(i==3){
                arr[j][0]=arr2[i][j];
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("90도 회전시킨 배열:%d\n",arr[i][j]);
        }
        printf("\n");
    }
}
