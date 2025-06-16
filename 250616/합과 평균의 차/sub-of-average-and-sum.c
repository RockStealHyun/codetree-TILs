#include <stdio.h>

int main() {
    // 세 개의 수
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int total = a+b+c;
    printf("%d\n", a+b+c);  // 출력: 합: 60


    int average = total / 3;
    printf("%d\n", average); // 출력: 평균: 20.00
    printf("%d", total - average); // 출력: 평균: 20.00

    return 0;
}

