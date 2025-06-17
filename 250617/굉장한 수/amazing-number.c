#include <stdio.h>

int main() {
    // 변수 선언
    int N;

	// 입력
	scanf("%d",&N);

    // 출력
	if(N%2==1&&N%3==0 ||N%2==0&&N%5==0 )
		printf("true");
	else
		printf("false");

    return 0;
}
