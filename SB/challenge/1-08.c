#include <stdio.h>
unsigned int r=1;
int square(int n){
    if (n!=0){
        r*=2; n--;
        square(n);}
    return r;
}
int main(void){
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);
    printf("2의 %d승은 %d\n", num, square(num));
}