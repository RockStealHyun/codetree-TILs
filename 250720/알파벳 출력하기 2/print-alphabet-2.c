#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char ch = 'A';
    for (int i = 0; i < N; i++) {
        // 1) i칸 들여쓰기
        for (int s = 0; s < i; s++) {
            putchar(' ');
        }
        // 2) N-i개 알파벳 출력 (사이사이에 한 칸 공백)
        for (int j = 0; j < N - i; j++) {
            if (j > 0) putchar(' ');
            putchar(ch);
            ch++;
            if (ch > 'Z') ch = 'A';
        }
        putchar('\n');
    }

    return 0;
}
