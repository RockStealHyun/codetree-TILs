#include <stdio.h>
#include <string.h>

int main() {
	// 문자열 배열을 문제에서 요구하는대로 초기화합니다.
	char str[5][20] = { "apple", "banana", "grape", "blueberry", "orange" };  

	// 영문자를 입력받습니다.
	char a;
	scanf(" %c", &a);
	int cnt = 0;
	
	// 조건을 만족하는 문자열을 출력하고 조건을 만족하는 문자열의 개수를 셉니다.
	for(int i = 0; i < 5; i++)
		if(str[i][2] == a || str[i][3] == a) {
			printf("%s\n", str[i]);
			cnt++;
		}

	// 조건을 만족하는 문자열의 개수를 출력합니다.
	printf("%d", cnt);
	
    return 0;
}
