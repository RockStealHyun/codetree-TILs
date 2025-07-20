#include <stdio.h>
#include <string.h>

int main() {
	// n을 입력받습니다.
	int n;
	scanf("%d", &n);
	
    // 문자열 배열을 구현합니다.
	char str[10][101];
	
	// 문자열을 입력받습니다.
	for(int i = 0; i < n; i++)
		scanf("%s", str[i]);
	
	// len_all : 전체 문자열의 길이, cnt : 첫번째 문자로 'a'가 나오는 횟수
	int len_all = 0;
	int cnt = 0;
	
	// 전체 문자열의 길이와 첫번째 문자로 'a'가 나오는 횟수를 구합니다.
	for(int i = 0; i < n; i++) {
		len_all += strlen(str[i]);
		if(str[i][0] == 'a')
			cnt++;
	}
	
	// 문제에서 구하고자 하는 값들을 출력합니다.
	printf("%d %d", len_all, cnt);
	
    return 0;
}
