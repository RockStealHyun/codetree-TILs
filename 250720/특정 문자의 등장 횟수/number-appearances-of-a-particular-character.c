#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 구현합니다.
	char str[21];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자열의 길이를 구합니다.
	int len = strlen(str);
	int cnt1 = 0;
	int cnt2 = 0;
	
  	// 문자열 'ee'와 'eb'가 몇 번 나왔는지 확인합니다.
  	for(int i = 0; i < len - 1; i++) {
		if(str[i] == 'e' && str[i + 1] == 'e')
			cnt1++;
		if(str[i] == 'e' && str[i + 1] == 'b')
			cnt2++;
	}
	
	// 문자열 'ee'와 'eb'가 각각 몇 번 나왔는지 출력합니다.
	printf("%d %d", cnt1, cnt2);

    return 0;
}
