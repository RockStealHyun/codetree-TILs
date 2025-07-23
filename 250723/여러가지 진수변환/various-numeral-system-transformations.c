#include <stdio.h>

int main(void){
    int N, B;
    scanf("%d %d", &N, &B);   // B는 4 또는 8

    if (N == 0){              // 예외 처리
        printf("0\n");
        return 0;
    }

    char out[40];
    int i = 0;
    while (N > 0){
        out[i++] = (N % B) + '0';
        N /= B;
    }

    for (int j = i - 1; j >= 0; j--) putchar(out[j]);
    putchar('\n');
    return 0;
}
