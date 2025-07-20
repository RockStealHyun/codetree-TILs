#include <stdio.h>
#include <string.h>

int main() {
    // 숫자 5개를 입력받습니다.
	int a[5];
	for(int i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	
	// 주어진 값에 해당하는 아스키코드의 문자를 출력합니다.
	for(int i = 0; i < 5; i++)
		printf("%c ", a[i]);
	
	return 0;
}
