#include <stdio.h>

// check 함수: n이 짝수이면서 각 자리 숫자의 합이 5의 배수인지 검사
int check(int n) {
    int tens = n / 10;      // 십의 자리
    int ones = n % 10;      // 일의 자리
    int sum = tens + ones;  // 두 자리 숫자의 합

    // 짝수 조건 && 합이 5의 배수 조건
    if (n % 2 == 0 && sum % 5 == 0) {
        return 1;  // Yes
    } else {
        return 0;  // No
    }
}

int main() {
    int n;
    // 두 자리 정수 입력
    scanf("%d", &n);

    // check 함수 호출하여 결과에 따라 출력
    if (check(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
