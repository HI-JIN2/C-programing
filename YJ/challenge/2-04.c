#include <stdio.h>
#include <string.h>

int main()
{
    char word[30];
    int length,Palindrome=0;

    printf("단어를 입력하세요: ");
    scanf("%s", word);

    length = strlen(word);
    for (int i = 0; i < length / 2; i++)
    {

        if (word[i] != word[length - 1 - i])
        {
            printf("회문이 아닙니다.");
            Palindrome++;
            break;
        }
        
    }    
    if(!Palindrome)
        printf("회문입니다.");

    return 0;
}