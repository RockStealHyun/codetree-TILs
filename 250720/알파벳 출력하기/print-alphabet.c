#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	char cnt = 'A';
	
	// 알파벳을 삼각형 모양으로 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			printf("%c", cnt);
			cnt++;
			if(cnt > 'Z')
				cnt = 'A';
		}
		printf("\n");
	}
	
	return 0;
}
