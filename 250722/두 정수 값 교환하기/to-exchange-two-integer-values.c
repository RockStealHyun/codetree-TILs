#include <stdio.h>

void swap(int *a, int *b) {   // a, b의 값을 바꿔줌
    int t = *a;
    *a = *b;
    *b = t;
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);   // 예: 13 8
    swap(&n, &m);             // 함수 호출 후 값이 바뀜
    printf("%d %d", n, m);    // 8 13
    return 0;
}
