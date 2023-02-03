#include <stdio.h>
int gcd(int n1, int n2);
int main(void){
    // 두 개의 정수를 입력받고 최대 공약수
    int n1, n2, ans;
    printf("두 개의 정수를 입력하세요:");
    scanf("%d %d", &n1, &n2);
    for(int i=0; i<n1 && i<n2; i++){  //최대공약수는 n1, n2보다 클 수 없다
        if(n1%i==0 &&n2%1==0){  //나머지가 0이 되어야 한다
            ans = i;
        }
    }
    printf("결과: %d", ans);
    return 0;
}