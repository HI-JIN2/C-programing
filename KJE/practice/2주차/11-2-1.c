#include <stdio.h>
int main(void){
    char lan[100];
    int len=0;
    printf("영단어 입력:");
    scanf("%s",lan);  //순서대로 배열 인덱스에 각각 입력됨
    //scanf 함수 호출문 구성 시, 데이터를 저장할 변수의 이름 앞에는 & 연산자를 붙여줘야 한다. 그러나 문자열을 입력 받는 배열의 이름 앞에는 & 연산자를 붙이지 않는다.
    while(lan[len]!='\0'){
        len++;
    }
    printf("입력된 영단어 길이:%d",len);
    return 0;
}