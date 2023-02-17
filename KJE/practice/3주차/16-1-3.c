#include <stdio.h>
int main(void){
    //pg349
    int arr[5][5];
    int sum;
    int subjectSum;
    for(int i=0;i<4;i++){
        sum=0;  //꼭 초기화 안에서 해주기
        if(i==0){
                printf("철희의 성적 입력\n");
            }
            else if(i==1){
                printf("철수의 성적 입력\n");
            }
            else if(i==2){
                printf("영희의 성적 입력\n");
            }
            else{
                printf("영수의 성적 입력\n");
            }
        for(int j=0;j<4;j++){
            if(j==0){
                printf("국어:");
                scanf("%d",&arr[i][j]);
            }
            if(j==1){
                printf("영어:");
                scanf("%d",&arr[i][j]);
            }
            if(j==2){
                printf("수학:");
                scanf("%d",&arr[i][j]);
            }
            if(j==3){
                printf("국사:");
                scanf("%d",&arr[i][j]);
            }
            sum+=arr[i][j];
        }
        arr[i][4]=sum;  //총점
    }

    for(int i=0;i<4;i++){
        subjectSum=0;  //꼭 초기화 안에서 해주기
        for(int j=0;j<4;j++){
            subjectSum+=arr[j][i];
        }
        arr[4][i]=subjectSum;  //과목별 총점
        arr[4][4]+=subjectSum;
    }

    for(int i=0;i<4;i++){
        printf("과목별 총점: %d\n",arr[4][i]);
    }
    for(int i=0;i<5;i++){
        printf("총점: %d\n", arr[i][4]);  //최종총점이 89가 아니라 90으로 나온다..이유가 뭘까..
    }
    return 0;
}