#include <stdio.h>

void star(int n) {                 // n개 별 + 공백 출력
    for (int i = 0; i < n; i++) printf("* ");
    putchar('\n');
}

void pattern(int n) {              // 내려갔다가 올라오기
    star(n);                       // n, n-1, ..., 1
    if (n == 1) {                  // 1을 한 번 더 찍어야 2n줄
        star(1);
        return;
    }
    pattern(n - 1);                // 재귀
    star(n);                       // ..., 1, 2, ..., n
}

int main(void) {
    int n;
    scanf("%d", &n);
    pattern(n);
    return 0;
}
