#include <stdio.h>

int main() {

	int arr_1[3][3];
	int arr_2[3][3];
	int arr_3[3][3];
	

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			scanf("%d", &arr_1[i][j]);
	

	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			scanf("%d", &arr_2[i][j]);
	
.
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			arr_3[i][j] = arr_1[i][j] * arr_2[i][j];
	

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			printf("%d ", arr_3[i][j]);
		printf("\n");
	}

    return 0;
}