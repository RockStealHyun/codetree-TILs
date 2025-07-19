#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// n*n모양 구구단을 출력합니다.
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			printf("%d * %d = %d", i, j, i * j);
			if(j != n)
				printf(", ");
		}
		printf("\n");
	}
	
	return 0;
}
