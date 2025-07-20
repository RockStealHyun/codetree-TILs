#include <stdio.h>

// N×M 크기의 직사각형을 1로 채워 출력하는 함수
void printRectangle(int N, int M) {
    // 행을 한 줄씩 반복
    for (int i = 0; i < N; i++) {
        // 한 줄에 M개의 '1'을 출력
        for (int j = 0; j < M; j++) {
            printf("1");
        }
        // 한 줄 출력이 끝나면 줄바꿈
        printf("\n");
    }
}

int main(void) {
    int N, M;

    // 사용자로부터 두 정수 입력받기
    scanf("%d %d", &N, &M);

    // 함수 호출해서 직사각형 출력
    printRectangle(N, M);

    return 0;
}
