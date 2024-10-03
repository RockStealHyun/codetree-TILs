#include <stdio.h>

int main() {
    // 변수 선언
    int n, sum = 0;

	// 입력
	scanf("%d", &n);
    
	for(int i = 1; i <= n; i++) {
        int a;
        scanf("%d", &a);
		if(a % 2 == 1 && a % 3 == 0)
			sum += a;
	}

    // 출력
    printf("%d", sum);

    return 0;
}