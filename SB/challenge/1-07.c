#include <stdio.h>
int main(void){
    int num, k=0, r=1;
    printf("��� n�Է�: ");
    scanf("%d", &num);
    for (; r<=num; k++)
        r*=2;
    printf("������ �����ϴ�  k�� �ִ밪�� %d\n", k-1);
}