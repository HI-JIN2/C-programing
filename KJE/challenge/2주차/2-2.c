#include<stdio.h>
int main(void){
    //10진수 입력 받고 2진수로 변환
    //10진수를 계속 2로 나누고 결국 나머지가 1이어야 함
    int arr[100], n, i=0;
    printf("10진수 정수 입력:");
    scanf("%d",&n);
    while(n>0){  
            arr[i]=n%2;  //나머지가 들어감
            n=n/2;  //몫이 새 n으로 갱신됨
            i++;
    }
    for(int k=i-1;k>=0;k--){  //가운데가 k==0이라면 k==0일 때만 실행함을 의미한다. 
        printf("%d",arr[k]);
    }
    return 0;
}