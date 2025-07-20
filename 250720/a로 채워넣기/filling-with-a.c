#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 정의합니다.
	char str[101];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자열의 길이를 구합니다.
	int len = strlen(str);
	
  	// 문자열의 앞에서 두 번째 원소와 뒤에서 두 번째 원소를 'a'로 대체합니다.
  	str[1] = 'a';
	str[len - 2] = 'a';
	
	// 대체된 이후의 문자열을 출력합니다
	printf("%s", str);

    return 0;
}
