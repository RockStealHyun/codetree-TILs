#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 정의합니다.
	char str[10][201];
	int len_all = 0;
	
  	// 공백 단위로 문자열을 입력받습니다.
  	for(int i = 0; i < 10; i++)
      scanf("%s", str[i]);
	
	// 각 단어 당 문자열의 길이를 확인하여 총 길이에 더해줍니다.
  	for(int i = 0; i < 10; i++) {
		int len = strlen(str[i]);
      	len_all += len;
    }
  
	// 문자열의 총 길이를 출력합니다.
	printf("%d", len_all);
	
    return 0;
}

