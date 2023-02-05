#include <stdio.h>
int main(void){
    // 10개의 소수 출력
    // 입력받은 숫자보다 작은 모든 숫자들로 다 나눠 본다.
    int cnt ,num=30;
	for (int i = 2; i <= num; i++)
	{
		cnt = 0;
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 1) // 나눠지는 수가 1개 뿐인 경우
			printf("%d ", i); 

	}
}