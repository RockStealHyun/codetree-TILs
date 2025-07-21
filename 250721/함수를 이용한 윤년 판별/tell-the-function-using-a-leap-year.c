#include <stdio.h>

// isLeap 함수: y가 윤년이면 1(true), 아니면 0(false) 반환
int isLeap(int y) {
    // 4로 나누어 떨어지면서 100으로 나누어 떨어지지 않거나,
    // 400으로 나누어 떨어지면 윤년입니다.
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int y;
    // 연도 입력 받기
    scanf("%d", &y);

    // 함수 호출 결과에 따라 true/false 출력
    if (isLeap(y)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
