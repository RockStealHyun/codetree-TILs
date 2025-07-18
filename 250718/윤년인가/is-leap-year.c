#include <stdio.h>

int main() {
    // 변수 선언
    int y;

	// 입력
	scanf("%d", &y);
    
    // 출력
	if(y % 4 == 0) {
		if(y % 100 == 0) {
			if(y % 400 == 0) {
				printf("true");
			}
			else {
				printf("false");
			}
		}
		else {
			printf("true");
		}
	}
	else {
		printf("false");
	}

    return 0;
}
