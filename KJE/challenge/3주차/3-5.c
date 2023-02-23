#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void){
    srand(time(NULL));
    char* arr[3]={"바위","가위","보"};
    int user,com;
    int win=0, same=0, lose=0;
    //가위:1 바위:2 보:3
    //사용자가 질 때까지 해야 하고 게임의 결과를 출력해 줘야 한다.
    while(1){
        printf("바위는 1, 가위는 2, 보는 3:");
        scanf("%d",&user);
        /*
        이기는 조건
        user    com
        바위(1)>가위(2)
        가위(2)>보(3)
        보(3)>바위(1)
        */
        com=rand()%3+1;
        if(user==com){
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n",arr[user-1],arr[com-1]);
            same++;
        }
        else if(user<com && com-user==1||user>com && user-com==2){  
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!\n",arr[user-1],arr[com-1]);
            win++;
        }
        else{
            printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n",arr[user-1],arr[com-1]);
            lose++;
            break;  //조건문이 아니라 while문의 break
        }
    }
    printf("게임의 결과: %d승, %d무, %d패",win,same,lose);
    return 0;
}