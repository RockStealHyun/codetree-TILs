#include <stdio.h>

// 두 수의 최대공약수를 구하는 함수 (유클리드 호제법)
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;  // a를 b로 나눈 나머지
        a = b;          // a에 이전 b를 대입
        b = r;          // b에 나머지를 대입
    }
    return a;  // b가 0이 되면 a가 최대공약수
}

// 두 수의 최소공배수를 구하는 함수
int lcm(int a, int b) {
    // lcm(a,b) = a * b / gcd(a,b)
    return a / gcd(a, b) * b;
}

int main(void) {
    int n, m;
    // 두 정수 입력받기
    scanf("%d %d", &n, &m);
    
    // 최소공배수 계산해서 출력
    printf("%d\n", lcm(n, m));
    return 0;
}
