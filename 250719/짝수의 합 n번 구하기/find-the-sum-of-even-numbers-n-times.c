#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// n회 반복합니다.
	for(int i = 0; i < n; i++) {
		// 변수 선언 및 입력
		int a, b;
		scanf("%d %d", &a, &b);
		int ans = 0;
		
		// a부터 b까지 짝수를 전부 더한 값을 출력합니다.
		for(int j = a; j <= b; j++)
			if(j % 2 == 0)
                ans += j;
		
		printf("%d\n", ans);
	}
	
	return 0;
}
