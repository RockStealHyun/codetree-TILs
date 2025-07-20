#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	// 최대 10회 반복합니다.
	for(int i = 0; i < 10; i++) {
		// 문자열을 입력받습니다.
		char str[101];
		scanf("%s", str);
		
		// str이 END일 경우 종료합니다.
		if(strcmp(str, "END") == 0)
			break;
		
		// 문자열의 길이를 구합니다.
		int len = strlen(str);
		
		// 문자열을 역으로 출력합니다.
		for(int i = len - 1; i >= 0; i--)
			printf("%c", str[i]);
		printf("\n");
	}
				   
    return 0;
}
