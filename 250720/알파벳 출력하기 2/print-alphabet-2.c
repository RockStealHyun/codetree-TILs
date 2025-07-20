#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char ch = 'A';  // 시작 문자

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", ch);
            ch++;
            if (ch > 'Z') {
                ch = 'A';  // Z 다음엔 다시 A로
            }
        }
        printf("\n");  // 한 줄 끝
    }

    return 0;
}
