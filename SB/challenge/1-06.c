#include <stdio.h>
int main(void){
    int num, h, m, s;
    printf("ÃÊ(second) ÀÔ·Â: ");
    scanf("%d", &num);
    h=num/3600; num-=h*3600;
    m=num/60; num-=m*60;
    s=num;
    printf("[h:%d, m:%d, s:%d]\n", h, m, s);
}