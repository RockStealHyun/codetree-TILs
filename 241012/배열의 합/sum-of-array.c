#include <stdio.h>

int main() {
 
	int arr_2d[4][4];
	
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &arr_2d[i][j]);
	

	for(int i = 0; i < 4; i++) {
		int sum = 0;
		for(int j = 0; j < 4; j++)
			sum += arr_2d[i][j];
		printf("%d\n", sum);
	}

    return 0;
}