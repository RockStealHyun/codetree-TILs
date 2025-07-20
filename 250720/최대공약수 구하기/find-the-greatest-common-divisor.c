#include <stdio.h>

// 두 정수 a, b의 최대공약수를 계산해 돌려주는 함수
int gcd(int a, int b) {
    // b가 0이 될 때까지 나머지를 이용해 반복
    while (b != 0) {
        int temp = a % b;  // a를 b로 나눈 나머지 저장
        a = b;             // a에 이전 b 값을 넣고
        b = temp;          // b에 나머지를 넣어서 다음 반복 준비
    }
    return a;  // b가 0이 되면 a가 최대공약수
}

int main(void) {
    int n, m;
    // 두 정수를 입력받음
    scanf("%d %d", &n, &m);

    // 함수 호출로 최대공약수 계산
    int result = gcd(n, m);

    // 결과 출력
    printf("%d\n", result);

    return 0;
}
