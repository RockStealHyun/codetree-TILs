#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // 문자열을 정의합니다.
	char str[101];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자를 하나하나 확인하여 알파벳일 경우 모두 대문자로 출력합니다.
	for(int i = 0; str[i] != '\0'; i++) {
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			printf("%c", toupper(str[i]));
		}
	}

    return 0;
}
