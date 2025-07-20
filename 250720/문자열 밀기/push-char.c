#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 정의합니다.
	char str[21];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자열의 길이를 구합니다.
	int len = strlen(str);
	
	// 문자열을 왼쪽으로 한 칸 쉬프트합니다.
	char temp = str[0];
	for (int i = 0; i < len - 1; i++)
		str[i] = str[i + 1];
	str[len - 1] = temp;
	
	// 왼쪽으로 한 칸 쉬프트된 문자열을 출력합니다.
	printf("%s", str);

    return 0;
}
