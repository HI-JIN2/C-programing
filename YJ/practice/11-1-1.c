#include<stdio.h>
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]); 
    }   
    //�ִ�
    int max=array[0];
    for(int i=0;i<5;i++){
        if(max<array[i])
            max=array[i];
    }
    printf("�ּҰ��� %d \n",max);
    //�ּ�
    int min=array[0];
    for(int i=0;i<5;i++){
        if(min>array[i])
            min=array[i];
    }
    printf("�ּҰ��� %d \n",min);
        
    //��
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=array[i];
    }
    printf("���� %d \n",sum);
        
}