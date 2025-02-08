#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// i가 짝수인 경우 별을 1 + (i / 2)개, 홀수인 경우 n - (i - 1) / 2개 출력합니다
	for(int i = 0; i < 2 * n; i++) {
		if(i % 2 == 0) {
			for(int k = 0; k < 1 + i / 2; k++)
				printf("* ");
		}
		else {
			for(int k = 0; k < n - (i - 1) / 2; k++)
				printf("* ");
		}
		printf("\n");
	}

    return 0;
}
