#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // 숫자를 입력받습니다.
	int n;
	scanf("%d", &n);
	
	// 문자열을 입력받습니다.
	char str[101];
	char str2[101];
	scanf("%s", str);
	
	int cnt = 0;
	
	// 입력받는 문자열이 str과 같은 것의 개수를 확인합니다.
	for(int i = 0; i < n; i++) {
		// 문자열을 입력받습니다.
		scanf("%s", str2);
		
		// 문자열이 str과 같을 경우 cnt를 1 더해줍니다.
		if(strcmp(str, str2) == 0)
			cnt++;
	}
	
	// 입력받은 문자열 중 str과 같은 것의 개수를 출력합니다.
	printf("%d", cnt);
	
    return 0;
}
