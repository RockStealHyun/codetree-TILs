#include <stdio.h>

void f(int n) {              // 재귀함수 1개만 사용
    printf("%d ", n);        // 내려가며 출력
    if (n == 1) return;
    f(n - 1);                // 더 작은 값으로 재귀
    printf("%d ", n);        // 올라오며 다시 출력
}

int main(void) {
    int N;
    scanf("%d", &N);
    f(N);
    return 0;
}
