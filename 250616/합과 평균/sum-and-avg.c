#include <stdio.h>

int main() {
    // 세 개의 수
    int A,B;
    scanf("%d", &A);
    scanf("%d", &B);

    int total = A + B;
    printf("%d ", A+B);  // 출력: 합: 60

    double average = (double)total / 2;
    printf("%.1lf\n", average); // 출력: 평균: 20.00

    return 0;
}

