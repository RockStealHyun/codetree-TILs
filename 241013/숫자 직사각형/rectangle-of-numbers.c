#include <stdio.h>

int main() {

    int i, j;
    int num=0;
	int arr_2d[4][3];


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			num += 1;
            arr_2d[i][j] = num;
			
		}
	}


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr_2d[i][j]);
		}
		printf("\n");
	}

	return 0;

}