#include <stdio.h>

void print_num(int n) {          // 한 번의 재귀로 내려갔다가 올라오기
    printf("%d ", n);            // 내려가기 출력
    if (n == 1) return;
    print_num(n - 1);            // 더 작은 수로 재귀
    printf("%d ", n);            // 올라오면서 다시 출력
}

int main(void) {
    int N;
    scanf("%d", &N);
    print_num(N);
    return 0;
}
