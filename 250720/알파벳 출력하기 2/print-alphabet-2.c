#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    char ch = 'A';
    for (int i = 0; i < N; i++) {
        // 2*i칸 들여쓰기 (오른쪽 정렬)
        for (int s = 0; s < i * 2; s++) {
            putchar(' ');
        }
        // N–i글자 출력 (글자 사이에 한 칸 공백)
        for (int j = 0; j < N - i; j++) {
            putchar(ch);
            if (j < N - i - 1) putchar(' ');
            ch++;
            if (ch > 'Z') ch = 'A';
        }
        putchar('\n');
    }
    return 0;
}
