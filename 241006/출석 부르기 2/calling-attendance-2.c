#include <stdio.h>

int main() {
    while(1) {
        // 변수 선언 및 입력
        int n;
        scanf("%d", &n);
		
		// n이 1~4라면 번호에 맞는 이름을, 그게 아니라면 Vacancy를 출력한 뒤 종료합니다.
		if(n == 1)
			printf("John\n");
		else if(n == 2)
			printf("Tom\n");
		else if(n == 3)
			printf("Paul\n");
		else if(n == 4)
			printf("Sam\n");
		else {
			printf("Vacancy\n");
			break;
		}
    }
	
    return 0;
}