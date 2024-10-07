#include <stdio.h>

int main() {
	// 변수 선언 및 입력
	int n;
	scanf("%d", &n);

	// n * n 크기의 별을 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}