#include <stdio.h>
#include <string.h>

int main()
{
    char word[30];
    int length,Palindrome=0;

    printf("�ܾ �Է��ϼ���: ");
    scanf("%s", word);

    length = strlen(word);
    for (int i = 0; i < length / 2; i++)
    {

        if (word[i] != word[length - 1 - i])
        {
            printf("ȸ���� �ƴմϴ�.");
            Palindrome++;
            break;
        }
        
    }    
    if(!Palindrome)
        printf("ȸ���Դϴ�.");

    return 0;
}