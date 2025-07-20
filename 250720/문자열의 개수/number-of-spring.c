#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	// 문자열 배열을 구현합니다.
	char str[201][201];
	int cnt = 0;
	
	// 0이 나올때까지 반복합니다.
	while(true) {
		// 문자열을 입력받습니다.
		scanf("%s", str[cnt]);
		
		// 0이 나올 경우 while문을 빠져나옵니다.
		if(strcmp(str[cnt], "0") == 0)
			break;
		
		cnt++;
	}
	
	// 문자열의 개수를 출력합니다.
	printf("%d\n", cnt);
	
	// 홀수 번째 문자열을 출력합니다.
	for(int i = 0; i < cnt; i += 2)
		printf("%s\n", str[i]);
	
				   
    return 0;
}
