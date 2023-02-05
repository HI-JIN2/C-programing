#include <stdio.h>
int main(void){
    int num=2, i=1, count=1;
    for (; count<=10; num++){
        for (i=1; i<=num; i++){
            if (num%i==0 && i!=num && i!=1)
            break;
            if (i==num)
            {
            printf("%d ", num);
            count++;
            }
        }
    }
}