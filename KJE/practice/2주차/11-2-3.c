#include <stdio.h>
int main(void) {
    char lan[100];
    int len=0;
    char max=0;
    printf("영단어를 입력하세요:");
    scanf("%s",lan);
    while(lan[len]!='\0'){
        len++;
    }
    for(int i=0;i<len;i++){
        if(max<lan[i]){
            max=lan[i];  //그 자체로 아스키코드 값으로 바뀜
        }
    }
    printf("아스키 코드 값이 가장 큰 문자:%c",max);
    return 0;
}