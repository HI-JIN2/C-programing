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
    printf("���� �Է�: ");
    scanf("%d", &num);
    printf("2�� %d���� %d\n", num, square(num));
}