#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// 좌우로 반복하여 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i % 2 == 0)
				printf("%d", j + 1);
			else
				printf("%d", n - j);
		}
		printf("\n");
	}
	
	return 0;
}
