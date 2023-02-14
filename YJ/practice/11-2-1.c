#include<stdio.h>
int main(){
    char word[50];
    scanf("%s",word);

    int i=0,size=0;
    while(word[i]!='\0'){
        size++;
        i++;
    }
    printf("%d",size);
}