#include <stdio.h>
int main(void){
    int b, s, c, m=3500;
    printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500\n");
    for (b=1; b*500<=3500; b++)
        for (s=1; s*700<=3500; s++)
            for (c=1; c*400<=3500; c++)
                if (b*500+s*700+c*400==m)
                    printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", b, s, c);
    printf("��� �����Ͻðڽ��ϱ�?\n");
}