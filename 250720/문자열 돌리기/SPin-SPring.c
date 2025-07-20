#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 구현합니다.
	char str[11];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자열의 길이를 구합니다.
	int len = strlen(str);
	
	// 문자열을 출력합니다.
	printf("%s\n", str);
	
	// 문자열을 오른쪽으로 한 칸 쉬프트하고 문자열을 출력합니다. 이를 len회 반복합니다.
	for(int i = 0; i < len; i++) {
		// 문자열을 오른쪽으로 한 칸 쉬프트합니다.
		char temp = str[len - 1];
		for (int j = len - 1; j > 0; j--)
			str[j] = str[j - 1];
		str[0] = temp;
		
		// 문자열을 출력합니다.
		printf("%s\n", str);
	}

    return 0;
}
