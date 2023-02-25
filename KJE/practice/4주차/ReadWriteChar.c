#include <stdio.h>
int main(void){
    //책에 나와있는 코드를 직접 따라 침으로써 익숙해지기위한 과정
    /*
    putchar: 인자로 젖달된 문자 정보를 stdout으로 표현되는 표준 출력 스트림으로 전송하는 함수
    fputc: putchar과 동일하지만 문자를 전송할 스트림을 지정할 수 있다. 
    getchar: stdin으로 표현되는 표준 입력 스트림으로부터 하나의 문자를 입력 받아서 반환하는 함수
    fgetc: getchar과 동일하지만 문자를 입력받을 스트림을 지정할 수 있다.
    */
    int ch1, ch2;
    ch1=getchar(); //문자입력
    ch2=fgetc(stdin);  //엔터키입력
    //11행과 12행이 하는 일은 완전히 동일하다.
    //문자와 엔터가 입력됨
    putchar(ch1);  //문자 출력
    fputc(ch2,stdout); //엔터 키 출력
    //14행과 15행이 하는 일은 완전히 동일하다.
    //입력받은 문자와 엔터가 출력됨
    
    //getchar과 fgetc의 반환형이 int이므로 ch1과 ch2가 char로 선언되면 안된다.
    return 0;
}