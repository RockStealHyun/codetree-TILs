#include <stdio.h>

int main() {
    int matrix[3][3]; // 3x3 배열
    int i, j;

    // 배열 입력 받기
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3배 곱해서 출력하기
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j] * 3);
        }
        printf("\n"); // 한 줄 출력 후 줄 바꿈
    }

    return 0;
}
