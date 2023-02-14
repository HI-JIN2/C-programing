#include <stdio.h>
int main(void){
    //pg300
    int arr[6];
    int temp;
    for(int i=0;i<6;i++){
        arr[i]=i+1;
    }
    int* front=&arr[0];
    int* back=&arr[5];  //값이 들어 가는 맨 끝은 arr[5]이다.
    for(int i=0;i<3;i++){
        temp=*front;
        *front=*back;
        *back=temp;
        front+=1;  //front 자체는 주소를 가르키고 *front는 해당 주소에 들어가 있는 값을 가르킨다. 
        back-=1;  //front와 back을 동시에 각각 하나씩 증가하고 감소시키고 서로 값들을 바꾸는 식. 
        // 두개의 포인터 변수를 활용 해야 하므로 반복문은 3바퀴를 돌아 반반씩 하게끔!
    }
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
}