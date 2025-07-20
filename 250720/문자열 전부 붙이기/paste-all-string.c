#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 구현합니다.
	char str[10][101];
	char str_all[1001];
	
	// n을 입력받습니다.
	int n;
	scanf("%d", &n);
	
	// 문자열을 입력받습니다.
	for(int i = 0; i < n; i++)
		scanf("%s", str[i]);
	
	int tot_idx = 0;
	
	// 문자열을 전부 붙입니다.
	for(int i = 0; i < n; i++) {
		int len = strlen(str[i]);
		for(int j = 0; j < len; j++)
			str_all[tot_idx++] = str[i][j];
	}
	
	str_all[tot_idx] = '\0';
	
	// 합쳐진 문자열을 출력합니다.
	printf("%s", str_all);
	
    return 0;
}
