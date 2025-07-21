#include <stdio.h>

// min3 함수: 세 정수 a, b, c 중에서 가장 작은 값을 찾아 반환합니다.
int min3(int a, int b, int c) {
    int min = a;        // 일단 a를 최소값이라고 가정
    if (b < min) {      // b가 더 작으면
        min = b;        // 최소값을 b로 바꿉니다
    }
    if (c < min) {      // c가 더 작으면
        min = c;        // 최소값을 c로 바꿉니다
    }
    return min;         // 최종 최소값 반환
}

int main() {
    int a, b, c;
    // 표준 입력으로 세 정수를 입력받습니다.
    scanf("%d %d %d", &a, &b, &c);

    // min3 함수를 호출하여 최소값을 구합니다.
    int m = min3(a, b, c);

    // 결과(최소값)를 출력합니다.
    printf("%d\n", m);

    return 0;
}
