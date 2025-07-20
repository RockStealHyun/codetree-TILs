#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 정의합니다.
	char str[4][21];
	
	// 문자열을 입력받습니다.
	for(int i = 0; i < 4; i++)
		scanf("%s", str[i]);
	
	// 입력받은 문자열을 역순으로 출력합니다.
	for(int i = 3; i >= 0; i--)
		printf("%s\n", str[i]);
	
    return 0;
}
