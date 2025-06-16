#include <stdio.h>

int main() {
    // 변수 선언
    int a_math, a_eng, b_math, b_eng;

	// 입력
	scanf("%d %d", &a_math, &a_eng);
	scanf("%d %d", &b_math, &b_eng);
    
    // 출력
	if(a_math > b_math && a_eng > b_eng)
		printf("1");
	else
		printf("0");

    return 0;
}
