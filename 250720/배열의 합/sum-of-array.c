#include <stdio.h>

int main() {
    // 2차원 배열을 구현합니다.
	int arr_2d[4][4];
	
	// 각 줄마다 정수를 입력받습니다.
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 4; j++)
			scanf("%d", &arr_2d[i][j]);
	
	// 각 줄의 합을 출력합니다.
	for(int i = 0; i < 4; i++) {
		int sum = 0;
		for(int j = 0; j < 4; j++)
			sum += arr_2d[i][j];
		printf("%d\n", sum);
	}

    return 0;
}
