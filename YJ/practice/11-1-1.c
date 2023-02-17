#include<stdio.h>
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]); 
    }   
    //최대
    int max=array[0];
    for(int i=0;i<5;i++){
        if(max<array[i])
            max=array[i];
    }
    printf("최소값은 %d \n",max);
    //최소
    int min=array[0];
    for(int i=0;i<5;i++){
        if(min>array[i])
            min=array[i];
    }
    printf("최소값은 %d \n",min);
        
    //합
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=array[i];
    }
    printf("합은 %d \n",sum);
        
}