#include <stdio.h>
int main(void){
    int arr[2][4]={
        {1,2,3,4},
        {5,6,7,8}
    };
    int arr2[4][2]={0};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr2[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("arr[%d][%d]: %d\n",i,j,arr2[i][j]);
        }
    }
}