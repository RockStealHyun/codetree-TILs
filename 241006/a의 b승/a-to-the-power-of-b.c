#include <stdio.h>

int main() {
    // 변수 선언 및 입력
    int a, b;
    int prod = 1;

    scanf("%d %d", &a, &b);

    // a를 b번 곱합니다.
    for(int i = 1; i <= b; i++) {
        prod *= a;
    }

    // 출력
    printf("%d", prod);

    return 0;
}