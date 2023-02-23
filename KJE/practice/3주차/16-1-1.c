#include <stdio.h>
int main(void){
    int gugudan[3][9];
    for(int i=0;i<3;i++){
        for(int j=0;j<9;j++){
            gugudan[i][j]=(i+2)*(j+1);
            printf("gugudan[%d][%d]: %d\n",i,j,gugudan[i][j]);
        }
    }
    return 0;
}