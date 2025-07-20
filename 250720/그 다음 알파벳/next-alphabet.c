#include <stdio.h>
#include <string.h>

int main() {
    // 알파벳 소문자를 입력받습니다.
	char x;
	scanf(" %c", &x);
	
	// 다음 알파벳을 출력합니다.
	if(x == 'z')
		printf("a");
	else
		printf("%c", x + 1);
	
	return 0;
}
