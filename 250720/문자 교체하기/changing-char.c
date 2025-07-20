#include <stdio.h>
#include <string.h>

int main() {
    // 문자열을 구현합니다.
	char str1[21];
	char str2[21];
	
	// 문자열을 입력받습니다.
  	scanf("%s", str1);
	scanf("%s", str2);
	
  	// 두 번째 문자열의 앞에서 두 번째 원소를 첫 문자열의 앞 두 원소로 교체합니다.
  	str2[0] = str1[0];
	str2[1] = str1[1];
	
	// 교체된 이후의 문자열을 출력합니다
	printf("%s", str2);

    return 0;
}
