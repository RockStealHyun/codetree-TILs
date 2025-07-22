#include <stdio.h>

void f(int n){
    printf("%d ", n);          // 내려가며 출력
    if (n == 1){               // 바닥에서 1 한 번 더
        printf("1 ");
        return;
    }
    f(n - 1);                  // 재귀
    printf("%d ", n);          // 올라오며 출력
}

int main(void){
    int N;
    scanf("%d", &N);
    f(N);
    return 0;
}
