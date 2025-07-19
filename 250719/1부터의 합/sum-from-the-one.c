#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    int sum = 0;

    scanf("%d", &n);

    // 1부터 증가시키며 더한 값이 n이상이 된 순간, 더해진 숫자를 출력합니다.
    for(int i = 1; i <= 100; i++) {
        sum += i;
		if(sum >= n) {
			printf("%d", i);
			break;
		}
    }
	
	return 0;
}
