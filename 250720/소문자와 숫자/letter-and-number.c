#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // 문자열을 구현합니다.
	char str[101];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자를 하나하나 확인하여 알파벳일 경우 모두 소문자로, 숫자일 경우 그대로 출력합니다.
	for(int i = 0; str[i] != '\0'; i++) {
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
			printf("%c", tolower(str[i]));
		}
		
		if(str[i] >= '0' && str[i] <= '9') {
			printf("%c", str[i]);
		}
	}

    return 0;
}
