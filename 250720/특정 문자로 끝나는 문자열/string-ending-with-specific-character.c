#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 구현합니다.
	char str[10][21];
	
	// 문자열을 입력받습니다.
	for(int i = 0; i < 10; i++)
		scanf("%s", str[i]);
	
	// 문자를 입력받습니다.
	char a;
	scanf(" %c", &a);
	int cnt = 0;
	
	// 마지막 문자로 주어진 문자가 나오는 경우 그 문자열을 출력합니다. 그리고 그런 횟수를 구합니다.
	for(int i = 0; i < 10; i++) {
		int len = strlen(str[i]);
		if(str[i][len-1] == a) {
			printf("%s\n", str[i]);
			cnt++;
		}
	}
	
	// 만족하는 문자열이 없다면 None을 출력합니다.
	if(cnt == 0)
		printf("None");
	
    return 0;
}
