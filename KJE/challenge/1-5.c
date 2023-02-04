#include<stdio.h>
int main(void){
    // 10개의 소수 출력
    // 입력받은 숫자보다 작은 모든 숫자들로 다 나눠 본다.
    int ans=2, j=2;
    for(int count=1; count<10; count++){
        while(j<ans){
            if(ans%j==0){
                break;
            }
            else{
                printf("소수 10개:%d\n",ans);
                ans++;
                j=2;
                count++;
            }
            j++;
        }
    }
    return 0;
}