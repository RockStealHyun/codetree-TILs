#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int current_num = 1;  // 출력할 숫자를 1로 시작
    
    for (int i = 1; i <= n; i++) {
        // 홀수 행(i)이면 1씩 증가, 짝수 행이면 2씩 증가
        int inc = (i % 2 == 1) ? 1 : 2;

        // 한 줄에 n개의 숫자 출력
        for (int j = 0; j < n; j++) {
            printf("%d", current_num);
            if (j < n - 1) {
                printf(" ");
            }
            current_num += inc;
        }
        printf("\n");

        // 다음 행을 위한 시작 숫자 조정
        // 다음 행(i+1)이 홀수면 +1, 짝수면 +2
        if (i < n) {
            int next_inc = ((i + 1) % 2 == 1) ? 1 : 2;
            current_num += (next_inc - inc);
        }
    }

    return 0;
}
