#include <stdio.h>

int main() {
    // n, m을 입력받습니다.
    int n, m;
    scanf("%d %d", &n, &m);

    // 2차원 배열을 구현합니다.
	int arr_1[10][10];
	int arr_2[10][10];
    int arr_3[10][10];
	
	// 첫 번째 배열의 입력을 받습니다.
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &arr_1[i][j]);
	
	// 두 번째 배열의 입력을 받습니다.
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &arr_2[i][j]);
	
	// 두 배열의 같음 여부를 새로운 배열에 담습니다.
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			arr_3[i][j] = arr_1[i][j] == arr_2[i][j] ? 0 : 1;
	
	// 새로운 배열을 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			printf("%d ", arr_3[i][j]);
		printf("\n");
	}

    return 0;
}
