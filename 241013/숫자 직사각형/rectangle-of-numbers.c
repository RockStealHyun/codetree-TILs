#include <stdio.h>

int main() {
    // 2차원 배열을 구현합니다.
	int arr_2d[100][100];
	int cnt = 1;
	
	// n과 m을 입력받습니다.
	int n, m;
	scanf("%d %d", &n, &m);
	
	// n * m 크기의 배열에 숫자를 채워 넣습니다.
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			arr_2d[i][j] = cnt++;
	
	// 숫자 직사각형을 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++)
			printf("%d ", arr_2d[i][j]);
		printf("\n");
	}

    return 0;
}