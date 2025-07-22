#include <stdio.h>

int is_prime(int n) {                 // 소수 판별
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int even_digit_sum(int n) {           // 자릿수 합이 짝수?
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return (s % 2 == 0);
}

void print_pow(int A, int B) {        // 네가 쓰던 이름 유지
    int cnt = 0;
    for (int i = A; i <= B; i++) {
        if (is_prime(i) && even_digit_sum(i)) cnt++;
    }
    printf("%d", cnt);
}

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);
    print_pow(A, B);
    return 0;
}
