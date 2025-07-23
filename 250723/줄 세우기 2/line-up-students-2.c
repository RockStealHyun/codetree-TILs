#include <stdio.h>

typedef struct {
    int h, w;   // height, weight
    int no;     // input order (1-based)
} Stu;

int main(void) {
    int N;
    Stu a[1000], t;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a[i].h, &a[i].w);
        a[i].no = i + 1;
    }

    // height ↑, if same height -> weight ↓
    for (int i = 0; i < N - 1; i++)
        for (int j = 0; j < N - 1 - i; j++)
            if (a[j].h > a[j+1].h ||
               (a[j].h == a[j+1].h && a[j].w < a[j+1].w)) {
                t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }

    for (int i = 0; i < N; i++)
        printf("%d %d %d\n", a[i].h, a[i].w, a[i].no);

    return 0;
}
