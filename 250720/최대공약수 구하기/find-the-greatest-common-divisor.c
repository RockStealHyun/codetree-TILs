#include <stdio.h>

// N×N 크기의 숫자 사각형을 출력하는 함수
// 1부터 시작해서 9 다음에는 다시 1로 돌아갑니다.
void printSquare(int N) {
    for (int i = 0; i < N; i++) {         // 각 행을 반복
        for (int j = 0; j < N; j++) {     // 한 행 안에서 N개의 숫자를 출력
            int idx = i * N + j;          // 0부터 시작하는 인덱스
            int num = (idx % 9) + 1;      // 1~9 반복하도록 계산
            printf("%d ", num);           // 숫자 출력 뒤에 공백
        }
        printf("\n");                     // 한 행을 다 출력하면 줄바꿈
    }
}

int main(void) {
    int N;
    // 정수 하나 입력받기
    scanf("%d", &N);
    // 함수를 호출해 사각형 출력
    printSquare(N);
    return 0;
}
