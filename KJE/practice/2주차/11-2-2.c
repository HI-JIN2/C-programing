#include <stdio.h>
int main(void){
    char lan[100];
    int len=0;
    char temp;
    printf("영단어를 입력하세요:");
    scanf("%s",lan);
    while(lan[len]!='\0'){
        len++;
    }
    for(int i=0;i<len/2;i++){
        temp=lan[i];
        lan[i]=lan[(len-i)-1];
        lan[(len-i)-1]=temp;
    }
    printf("뒤집어진 영단어:%s",lan);
    return 0;
}