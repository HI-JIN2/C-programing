#include <stdio.h>
void gugudan(int n1, int n2);  //이걸 꼭 해줘야 하네....함수 정의를 꼭 해줬어야 했나..
int main(void){
    //두 개 정수 입력 받아서 구구단 출력
    int n1, n2;
    printf("구구단 출력을 위한 두개의 정수를 입력하세요:");
    scanf("%d %d", &n1, &n2);
    printf("결과\n");
    gugudan(n1, n2);
    return 0;
}
void gugudan(int n1, int n2){
    if(n1<n2){
        for(int k= n1; k<=n2; k++){
            for(int i =1; i<10; i++){
                printf("%d * %d= %d\n", k, i, k*i);
            }
        }
    }
    else{
        for(int k= n2; k<=n1; k++){
            for(int i =1; i<10; i++){
                printf("%d * %d= %d\n", k, i, k*i);
            }
        }
    }
}