#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 구현합니다.
	char str[10][201];
	
	// 공백 단위로 문자열을 입력받습니다.
  	for(int i = 0; i < 10; i++)
		scanf("%s", str[i]);
	
  	// 홀수 번째 문자열을 출력합니다.
  	for(int i = 0; i < 10; i += 2)
        printf("%s\n", str[i]);
	
    return 0;
}
