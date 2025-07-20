#include <stdio.h>
#include <string.h>

int main() {
    // 문자를 입력받습니다.
	char a, b;
	scanf(" %c %c", &a, &b);
	
	// 문자의 아스키코드를 구합니다.
	int a_num = (int)a;
	int b_num = (int)b;
	
	// 두 아스키코드 값의 합을 출력합니다.
	printf("%d ", a_num + b_num);
	
	// 두 아스키코드 값의 차를 출력합니다.
	if(a_num > b_num)
		printf("%d", a_num - b_num);
	else
		printf("%d", b_num - a_num);
	
	return 0;
}
