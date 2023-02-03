#include<stdio.h>
#include<math.h>
int main(void){
    int n, k;
    printf("상수 n 입력:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){  //등호 안 붙여야 함
        if(pow(2,i)<n){
            continue;
        }
        else{
            k=i;
            break;
        }
    }
    printf("공식을 만족하는 k의 최댓값은:%d",k);
    return 0;
}