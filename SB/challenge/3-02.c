#include<stdio.h>


int main(void) {
	int num;
	int arr[10][10];
	int count = 1;
	int change = 1;

	int x = 0, y = -1;

	printf("input number: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		y++;
		arr[x][y] = count;
		count++;
	}

	for (int s = num - 1; s > 0; s--) {
		for (int j = 0; j < s; j++) {
			if (change == 1) {
				x++;
			}
			else {
				x--;
			}
			arr[x][y] = count;
			count++;
		}

		for (int k = 0; k < s; k++) {
			if (change == 1)
				y--;
			else
				y++;
			arr[x][y] = count;
			count++;

		}
		change *= -1;
	}


	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("%3d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}