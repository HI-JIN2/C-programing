#include <stdio.h>
int main(void){
    int b, s, c, m=3500;
    printf("현재 당신이 소유하고 있는 금액: 3500\n");
    for (b=1; b*500<=3500; b++)
        for (s=1; s*700<=3500; s++)
            for (c=1; c*400<=3500; c++)
                if (b*500+s*700+c*400==m)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", b, s, c);
    printf("어떻게 구입하시겠습니까?\n");
}