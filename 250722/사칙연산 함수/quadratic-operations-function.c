#include <stdio.h>

void print_pow(int a, char o, int c) {
    int r;
    if (o == '+')      r = a + c;
    else if (o == '-') r = a - c;
    else if (o == '*') r = a * c;
    else if (o == '/') r = a / c;      // 정수 나눗셈
    else { printf("False"); return; }  // 사칙연산 아니면 끝

    printf("%d %c %d = %d", a, o, c, r);
}

int main(void) {
    int a, c;
    char o;
    scanf("%d %c %d", &a, &o, &c);     // %s → %c, 앞에 공백 넣어도 됨: " %c"
    print_pow(a, o, c);
    return 0;
}
