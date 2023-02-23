#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    int user[3];  //유저
	int com[3];  //컴퓨터
	int strike=0, ball= 0, count = 0;
	for (int i = 0; i < 3; i++){
		com[i] = rand() % 10;  //0부터 9까지
    }
	printf("Start Game!\n");
	while (strike != 3)
	{
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++){
				if (user[i] == com[j]){
					ball++;
                }
            }
		}
		for (int i = 0; i < 3; i++)
		{
			if (user[i] == com[i])
				strike++;
		}
		count++;
		printf("%d번째 도전 결과: %dstrike, %dball!!\n", count, strike, ball);
		strike = 0;   
        ball = 0;
	} 
    printf("Game Over!\n");
    return 0;
}