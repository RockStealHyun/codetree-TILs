#include <stdio.h>

int main() {
    int n;  // 입력받을 수의 개수
    scanf("%d", &n);  // n 입력 받기
    
    int sum = 0;  // 모든 수의 합을 저장할 변수
    int temp;

    // n개의 수 입력받기
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        sum += temp;  // 입력받은 수를 계속 더함
    }

    // 좌측으로 한 칸 미는 작업
    printf("%d0\n", sum / 10);  // 합계를 10으로 나눈 값을 출력하고 마지막에 0을 붙임

    return 0;
}