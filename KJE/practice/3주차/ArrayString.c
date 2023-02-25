#include <stdio.h>
int main(void){
    char str[]="Good morning!";
    printf("배열 str의 크기: %lu\n",sizeof(str));
    //책은 %d라고 되어 있는데 %lu라고 해야 한다.
    //sizeof 연산자의 리턴값이 unsigned long이기 때문이다.
    printf("널 문자 문자형 출력: %c\n",str[13]);
    printf("널 문자 정수형 출력: %d\n",str[13]);
    str[12]='?'; 
    printf("문자열 출력: %s\n",str);
    return 0;
/*
%d: 10진수(정수형)
%f: 실수형
%e: 지수형
%o: 8진수
%x: 16진수
%u: 부호없는 10진수
%g: 실수형 자동출력
%p: 포인터의 주소
%c: 하나의 문자로 출력
%s: 문자열
%u: 부호없는 10진수로 2바이트 출력 
%lu: 부호없는 10진수로 4바이트 출력 
*/
}