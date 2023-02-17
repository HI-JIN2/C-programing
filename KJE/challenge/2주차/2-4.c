#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void palindrome(char arr[], int length){
    bool isWright;  //true이면 1, 아니면 0
    for(int i=0;i<length/2;i++){
        if(arr[i]==arr[length-1-i]){  //한 글자씩 비교
            isWright=true;
        }
        else{
            isWright=false;
            break;
        }
    }
    if(isWright==true){  
        printf("회문입니다.");
    }
    else{
        printf("회문이 아닙니다.");
    }
}
int main(void){
    char arr[100];  //맨 마지막에 null이 들어감
    printf("문자열 입력: ");
    scanf("%s", arr);
    palindrome(arr, (int)strlen(arr));
    return 0;
}