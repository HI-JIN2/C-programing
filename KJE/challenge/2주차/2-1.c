#include<stdio.h>
void odd(int array[]){
    printf("홀수 축력:");
    for(int i=0;i<10;i++){
        if(array[i]%2==1){
            printf("%d, ",array[i]);
        }
    }
}
void even(int array[]){
    printf("짝수 출력:");
    for(int i=0;i<10;i++){
        if(array[i]%2==0){
            printf("%d, ",array[i]);
        }
    }
}
int main(void){
    int array[11];
    printf("총 10개의 숫자 입력\n");
    for(int i=0; i<10;i++){
        printf("입력:");
        scanf("%d",&array[i]);
    }
        even(array);
        odd(array);
    return 0;
}