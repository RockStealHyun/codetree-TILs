#include <stdio.h>

int main() {
    // 변수 선언
    int a;

	// 입력
	scanf("%d",&a);

    // 출력
	if(a%13==0 ||a%19==0 )
		printf("True");
	else
		printf("False");

    return 0;
}
