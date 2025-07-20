#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 문자열을 정의합니다.
	char str[21];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자열의 길이를 구합니다.
	int len = strlen(str);
	bool exist1 = false;
	bool exist2 = false;
	
  	// 문자열 'ee'와 'ab'가 존재하는지 확인합니다.
  	for(int i = 0; i < len - 1; i++) {
		if(str[i] == 'e' && str[i + 1] == 'e')
			exist1 = true;
		if(str[i] == 'a' && str[i + 1] == 'b')
			exist2 = true;
	}
	
	// 문자열 'ee'가 존재하면 Yes, 아니면 No를 출력합니다.
	if(exist1)
		printf("Yes ");
	else
		printf("No ");
	
	// 문자열 'ab'가 존재하면 Yes, 아니면 No를 출력합니다.
	if(exist2)
		printf("Yes");
	else
		printf("No");
	
    return 0;
}
