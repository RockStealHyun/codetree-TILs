#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int A,B;
    int cnt = 0;

    scanf("%d %d", &A, &B);

    for(int i = A; i <= B; i++) {
        if(i % 2 != 0)
			continue;
        cnt = i+cnt;
    }

    // 출력
    printf("%d", cnt);

    return 0;
}
