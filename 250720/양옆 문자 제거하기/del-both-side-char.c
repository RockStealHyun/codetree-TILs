#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 정의합니다.
	char str[101];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자열의 길이를 구합니다.
	int len = strlen(str);
	
  	// 앞에서 2번째 원소를 제거합니다. (이때 문자열의 길이가 1 감소하는것을 반드시 기억합니다)
  	for(int i = 1; i < len - 1; i++)
		str[i] = str[i + 1];
	str[len - 1] = '\0';
	len--;
	
	// 뒤에서 2번째 원소를 제거합니다.
	for(int i = len - 2; i < len - 1; i++)
		str[i] = str[i + 1];
	str[len - 1] = '\0';
	len--;
	
	// 앞에서 2번째, 뒤에서 2번째 원소가 제거된 문자열을 출력합니다.
	printf("%s", str);

    return 0;
}
