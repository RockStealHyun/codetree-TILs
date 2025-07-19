#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);           // 먼저 한 번 입력 받기
    while (n != 0) {
        printf("%d\n", n);     // 출력
        scanf("%d", &n);       // 다시 입력 받기
    }

    return 0;
}
