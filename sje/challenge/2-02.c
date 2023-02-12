#include <stdio.h>
int main(void)
{
	int arr[50] = { 0 };
	int count=0, num, temp_num, i, temp ;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);    
	temp_num = num;
	while (temp_num >= 1)  
	{
		temp_num /= 2;
		count++;        
	}

	for (i = 0; i < count; i++)
	{
		if (num >= 1)
		{
			arr[i] = num % 2;
			num /= 2;
		}
	}          

	for (i = 0; i<(count/2); i++)
	{
		temp = arr[count - 1 - i];
		arr[count - 1 - i] = arr[i];
		arr[i] = temp;
	}
	
	for (i = 0; i < count; i++)
		printf("%d", arr[i]);
	
	return 0;
}