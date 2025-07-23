#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);

    if (N == 0){          // 예외 처리
        printf("0\n");
        return 0;
    }

    int bit[32], i = 0;   // 100000 < 2^17, 32면 충분
    while (N > 0){
        bit[i++] = N % 2; // 나머지 저장
        N /= 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bit[j]);
    printf("\n");

    return 0;
}
