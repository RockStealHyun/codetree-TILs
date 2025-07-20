#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 구현합니다.
	char str[21];
    int ans = 0;
	
	// 문자열을 입력받습니다.
	scanf("%s", str);
	
	// 문자열을 순회하여 숫자들만 골라 더해줍니다.
	for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i] <= '9')
            ans += (str[i] - '0');
	}

    // 출력
    printf("%d", ans);
	
    return 0;
}
