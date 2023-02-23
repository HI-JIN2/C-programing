#include <stdio.h>
int main(void)
{
	int i, j, k, num = 1, n;
	int arr[15][15] = { 0 };
	printf("숫자를 입력하시오: ");     //3
	scanf("%d", &n);
	int col = 0, row = 0, next = 1;

	for (i = 0; i < n; i++) {
		arr[col][row] = num++;
		row += next;
	} row--;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			col += next;
			arr[col][row] = num++;
		}
		next = (-next);
		for (k = 0; k < i; k++) {
			row += next;
			arr[col][row] = num++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	return 0;
}