#include <stdio.h>
int main(void){
    printf("현재 당신이 소유하고 있는 금액: 3500원\n");
    int bread = 500, snack = 700, coke= 400;
    for(int i=1; i<5; i++){
        for(int j=1; j<4; j++){
            for(int k=1; k<5; k++){
                if((bread*i + snack*j + coke*k)==3500){
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k);
                }
            }
        }
    }
    printf("어떻게 구입하시겠습니까?\n");
    return 0;
}