#include <stdio.h>

int main() {
    // 2차원 배열을 구현합니다.
	int arr_1[3][3];
	int arr_2[3][3];
	int arr_3[3][3];
	
	// 첫 번째 배열의 입력을 받습니다.
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			scanf("%d", &arr_1[i][j]);
	
	// 두 번째 배열의 입력을 받습니다.
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			scanf("%d", &arr_2[i][j]);
	
	// 두 배열의 곱을 새로운 배열에 담습니다.
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			arr_3[i][j] = arr_1[i][j] * arr_2[i][j];
	
	// 새로운 배열을 출력합니다.
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
			printf("%d ", arr_3[i][j]);
		printf("\n");
	}

    return 0;
}