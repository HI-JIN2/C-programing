#include <stdio.h>
int main(void){
    // 10개의 소수 출력
    // 입력받은 숫자보다 작은 모든 숫자들로 다 나눠 본다.
    int ans=2;
    for(int count=1; count<10; count++){  //10개 세기
        for(int ans=2;ans<count;ans++){
            for(int j=2; j<=ans;j++){
                if(ans%j==0){
                    break;
                }
                if(ans==j){
                    printf("%d\n",ans);
                }   
            }
        }
    }
    return 0;
}