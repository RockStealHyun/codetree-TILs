#include <stdio.h>
#include <string.h>

int main() {
    // 문자열 배열을 구현합니다.
	char str[10][5];
  	char str_all[50];
  	int n;
	
  	// n을 입력받습니다.
  	scanf("%d", &n);
  	
	// 공백 단위로 문자열을 입력받습니다.
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
	
	// 합쳐진 문자열을 5개의 숫자마다 개행을 하여 출력합니다.
	for(int i = 0; i < tot_idx; i++) {
		printf("%c", str_all[i]);
		if((i + 1) % 5 == 0)
			printf("\n");
	}

    return 0;
}
