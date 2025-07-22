#include <stdio.h>

void printHW(int n) {
    if (n == 0) return;          // 끝
    printf("HelloWorld\n");
    printHW(n - 1);              // 재귀 호출
}

int main(void) {
    int N;
    scanf("%d", &N);
    printHW(N);
    return 0;
}
