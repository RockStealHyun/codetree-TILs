#include <stdio.h>

typedef struct {
    int h, w;   // 키, 몸무게
    int no;     // 입력 순서(번호)
} Stu;

int main(void) {
    int N;
    Stu a[1000], t;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a[i].h, &a[i].w);
        a[i].no = i + 1;           // 번호는 입력 순서
    }

    // 정렬: 키↓, (같으면) 몸무게↓, (둘 다 같으면) 번호↑
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j].h < a[j+1].h ||
               (a[j].h == a[j+1].h && a[j].w < a[j+1].w) ||
               (a[j].h == a[j+1].h && a[j].w == a[j+1].w && a[j].no > a[j+1].no)) {
                t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }
        }

    for (int i = 0; i < N; i++)
        printf("%d %d %d\n", a[i].h, a[i].w, a[i].no);

    return 0;
}
