#include <stdio.h>

void print_pow(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {   // b번 곱하기
        result *= a;
    }
    printf("%d", result);
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);         // 예: 3 4
    print_pow(a, b);                // 3^4 = 81 출력
    return 0;
}
