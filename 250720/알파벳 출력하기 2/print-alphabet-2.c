#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char ch = 'A';  // 알파벳 시작
    for (int i = 0; i < N; i++) {
        printf("%c", ch);

        if ((i + 1) % 3 == 0 || i == N - 1) {
            printf("\n");
        } else {
            printf(" ");
        }

        ch++;
        if (ch > 'Z') {
            ch = 'A';
        }
    }

    return 0;
}
