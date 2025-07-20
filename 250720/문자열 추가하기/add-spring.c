#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 정의합니다.
	char str[26];
	char hel[6] = "Hello";
	
	// 문자열을 입력받습니다.
	scanf("%s", str);
	
	// 문자열의 길이를 구합니다.
	int len = strlen(str);
	
	// 문자열의 뒤에 Hello를 추가합니다.
	for(int i = 0; i < 5; i++)
		str[len + i] = hel[i];
	
	str[len + 5] = '\0';
	
	// 합쳐진 문자열을 출력합니다.
	printf("%s", str);
	
    return 0;
}
