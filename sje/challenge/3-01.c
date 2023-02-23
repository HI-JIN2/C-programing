#include <stdio.h>
int main(void)
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int i, j, a = 0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	} printf("\n");

	for (i = 0; i < 4; i++) {
		for (j = 3; j >= 0; j--)
			printf("%3d", arr[j][i]);
		printf("\n");
	} printf("\n");

	for (i = 3; i >=0 ; i--) {
		for (j = 3; j >= 0; j--)
			printf("%3d", arr[i][j]);
		printf("\n");
	} printf("\n");

	for (i = 3; i >=0; i--) {
		for (j = 0; j <4 ; j++)
			printf("%3d", arr[j][i]);
		printf("\n");
	} printf("\n");

	return 0;
}