#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    int a=0,b=0,i=1;
    printf("숫자를 입력하시오: ");
    scanf("%d",&n);
    int **arr = malloc(sizeof(int*)*n);  //세로
    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(sizeof(int*) * n);  //가로
    }
    arr[0][0]=1;

    //가로방향으로 채우는 반복문과 새로방향으로 채우는 반복문을 독립적으로 구성
    while(1)
	{
		while(arr[a][b+1]==0&&b<n-1)  //오른쪽으로 이동
			arr[a][++b]=++i;
		while(arr[a+1][b]==0&&a<n-1)  //아래로 이동
			arr[++a][b]=++i;
		while(arr[a][b-1]==0&&b>-1)	//왼쪽으로 이동
			arr[a][--b]=++i;
		while(arr[a-1][b]==0&&a>-1)  //위로 이동
			arr[--a][b]=++i;
		if(i==n*n)  //행과 열이 n인 배열을 채워나가다가 숫자를 n*n개를 모두 채우면 while문을 빠져나감
			break;
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
    /*
    배열의 크기를 미리 지정해 두고 실행하는 것이 아니라 프로그램을 실행한 후 사용자의 입력에 따라 배열의 크기를 정하고 싶을때는?
    c언어에서는 배열의 크기는 변수로 받아 지정할 수 없다.
    그러려면 어떻게 해야 할까?
    ->포인터와 malloc 이용하기!
    malloc이란 함수는 메모리를 프로그램 내에서 크기만큼 할당해 주고, 포인터는 이 할당된 공간을 가리키는 도구이다. 이를 동적할당이라고 부른다.
    int N;
    int *Arr = (int*)malloc(sizeof(int)*N);
    *Arr은 int 타입 포인터 변수라는 것이고 포인터 변수는 특정 메모리의 주소를 담고 있는 변수이다.
    malloc 앞에는 (int*)을 통해 int 포인터임을 통일시키고 malloc()에서 괄호 안의 부분은 정수형 값이 담기면 그 정수 X byte만큼의 공간이 할당된다는 의미이다.
    따라서 sizeof(int)*N Byte 즉 int형 변수의 크기인 4바이트 *N개 만큼의 크기가 할당된다는 것이다.
    */
    return 0;
}