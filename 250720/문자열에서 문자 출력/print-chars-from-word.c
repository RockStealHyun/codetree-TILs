#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 정의합니다.
	char str[10];
	
	// 문자열을 입력받습니다.
	scanf("%s", str);
	
	// 문자열을 순회하여 문자를 한 줄에 하나씩 출력합니다.
	for(int i = 0; str[i] != '\0'; i++) {
		printf("%c\n", str[i]);
	}
	
    return 0;
}
