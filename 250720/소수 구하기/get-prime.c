#include<stdio.h>
#include <stdbool.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	
	// 1부터 n까지 소수를 구합니다.
	for(int i = 1; i <= n; i++) {
		if(i == 1) continue;
		bool isprime = true;
		
		for(int j = 2; j < i; j++)
			if(i % j == 0) isprime = false;
		
		if(isprime)
			printf("%d ", i);
	}
	
	return 0;
}
