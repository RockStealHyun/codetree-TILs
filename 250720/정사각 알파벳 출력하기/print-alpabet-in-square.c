#include<stdio.h>

int main() {
    // 변수 선언 및 입력
    int n;
    scanf("%d", &n);
	char cnt = 'A';
	
	// 알파벳을 정사각형 모양으로 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%c", cnt);
			cnt++;
		}
		printf("\n");
	}
	
	return 0;
}
