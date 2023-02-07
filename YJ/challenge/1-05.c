/*

도전5
Created by 유진 on 2023.02.03.

10개의 소수(Prime Number)를 출력하는 프로그램을 작성해 보자. 참고로 정수 num이 1과
num으로 밖에 나눠지지 않는다면 이는 소수에 해당한다. 따라서 3은 소수이다. 그러나 4는 소
수가 아니다. 1, 2, 4로 나눠지기 때문이다.
실행의 예
2 3 5 7 11 13 17 19 23 29*/

#include <stdio.h>
int main()
{
    int n = 0;
    for (int i = 0; i < 10; i++)
    {
        n++;
        while (1)
        {
            int count = 0;
            for (int z = 1; z <= n; z++)
            {
                if (n % z == 0)
                    count++; // 소수
            }
            if (count == 2)
            {
                printf("%d ", n); // 소수 아님
                break;
            }
            else
                n++;
        }
    }
}
