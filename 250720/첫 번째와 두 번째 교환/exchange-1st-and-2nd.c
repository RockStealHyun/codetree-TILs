#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 구현합니다.
	char str[21];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str);
	
	// 문자열의 첫 번째 문자와 두 번째 문자를 저장합니다.
	char a = str[0];
	char b = str[1];
	
  	// 문자열을 순회하면서 첫 번째 문자와 두 번째 문자를 교환합니다.
	for(int i = 0; str[i] != '\0'; i++) {
		if(str[i] == a) str[i] = b;
		else if(str[i] == b) str[i] = a;
	}
	
	// 교환된 이후의 문자열을 출력합니다.
	printf("%s", str);

    return 0;
}
